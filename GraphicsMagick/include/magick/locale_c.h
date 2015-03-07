#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 541

#define MGK_BlobErrorUnableToCreateBlob 1
#define MGK_BlobErrorUnableToOpenFile 2
#define MGK_BlobErrorUnableToReadFile 3
#define MGK_BlobErrorUnableToReadToOffset 4
#define MGK_BlobErrorUnableToSeekToOffset 5
#define MGK_BlobErrorUnableToWriteBlob 6
#define MGK_BlobErrorUnrecognizedImageFormat 7
#define MGK_BlobFatalErrorDefault 8
#define MGK_BlobWarningDefault 9
#define MGK_CacheErrorInconsistentPersistentCacheDepth 10
#define MGK_CacheErrorPixelCacheIsNotOpen 11
#define MGK_CacheErrorUnableToAllocateCacheView 12
#define MGK_CacheErrorUnableToCloneCache 13
#define MGK_CacheErrorUnableToExtendCache 14
#define MGK_CacheErrorUnableToGetCacheNexus 15
#define MGK_CacheErrorUnableToGetPixelsFromCache 16
#define MGK_CacheErrorUnableToOpenCache 17
#define MGK_CacheErrorUnableToPeristPixelCache 18
#define MGK_CacheErrorUnableToReadPixelCache 19
#define MGK_CacheErrorUnableToSyncCache 20
#define MGK_CacheFatalErrorDiskAllocationFailed 21
#define MGK_CacheFatalErrorUnableToExtendPixelCache 22
#define MGK_CacheWarningDefault 23
#define MGK_CoderErrorColormapTooLarge 24
#define MGK_CoderErrorColormapTypeNotSupported 25
#define MGK_CoderErrorColorspaceModelIsNotSupported 26
#define MGK_CoderErrorColorTypeNotSupported 27
#define MGK_CoderErrorCompressionNotValid 28
#define MGK_CoderErrorDataEncodingSchemeIsNotSupported 29
#define MGK_CoderErrorDataStorageTypeIsNotSupported 30
#define MGK_CoderErrorDeltaPNGNotSupported 31
#define MGK_CoderErrorEncryptedWPGImageFileNotSupported 32
#define MGK_CoderErrorFractalCompressionNotSupported 33
#define MGK_CoderErrorImageColumnOrRowSizeIsNotSupported 34
#define MGK_CoderErrorImageDoesNotHaveAMatteChannel 35
#define MGK_CoderErrorImageIsNotTiled 36
#define MGK_CoderErrorImageTypeNotSupported 37
#define MGK_CoderErrorIncompatibleSizeOfDouble 38
#define MGK_CoderErrorIrregularChannelGeometryNotSupported 39
#define MGK_CoderErrorJNGCompressionNotSupported 40
#define MGK_CoderErrorJPEGCompressionNotSupported 41
#define MGK_CoderErrorJPEGEmbeddingFailed 42
#define MGK_CoderErrorLocationTypeIsNotSupported 43
#define MGK_CoderErrorMapStorageTypeIsNotSupported 44
#define MGK_CoderErrorMSBByteOrderNotSupported 45
#define MGK_CoderErrorMultidimensionalMatricesAreNotSupported 46
#define MGK_CoderErrorMultipleRecordListNotSupported 47
#define MGK_CoderErrorNo8BIMDataIsAvailable 48
#define MGK_CoderErrorNoAPP1DataIsAvailable 49
#define MGK_CoderErrorNoBitmapOnClipboard 50
#define MGK_CoderErrorNoColorProfileAvailable 51
#define MGK_CoderErrorNoDataReturned 52
#define MGK_CoderErrorNoImageVectorGraphics 53
#define MGK_CoderErrorNoIPTCInfoWasFound 54
#define MGK_CoderErrorNoIPTCProfileAvailable 55
#define MGK_CoderErrorNumberOfImagesIsNotSupported 56
#define MGK_CoderErrorOnlyContinuousTonePictureSupported 57
#define MGK_CoderErrorOnlyLevelZerofilesSupported 58
#define MGK_CoderErrorPNGCompressionNotSupported 59
#define MGK_CoderErrorPNGLibraryTooOld 60
#define MGK_CoderErrorRLECompressionNotSupported 61
#define MGK_CoderErrorSubsamplingRequiresEvenWidth 62
#define MGK_CoderErrorUnableToCopyProfile 63
#define MGK_CoderErrorUnableToCreateADC 64
#define MGK_CoderErrorUnableToCreateBitmap 65
#define MGK_CoderErrorUnableToDecompressImage 66
#define MGK_CoderErrorUnableToInitializeFPXLibrary 67
#define MGK_CoderErrorUnableToOpenBlob 68
#define MGK_CoderErrorUnableToReadAspectRatio 69
#define MGK_CoderErrorUnableToReadCIELABImages 70
#define MGK_CoderErrorUnableToReadSummaryInfo 71
#define MGK_CoderErrorUnableToSetAffineMatrix 72
#define MGK_CoderErrorUnableToSetAspectRatio 73
#define MGK_CoderErrorUnableToSetColorTwist 74
#define MGK_CoderErrorUnableToSetContrast 75
#define MGK_CoderErrorUnableToSetFilteringValue 76
#define MGK_CoderErrorUnableToSetImageComments 77
#define MGK_CoderErrorUnableToSetImageTitle 78
#define MGK_CoderErrorUnableToSetJPEGLevel 79
#define MGK_CoderErrorUnableToSetRegionOfInterest 80
#define MGK_CoderErrorUnableToSetSummaryInfo 81
#define MGK_CoderErrorUnableToTranslateText 82
#define MGK_CoderErrorUnableToWriteMPEGParameters 83
#define MGK_CoderErrorUnableToZipCompressImage 84
#define MGK_CoderErrorUnsupportedCellTypeInTheMatrix 85
#define MGK_CoderErrorWebPDecodingFailedUserAbort 86
#define MGK_CoderErrorWebPEncodingFailed 87
#define MGK_CoderErrorWebPEncodingFailedBadDimension 88
#define MGK_CoderErrorWebPEncodingFailedBadWrite 89
#define MGK_CoderErrorWebPEncodingFailedBitstreamOutOfMemory 90
#define MGK_CoderErrorWebPEncodingFailedFileTooBig 91
#define MGK_CoderErrorWebPEncodingFailedInvalidConfiguration 92
#define MGK_CoderErrorWebPEncodingFailedNULLParameter 93
#define MGK_CoderErrorWebPEncodingFailedOutOfMemory 94
#define MGK_CoderErrorWebPEncodingFailedPartition0Overflow 95
#define MGK_CoderErrorWebPEncodingFailedPartitionOverflow 96
#define MGK_CoderErrorWebPEncodingFailedUserAbort 97
#define MGK_CoderErrorWebPInvalidConfiguration 98
#define MGK_CoderErrorWebPInvalidParameter 99
#define MGK_CoderErrorZipCompressionNotSupported 100
#define MGK_CoderFatalErrorDefault 101
#define MGK_CoderWarningLosslessToLossyJPEGConversion 102
#define MGK_ConfigureErrorIncludeElementNestedTooDeeply 103
#define MGK_ConfigureErrorRegistryKeyLookupFailed 104
#define MGK_ConfigureErrorStringTokenLengthExceeded 105
#define MGK_ConfigureErrorUnableToAccessConfigureFile 106
#define MGK_ConfigureErrorUnableToAccessFontFile 107
#define MGK_ConfigureErrorUnableToAccessLogFile 108
#define MGK_ConfigureErrorUnableToAccessModuleFile 109
#define MGK_ConfigureFatalErrorDefault 110
#define MGK_ConfigureFatalErrorUnableToChangeToWorkingDirectory 111
#define MGK_ConfigureFatalErrorUnableToGetCurrentDirectory 112
#define MGK_ConfigureFatalErrorUnableToRestoreCurrentDirectory 113
#define MGK_ConfigureWarningDefault 114
#define MGK_CorruptImageErrorAnErrorHasOccurredReadingFromFile 115
#define MGK_CorruptImageErrorAnErrorHasOccurredWritingToFile 116
#define MGK_CorruptImageErrorColormapExceeds256Colors 117
#define MGK_CorruptImageErrorCompressionNotValid 118
#define MGK_CorruptImageErrorCorruptImage 119
#define MGK_CorruptImageErrorImageFileDoesNotContainAnyImageData 120
#define MGK_CorruptImageErrorImageTypeNotSupported 121
#define MGK_CorruptImageErrorImproperImageHeader 122
#define MGK_CorruptImageErrorInsufficientImageDataInFile 123
#define MGK_CorruptImageErrorInvalidColormapIndex 124
#define MGK_CorruptImageErrorInvalidFileFormatVersion 125
#define MGK_CorruptImageErrorLengthAndFilesizeDoNotMatch 126
#define MGK_CorruptImageErrorMissingImageChannel 127
#define MGK_CorruptImageErrorNegativeOrZeroImageSize 128
#define MGK_CorruptImageErrorNonOS2HeaderSizeError 129
#define MGK_CorruptImageErrorNotEnoughTiles 130
#define MGK_CorruptImageErrorStaticPlanesValueNotEqualToOne 131
#define MGK_CorruptImageErrorSubsamplingRequiresEvenWidth 132
#define MGK_CorruptImageErrorTooMuchImageDataInFile 133
#define MGK_CorruptImageErrorUnableToReadColormapFromDumpFile 134
#define MGK_CorruptImageErrorUnableToReadColorProfile 135
#define MGK_CorruptImageErrorUnableToReadExtensionBlock 136
#define MGK_CorruptImageErrorUnableToReadGenericProfile 137
#define MGK_CorruptImageErrorUnableToReadImageData 138
#define MGK_CorruptImageErrorUnableToReadImageHeader 139
#define MGK_CorruptImageErrorUnableToReadIPTCProfile 140
#define MGK_CorruptImageErrorUnableToReadPixmapFromDumpFile 141
#define MGK_CorruptImageErrorUnableToReadSubImageData 142
#define MGK_CorruptImageErrorUnableToReadVIDImage 143
#define MGK_CorruptImageErrorUnableToReadWindowNameFromDumpFile 144
#define MGK_CorruptImageErrorUnableToRunlengthDecodeImage 145
#define MGK_CorruptImageErrorUnableToUncompressImage 146
#define MGK_CorruptImageErrorUnexpectedEndOfFile 147
#define MGK_CorruptImageErrorUnexpectedSamplingFactor 148
#define MGK_CorruptImageErrorUnknownPatternType 149
#define MGK_CorruptImageErrorUnrecognizedBitsPerPixel 150
#define MGK_CorruptImageErrorUnrecognizedImageCompression 151
#define MGK_CorruptImageErrorUnrecognizedNumberOfColors 152
#define MGK_CorruptImageErrorUnrecognizedXWDHeader 153
#define MGK_CorruptImageFatalErrorUnableToPersistKey 154
#define MGK_CorruptImageWarningCompressionNotValid 155
#define MGK_CorruptImageWarningImproperImageHeader 156
#define MGK_CorruptImageWarningLengthAndFilesizeDoNotMatch 157
#define MGK_CorruptImageWarningNegativeOrZeroImageSize 158
#define MGK_CorruptImageWarningNonOS2HeaderSizeError 159
#define MGK_CorruptImageWarningSkipToSyncByte 160
#define MGK_CorruptImageWarningStaticPlanesValueNotEqualToOne 161
#define MGK_CorruptImageWarningUnrecognizedBitsPerPixel 162
#define MGK_CorruptImageWarningUnrecognizedImageCompression 163
#define MGK_DelegateErrorDelegateFailed 164
#define MGK_DelegateErrorFailedToAllocateArgumentList 165
#define MGK_DelegateErrorFailedToAllocateGhostscriptInterpreter 166
#define MGK_DelegateErrorFailedToComputeOutputSize 167
#define MGK_DelegateErrorFailedToFindGhostscript 168
#define MGK_DelegateErrorFailedToRenderFile 169
#define MGK_DelegateErrorFailedToScanFile 170
#define MGK_DelegateErrorNoTagFound 171
#define MGK_DelegateErrorPostscriptDelegateFailed 172
#define MGK_DelegateErrorUnableToCreateImage 173
#define MGK_DelegateErrorUnableToCreateImageComponent 174
#define MGK_DelegateErrorUnableToDecodeImageFile 175
#define MGK_DelegateErrorUnableToEncodeImageFile 176
#define MGK_DelegateErrorUnableToInitializeFPXLibrary 177
#define MGK_DelegateErrorUnableToInitializeWMFLibrary 178
#define MGK_DelegateErrorUnableToManageJP2Stream 179
#define MGK_DelegateErrorUnableToWriteSVGFormat 180
#define MGK_DelegateErrorWebPABIMismatch 181
#define MGK_DelegateFatalErrorDefault 182
#define MGK_DelegateWarningDefault 183
#define MGK_DrawErrorAlreadyPushingPatternDefinition 184
#define MGK_DrawErrorNonconformingDrawingPrimitiveDefinition 185
#define MGK_DrawErrorTooManyCoordinates 186
#define MGK_DrawErrorUnableToPrint 187
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 188
#define MGK_DrawFatalErrorDefault 189
#define MGK_DrawWarningNotARelativeURL 190
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 191
#define MGK_DrawWarningURLNotFound 192
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 193
#define MGK_FileOpenErrorUnableToOpenFile 194
#define MGK_FileOpenErrorUnableToWriteFile 195
#define MGK_FileOpenFatalErrorDefault 196
#define MGK_FileOpenWarningDefault 197
#define MGK_ImageErrorAngleIsDiscontinuous 198
#define MGK_ImageErrorColorspaceColorProfileMismatch 199
#define MGK_ImageErrorImageColorspaceDiffers 200
#define MGK_ImageErrorImageColorspaceMismatch 201
#define MGK_ImageErrorImageDifferenceExceedsLimit 202
#define MGK_ImageErrorImageDoesNotContainResolution 203
#define MGK_ImageErrorImageOpacityDiffers 204
#define MGK_ImageErrorImageSequenceIsRequired 205
#define MGK_ImageErrorImageSizeDiffers 206
#define MGK_ImageErrorInvalidColormapIndex 207
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 208
#define MGK_ImageErrorNoImagesWereFound 209
#define MGK_ImageErrorNoImagesWereLoaded 210
#define MGK_ImageErrorNoLocaleImageAttribute 211
#define MGK_ImageErrorTooManyClusters 212
#define MGK_ImageErrorUnableToAppendImage 213
#define MGK_ImageErrorUnableToAssignProfile 214
#define MGK_ImageErrorUnableToAverageImage 215
#define MGK_ImageErrorUnableToCoalesceImage 216
#define MGK_ImageErrorUnableToCompareImages 217
#define MGK_ImageErrorUnableToCreateImageMosaic 218
#define MGK_ImageErrorUnableToCreateStereoImage 219
#define MGK_ImageErrorUnableToDeconstructImageSequence 220
#define MGK_ImageErrorUnableToFlattenImage 221
#define MGK_ImageErrorUnableToGetClipMask 222
#define MGK_ImageErrorUnableToHandleImageChannel 223
#define MGK_ImageErrorUnableToResizeImage 224
#define MGK_ImageErrorUnableToSegmentImage 225
#define MGK_ImageErrorUnableToSetClipMask 226
#define MGK_ImageErrorUnableToShearImage 227
#define MGK_ImageErrorWidthOrHeightExceedsLimit 228
#define MGK_ImageFatalErrorUnableToPersistKey 229
#define MGK_ImageWarningDefault 230
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 231
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 232
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 233
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 234
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 235
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 236
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 237
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 238
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 239
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 240
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 241
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 242
#define MGK_MissingDelegateFatalErrorDefault 243
#define MGK_MissingDelegateWarningDefault 244
#define MGK_ModuleErrorFailedToCloseModule 245
#define MGK_ModuleErrorFailedToFindSymbol 246
#define MGK_ModuleErrorUnableToLoadModule 247
#define MGK_ModuleErrorUnableToRegisterImageFormat 248
#define MGK_ModuleErrorUnrecognizedModule 249
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 250
#define MGK_ModuleWarningDefault 251
#define MGK_MonitorErrorDefault 252
#define MGK_MonitorFatalErrorDefault 253
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 254
#define MGK_MonitorWarningDefault 255
#define MGK_OptionErrorBevelWidthIsNegative 256
#define MGK_OptionErrorColorSeparatedImageRequired 257
#define MGK_OptionErrorFrameIsLessThanImageSize 258
#define MGK_OptionErrorGeometryDimensionsAreZero 259
#define MGK_OptionErrorGeometryDoesNotContainImage 260
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 261
#define MGK_OptionErrorImagesAreNotTheSameSize 262
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 263
#define MGK_OptionErrorImageSmallerThanKernelWidth 264
#define MGK_OptionErrorImageSmallerThanRadius 265
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 266
#define MGK_OptionErrorInputImagesAlreadySpecified 267
#define MGK_OptionErrorInvalidSubimageSpecification 268
#define MGK_OptionErrorKernelRadiusIsTooSmall 269
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 270
#define MGK_OptionErrorMatrixIsNotSquare 271
#define MGK_OptionErrorMatrixOrderOutOfRange 272
#define MGK_OptionErrorMissingAnImageFilename 273
#define MGK_OptionErrorMissingArgument 274
#define MGK_OptionErrorMustSpecifyAnImageName 275
#define MGK_OptionErrorMustSpecifyImageSize 276
#define MGK_OptionErrorNoBlobDefined 277
#define MGK_OptionErrorNoImagesDefined 278
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 279
#define MGK_OptionErrorNoProfileNameWasGiven 280
#define MGK_OptionErrorNullBlobArgument 281
#define MGK_OptionErrorReferenceImageRequired 282
#define MGK_OptionErrorReferenceIsNotMyType 283
#define MGK_OptionErrorRegionAreaExceedsLimit 284
#define MGK_OptionErrorRequestDidNotReturnAnImage 285
#define MGK_OptionErrorSteganoImageRequired 286
#define MGK_OptionErrorStereoImageRequired 287
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 288
#define MGK_OptionErrorUnableToAddOrRemoveProfile 289
#define MGK_OptionErrorUnableToAverageImageSequence 290
#define MGK_OptionErrorUnableToBlurImage 291
#define MGK_OptionErrorUnableToChopImage 292
#define MGK_OptionErrorUnableToColorMatrixImage 293
#define MGK_OptionErrorUnableToConstituteImage 294
#define MGK_OptionErrorUnableToConvolveImage 295
#define MGK_OptionErrorUnableToEdgeImage 296
#define MGK_OptionErrorUnableToEqualizeImage 297
#define MGK_OptionErrorUnableToFilterImage 298
#define MGK_OptionErrorUnableToFormatImageMetadata 299
#define MGK_OptionErrorUnableToFrameImage 300
#define MGK_OptionErrorUnableToOilPaintImage 301
#define MGK_OptionErrorUnableToPaintImage 302
#define MGK_OptionErrorUnableToRaiseImage 303
#define MGK_OptionErrorUnableToSharpenImage 304
#define MGK_OptionErrorUnableToThresholdImage 305
#define MGK_OptionErrorUnableToWaveImage 306
#define MGK_OptionErrorUnrecognizedAttribute 307
#define MGK_OptionErrorUnrecognizedChannelType 308
#define MGK_OptionErrorUnrecognizedColor 309
#define MGK_OptionErrorUnrecognizedColormapType 310
#define MGK_OptionErrorUnrecognizedColorspace 311
#define MGK_OptionErrorUnrecognizedCommand 312
#define MGK_OptionErrorUnrecognizedComposeOperator 313
#define MGK_OptionErrorUnrecognizedDisposeMethod 314
#define MGK_OptionErrorUnrecognizedElement 315
#define MGK_OptionErrorUnrecognizedEndianType 316
#define MGK_OptionErrorUnrecognizedGravityType 317
#define MGK_OptionErrorUnrecognizedHighlightStyle 318
#define MGK_OptionErrorUnrecognizedImageCompression 319
#define MGK_OptionErrorUnrecognizedImageFilter 320
#define MGK_OptionErrorUnrecognizedImageFormat 321
#define MGK_OptionErrorUnrecognizedImageMode 322
#define MGK_OptionErrorUnrecognizedImageType 323
#define MGK_OptionErrorUnrecognizedIntentType 324
#define MGK_OptionErrorUnrecognizedInterlaceType 325
#define MGK_OptionErrorUnrecognizedListType 326
#define MGK_OptionErrorUnrecognizedMetric 327
#define MGK_OptionErrorUnrecognizedModeType 328
#define MGK_OptionErrorUnrecognizedNoiseType 329
#define MGK_OptionErrorUnrecognizedOperator 330
#define MGK_OptionErrorUnrecognizedOption 331
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 332
#define MGK_OptionErrorUnrecognizedPixelMap 333
#define MGK_OptionErrorUnrecognizedPreviewType 334
#define MGK_OptionErrorUnrecognizedResourceType 335
#define MGK_OptionErrorUnrecognizedType 336
#define MGK_OptionErrorUnrecognizedUnitsType 337
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 338
#define MGK_OptionErrorUnsupportedSamplingFactor 339
#define MGK_OptionErrorUsageError 340
#define MGK_OptionFatalErrorInvalidColorspaceType 341
#define MGK_OptionFatalErrorInvalidEndianType 342
#define MGK_OptionFatalErrorInvalidImageType 343
#define MGK_OptionFatalErrorInvalidInterlaceType 344
#define MGK_OptionFatalErrorMissingAnImageFilename 345
#define MGK_OptionFatalErrorMissingArgument 346
#define MGK_OptionFatalErrorNoImagesWereLoaded 347
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 348
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 349
#define MGK_OptionFatalErrorUnableToOpenXServer 350
#define MGK_OptionFatalErrorUnableToPersistKey 351
#define MGK_OptionFatalErrorUnrecognizedColormapType 352
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 353
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 354
#define MGK_OptionFatalErrorUnrecognizedEndianType 355
#define MGK_OptionFatalErrorUnrecognizedFilterType 356
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 357
#define MGK_OptionFatalErrorUnrecognizedImageType 358
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 359
#define MGK_OptionFatalErrorUnrecognizedOption 360
#define MGK_OptionFatalErrorUnrecognizedResourceType 361
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 362
#define MGK_OptionWarningUnrecognizedColor 363
#define MGK_RegistryErrorImageExpected 364
#define MGK_RegistryErrorImageInfoExpected 365
#define MGK_RegistryErrorStructureSizeMismatch 366
#define MGK_RegistryErrorUnableToGetRegistryID 367
#define MGK_RegistryErrorUnableToLocateImage 368
#define MGK_RegistryErrorUnableToSetRegistry 369
#define MGK_RegistryFatalErrorDefault 370
#define MGK_RegistryWarningDefault 371
#define MGK_ResourceLimitErrorCacheResourcesExhausted 372
#define MGK_ResourceLimitErrorImagePixelHeightLimitExceeded 373
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 374
#define MGK_ResourceLimitErrorImagePixelWidthLimitExceeded 375
#define MGK_ResourceLimitErrorMemoryAllocationFailed 376
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 377
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 378
#define MGK_ResourceLimitErrorUnableToAddColorProfile 379
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 380
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 381
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 382
#define MGK_ResourceLimitErrorUnableToAllocateColormap 383
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 384
#define MGK_ResourceLimitErrorUnableToAllocateString 385
#define MGK_ResourceLimitErrorUnableToAnnotateImage 386
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 387
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 388
#define MGK_ResourceLimitErrorUnableToCloneImage 389
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 390
#define MGK_ResourceLimitErrorUnableToConstituteImage 391
#define MGK_ResourceLimitErrorUnableToConvertFont 392
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 393
#define MGK_ResourceLimitErrorUnableToCreateColormap 394
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 395
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 396
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 397
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 398
#define MGK_ResourceLimitErrorUnableToCreateXWindow 399
#define MGK_ResourceLimitErrorUnableToCropImage 400
#define MGK_ResourceLimitErrorUnableToDespeckleImage 401
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 402
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 403
#define MGK_ResourceLimitErrorUnableToDitherImage 404
#define MGK_ResourceLimitErrorUnableToDrawOnImage 405
#define MGK_ResourceLimitErrorUnableToEdgeImage 406
#define MGK_ResourceLimitErrorUnableToEmbossImage 407
#define MGK_ResourceLimitErrorUnableToEnhanceImage 408
#define MGK_ResourceLimitErrorUnableToFloodfillImage 409
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 410
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 411
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 412
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 413
#define MGK_ResourceLimitErrorUnableToLevelImage 414
#define MGK_ResourceLimitErrorUnableToMagnifyImage 415
#define MGK_ResourceLimitErrorUnableToManageColor 416
#define MGK_ResourceLimitErrorUnableToMapImage 417
#define MGK_ResourceLimitErrorUnableToMapImageSequence 418
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 419
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 420
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 421
#define MGK_ResourceLimitErrorUnableToNormalizeImage 422
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 423
#define MGK_ResourceLimitErrorUnableToQuantizeImage 424
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 425
#define MGK_ResourceLimitErrorUnableToReadTextChunk 426
#define MGK_ResourceLimitErrorUnableToReadXImage 427
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 428
#define MGK_ResourceLimitErrorUnableToResizeImage 429
#define MGK_ResourceLimitErrorUnableToRotateImage 430
#define MGK_ResourceLimitErrorUnableToSampleImage 431
#define MGK_ResourceLimitErrorUnableToScaleImage 432
#define MGK_ResourceLimitErrorUnableToSelectImage 433
#define MGK_ResourceLimitErrorUnableToSharpenImage 434
#define MGK_ResourceLimitErrorUnableToShaveImage 435
#define MGK_ResourceLimitErrorUnableToShearImage 436
#define MGK_ResourceLimitErrorUnableToSortImageColormap 437
#define MGK_ResourceLimitErrorUnableToThresholdImage 438
#define MGK_ResourceLimitErrorUnableToTransformColorspace 439
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 440
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 441
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 442
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 443
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 444
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 445
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 446
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 447
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 448
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 449
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 450
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 451
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 452
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 453
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 454
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 455
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 456
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 457
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 458
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 459
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 460
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 461
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 462
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 463
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 464
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 465
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 466
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 467
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 468
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 469
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 470
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 471
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 472
#define MGK_ResourceLimitFatalErrorUnableToConvertText 473
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 474
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 475
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 476
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 477
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 478
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 479
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 480
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 481
#define MGK_ResourceLimitWarningMemoryAllocationFailed 482
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 483
#define MGK_StreamErrorNoStreamHandlerIsDefined 484
#define MGK_StreamErrorPixelCacheIsNotOpen 485
#define MGK_StreamErrorUnableToAcquirePixelStream 486
#define MGK_StreamErrorUnableToSetPixelStream 487
#define MGK_StreamErrorUnableToSyncPixelStream 488
#define MGK_StreamFatalErrorDefault 489
#define MGK_StreamWarningDefault 490
#define MGK_TypeErrorFontSubstitutionRequired 491
#define MGK_TypeErrorUnableToGetTypeMetrics 492
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 493
#define MGK_TypeErrorUnableToReadFont 494
#define MGK_TypeErrorUnrecognizedFontEncoding 495
#define MGK_TypeFatalErrorDefault 496
#define MGK_TypeWarningDefault 497
#define MGK_WandErrorInvalidColormapIndex 498
#define MGK_WandErrorWandAPINotImplemented 499
#define MGK_WandErrorWandContainsNoImageIndexs 500
#define MGK_WandErrorWandContainsNoImages 501
#define MGK_XServerErrorColorIsNotKnownToServer 502
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 503
#define MGK_XServerErrorStandardColormapIsNotInitialized 504
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 505
#define MGK_XServerErrorUnableToCreateBitmap 506
#define MGK_XServerErrorUnableToCreateColormap 507
#define MGK_XServerErrorUnableToCreatePixmap 508
#define MGK_XServerErrorUnableToCreateProperty 509
#define MGK_XServerErrorUnableToCreateStandardColormap 510
#define MGK_XServerErrorUnableToDisplayImageInfo 511
#define MGK_XServerErrorUnableToGetProperty 512
#define MGK_XServerErrorUnableToGetStandardColormap 513
#define MGK_XServerErrorUnableToGetVisual 514
#define MGK_XServerErrorUnableToGrabMouse 515
#define MGK_XServerErrorUnableToLoadFont 516
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 517
#define MGK_XServerErrorUnableToOpenXServer 518
#define MGK_XServerErrorUnableToReadXAttributes 519
#define MGK_XServerErrorUnableToReadXWindowImage 520
#define MGK_XServerErrorUnrecognizedColormapType 521
#define MGK_XServerErrorUnrecognizedGravityType 522
#define MGK_XServerErrorUnrecognizedVisualSpecifier 523
#define MGK_XServerFatalErrorUnableToAllocateXHints 524
#define MGK_XServerFatalErrorUnableToCreateCursor 525
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 526
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 527
#define MGK_XServerFatalErrorUnableToCreateTextProperty 528
#define MGK_XServerFatalErrorUnableToCreateXImage 529
#define MGK_XServerFatalErrorUnableToCreateXPixmap 530
#define MGK_XServerFatalErrorUnableToCreateXWindow 531
#define MGK_XServerFatalErrorUnableToDisplayImage 532
#define MGK_XServerFatalErrorUnableToDitherImage 533
#define MGK_XServerFatalErrorUnableToGetPixelInfo 534
#define MGK_XServerFatalErrorUnableToGetVisual 535
#define MGK_XServerFatalErrorUnableToLoadFont 536
#define MGK_XServerFatalErrorUnableToMakeXWindow 537
#define MGK_XServerFatalErrorUnableToOpenXServer 538
#define MGK_XServerFatalErrorUnableToViewFonts 539
#define MGK_XServerWarningUnableToGetVisual 540
#define MGK_XServerWarningUsingDefaultVisual 541

