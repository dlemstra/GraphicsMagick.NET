#==================================================================================================
function AddFileElement($xml, $src, $target)
{
  $files = $xml.package.files

  if (!($files))
  {
    $files = $xml.CreateElement("files", $xml.DocumentElement.NamespaceURI)
    [void]$xml.package.AppendChild($files)
  }

 $file = $xml.CreateElement("file", $xml.DocumentElement.NamespaceURI)

  $srcAtt = $xml.CreateAttribute("src")
  $srcAtt.Value = $src
  [void]$file.Attributes.Append($srcAtt)

  $targetAtt = $xml.CreateAttribute("target")
  $targetAtt.Value = $target
  [void]$file.Attributes.Append($targetAtt)

  [void]$files.AppendChild($file)
}
#==================================================================================================
function CheckStrongName($folder, $quantum, $platform, $platformName)
{
  $path = FullPath "$folder\bin\Release$quantum\$platform\GraphicsMagick.NET-$platformName.dll"
  sn -Tp $path
  CheckExitCode "$path does not represent a strongly named assembly"
}
#==================================================================================================
function CreateNuGetPackage($id, $version, $folder, $quantum, $platform, $platformName, $hasNet20)
{
  $path = FullPath "Publish\NuGet\GraphicsMagick.NET.nuspec"
  $xml = [xml](Get-Content $path)

  $gmVersion = [IO.File]::ReadAllText("..\..\GraphicsMagick\Source\Version.txt", [System.Text.Encoding]::Unicode)
  $xml.package.metadata.releaseNotes = "GraphicsMagick.NET linked with GraphicsMagick " + $gmVersion

  if ($hasNet20 -eq $true)
  {
    AddFileElement $xml "..\..\GraphicsMagick.NET.net20\bin\Release$quantum\$platform\GraphicsMagick.NET-$platformName.dll" "lib\net20"
    AddFileElement $xml "..\..\GraphicsMagick.NET.net20\bin\Release$quantum\$platform\GraphicsMagick.NET-$platformName.xml" "lib\net20"
  }
  AddFileElement $xml "..\..\$folder\bin\Release$quantum\$platform\GraphicsMagick.NET-$platformName.dll" "lib\net40-client"
  AddFileElement $xml "..\..\$folder\bin\Release$quantum\$platform\GraphicsMagick.NET-$platformName.xml" "lib\net40-client"

  AddFileElement $xml ("Readme.txt") "Readme.txt"

  $fileName = WriteNuGetPackage $id $xml $version
  return $fileName
}
#==================================================================================================
function SetVersion($content, $startMatch, $endMatch, $version)
{
	$start = $content.IndexOf($startMatch)
	if ($start -eq -1)
	{
		Write-Error "Unable to find startMatch"
		Exit
	}

	$start += $startMatch.Length

	$newContent = $content.Substring(0, $start)
	$newContent += $version

	$start = $content.IndexOf($endMatch, $start)
	if ($start -eq -1)
	{
		Write-Error "Unable to find endMatch"
		Exit
	}

	$newContent += $content.Substring($start)
	return $newContent
}
#==================================================================================================
function UpdateAssemblyInfo($version)
{
  WriteAssemblyInfo "GraphicsMagick.NET\AssemblyInfo.cpp" $version
  WriteAssemblyInfo "GraphicsMagick.NET.AnyCPU\Properties\AssemblyInfo.cs" $version
  WriteAssemblyInfo "GraphicsMagick.NET.Web\Properties\AssemblyInfo.cs" $version
}
#==================================================================================================
function UpdateResourceFile($name, $quantum, $platform, $version)
{
  $fileName = FullPath "$($name)\Resources\Release$($quantum)\$($platform)\GraphicsMagick.NET.rc"

  $content = [IO.File]::ReadAllText($fileName, [System.Text.Encoding]::Unicode)
  $content = SetVersion $content "FILEVERSION " `r $version.Replace('.', ',')
  $content = SetVersion $content "PRODUCTVERSION " `r $version.Replace('.', ',')
  $content = SetVersion $content "`"FileVersion`", `""  "`"" $version
  $content = SetVersion $content "`"ProductVersion`", `"" "`"" $version

  [IO.File]::WriteAllText($fileName, $content, [System.Text.Encoding]::Unicode)
}
#==================================================================================================
function WriteAssemblyInfo($fileName, $version)
{
  $path = FullPath $fileName
  $content = [IO.File]::ReadAllText($path, [System.Text.Encoding]::Default)
  $content = SetVersion $content "AssemblyFileVersion(`"" "`"" $version
  [IO.File]::WriteAllText($path, $content, [System.Text.Encoding]::Default)
}
#==================================================================================================
function WriteNuGetPackage($id, $xml, $version)
{
  $xml.package.metadata.id = $id
  $xml.package.metadata.title = $id
  $xml.package.metadata.version = $version

  $dir = FullPath "Publish\NuGet"
  $nuspecFile = "$dir\$id.nuspec"
  if (Test-Path $nuspecFile)
  {
    Remove-Item $nuspecFile
  }

  $xml.Save($nuspecFile)

  .\Tools\Programs\NuGet.exe pack $nuspecFile -NoPackageAnalysis -OutputDirectory $dir
  CheckExitCode "Failed to create NuGet package"

  Remove-Item $nuspecFile
  return "$dir\$id.$version.nupkg"
}
#==================================================================================================