Breaking changes.

GraphicsMagick.NET 1.3.20.3:
  - Renamed MagickImage.GetOption to GetDefine.
  - Removed ReadWarning property and the Read methods no longer return a WarningException. The only way to
    get warnings is with the Warning event of MagickImage.
  - Removed MagickImage.IsMonochrome and added new UseMonochrome property to MagickReadSettings.

GraphicsMagick.NET 1.3.19.2:
  - Changed arguments for the Map method of MagickImage.