#endif

#if defined(_INCLUDE_CATEGORYMAP_TABLE_)
typedef struct _CategoryInfo{
  const char *name;
  int offset;
} CategoryInfo;

static const CategoryInfo category_map[] =
  {
    { "Blob", 0 },
    { "Cache", 3 },
    { "Coder", 6 },
    { "Configure", 9 },
    { "Corrupt/Image", 12 },
    { "Delegate", 15 },
    { "Draw", 18 },
    { "File/Open", 21 },
    { "Image", 24 },
    { "Missing/Delegate", 27 },
    { "Module", 30 },
    { "Monitor", 33 },
    { "Option", 36 },
    { "Registry", 39 },
    { "Resource/Limit", 42 },
    { "Stream", 45 },
    { "Type", 48 },
    { "Wand", 51 },
    { "XServer", 52 },
    { 0, 54 }
  };
#endif

#if defined(_INCLUDE_SEVERITYMAP_TABLE_)
typedef struct _SeverityInfo{
  const char *name;
  int offset;
  ExceptionType severityid;
} SeverityInfo;

static const SeverityInfo severity_map[] =
  {
    { "Blob/Error", 0, BlobError },
    { "Blob/FatalError", 7, BlobFatalError },
    { "Blob/Warning", 8, BlobWarning },
    { "Cache/Error", 9, CacheError },
    { "Cache/FatalError", 20, CacheFatalError },
    { "Cache/Warning", 22, CacheWarning },
    { "Coder/Error", 23, CoderError },
    { "Coder/FatalError", 100, CoderFatalError },
    { "Coder/Warning", 101, CoderWarning },
    { "Configure/Error", 102, ConfigureError },
    { "Configure/FatalError", 109, ConfigureFatalError },
    { "Configure/Warning", 113, ConfigureWarning },
    { "Corrupt/Image/Error", 114, CorruptImageError },
    { "Corrupt/Image/FatalError", 153, CorruptImageFatalError },
    { "Corrupt/Image/Warning", 154, CorruptImageWarning },
    { "Delegate/Error", 163, DelegateError },
    { "Delegate/FatalError", 181, DelegateFatalError },
    { "Delegate/Warning", 182, DelegateWarning },
    { "Draw/Error", 183, DrawError },
    { "Draw/FatalError", 188, DrawFatalError },
    { "Draw/Warning", 189, DrawWarning },
    { "File/Open/Error", 192, FileOpenError },
    { "File/Open/FatalError", 195, FileOpenFatalError },
    { "File/Open/Warning", 196, FileOpenWarning },
    { "Image/Error", 197, ImageError },
    { "Image/FatalError", 228, ImageFatalError },
    { "Image/Warning", 229, ImageWarning },
    { "Missing/Delegate/Error", 230, MissingDelegateError },
    { "Missing/Delegate/FatalError", 242, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 243, MissingDelegateWarning },
    { "Module/Error", 244, ModuleError },
    { "Module/FatalError", 249, ModuleFatalError },
    { "Module/Warning", 250, ModuleWarning },
    { "Monitor/Error", 251, MonitorError },
    { "Monitor/FatalError", 252, MonitorFatalError },
    { "Monitor/Warning", 254, MonitorWarning },
    { "Option/Error", 255, OptionError },
    { "Option/FatalError", 340, OptionFatalError },
    { "Option/Warning", 362, OptionWarning },
    { "Registry/Error", 363, RegistryError },
    { "Registry/FatalError", 369, RegistryFatalError },
    { "Registry/Warning", 370, RegistryWarning },
    { "Resource/Limit/Error", 371, ResourceLimitError },
    { "Resource/Limit/FatalError", 439, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 481, ResourceLimitWarning },
    { "Stream/Error", 482, StreamError },
    { "Stream/FatalError", 488, StreamFatalError },
    { "Stream/Warning", 489, StreamWarning },
    { "Type/Error", 490, TypeError },
    { "Type/FatalError", 495, TypeFatalError },
    { "Type/Warning", 496, TypeWarning },
    { "Wand/Error", 497, WandError },
    { "XServer/Error", 501, XServerError },
    { "XServer/FatalError", 523, XServerFatalError },
    { "XServer/Warning", 539, XServerWarning },
    { 0, 541, UndefinedException }
  };
