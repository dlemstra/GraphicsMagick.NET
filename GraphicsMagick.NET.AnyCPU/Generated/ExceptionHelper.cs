//=================================================================================================
// Copyright 2016 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
using System;

namespace GraphicsMagick
{
	public static class ExceptionHelper
	{
		public static Exception Create(Exception exception)
		{
			if (ReferenceEquals(exception, null))
				return null;
			switch(exception.GetType().Name)
			{
				case "MagickException":
					return new MagickException(exception);
				case "MagickWarningException":
					return new MagickWarningException(exception);
				case "MagickBlobWarningException":
					return new MagickBlobWarningException(exception);
				case "MagickCacheWarningException":
					return new MagickCacheWarningException(exception);
				case "MagickCoderWarningException":
					return new MagickCoderWarningException(exception);
				case "MagickConfigureWarningException":
					return new MagickConfigureWarningException(exception);
				case "MagickUndefinedWarningException":
					return new MagickUndefinedWarningException(exception);
				case "MagickCorruptImageWarningException":
					return new MagickCorruptImageWarningException(exception);
				case "MagickDelegateWarningException":
					return new MagickDelegateWarningException(exception);
				case "MagickDrawWarningException":
					return new MagickDrawWarningException(exception);
				case "MagickFileOpenWarningException":
					return new MagickFileOpenWarningException(exception);
				case "MagickImageWarningException":
					return new MagickImageWarningException(exception);
				case "MagickMissingDelegateWarningException":
					return new MagickMissingDelegateWarningException(exception);
				case "MagickModuleWarningException":
					return new MagickModuleWarningException(exception);
				case "MagickOptionWarningException":
					return new MagickOptionWarningException(exception);
				case "MagickRegistryWarningException":
					return new MagickRegistryWarningException(exception);
				case "MagickResourceLimitWarningException":
					return new MagickResourceLimitWarningException(exception);
				case "MagickStreamWarningException":
					return new MagickStreamWarningException(exception);
				case "MagickTypeWarningException":
					return new MagickTypeWarningException(exception);
				case "MagickErrorException":
					return new MagickErrorException(exception);
				case "MagickBlobErrorException":
					return new MagickBlobErrorException(exception);
				case "MagickCacheErrorException":
					return new MagickCacheErrorException(exception);
				case "MagickCoderErrorException":
					return new MagickCoderErrorException(exception);
				case "MagickConfigureErrorException":
					return new MagickConfigureErrorException(exception);
				case "MagickUndefinedErrorException":
					return new MagickUndefinedErrorException(exception);
				case "MagickCorruptImageErrorException":
					return new MagickCorruptImageErrorException(exception);
				case "MagickDelegateErrorException":
					return new MagickDelegateErrorException(exception);
				case "MagickDrawErrorException":
					return new MagickDrawErrorException(exception);
				case "MagickFileOpenErrorException":
					return new MagickFileOpenErrorException(exception);
				case "MagickImageErrorException":
					return new MagickImageErrorException(exception);
				case "MagickMissingDelegateErrorException":
					return new MagickMissingDelegateErrorException(exception);
				case "MagickModuleErrorException":
					return new MagickModuleErrorException(exception);
				case "MagickOptionErrorException":
					return new MagickOptionErrorException(exception);
				case "MagickRegistryErrorException":
					return new MagickRegistryErrorException(exception);
				case "MagickResourceLimitErrorException":
					return new MagickResourceLimitErrorException(exception);
				case "MagickStreamErrorException":
					return new MagickStreamErrorException(exception);
				case "MagickTypeErrorException":
					return new MagickTypeErrorException(exception);
				default:
					return exception;
			}
		}
	}
	public class MagickException : Exception{
		internal MagickException(Exception exception)
			: base(exception.Message, exception)
		{
		}
	}
	public class MagickWarningException : MagickException{
		internal MagickWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickBlobWarningException : MagickWarningException{
		internal MagickBlobWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCacheWarningException : MagickWarningException{
		internal MagickCacheWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCoderWarningException : MagickWarningException{
		internal MagickCoderWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickConfigureWarningException : MagickWarningException{
		internal MagickConfigureWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickUndefinedWarningException : MagickWarningException{
		internal MagickUndefinedWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCorruptImageWarningException : MagickWarningException{
		internal MagickCorruptImageWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickDelegateWarningException : MagickWarningException{
		internal MagickDelegateWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickDrawWarningException : MagickWarningException{
		internal MagickDrawWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickFileOpenWarningException : MagickWarningException{
		internal MagickFileOpenWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickImageWarningException : MagickWarningException{
		internal MagickImageWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickMissingDelegateWarningException : MagickWarningException{
		internal MagickMissingDelegateWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickModuleWarningException : MagickWarningException{
		internal MagickModuleWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickOptionWarningException : MagickWarningException{
		internal MagickOptionWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickRegistryWarningException : MagickWarningException{
		internal MagickRegistryWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickResourceLimitWarningException : MagickWarningException{
		internal MagickResourceLimitWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickStreamWarningException : MagickWarningException{
		internal MagickStreamWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickTypeWarningException : MagickWarningException{
		internal MagickTypeWarningException(Exception exception)
			: base(exception)
		{
		}
	}
	public class MagickErrorException : MagickException{
		internal MagickErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickBlobErrorException : MagickErrorException{
		internal MagickBlobErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCacheErrorException : MagickErrorException{
		internal MagickCacheErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCoderErrorException : MagickErrorException{
		internal MagickCoderErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickConfigureErrorException : MagickErrorException{
		internal MagickConfigureErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickUndefinedErrorException : MagickErrorException{
		internal MagickUndefinedErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickCorruptImageErrorException : MagickErrorException{
		internal MagickCorruptImageErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickDelegateErrorException : MagickErrorException{
		internal MagickDelegateErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickDrawErrorException : MagickErrorException{
		internal MagickDrawErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickFileOpenErrorException : MagickErrorException{
		internal MagickFileOpenErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickImageErrorException : MagickErrorException{
		internal MagickImageErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickMissingDelegateErrorException : MagickErrorException{
		internal MagickMissingDelegateErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickModuleErrorException : MagickErrorException{
		internal MagickModuleErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickOptionErrorException : MagickErrorException{
		internal MagickOptionErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickRegistryErrorException : MagickErrorException{
		internal MagickRegistryErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickResourceLimitErrorException : MagickErrorException{
		internal MagickResourceLimitErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickStreamErrorException : MagickErrorException{
		internal MagickStreamErrorException(Exception exception)
			: base(exception)
		{
		}
	}
	public sealed class MagickTypeErrorException : MagickErrorException{
		internal MagickTypeErrorException(Exception exception)
			: base(exception)
		{
		}
	}
}