#endif

#if defined(_INCLUDE_TAGMAP_TABLE_)
typedef struct _MessageInfo
{
  const char *name;
  int messageid;
} MessageInfo;

static const MessageInfo message_map[] =
  {
    { "UnableToCreateBlob", 1 },
    { "UnableToOpenFile", 2 },
    { "UnableToReadFile", 3 },
    { "UnableToReadToOffset", 4 },
    { "UnableToSeekToOffset", 5 },
    { "UnableToWriteBlob", 6 },
    { "UnrecognizedImageFormat", 7 },
    { "Default", 8 },
    { "Default", 9 },
    { "InconsistentPersistentCacheDepth", 10 },
    { "PixelCacheIsNotOpen", 11 },
    { "UnableToAllocateCacheView", 12 },
    { "UnableToCloneCache", 13 },
    { "UnableToExtendCache", 14 },
    { "UnableToGetCacheNexus", 15 },
    { "UnableToGetPixelsFromCache", 16 },
    { "UnableToOpenCache", 17 },
    { "UnableToPeristPixelCache", 18 },
    { "UnableToReadPixelCache", 19 },
    { "UnableToSyncCache", 20 },
    { "DiskAllocationFailed", 21 },
    { "UnableToExtendPixelCache", 22 },
    { "Default", 23 },
    { "ColormapTooLarge", 24 },
    { "ColormapTypeNotSupported", 25 },
    { "ColorspaceModelIsNotSupported", 26 },
    { "ColorTypeNotSupported", 27 },
    { "CompressionNotValid", 28 },
    { "DataEncodingSchemeIsNotSupported", 29 },
    { "DataStorageTypeIsNotSupported", 30 },
    { "DeltaPNGNotSupported", 31 },
    { "EncryptedWPGImageFileNotSupported", 32 },
    { "FractalCompressionNotSupported", 33 },
    { "ImageColumnOrRowSizeIsNotSupported", 34 },
    { "ImageDoesNotHaveAMatteChannel", 35 },
    { "ImageIsNotTiled", 36 },
    { "ImageTypeNotSupported", 37 },
    { "IncompatibleSizeOfDouble", 38 },
    { "IrregularChannelGeometryNotSupported", 39 },
    { "JNGCompressionNotSupported", 40 },
    { "JPEGCompressionNotSupported", 41 },
    { "JPEGEmbeddingFailed", 42 },
    { "LocationTypeIsNotSupported", 43 },
    { "MapStorageTypeIsNotSupported", 44 },
    { "MSBByteOrderNotSupported", 45 },
    { "MultidimensionalMatricesAreNotSupported", 46 },
    { "MultipleRecordListNotSupported", 47 },
    { "No8BIMDataIsAvailable", 48 },
    { "NoAPP1DataIsAvailable", 49 },
    { "NoBitmapOnClipboard", 50 },
    { "NoColorProfileAvailable", 51 },
    { "NoDataReturned", 52 },
    { "NoImageVectorGraphics", 53 },
    { "NoIPTCInfoWasFound", 54 },
    { "NoIPTCProfileAvailable", 55 },
    { "NumberOfImagesIsNotSupported", 56 },
    { "OnlyContinuousTonePictureSupported", 57 },
    { "OnlyLevelZerofilesSupported", 58 },
    { "PNGCompressionNotSupported", 59 },
    { "PNGLibraryTooOld", 60 },
    { "RLECompressionNotSupported", 61 },
    { "SubsamplingRequiresEvenWidth", 62 },
    { "UnableToCopyProfile", 63 },
    { "UnableToCreateADC", 64 },
    { "UnableToCreateBitmap", 65 },
    { "UnableToDecompressImage", 66 },
    { "UnableToInitializeFPXLibrary", 67 },
    { "UnableToOpenBlob", 68 },
    { "UnableToReadAspectRatio", 69 },
    { "UnableToReadCIELABImages", 70 },
    { "UnableToReadSummaryInfo", 71 },
    { "UnableToSetAffineMatrix", 72 },
    { "UnableToSetAspectRatio", 73 },
    { "UnableToSetColorTwist", 74 },
    { "UnableToSetContrast", 75 },
    { "UnableToSetFilteringValue", 76 },
    { "UnableToSetImageComments", 77 },
    { "UnableToSetImageTitle", 78 },
    { "UnableToSetJPEGLevel", 79 },
    { "UnableToSetRegionOfInterest", 80 },
    { "UnableToSetSummaryInfo", 81 },
    { "UnableToTranslateText", 82 },
    { "UnableToWriteMPEGParameters", 83 },
    { "UnableToZipCompressImage", 84 },
    { "UnsupportedCellTypeInTheMatrix", 85 },
    { "WebPDecodingFailedUserAbort", 86 },
    { "WebPEncodingFailed", 87 },
    { "WebPEncodingFailedBadDimension", 88 },
    { "WebPEncodingFailedBadWrite", 89 },
    { "WebPEncodingFailedBitstreamOutOfMemory", 90 },
    { "WebPEncodingFailedFileTooBig", 91 },
    { "WebPEncodingFailedInvalidConfiguration", 92 },
    { "WebPEncodingFailedNULLParameter", 93 },
    { "WebPEncodingFailedOutOfMemory", 94 },
    { "WebPEncodingFailedPartition0Overflow", 95 },
    { "WebPEncodingFailedPartitionOverflow", 96 },
    { "WebPEncodingFailedUserAbort", 97 },
    { "WebPInvalidConfiguration", 98 },
    { "WebPInvalidParameter", 99 },
    { "ZipCompressionNotSupported", 100 },
    { "Default", 101 },
    { "LosslessToLossyJPEGConversion", 102 },
    { "IncludeElementNestedTooDeeply", 103 },
    { "RegistryKeyLookupFailed", 104 },
    { "StringTokenLengthExceeded", 105 },
    { "UnableToAccessConfigureFile", 106 },
    { "UnableToAccessFontFile", 107 },
    { "UnableToAccessLogFile", 108 },
    { "UnableToAccessModuleFile", 109 },
    { "Default", 110 },
    { "UnableToChangeToWorkingDirectory", 111 },
    { "UnableToGetCurrentDirectory", 112 },
    { "UnableToRestoreCurrentDirectory", 113 },
    { "Default", 114 },
    { "AnErrorHasOccurredReadingFromFile", 115 },
    { "AnErrorHasOccurredWritingToFile", 116 },
    { "ColormapExceeds256Colors", 117 },
    { "CompressionNotValid", 118 },
    { "CorruptImage", 119 },
    { "ImageFileDoesNotContainAnyImageData", 120 },
    { "ImageTypeNotSupported", 121 },
    { "ImproperImageHeader", 122 },
    { "InsufficientImageDataInFile", 123 },
    { "InvalidColormapIndex", 124 },
    { "InvalidFileFormatVersion", 125 },
    { "LengthAndFilesizeDoNotMatch", 126 },
    { "MissingImageChannel", 127 },
    { "NegativeOrZeroImageSize", 128 },
    { "NonOS2HeaderSizeError", 129 },
    { "NotEnoughTiles", 130 },
    { "StaticPlanesValueNotEqualToOne", 131 },
    { "SubsamplingRequiresEvenWidth", 132 },
    { "TooMuchImageDataInFile", 133 },
    { "UnableToReadColormapFromDumpFile", 134 },
    { "UnableToReadColorProfile", 135 },
    { "UnableToReadExtensionBlock", 136 },
    { "UnableToReadGenericProfile", 137 },
    { "UnableToReadImageData", 138 },
    { "UnableToReadImageHeader", 139 },
    { "UnableToReadIPTCProfile", 140 },
    { "UnableToReadPixmapFromDumpFile", 141 },
    { "UnableToReadSubImageData", 142 },
    { "UnableToReadVIDImage", 143 },
    { "UnableToReadWindowNameFromDumpFile", 144 },
    { "UnableToRunlengthDecodeImage", 145 },
    { "UnableToUncompressImage", 146 },
    { "UnexpectedEndOfFile", 147 },
    { "UnexpectedSamplingFactor", 148 },
    { "UnknownPatternType", 149 },
    { "UnrecognizedBitsPerPixel", 150 },
    { "UnrecognizedImageCompression", 151 },
    { "UnrecognizedNumberOfColors", 152 },
    { "UnrecognizedXWDHeader", 153 },
    { "UnableToPersistKey", 154 },
    { "CompressionNotValid", 155 },
    { "ImproperImageHeader", 156 },
    { "LengthAndFilesizeDoNotMatch", 157 },
    { "NegativeOrZeroImageSize", 158 },
    { "NonOS2HeaderSizeError", 159 },
    { "SkipToSyncByte", 160 },
    { "StaticPlanesValueNotEqualToOne", 161 },
    { "UnrecognizedBitsPerPixel", 162 },
    { "UnrecognizedImageCompression", 163 },
    { "DelegateFailed", 164 },
    { "FailedToAllocateArgumentList", 165 },
    { "FailedToAllocateGhostscriptInterpreter", 166 },
    { "FailedToComputeOutputSize", 167 },
    { "FailedToFindGhostscript", 168 },
    { "FailedToRenderFile", 169 },
    { "FailedToScanFile", 170 },
    { "NoTagFound", 171 },
    { "PostscriptDelegateFailed", 172 },
    { "UnableToCreateImage", 173 },
    { "UnableToCreateImageComponent", 174 },
    { "UnableToDecodeImageFile", 175 },
    { "UnableToEncodeImageFile", 176 },
    { "UnableToInitializeFPXLibrary", 177 },
    { "UnableToInitializeWMFLibrary", 178 },
    { "UnableToManageJP2Stream", 179 },
    { "UnableToWriteSVGFormat", 180 },
    { "WebPABIMismatch", 181 },
    { "Default", 182 },
    { "Default", 183 },
    { "AlreadyPushingPatternDefinition", 184 },
    { "NonconformingDrawingPrimitiveDefinition", 185 },
    { "TooManyCoordinates", 186 },
    { "UnableToPrint", 187 },
    { "UnbalancedGraphicContextPushPop", 188 },
    { "Default", 189 },
    { "NotARelativeURL", 190 },
    { "NotCurrentlyPushingPatternDefinition", 191 },
    { "URLNotFound", 192 },
    { "UnableToCreateTemporaryFile", 193 },
    { "UnableToOpenFile", 194 },
    { "UnableToWriteFile", 195 },
    { "Default", 196 },
    { "Default", 197 },
    { "AngleIsDiscontinuous", 198 },
    { "ColorspaceColorProfileMismatch", 199 },
    { "ImageColorspaceDiffers", 200 },
    { "ImageColorspaceMismatch", 201 },
    { "ImageDifferenceExceedsLimit", 202 },
    { "ImageDoesNotContainResolution", 203 },
    { "ImageOpacityDiffers", 204 },
    { "ImageSequenceIsRequired", 205 },
    { "ImageSizeDiffers", 206 },
    { "InvalidColormapIndex", 207 },
    { "LeftAndRightImageSizesDiffer", 208 },
    { "NoImagesWereFound", 209 },
    { "NoImagesWereLoaded", 210 },
    { "NoLocaleImageAttribute", 211 },
    { "TooManyClusters", 212 },
    { "UnableToAppendImage", 213 },
    { "UnableToAssignProfile", 214 },
    { "UnableToAverageImage", 215 },
    { "UnableToCoalesceImage", 216 },
    { "UnableToCompareImages", 217 },
    { "UnableToCreateImageMosaic", 218 },
    { "UnableToCreateStereoImage", 219 },
    { "UnableToDeconstructImageSequence", 220 },
    { "UnableToFlattenImage", 221 },
    { "UnableToGetClipMask", 222 },
    { "UnableToHandleImageChannel", 223 },
    { "UnableToResizeImage", 224 },
    { "UnableToSegmentImage", 225 },
    { "UnableToSetClipMask", 226 },
    { "UnableToShearImage", 227 },
    { "WidthOrHeightExceedsLimit", 228 },
    { "UnableToPersistKey", 229 },
    { "Default", 230 },
    { "DPSLibraryIsNotAvailable", 231 },
    { "FPXLibraryIsNotAvailable", 232 },
    { "FreeTypeLibraryIsNotAvailable", 233 },
    { "JPEGLibraryIsNotAvailable", 234 },
    { "LCMSLibraryIsNotAvailable", 235 },
    { "LZWEncodingNotEnabled", 236 },
    { "NoDecodeDelegateForThisImageFormat", 237 },
    { "NoEncodeDelegateForThisImageFormat", 238 },
    { "TIFFLibraryIsNotAvailable", 239 },
    { "XMLLibraryIsNotAvailable", 240 },
    { "XWindowLibraryIsNotAvailable", 241 },
    { "ZipLibraryIsNotAvailable", 242 },
    { "Default", 243 },
    { "Default", 244 },
    { "FailedToCloseModule", 245 },
    { "FailedToFindSymbol", 246 },
    { "UnableToLoadModule", 247 },
    { "UnableToRegisterImageFormat", 248 },
    { "UnrecognizedModule", 249 },
    { "UnableToInitializeModuleLoader", 250 },
    { "Default", 251 },
    { "Default", 252 },
    { "Default", 253 },
    { "UserRequestedTerminationBySignal", 254 },
    { "Default", 255 },
    { "BevelWidthIsNegative", 256 },
    { "ColorSeparatedImageRequired", 257 },
    { "FrameIsLessThanImageSize", 258 },
    { "GeometryDimensionsAreZero", 259 },
    { "GeometryDoesNotContainImage", 260 },
    { "HaldClutImageDimensionsInvalid", 261 },
    { "ImagesAreNotTheSameSize", 262 },
    { "ImageSizeMustExceedBevelWidth", 263 },
    { "ImageSmallerThanKernelWidth", 264 },
    { "ImageSmallerThanRadius", 265 },
    { "ImageWidthsOrHeightsDiffer", 266 },
    { "InputImagesAlreadySpecified", 267 },
    { "InvalidSubimageSpecification", 268 },
    { "KernelRadiusIsTooSmall", 269 },
    { "KernelWidthMustBeAnOddNumber", 270 },
    { "MatrixIsNotSquare", 271 },
    { "MatrixOrderOutOfRange", 272 },
    { "MissingAnImageFilename", 273 },
    { "MissingArgument", 274 },
    { "MustSpecifyAnImageName", 275 },
    { "MustSpecifyImageSize", 276 },
    { "NoBlobDefined", 277 },
    { "NoImagesDefined", 278 },
    { "NonzeroWidthAndHeightRequired", 279 },
    { "NoProfileNameWasGiven", 280 },
    { "NullBlobArgument", 281 },
    { "ReferenceImageRequired", 282 },
    { "ReferenceIsNotMyType", 283 },
    { "RegionAreaExceedsLimit", 284 },
    { "RequestDidNotReturnAnImage", 285 },
    { "SteganoImageRequired", 286 },
    { "StereoImageRequired", 287 },
    { "SubimageSpecificationReturnsNoImages", 288 },
    { "UnableToAddOrRemoveProfile", 289 },
    { "UnableToAverageImageSequence", 290 },
    { "UnableToBlurImage", 291 },
    { "UnableToChopImage", 292 },
    { "UnableToColorMatrixImage", 293 },
    { "UnableToConstituteImage", 294 },
    { "UnableToConvolveImage", 295 },
    { "UnableToEdgeImage", 296 },
    { "UnableToEqualizeImage", 297 },
    { "UnableToFilterImage", 298 },
    { "UnableToFormatImageMetadata", 299 },
    { "UnableToFrameImage", 300 },
    { "UnableToOilPaintImage", 301 },
    { "UnableToPaintImage", 302 },
    { "UnableToRaiseImage", 303 },
    { "UnableToSharpenImage", 304 },
    { "UnableToThresholdImage", 305 },
    { "UnableToWaveImage", 306 },
    { "UnrecognizedAttribute", 307 },
    { "UnrecognizedChannelType", 308 },
    { "UnrecognizedColor", 309 },
    { "UnrecognizedColormapType", 310 },
    { "UnrecognizedColorspace", 311 },
    { "UnrecognizedCommand", 312 },
    { "UnrecognizedComposeOperator", 313 },
    { "UnrecognizedDisposeMethod", 314 },
    { "UnrecognizedElement", 315 },
    { "UnrecognizedEndianType", 316 },
    { "UnrecognizedGravityType", 317 },
    { "UnrecognizedHighlightStyle", 318 },
    { "UnrecognizedImageCompression", 319 },
    { "UnrecognizedImageFilter", 320 },
    { "UnrecognizedImageFormat", 321 },
    { "UnrecognizedImageMode", 322 },
    { "UnrecognizedImageType", 323 },
    { "UnrecognizedIntentType", 324 },
    { "UnrecognizedInterlaceType", 325 },
    { "UnrecognizedListType", 326 },
    { "UnrecognizedMetric", 327 },
    { "UnrecognizedModeType", 328 },
    { "UnrecognizedNoiseType", 329 },
    { "UnrecognizedOperator", 330 },
    { "UnrecognizedOption", 331 },
    { "UnrecognizedPerlMagickMethod", 332 },
    { "UnrecognizedPixelMap", 333 },
    { "UnrecognizedPreviewType", 334 },
    { "UnrecognizedResourceType", 335 },
    { "UnrecognizedType", 336 },
    { "UnrecognizedUnitsType", 337 },
    { "UnrecognizedVirtualPixelMethod", 338 },
    { "UnsupportedSamplingFactor", 339 },
    { "UsageError", 340 },
    { "InvalidColorspaceType", 341 },
    { "InvalidEndianType", 342 },
    { "InvalidImageType", 343 },
    { "InvalidInterlaceType", 344 },
    { "MissingAnImageFilename", 345 },
    { "MissingArgument", 346 },
    { "NoImagesWereLoaded", 347 },
    { "OptionLengthExceedsLimit", 348 },
    { "RequestDidNotReturnAnImage", 349 },
    { "UnableToOpenXServer", 350 },
    { "UnableToPersistKey", 351 },
    { "UnrecognizedColormapType", 352 },
    { "UnrecognizedColorspaceType", 353 },
    { "UnrecognizedDisposeMethod", 354 },
    { "UnrecognizedEndianType", 355 },
    { "UnrecognizedFilterType", 356 },
    { "UnrecognizedImageCompressionType", 357 },
    { "UnrecognizedImageType", 358 },
    { "UnrecognizedInterlaceType", 359 },
    { "UnrecognizedOption", 360 },
    { "UnrecognizedResourceType", 361 },
    { "UnrecognizedVirtualPixelMethod", 362 },
    { "UnrecognizedColor", 363 },
    { "ImageExpected", 364 },
    { "ImageInfoExpected", 365 },
    { "StructureSizeMismatch", 366 },
    { "UnableToGetRegistryID", 367 },
    { "UnableToLocateImage", 368 },
    { "UnableToSetRegistry", 369 },
    { "Default", 370 },
    { "Default", 371 },
    { "CacheResourcesExhausted", 372 },
    { "ImagePixelHeightLimitExceeded", 373 },
    { "ImagePixelLimitExceeded", 374 },
    { "ImagePixelWidthLimitExceeded", 375 },
    { "MemoryAllocationFailed", 376 },
    { "NoPixelsDefinedInCache", 377 },
    { "PixelCacheAllocationFailed", 378 },
    { "UnableToAddColorProfile", 379 },
    { "UnableToAddGenericProfile", 380 },
    { "UnableToAddIPTCProfile", 381 },
    { "UnableToAllocateCoefficients", 382 },
    { "UnableToAllocateColormap", 383 },
    { "UnableToAllocateICCProfile", 384 },
    { "UnableToAllocateString", 385 },
    { "UnableToAnnotateImage", 386 },
    { "UnableToAverageImageSequence", 387 },
    { "UnableToCloneDrawingWand", 388 },
    { "UnableToCloneImage", 389 },
    { "UnableToComputeImageSignature", 390 },
    { "UnableToConstituteImage", 391 },
    { "UnableToConvertFont", 392 },
    { "UnableToConvertStringToTokens", 393 },
    { "UnableToCreateColormap", 394 },
    { "UnableToCreateColorTransform", 395 },
    { "UnableToCreateCommandWidget", 396 },
    { "UnableToCreateImageGroup", 397 },
    { "UnableToCreateImageMontage", 398 },
    { "UnableToCreateXWindow", 399 },
    { "UnableToCropImage", 400 },
    { "UnableToDespeckleImage", 401 },
    { "UnableToDetermineImageClass", 402 },
    { "UnableToDetermineTheNumberOfImageColors", 403 },
    { "UnableToDitherImage", 404 },
    { "UnableToDrawOnImage", 405 },
    { "UnableToEdgeImage", 406 },
    { "UnableToEmbossImage", 407 },
    { "UnableToEnhanceImage", 408 },
    { "UnableToFloodfillImage", 409 },
    { "UnableToGammaCorrectImage", 410 },
    { "UnableToGetBestIconSize", 411 },
    { "UnableToGetFromRegistry", 412 },
    { "UnableToGetPackageInfo", 413 },
    { "UnableToLevelImage", 414 },
    { "UnableToMagnifyImage", 415 },
    { "UnableToManageColor", 416 },
    { "UnableToMapImage", 417 },
    { "UnableToMapImageSequence", 418 },
    { "UnableToMedianFilterImage", 419 },
    { "UnableToMotionBlurImage", 420 },
    { "UnableToNoiseFilterImage", 421 },
    { "UnableToNormalizeImage", 422 },
    { "UnableToOpenColorProfile", 423 },
    { "UnableToQuantizeImage", 424 },
    { "UnableToQuantizeImageSequence", 425 },
    { "UnableToReadTextChunk", 426 },
    { "UnableToReadXImage", 427 },
    { "UnableToReadXServerColormap", 428 },
    { "UnableToResizeImage", 429 },
    { "UnableToRotateImage", 430 },
    { "UnableToSampleImage", 431 },
    { "UnableToScaleImage", 432 },
    { "UnableToSelectImage", 433 },
    { "UnableToSharpenImage", 434 },
    { "UnableToShaveImage", 435 },
    { "UnableToShearImage", 436 },
    { "UnableToSortImageColormap", 437 },
    { "UnableToThresholdImage", 438 },
    { "UnableToTransformColorspace", 439 },
    { "MemoryAllocationFailed", 440 },
    { "SemaporeOperationFailed", 441 },
    { "UnableToAllocateAscii85Info", 442 },
    { "UnableToAllocateCacheInfo", 443 },
    { "UnableToAllocateCacheView", 444 },
    { "UnableToAllocateColorInfo", 445 },
    { "UnableToAllocateDashPattern", 446 },
    { "UnableToAllocateDelegateInfo", 447 },
    { "UnableToAllocateDerivatives", 448 },
    { "UnableToAllocateDrawContext", 449 },
    { "UnableToAllocateDrawInfo", 450 },
    { "UnableToAllocateDrawingWand", 451 },
    { "UnableToAllocateGammaMap", 452 },
    { "UnableToAllocateImage", 453 },
    { "UnableToAllocateImagePixels", 454 },
    { "UnableToAllocateLogInfo", 455 },
    { "UnableToAllocateMagicInfo", 456 },
    { "UnableToAllocateMagickInfo", 457 },
    { "UnableToAllocateModuleInfo", 458 },
    { "UnableToAllocateMontageInfo", 459 },
    { "UnableToAllocateQuantizeInfo", 460 },
    { "UnableToAllocateRandomKernel", 461 },
    { "UnableToAllocateRegistryInfo", 462 },
    { "UnableToAllocateSemaphoreInfo", 463 },
    { "UnableToAllocateString", 464 },
    { "UnableToAllocateTypeInfo", 465 },
    { "UnableToAllocateWand", 466 },
    { "UnableToAnimateImageSequence", 467 },
    { "UnableToCloneBlobInfo", 468 },
    { "UnableToCloneCacheInfo", 469 },
    { "UnableToCloneImage", 470 },
    { "UnableToCloneImageInfo", 471 },
    { "UnableToConcatenateString", 472 },
    { "UnableToConvertText", 473 },
    { "UnableToCreateColormap", 474 },
    { "UnableToDestroySemaphore", 475 },
    { "UnableToDisplayImage", 476 },
    { "UnableToEscapeString", 477 },
    { "UnableToInitializeSemaphore", 478 },
    { "UnableToInterpretMSLImage", 479 },
    { "UnableToLockSemaphore", 480 },
    { "UnableToUnlockSemaphore", 481 },
    { "MemoryAllocationFailed", 482 },
    { "ImageDoesNotContainTheStreamGeometry", 483 },
    { "NoStreamHandlerIsDefined", 484 },
    { "PixelCacheIsNotOpen", 485 },
    { "UnableToAcquirePixelStream", 486 },
    { "UnableToSetPixelStream", 487 },
    { "UnableToSyncPixelStream", 488 },
    { "Default", 489 },
    { "Default", 490 },
    { "FontSubstitutionRequired", 491 },
    { "UnableToGetTypeMetrics", 492 },
    { "UnableToInitializeFreetypeLibrary", 493 },
    { "UnableToReadFont", 494 },
    { "UnrecognizedFontEncoding", 495 },
    { "Default", 496 },
    { "Default", 497 },
    { "InvalidColormapIndex", 498 },
    { "WandAPINotImplemented", 499 },
    { "WandContainsNoImageIndexs", 500 },
    { "WandContainsNoImages", 501 },
    { "ColorIsNotKnownToServer", 502 },
    { "NoWindowWithSpecifiedIDExists", 503 },
    { "StandardColormapIsNotInitialized", 504 },
    { "UnableToConnectToRemoteDisplay", 505 },
    { "UnableToCreateBitmap", 506 },
    { "UnableToCreateColormap", 507 },
    { "UnableToCreatePixmap", 508 },
    { "UnableToCreateProperty", 509 },
    { "UnableToCreateStandardColormap", 510 },
    { "UnableToDisplayImageInfo", 511 },
    { "UnableToGetProperty", 512 },
    { "UnableToGetStandardColormap", 513 },
    { "UnableToGetVisual", 514 },
    { "UnableToGrabMouse", 515 },
    { "UnableToLoadFont", 516 },
    { "UnableToMatchVisualToStandardColormap", 517 },
    { "UnableToOpenXServer", 518 },
    { "UnableToReadXAttributes", 519 },
    { "UnableToReadXWindowImage", 520 },
    { "UnrecognizedColormapType", 521 },
    { "UnrecognizedGravityType", 522 },
    { "UnrecognizedVisualSpecifier", 523 },
    { "UnableToAllocateXHints", 524 },
    { "UnableToCreateCursor", 525 },
    { "UnableToCreateGraphicContext", 526 },
    { "UnableToCreateStandardColormap", 527 },
    { "UnableToCreateTextProperty", 528 },
    { "UnableToCreateXImage", 529 },
    { "UnableToCreateXPixmap", 530 },
    { "UnableToCreateXWindow", 531 },
    { "UnableToDisplayImage", 532 },
    { "UnableToDitherImage", 533 },
    { "UnableToGetPixelInfo", 534 },
    { "UnableToGetVisual", 535 },
    { "UnableToLoadFont", 536 },
    { "UnableToMakeXWindow", 537 },
    { "UnableToOpenXServer", 538 },
    { "UnableToViewFonts", 539 },
    { "UnableToGetVisual", 540 },
    { "UsingDefaultVisual", 541 },
    { 0, 0 }
  };
#endif

#if defined(_INCLUDE_MESSAGE_TABLE_)
static const char *message_dat[] =
  {
    "%1",
    "Unable to create blob",
    "Unable to open file",
    "Unable to read file",
    "Unable to read to offset",
    "Unable to seek to offset",
    "Unable to write blob",
    "Unrecognized image format",
    "default error",
    "default warning",
    "Inconsistent persistent cache depth",
    "Pixel cache is not open",
    "Unable to allocate cache view",
    "Unable to clone cache",
    "Unable to extend cache",
    "Unable to get cache nexus",
    "Unable to get pixels from cache",
    "Unable to open cache",
    "Unable to persist pixel cache",
    "Unable to read pixel cache",
    "Unable to sync cache (check temporary file disk space)",
    "disk allocation failed",
    "Unable to extend pixel cache",
    "default warning",
    "Colormap size exceeds limit",
    "Colormap type not supported",
    "Colorspace model is not supported",
    "Color type not supported",
    "Compression not valid",
    "Data encoding scheme is not supported",
    "Data storage type is not supported",
    "Delta-PNG is not supported",
    "Encrypted WPG image file not supported",
    "Fractal compression not supported",
    "Image column or row size is not supported",
    "Image does not have a matte channel",
    "Image is not tiles",
    "Image type not supported",
    "Incompatible size of double",
    "Irregular channel geometry not supported",
    "JNG compression is not supported",
    "JPEG compression is not supported",
    "JPEG embedding failed",
    "Location type is not supported",
    "Map storage type is not supported",
    "MSB order not supported bitmap",
    "Multi-dimensional matrices are not supported",
    "Multiple record list not supported",
    "No 8BIM data is available",
    "No APP1 data is available",
    "No bitmap on clipboard",
    "No color profile available",
    "No data returned",
    "No image vector graphics",
    "No IPTC info was found",
    "No IPTC profile available",
    "Number of images is not supported",
    "Only continuous tone picture supported",
    "Only level zero files Supported",
    "PNG compression is not supported",
    "PNG library is too old",
    "RLE compression not supported",
    "Subsampling requires that image width be evenly divisible by two",
    "Unable to copy profile",
    "Unable to create a DC",
    "Unable to create bitmap",
    "Unable to decompress image",
    "Unable to Initialize FPX library",
    "Unable to open blob",
    "Unable to read aspect ratio",
    "Unable to read CIELAB images",
    "Unable to read summary info",
    "Unable to set affine matrix",
    "Unable to set aspect ratio",
    "Unable to set color twist",
    "Unable to set contrast",
    "Unable to set filtering value",
    "Unable to set image comment",
    "Unable to set image title",
    "Unable to set JPEG level",
    "Unable to set region of interest",
    "Unable to set summary info",
    "Unable to translate text",
    "Unable to write MPEG parameters",
    "Unable to zip-compress image",
    "Unsupported cell type in the matrix",
    "WebP decoding failed: user abort",
    "WebP encoding failed: unknown reason",
    "WebP encoding failed: bad dimension",
    "WebP encoding failed: bad write",
    "WebP encoding failed: bitstream out of memory",
    "WebP encoding failed: File too big (> 4GB)",
    "WebP encoding failed: invalid configuration",
    "WebP encoding failed: null parameter",
    "WebP encoding failed: out of memory",
    "WebP encoding failed: partition 0 overflow (> 512K)",
    "WebP encoding failed: partition overflow (> 16M)",
    "WebP encoding failed: user abort",
    "Invalid WebP configuration parameters supplied",
    "WebP failed: invalid parameter",
    "ZIP compression is not supported",
    "default error",
    "Lossless to lossy JPEG conversion",
    "include element nested too deeply",
    "Registry key lookup failed. Package is not properly installed on this machine.",
    "String token maximum length exceeded",
    "Unable to access configuration file",
    "Unable to access font file",
    "Unable to access log configuration file",
    "Unable to access module file",
    "default error",
    "Unable to change to working directory",
    "Unable to get current working directory",
    "Unable to restore current working directory",
    "default warning",
    "An error has occurred reading from file",
    "An error has occurred writing to file",
    "Colormap exceeded 256 colors",
    "Compression not valid",
    "Corrupt image",
    "Image file or does not contain any image data",
    "Image type not supported",
    "Improper image header",
    "Insufficient image data in file",
    "Invalid colormap index",
    "invalid file format version",
    "Length and filesize do not match",
    "Missing a required image channel",
    "Negative or zero image size",
    "Non OS2 BMP header size less than 40",
    "Not enough tiles found in level",
    "Static planes value not equal to 1",
    "Subsampling requires that image width be evenly divisible by two",
    "Too much image data in file",
    "Unable to read colormap from dump file",
    "Unable to read color profile",
    "Unable to read extension block",
    "Unable to read generic profile",
    "Unable to read image data",
    "Unable to read image header",
    "Unable to read IPTC profile",
    "Unable to read pixmap from dump file",
    "Unable to read sub image data",
    "Unable to read VID image",
    "Unable to read window name from dump file",
    "Unable to runlength decode image",
    "Unable to uncompress image",
    "Unexpected end-of-file",
    "Unexpected sampling factor",
    "Unknown pattern type",
    "Unrecognized bits per pixel",
    "Unrecognized compression",
    "Unrecognized number of colors",
    "Unrecognized XWD header",
    "Unable to persist key",
    "Compression not valid",
    "Improper image header",
    "Length and filesize do not match",
    "Negative or zero image size",
    "Non OS2 header size error",
    "Corrupt PCD image, skipping to sync byte",
    "Static planes value not equal to one",
    "Unrecognized bits per pixel",
    "Unrecognized image compression",
    "Delegate failed",
    "Failed to allocate argument list.",
    "Failed to allocate Ghostscript interpreter.",
    "Failed to compute output size",
    "Failed to find Ghostscript (not installed?).",
    "Failed to render file",
    "Failed to scan file",
    "No tag found",
    "Postscript delegate failed",
    "Unable to create image",
    "Unable to create image component",
    "Unable to decode image file",
    "Unable to encode image file",
    "Unable to initialize FPX library",
    "Unable to initialize WMF library",
    "Unable to manage JP2 stream",
    "Unable to write SVG format",
    "WebP library ABI does not match header ABI (build issue!)",
    "default error",
    "default warning",
    "Already pushing pattern definition",
    "Non-conforming drawing primitive definition",
    "too many coordinates",
    "Unable to print",
    "unbalanced graphic context push-pop",
    "default error",
    "Not a relative URL",
    "Not currently pushing pattern definition",
    "URL not found",
    "Unable to create temporary file",
    "Unable to open file",
    "Unable to write file",
    "default error",
    "default warning",
    "angle is discontinuous",
    "Colorspace color profile mismatch",
    "image colorspace differs",
    "image colorspace mismatch",
    "image difference exceeds limit (%s)",
    "image does not contain resolution",
    "image opacity differs",
    "Image sequence is required",
    "image size differs",
    "Invalid colormap index",
    "left and right image sizes differ",
    "no images were found",
    "no images were loaded",
    "no [LOCALE] image attribute",
    "too many cluster",
    "unable to append image",
    "Unable to assign profile",
    "unable to average image",
    "unable to coalesce image",
    "unable to compare images",
    "unable to create image mosaic",
    "unable to create stereo image",
    "unable to deconstruct image sequence",
    "unable to flatten image",
    "Unable to get clip mask",
    "unable to handle image channel",
    "unable to resize image",
    "unable to segment image",
    "Unable to set clip mask",
    "unable to shear image",
    "width or height exceeds limit",
    "Unable to persist key",
    "default warning",
    "DPS library is not available",
    "FPX library is not available",
    "FreeType library is not available",
    "JPEG compression library is not available",
    "LCMS encoding not enabled",
    "LZW encoding not enabled",
    "No decode delegate for this image format",
    "No encode delegate for this image format",
    "TIFF library is not available",
    "XML library is not available",
    "X Window library is not available",
    "ZLIB compression library is not available",
    "default error",
    "default warning",
    "Failed to close module",
    "Failed to find symbol",
    "Unable to load module",
    "Unable to register image format",
    "Unrecognized module",
    "Unable to initialize module loader",
    "default warning",
    "default error",
    "default error",
    "User requested termination (via signal)",
    "default warning",
    "bevel width is negative",
    "color separated image required",
    "frame is less than image size",
    "geometry dimensions are zero",
    "geometry does not contain image",
    "hald clut image dimensions are invalid",
    "images are not the same size",
    "size must exceed bevel width",
    "image smaller than kernel width",
    "image smaller than radius",
    "image widths or heights differ",
    "input images already specified",
    "Invalid subimage specification",
    "kernel radius is too small",
    "kernel width must be an odd number",
    "Matrix is not square (%s elements)",
    "Matrix size is out of range",
    "Missing an image filename",
    "Option '%s' requires an argument or argument is malformed",
    "Must specify a image name",
    "Must specify image size",
    "No Binary Large OBjects defined",
    "No images defined",
    "Non-zero width and height required",
    "No profile name was given",
    "Null blob argument",
    "Reference image required",
    "Reference is not my type",
    "Region area exceeds implementation limit",
    "Request did not return an image",
    "Stegano image required",
    "Stereo image required",
    "Subimage specification returns no images",
    "Unable to add or remove profile",
    "unable to average image sequence",
    "unable to blur image",
    "unable to chop image",
    "Unable to color matrix image",
    "Unable to constitute image",
    "Unable to convolve image",
    "Unable to edge image",
    "Unable to equalize image",
    "Unable to filter image",
    "unable to format image meta data",
    "Unable to frame image",
    "unable to oil paint image",
    "Unable to paint image",
    "Unable to raise image",
    "Unable to sharpen image",
    "Unable to threshold image",
    "Unable to wave image",
    "Unrecognized attribute",
    "Unrecognized channel type",
    "Unrecognized color",
    "Unrecognized colormap type",
    "Unrecognized image colorspace",
    "Unrecognized command '%s'. Use -help for a usage summary or see manual.",
    "Unrecognized compose operator",
    "Unrecognized dispose method",
    "Unrecognized element",
    "Unrecognized endian type",
    "Unrecognized gravity type",
    "Unrecognized highlight style",
    "Unrecognized image compression",
    "Unrecognized image filter",
    "Unrecognized image format",
    "Unrecognized image mode",
    "Unrecognized image type",
    "Unrecognized intent type",
    "Unrecognized interlace type",
    "Unrecognized list type",
    "Unrecognized error metric",
    "Unrecognized mode type",
    "Unrecognized noise type",
    "Unrecognized operator",
    "Unrecognized option",
    "Unrecognized PerlMagick method",
    "Unrecognized pixel map",
    "Unrecognized preview type",
    "Unrecognized resource type",
    "Unrecognized type",
    "Unrecognized units type",
    "Unrecognized virtual pixel method",
    "Unsupported sampling factor",
    "Improper arguments supplied, please see manual",
    "Invalid colorspace type",
    "Invalid endian type",
    "Invalid image type",
    "Invalid interlace type",
    "Missing an image filename",
    "Option '%s' requires an argument or argument is malformed",
    "No images were loaded",
    "Option length exceeds limit",
    "Request did not return an image",
    "Unable to open XServer",
    "Unable to persist key",
    "Unrecognized colormap type",
    "Unrecognized colorspace type",
    "unrecognized dispose method",
    "Unrecognized endian type",
    "Unrecognized filter type",
    "unrecognized compression type",
    "Unrecognized image type",
    "Unrecognized interlace type",
    "Unrecognized option",
    "Unrecognized resource type",
    "Unrecognized virtual pixel method",
    "Unrecognized color",
    "image expected",
    "image info expected",
    "structure size mismatch",
    "Unable to get registry ID",
    "Unable to locate image",
    "Unable to set registry",
    "default error",
    "default warning",
    "Disk space limit exceeded (see -limit Disk)",
    "Image pixel height limit exceeded (see -limit Height)",
    "Image pixel limit exceeded (see -limit Pixels)",
    "Image pixel width limit exceeded (see -limit Width)",
    "Memory allocation failed",
    "No pixels defined in cache",
    "Pixel cache allocation failed",
    "unable to add ICC Color profile",
    "unable to add generic profile",
    "unable to add IPTC profile",
    "unable to allocate coefficients",
    "Unable to allocate colormap",
    "unable to allocate ICC profile",
    "unable to allocate string",
    "Unable to annotate image",
    "unable to average image sequence",
    "unable to clone drawing wand",
    "unable to clone image",
    "unable to compute image signature",
    "unable to constitute image",
    "unable to convert font",
    "unable to convert strings to tokens",
    "Unable to create colormap",
    "unable to create color transform",
    "unable to create command widget",
    "unable to create image group",
    "Unable to create image montage",
    "unable to create X window",
    "unable to crop image",
    "unable to despeckle image",
    "unable to determine image class",
    "unable to determine the number of image colors",
    "unable to dither image",
    "unable to draw on image",
    "unable to edge image",
    "unable to emboss image",
    "unable to enhance image",
    "unable to floodfill image",
    "unable to gamma correct image",
    "unable to get best icon size",
    "unable to get from registry",
    "Unable to get package info",
    "unable to level image",
    "unable to magnify image",
    "Unable to manage color",
    "Unable to map image",
    "Unable to map image sequence",
    "unable to median filter image",
    "unable to motion blur image",
    "unable to noise filter image",
    "unable to normalize image",
    "unable to open color profile",
    "unable to quantize image",
    "unable to quantize image sequence",
    "unable to read text chunk",
    "unable to read X image",
    "unable to read X server colormap",
    "unable to resize image",
    "unable to rotate image",
    "unable to sample image",
    "unable to scale image",
    "unable to select image",
    "unable to sharpen image",
    "unable to shave image",
    "unable to shear image",
    "unable to sort image colormap",
    "unable to threshold image",
    "unable to transform colorspace",
    "Memory allocation failed",
    "Semaphore operation failed",
    "unable to allocate ascii85 info",
    "unable to allocate cache info",
    "unable to allocate cache view",
    "unable to allocate color info",
    "unable to allocate dash pattern",
    "unable to allocate delegate info",
    "unable to allocate derivates",
    "unable to allocate draw context",
    "unable to allocate draw info",
    "unable to allocate drawing wand",
    "unable to allocate gamma map",
    "unable to allocate image",
    "unable to allocate image pixels",
    "unable to allocate log info",
    "unable to allocate magic info",
    "unable to allocate magick info",
    "unable to allocate module info",
    "unable to allocate montage info",
    "unable to allocate quantize info",
    "unable to allocate random kernel",
    "unable to allocate registry info",
    "unable to allocate semaphore info",
    "unable to allocate string",
    "unable to allocate type info",
    "unable to allocate wand",
    "unable to animate image sequence",
    "unable to clone blob info",
    "unable to clone cache info",
    "unable to clone image",
    "unable to clone image info",
    "unable to concatenate string",
    "unable to convert text",
    "unable to create colormap",
    "unable to destroy semaphore",
    "unable to display image",
    "unable to escape string",
    "unable to initialize semaphore",
    "unable to interpret MSL image",
    "unable to lock semaphore",
    "unable to unlock semaphore",
    "Memory allocation failed",
    "image does not contain the stream geometry",
    "no stream handler is defined",
    "Pixel cache is not open",
    "Unable to acquire pixel stream",
    "Unable to set pixel stream",
    "Unable to sync pixel stream",
    "default error",
    "default warning",
    "Font substitution required",
    "Unable to get type metrics",
    "Unable to initialize freetype library",
    "Unable to read font",
    "Unrecognized font encoding",
    "default error",
    "default warning",
    "invalid colormap index `%.1024s",
    "Wand API not implemented `%.1024s",
    "Wand contains no image indices `%.1024s",
    "Wand contains no images `%.1024s",
    "Color is not known to server",
    "No window with specified ID exists",
    "Standard Colormap is not initialized",
    "Unable to connect to remote display",
    "Unable to create bitmap",
    "Unable to create colormap",
    "Unable to create pixmap",
    "Unable to create property",
    "Unable to create standard colormap",
    "Unable to display image info",
    "Unable to get property",
    "Unable to get Standard Colormap",
    "Unable to get visual",
    "Unable to grab mouse",
    "Unable to load font",
    "Unable to match visual to Standard Colormap",
    "Unable to open X server",
    "Unable to read X attributes",
    "Unable to read X window image",
    "Unrecognized colormap type",
    "Unrecognized gravity type",
    "Unrecognized visual specifier",
    "Unable to allocate X hints",
    "Unable to create X cursor",
    "Unable to create graphic context",
    "unable to create standard colormap",
    "Unable to create text property",
    "Unable to create X image",
    "Unable to create X pixmap",
    "Unable to create X window",
    "unable to display image",
    "unable to dither image",
    "Unable to get pixel info",
    "Unable to get visual",
    "Unable to load font",
    "Unable to make X window",
    "Unable to open X server",
    "Unable to view fonts",
    "Unable to get visual",
    "UsingDefaultVisual",
    0
  };
#endif
