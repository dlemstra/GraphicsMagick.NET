#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 523

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
#define MGK_CoderErrorZipCompressionNotSupported 86
#define MGK_CoderFatalErrorDefault 87
#define MGK_CoderWarningLosslessToLossyJPEGConversion 88
#define MGK_ConfigureErrorIncludeElementNestedTooDeeply 89
#define MGK_ConfigureErrorRegistryKeyLookupFailed 90
#define MGK_ConfigureErrorStringTokenLengthExceeded 91
#define MGK_ConfigureErrorUnableToAccessConfigureFile 92
#define MGK_ConfigureErrorUnableToAccessFontFile 93
#define MGK_ConfigureErrorUnableToAccessLogFile 94
#define MGK_ConfigureErrorUnableToAccessModuleFile 95
#define MGK_ConfigureFatalErrorDefault 96
#define MGK_ConfigureFatalErrorUnableToChangeToWorkingDirectory 97
#define MGK_ConfigureFatalErrorUnableToGetCurrentDirectory 98
#define MGK_ConfigureFatalErrorUnableToRestoreCurrentDirectory 99
#define MGK_ConfigureWarningDefault 100
#define MGK_CorruptImageErrorAnErrorHasOccurredReadingFromFile 101
#define MGK_CorruptImageErrorAnErrorHasOccurredWritingToFile 102
#define MGK_CorruptImageErrorColormapExceeds256Colors 103
#define MGK_CorruptImageErrorCorruptImage 104
#define MGK_CorruptImageErrorImageFileDoesNotContainAnyImageData 105
#define MGK_CorruptImageErrorImageTypeNotSupported 106
#define MGK_CorruptImageErrorImproperImageHeader 107
#define MGK_CorruptImageErrorInsufficientImageDataInFile 108
#define MGK_CorruptImageErrorInvalidColormapIndex 109
#define MGK_CorruptImageErrorInvalidFileFormatVersion 110
#define MGK_CorruptImageErrorLengthAndFilesizeDoNotMatch 111
#define MGK_CorruptImageErrorMissingImageChannel 112
#define MGK_CorruptImageErrorNegativeOrZeroImageSize 113
#define MGK_CorruptImageErrorNonOS2HeaderSizeError 114
#define MGK_CorruptImageErrorNotEnoughTiles 115
#define MGK_CorruptImageErrorStaticPlanesValueNotEqualToOne 116
#define MGK_CorruptImageErrorSubsamplingRequiresEvenWidth 117
#define MGK_CorruptImageErrorTooMuchImageDataInFile 118
#define MGK_CorruptImageErrorUnableToReadColormapFromDumpFile 119
#define MGK_CorruptImageErrorUnableToReadColorProfile 120
#define MGK_CorruptImageErrorUnableToReadExtensionBlock 121
#define MGK_CorruptImageErrorUnableToReadGenericProfile 122
#define MGK_CorruptImageErrorUnableToReadImageData 123
#define MGK_CorruptImageErrorUnableToReadImageHeader 124
#define MGK_CorruptImageErrorUnableToReadIPTCProfile 125
#define MGK_CorruptImageErrorUnableToReadPixmapFromDumpFile 126
#define MGK_CorruptImageErrorUnableToReadSubImageData 127
#define MGK_CorruptImageErrorUnableToReadVIDImage 128
#define MGK_CorruptImageErrorUnableToReadWindowNameFromDumpFile 129
#define MGK_CorruptImageErrorUnableToRunlengthDecodeImage 130
#define MGK_CorruptImageErrorUnableToUncompressImage 131
#define MGK_CorruptImageErrorUnexpectedEndOfFile 132
#define MGK_CorruptImageErrorUnexpectedSamplingFactor 133
#define MGK_CorruptImageErrorUnknownPatternType 134
#define MGK_CorruptImageErrorUnrecognizedBitsPerPixel 135
#define MGK_CorruptImageErrorUnrecognizedImageCompression 136
#define MGK_CorruptImageErrorUnrecognizedXWDHeader 137
#define MGK_CorruptImageFatalErrorUnableToPersistKey 138
#define MGK_CorruptImageWarningCompressionNotValid 139
#define MGK_CorruptImageWarningImproperImageHeader 140
#define MGK_CorruptImageWarningLengthAndFilesizeDoNotMatch 141
#define MGK_CorruptImageWarningNegativeOrZeroImageSize 142
#define MGK_CorruptImageWarningNonOS2HeaderSizeError 143
#define MGK_CorruptImageWarningSkipToSyncByte 144
#define MGK_CorruptImageWarningStaticPlanesValueNotEqualToOne 145
#define MGK_CorruptImageWarningUnrecognizedBitsPerPixel 146
#define MGK_CorruptImageWarningUnrecognizedImageCompression 147
#define MGK_CorruptImageWarningUnrecognizedNumberOfColors 148
#define MGK_DelegateErrorDelegateFailed 149
#define MGK_DelegateErrorFailedToAllocateArgumentList 150
#define MGK_DelegateErrorFailedToAllocateGhostscriptInterpreter 151
#define MGK_DelegateErrorFailedToComputeOutputSize 152
#define MGK_DelegateErrorFailedToFindGhostscript 153
#define MGK_DelegateErrorFailedToRenderFile 154
#define MGK_DelegateErrorFailedToScanFile 155
#define MGK_DelegateErrorNoTagFound 156
#define MGK_DelegateErrorPostscriptDelegateFailed 157
#define MGK_DelegateErrorUnableToCreateImage 158
#define MGK_DelegateErrorUnableToCreateImageComponent 159
#define MGK_DelegateErrorUnableToDecodeImageFile 160
#define MGK_DelegateErrorUnableToEncodeImageFile 161
#define MGK_DelegateErrorUnableToInitializeFPXLibrary 162
#define MGK_DelegateErrorUnableToInitializeWMFLibrary 163
#define MGK_DelegateErrorUnableToManageJP2Stream 164
#define MGK_DelegateErrorUnableToWriteSVGFormat 165
#define MGK_DelegateFatalErrorDefault 166
#define MGK_DelegateWarningDefault 167
#define MGK_DrawErrorAlreadyPushingPatternDefinition 168
#define MGK_DrawErrorNonconformingDrawingPrimitiveDefinition 169
#define MGK_DrawErrorTooManyCoordinates 170
#define MGK_DrawErrorUnableToPrint 171
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 172
#define MGK_DrawFatalErrorDefault 173
#define MGK_DrawWarningNotARelativeURL 174
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 175
#define MGK_DrawWarningURLNotFound 176
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 177
#define MGK_FileOpenErrorUnableToOpenFile 178
#define MGK_FileOpenErrorUnableToWriteFile 179
#define MGK_FileOpenFatalErrorDefault 180
#define MGK_FileOpenWarningDefault 181
#define MGK_ImageErrorAngleIsDiscontinuous 182
#define MGK_ImageErrorColorspaceColorProfileMismatch 183
#define MGK_ImageErrorImageColorspaceDiffers 184
#define MGK_ImageErrorImageColorspaceMismatch 185
#define MGK_ImageErrorImageDifferenceExceedsLimit 186
#define MGK_ImageErrorImageDoesNotContainResolution 187
#define MGK_ImageErrorImageOpacityDiffers 188
#define MGK_ImageErrorImageSequenceIsRequired 189
#define MGK_ImageErrorImageSizeDiffers 190
#define MGK_ImageErrorInvalidColormapIndex 191
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 192
#define MGK_ImageErrorNoImagesWereFound 193
#define MGK_ImageErrorNoImagesWereLoaded 194
#define MGK_ImageErrorNoLocaleImageAttribute 195
#define MGK_ImageErrorTooManyClusters 196
#define MGK_ImageErrorUnableToAppendImage 197
#define MGK_ImageErrorUnableToAssignProfile 198
#define MGK_ImageErrorUnableToAverageImage 199
#define MGK_ImageErrorUnableToCoalesceImage 200
#define MGK_ImageErrorUnableToCompareImages 201
#define MGK_ImageErrorUnableToCreateImageMosaic 202
#define MGK_ImageErrorUnableToCreateStereoImage 203
#define MGK_ImageErrorUnableToDeconstructImageSequence 204
#define MGK_ImageErrorUnableToFlattenImage 205
#define MGK_ImageErrorUnableToGetClipMask 206
#define MGK_ImageErrorUnableToHandleImageChannel 207
#define MGK_ImageErrorUnableToResizeImage 208
#define MGK_ImageErrorUnableToSegmentImage 209
#define MGK_ImageErrorUnableToSetClipMask 210
#define MGK_ImageErrorUnableToShearImage 211
#define MGK_ImageErrorWidthOrHeightExceedsLimit 212
#define MGK_ImageFatalErrorUnableToPersistKey 213
#define MGK_ImageWarningDefault 214
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 215
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 216
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 217
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 218
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 219
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 220
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 221
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 222
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 223
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 224
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 225
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 226
#define MGK_MissingDelegateFatalErrorDefault 227
#define MGK_MissingDelegateWarningDefault 228
#define MGK_ModuleErrorFailedToCloseModule 229
#define MGK_ModuleErrorFailedToFindSymbol 230
#define MGK_ModuleErrorUnableToLoadModule 231
#define MGK_ModuleErrorUnableToRegisterImageFormat 232
#define MGK_ModuleErrorUnrecognizedModule 233
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 234
#define MGK_ModuleWarningDefault 235
#define MGK_MonitorErrorDefault 236
#define MGK_MonitorFatalErrorDefault 237
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 238
#define MGK_MonitorWarningDefault 239
#define MGK_OptionErrorBevelWidthIsNegative 240
#define MGK_OptionErrorColorSeparatedImageRequired 241
#define MGK_OptionErrorFrameIsLessThanImageSize 242
#define MGK_OptionErrorGeometryDimensionsAreZero 243
#define MGK_OptionErrorGeometryDoesNotContainImage 244
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 245
#define MGK_OptionErrorImagesAreNotTheSameSize 246
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 247
#define MGK_OptionErrorImageSmallerThanKernelWidth 248
#define MGK_OptionErrorImageSmallerThanRadius 249
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 250
#define MGK_OptionErrorInputImagesAlreadySpecified 251
#define MGK_OptionErrorInvalidSubimageSpecification 252
#define MGK_OptionErrorKernelRadiusIsTooSmall 253
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 254
#define MGK_OptionErrorMatrixIsNotSquare 255
#define MGK_OptionErrorMatrixOrderOutOfRange 256
#define MGK_OptionErrorMissingAnImageFilename 257
#define MGK_OptionErrorMissingArgument 258
#define MGK_OptionErrorMustSpecifyAnImageName 259
#define MGK_OptionErrorMustSpecifyImageSize 260
#define MGK_OptionErrorNoBlobDefined 261
#define MGK_OptionErrorNoImagesDefined 262
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 263
#define MGK_OptionErrorNoProfileNameWasGiven 264
#define MGK_OptionErrorNullBlobArgument 265
#define MGK_OptionErrorReferenceImageRequired 266
#define MGK_OptionErrorReferenceIsNotMyType 267
#define MGK_OptionErrorRegionAreaExceedsLimit 268
#define MGK_OptionErrorRequestDidNotReturnAnImage 269
#define MGK_OptionErrorSteganoImageRequired 270
#define MGK_OptionErrorStereoImageRequired 271
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 272
#define MGK_OptionErrorUnableToAddOrRemoveProfile 273
#define MGK_OptionErrorUnableToAverageImageSequence 274
#define MGK_OptionErrorUnableToBlurImage 275
#define MGK_OptionErrorUnableToChopImage 276
#define MGK_OptionErrorUnableToColorMatrixImage 277
#define MGK_OptionErrorUnableToConstituteImage 278
#define MGK_OptionErrorUnableToConvolveImage 279
#define MGK_OptionErrorUnableToEdgeImage 280
#define MGK_OptionErrorUnableToEqualizeImage 281
#define MGK_OptionErrorUnableToFilterImage 282
#define MGK_OptionErrorUnableToFormatImageMetadata 283
#define MGK_OptionErrorUnableToFrameImage 284
#define MGK_OptionErrorUnableToOilPaintImage 285
#define MGK_OptionErrorUnableToPaintImage 286
#define MGK_OptionErrorUnableToRaiseImage 287
#define MGK_OptionErrorUnableToSharpenImage 288
#define MGK_OptionErrorUnableToThresholdImage 289
#define MGK_OptionErrorUnableToWaveImage 290
#define MGK_OptionErrorUnrecognizedAttribute 291
#define MGK_OptionErrorUnrecognizedChannelType 292
#define MGK_OptionErrorUnrecognizedColor 293
#define MGK_OptionErrorUnrecognizedColormapType 294
#define MGK_OptionErrorUnrecognizedColorspace 295
#define MGK_OptionErrorUnrecognizedCommand 296
#define MGK_OptionErrorUnrecognizedComposeOperator 297
#define MGK_OptionErrorUnrecognizedDisposeMethod 298
#define MGK_OptionErrorUnrecognizedElement 299
#define MGK_OptionErrorUnrecognizedEndianType 300
#define MGK_OptionErrorUnrecognizedGravityType 301
#define MGK_OptionErrorUnrecognizedHighlightStyle 302
#define MGK_OptionErrorUnrecognizedImageCompression 303
#define MGK_OptionErrorUnrecognizedImageFilter 304
#define MGK_OptionErrorUnrecognizedImageFormat 305
#define MGK_OptionErrorUnrecognizedImageMode 306
#define MGK_OptionErrorUnrecognizedImageType 307
#define MGK_OptionErrorUnrecognizedIntentType 308
#define MGK_OptionErrorUnrecognizedInterlaceType 309
#define MGK_OptionErrorUnrecognizedListType 310
#define MGK_OptionErrorUnrecognizedMetric 311
#define MGK_OptionErrorUnrecognizedModeType 312
#define MGK_OptionErrorUnrecognizedNoiseType 313
#define MGK_OptionErrorUnrecognizedOperator 314
#define MGK_OptionErrorUnrecognizedOption 315
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 316
#define MGK_OptionErrorUnrecognizedPixelMap 317
#define MGK_OptionErrorUnrecognizedPreviewType 318
#define MGK_OptionErrorUnrecognizedResourceType 319
#define MGK_OptionErrorUnrecognizedType 320
#define MGK_OptionErrorUnrecognizedUnitsType 321
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 322
#define MGK_OptionErrorUnsupportedSamplingFactor 323
#define MGK_OptionErrorUsageError 324
#define MGK_OptionFatalErrorInvalidColorspaceType 325
#define MGK_OptionFatalErrorInvalidEndianType 326
#define MGK_OptionFatalErrorInvalidImageType 327
#define MGK_OptionFatalErrorInvalidInterlaceType 328
#define MGK_OptionFatalErrorMissingAnImageFilename 329
#define MGK_OptionFatalErrorMissingArgument 330
#define MGK_OptionFatalErrorNoImagesWereLoaded 331
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 332
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 333
#define MGK_OptionFatalErrorUnableToOpenXServer 334
#define MGK_OptionFatalErrorUnableToPersistKey 335
#define MGK_OptionFatalErrorUnrecognizedColormapType 336
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 337
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 338
#define MGK_OptionFatalErrorUnrecognizedEndianType 339
#define MGK_OptionFatalErrorUnrecognizedFilterType 340
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 341
#define MGK_OptionFatalErrorUnrecognizedImageType 342
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 343
#define MGK_OptionFatalErrorUnrecognizedOption 344
#define MGK_OptionFatalErrorUnrecognizedResourceType 345
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 346
#define MGK_OptionWarningUnrecognizedColor 347
#define MGK_RegistryErrorImageExpected 348
#define MGK_RegistryErrorImageInfoExpected 349
#define MGK_RegistryErrorStructureSizeMismatch 350
#define MGK_RegistryErrorUnableToGetRegistryID 351
#define MGK_RegistryErrorUnableToLocateImage 352
#define MGK_RegistryErrorUnableToSetRegistry 353
#define MGK_RegistryFatalErrorDefault 354
#define MGK_RegistryWarningDefault 355
#define MGK_ResourceLimitErrorCacheResourcesExhausted 356
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 357
#define MGK_ResourceLimitErrorMemoryAllocationFailed 358
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 359
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 360
#define MGK_ResourceLimitErrorUnableToAddColorProfile 361
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 362
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 363
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 364
#define MGK_ResourceLimitErrorUnableToAllocateColormap 365
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 366
#define MGK_ResourceLimitErrorUnableToAllocateString 367
#define MGK_ResourceLimitErrorUnableToAnnotateImage 368
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 369
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 370
#define MGK_ResourceLimitErrorUnableToCloneImage 371
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 372
#define MGK_ResourceLimitErrorUnableToConstituteImage 373
#define MGK_ResourceLimitErrorUnableToConvertFont 374
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 375
#define MGK_ResourceLimitErrorUnableToCreateColormap 376
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 377
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 378
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 379
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 380
#define MGK_ResourceLimitErrorUnableToCreateXWindow 381
#define MGK_ResourceLimitErrorUnableToCropImage 382
#define MGK_ResourceLimitErrorUnableToDespeckleImage 383
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 384
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 385
#define MGK_ResourceLimitErrorUnableToDitherImage 386
#define MGK_ResourceLimitErrorUnableToDrawOnImage 387
#define MGK_ResourceLimitErrorUnableToEdgeImage 388
#define MGK_ResourceLimitErrorUnableToEmbossImage 389
#define MGK_ResourceLimitErrorUnableToEnhanceImage 390
#define MGK_ResourceLimitErrorUnableToFloodfillImage 391
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 392
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 393
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 394
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 395
#define MGK_ResourceLimitErrorUnableToLevelImage 396
#define MGK_ResourceLimitErrorUnableToMagnifyImage 397
#define MGK_ResourceLimitErrorUnableToManageColor 398
#define MGK_ResourceLimitErrorUnableToMapImage 399
#define MGK_ResourceLimitErrorUnableToMapImageSequence 400
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 401
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 402
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 403
#define MGK_ResourceLimitErrorUnableToNormalizeImage 404
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 405
#define MGK_ResourceLimitErrorUnableToQuantizeImage 406
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 407
#define MGK_ResourceLimitErrorUnableToReadTextChunk 408
#define MGK_ResourceLimitErrorUnableToReadXImage 409
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 410
#define MGK_ResourceLimitErrorUnableToResizeImage 411
#define MGK_ResourceLimitErrorUnableToRotateImage 412
#define MGK_ResourceLimitErrorUnableToSampleImage 413
#define MGK_ResourceLimitErrorUnableToScaleImage 414
#define MGK_ResourceLimitErrorUnableToSelectImage 415
#define MGK_ResourceLimitErrorUnableToSharpenImage 416
#define MGK_ResourceLimitErrorUnableToShaveImage 417
#define MGK_ResourceLimitErrorUnableToShearImage 418
#define MGK_ResourceLimitErrorUnableToSortImageColormap 419
#define MGK_ResourceLimitErrorUnableToThresholdImage 420
#define MGK_ResourceLimitErrorUnableToTransformColorspace 421
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 422
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 423
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 424
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 425
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 426
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 427
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 428
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 429
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 430
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 431
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 432
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 433
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 434
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 435
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 436
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 437
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 438
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 439
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 440
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 441
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 442
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 443
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 444
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 445
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 446
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 447
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 448
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 449
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 450
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 451
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 452
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 453
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 454
#define MGK_ResourceLimitFatalErrorUnableToConvertText 455
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 456
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 457
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 458
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 459
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 460
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 461
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 462
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 463
#define MGK_ResourceLimitWarningMemoryAllocationFailed 464
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 465
#define MGK_StreamErrorNoStreamHandlerIsDefined 466
#define MGK_StreamErrorPixelCacheIsNotOpen 467
#define MGK_StreamErrorUnableToAcquirePixelStream 468
#define MGK_StreamErrorUnableToSetPixelStream 469
#define MGK_StreamErrorUnableToSyncPixelStream 470
#define MGK_StreamFatalErrorDefault 471
#define MGK_StreamWarningDefault 472
#define MGK_TypeErrorFontSubstitutionRequired 473
#define MGK_TypeErrorUnableToGetTypeMetrics 474
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 475
#define MGK_TypeErrorUnableToReadFont 476
#define MGK_TypeErrorUnrecognizedFontEncoding 477
#define MGK_TypeFatalErrorDefault 478
#define MGK_TypeWarningDefault 479
#define MGK_WandErrorInvalidColormapIndex 480
#define MGK_WandErrorWandAPINotImplemented 481
#define MGK_WandErrorWandContainsNoImageIndexs 482
#define MGK_WandErrorWandContainsNoImages 483
#define MGK_XServerErrorColorIsNotKnownToServer 484
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 485
#define MGK_XServerErrorStandardColormapIsNotInitialized 486
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 487
#define MGK_XServerErrorUnableToCreateBitmap 488
#define MGK_XServerErrorUnableToCreateColormap 489
#define MGK_XServerErrorUnableToCreatePixmap 490
#define MGK_XServerErrorUnableToCreateProperty 491
#define MGK_XServerErrorUnableToCreateStandardColormap 492
#define MGK_XServerErrorUnableToDisplayImageInfo 493
#define MGK_XServerErrorUnableToGetProperty 494
#define MGK_XServerErrorUnableToGetStandardColormap 495
#define MGK_XServerErrorUnableToGetVisual 496
#define MGK_XServerErrorUnableToGrabMouse 497
#define MGK_XServerErrorUnableToLoadFont 498
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 499
#define MGK_XServerErrorUnableToOpenXServer 500
#define MGK_XServerErrorUnableToReadXAttributes 501
#define MGK_XServerErrorUnableToReadXWindowImage 502
#define MGK_XServerErrorUnrecognizedColormapType 503
#define MGK_XServerErrorUnrecognizedGravityType 504
#define MGK_XServerErrorUnrecognizedVisualSpecifier 505
#define MGK_XServerFatalErrorUnableToAllocateXHints 506
#define MGK_XServerFatalErrorUnableToCreateCursor 507
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 508
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 509
#define MGK_XServerFatalErrorUnableToCreateTextProperty 510
#define MGK_XServerFatalErrorUnableToCreateXImage 511
#define MGK_XServerFatalErrorUnableToCreateXPixmap 512
#define MGK_XServerFatalErrorUnableToCreateXWindow 513
#define MGK_XServerFatalErrorUnableToDisplayImage 514
#define MGK_XServerFatalErrorUnableToDitherImage 515
#define MGK_XServerFatalErrorUnableToGetPixelInfo 516
#define MGK_XServerFatalErrorUnableToGetVisual 517
#define MGK_XServerFatalErrorUnableToLoadFont 518
#define MGK_XServerFatalErrorUnableToMakeXWindow 519
#define MGK_XServerFatalErrorUnableToOpenXServer 520
#define MGK_XServerFatalErrorUnableToViewFonts 521
#define MGK_XServerWarningUnableToGetVisual 522
#define MGK_XServerWarningUsingDefaultVisual 523

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
    { "Coder/FatalError", 86, CoderFatalError },
    { "Coder/Warning", 87, CoderWarning },
    { "Configure/Error", 88, ConfigureError },
    { "Configure/FatalError", 95, ConfigureFatalError },
    { "Configure/Warning", 99, ConfigureWarning },
    { "Corrupt/Image/Error", 100, CorruptImageError },
    { "Corrupt/Image/FatalError", 137, CorruptImageFatalError },
    { "Corrupt/Image/Warning", 138, CorruptImageWarning },
    { "Delegate/Error", 148, DelegateError },
    { "Delegate/FatalError", 165, DelegateFatalError },
    { "Delegate/Warning", 166, DelegateWarning },
    { "Draw/Error", 167, DrawError },
    { "Draw/FatalError", 172, DrawFatalError },
    { "Draw/Warning", 173, DrawWarning },
    { "File/Open/Error", 176, FileOpenError },
    { "File/Open/FatalError", 179, FileOpenFatalError },
    { "File/Open/Warning", 180, FileOpenWarning },
    { "Image/Error", 181, ImageError },
    { "Image/FatalError", 212, ImageFatalError },
    { "Image/Warning", 213, ImageWarning },
    { "Missing/Delegate/Error", 214, MissingDelegateError },
    { "Missing/Delegate/FatalError", 226, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 227, MissingDelegateWarning },
    { "Module/Error", 228, ModuleError },
    { "Module/FatalError", 233, ModuleFatalError },
    { "Module/Warning", 234, ModuleWarning },
    { "Monitor/Error", 235, MonitorError },
    { "Monitor/FatalError", 236, MonitorFatalError },
    { "Monitor/Warning", 238, MonitorWarning },
    { "Option/Error", 239, OptionError },
    { "Option/FatalError", 324, OptionFatalError },
    { "Option/Warning", 346, OptionWarning },
    { "Registry/Error", 347, RegistryError },
    { "Registry/FatalError", 353, RegistryFatalError },
    { "Registry/Warning", 354, RegistryWarning },
    { "Resource/Limit/Error", 355, ResourceLimitError },
    { "Resource/Limit/FatalError", 421, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 463, ResourceLimitWarning },
    { "Stream/Error", 464, StreamError },
    { "Stream/FatalError", 470, StreamFatalError },
    { "Stream/Warning", 471, StreamWarning },
    { "Type/Error", 472, TypeError },
    { "Type/FatalError", 477, TypeFatalError },
    { "Type/Warning", 478, TypeWarning },
    { "Wand/Error", 479, WandError },
    { "XServer/Error", 483, XServerError },
    { "XServer/FatalError", 505, XServerFatalError },
    { "XServer/Warning", 521, XServerWarning },
    { 0, 523, UndefinedException }
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
    { "ZipCompressionNotSupported", 86 },
    { "Default", 87 },
    { "LosslessToLossyJPEGConversion", 88 },
    { "IncludeElementNestedTooDeeply", 89 },
    { "RegistryKeyLookupFailed", 90 },
    { "StringTokenLengthExceeded", 91 },
    { "UnableToAccessConfigureFile", 92 },
    { "UnableToAccessFontFile", 93 },
    { "UnableToAccessLogFile", 94 },
    { "UnableToAccessModuleFile", 95 },
    { "Default", 96 },
    { "UnableToChangeToWorkingDirectory", 97 },
    { "UnableToGetCurrentDirectory", 98 },
    { "UnableToRestoreCurrentDirectory", 99 },
    { "Default", 100 },
    { "AnErrorHasOccurredReadingFromFile", 101 },
    { "AnErrorHasOccurredWritingToFile", 102 },
    { "ColormapExceeds256Colors", 103 },
    { "CorruptImage", 104 },
    { "ImageFileDoesNotContainAnyImageData", 105 },
    { "ImageTypeNotSupported", 106 },
    { "ImproperImageHeader", 107 },
    { "InsufficientImageDataInFile", 108 },
    { "InvalidColormapIndex", 109 },
    { "InvalidFileFormatVersion", 110 },
    { "LengthAndFilesizeDoNotMatch", 111 },
    { "MissingImageChannel", 112 },
    { "NegativeOrZeroImageSize", 113 },
    { "NonOS2HeaderSizeError", 114 },
    { "NotEnoughTiles", 115 },
    { "StaticPlanesValueNotEqualToOne", 116 },
    { "SubsamplingRequiresEvenWidth", 117 },
    { "TooMuchImageDataInFile", 118 },
    { "UnableToReadColormapFromDumpFile", 119 },
    { "UnableToReadColorProfile", 120 },
    { "UnableToReadExtensionBlock", 121 },
    { "UnableToReadGenericProfile", 122 },
    { "UnableToReadImageData", 123 },
    { "UnableToReadImageHeader", 124 },
    { "UnableToReadIPTCProfile", 125 },
    { "UnableToReadPixmapFromDumpFile", 126 },
    { "UnableToReadSubImageData", 127 },
    { "UnableToReadVIDImage", 128 },
    { "UnableToReadWindowNameFromDumpFile", 129 },
    { "UnableToRunlengthDecodeImage", 130 },
    { "UnableToUncompressImage", 131 },
    { "UnexpectedEndOfFile", 132 },
    { "UnexpectedSamplingFactor", 133 },
    { "UnknownPatternType", 134 },
    { "UnrecognizedBitsPerPixel", 135 },
    { "UnrecognizedImageCompression", 136 },
    { "UnrecognizedXWDHeader", 137 },
    { "UnableToPersistKey", 138 },
    { "CompressionNotValid", 139 },
    { "ImproperImageHeader", 140 },
    { "LengthAndFilesizeDoNotMatch", 141 },
    { "NegativeOrZeroImageSize", 142 },
    { "NonOS2HeaderSizeError", 143 },
    { "SkipToSyncByte", 144 },
    { "StaticPlanesValueNotEqualToOne", 145 },
    { "UnrecognizedBitsPerPixel", 146 },
    { "UnrecognizedImageCompression", 147 },
    { "UnrecognizedNumberOfColors", 148 },
    { "DelegateFailed", 149 },
    { "FailedToAllocateArgumentList", 150 },
    { "FailedToAllocateGhostscriptInterpreter", 151 },
    { "FailedToComputeOutputSize", 152 },
    { "FailedToFindGhostscript", 153 },
    { "FailedToRenderFile", 154 },
    { "FailedToScanFile", 155 },
    { "NoTagFound", 156 },
    { "PostscriptDelegateFailed", 157 },
    { "UnableToCreateImage", 158 },
    { "UnableToCreateImageComponent", 159 },
    { "UnableToDecodeImageFile", 160 },
    { "UnableToEncodeImageFile", 161 },
    { "UnableToInitializeFPXLibrary", 162 },
    { "UnableToInitializeWMFLibrary", 163 },
    { "UnableToManageJP2Stream", 164 },
    { "UnableToWriteSVGFormat", 165 },
    { "Default", 166 },
    { "Default", 167 },
    { "AlreadyPushingPatternDefinition", 168 },
    { "NonconformingDrawingPrimitiveDefinition", 169 },
    { "TooManyCoordinates", 170 },
    { "UnableToPrint", 171 },
    { "UnbalancedGraphicContextPushPop", 172 },
    { "Default", 173 },
    { "NotARelativeURL", 174 },
    { "NotCurrentlyPushingPatternDefinition", 175 },
    { "URLNotFound", 176 },
    { "UnableToCreateTemporaryFile", 177 },
    { "UnableToOpenFile", 178 },
    { "UnableToWriteFile", 179 },
    { "Default", 180 },
    { "Default", 181 },
    { "AngleIsDiscontinuous", 182 },
    { "ColorspaceColorProfileMismatch", 183 },
    { "ImageColorspaceDiffers", 184 },
    { "ImageColorspaceMismatch", 185 },
    { "ImageDifferenceExceedsLimit", 186 },
    { "ImageDoesNotContainResolution", 187 },
    { "ImageOpacityDiffers", 188 },
    { "ImageSequenceIsRequired", 189 },
    { "ImageSizeDiffers", 190 },
    { "InvalidColormapIndex", 191 },
    { "LeftAndRightImageSizesDiffer", 192 },
    { "NoImagesWereFound", 193 },
    { "NoImagesWereLoaded", 194 },
    { "NoLocaleImageAttribute", 195 },
    { "TooManyClusters", 196 },
    { "UnableToAppendImage", 197 },
    { "UnableToAssignProfile", 198 },
    { "UnableToAverageImage", 199 },
    { "UnableToCoalesceImage", 200 },
    { "UnableToCompareImages", 201 },
    { "UnableToCreateImageMosaic", 202 },
    { "UnableToCreateStereoImage", 203 },
    { "UnableToDeconstructImageSequence", 204 },
    { "UnableToFlattenImage", 205 },
    { "UnableToGetClipMask", 206 },
    { "UnableToHandleImageChannel", 207 },
    { "UnableToResizeImage", 208 },
    { "UnableToSegmentImage", 209 },
    { "UnableToSetClipMask", 210 },
    { "UnableToShearImage", 211 },
    { "WidthOrHeightExceedsLimit", 212 },
    { "UnableToPersistKey", 213 },
    { "Default", 214 },
    { "DPSLibraryIsNotAvailable", 215 },
    { "FPXLibraryIsNotAvailable", 216 },
    { "FreeTypeLibraryIsNotAvailable", 217 },
    { "JPEGLibraryIsNotAvailable", 218 },
    { "LCMSLibraryIsNotAvailable", 219 },
    { "LZWEncodingNotEnabled", 220 },
    { "NoDecodeDelegateForThisImageFormat", 221 },
    { "NoEncodeDelegateForThisImageFormat", 222 },
    { "TIFFLibraryIsNotAvailable", 223 },
    { "XMLLibraryIsNotAvailable", 224 },
    { "XWindowLibraryIsNotAvailable", 225 },
    { "ZipLibraryIsNotAvailable", 226 },
    { "Default", 227 },
    { "Default", 228 },
    { "FailedToCloseModule", 229 },
    { "FailedToFindSymbol", 230 },
    { "UnableToLoadModule", 231 },
    { "UnableToRegisterImageFormat", 232 },
    { "UnrecognizedModule", 233 },
    { "UnableToInitializeModuleLoader", 234 },
    { "Default", 235 },
    { "Default", 236 },
    { "Default", 237 },
    { "UserRequestedTerminationBySignal", 238 },
    { "Default", 239 },
    { "BevelWidthIsNegative", 240 },
    { "ColorSeparatedImageRequired", 241 },
    { "FrameIsLessThanImageSize", 242 },
    { "GeometryDimensionsAreZero", 243 },
    { "GeometryDoesNotContainImage", 244 },
    { "HaldClutImageDimensionsInvalid", 245 },
    { "ImagesAreNotTheSameSize", 246 },
    { "ImageSizeMustExceedBevelWidth", 247 },
    { "ImageSmallerThanKernelWidth", 248 },
    { "ImageSmallerThanRadius", 249 },
    { "ImageWidthsOrHeightsDiffer", 250 },
    { "InputImagesAlreadySpecified", 251 },
    { "InvalidSubimageSpecification", 252 },
    { "KernelRadiusIsTooSmall", 253 },
    { "KernelWidthMustBeAnOddNumber", 254 },
    { "MatrixIsNotSquare", 255 },
    { "MatrixOrderOutOfRange", 256 },
    { "MissingAnImageFilename", 257 },
    { "MissingArgument", 258 },
    { "MustSpecifyAnImageName", 259 },
    { "MustSpecifyImageSize", 260 },
    { "NoBlobDefined", 261 },
    { "NoImagesDefined", 262 },
    { "NonzeroWidthAndHeightRequired", 263 },
    { "NoProfileNameWasGiven", 264 },
    { "NullBlobArgument", 265 },
    { "ReferenceImageRequired", 266 },
    { "ReferenceIsNotMyType", 267 },
    { "RegionAreaExceedsLimit", 268 },
    { "RequestDidNotReturnAnImage", 269 },
    { "SteganoImageRequired", 270 },
    { "StereoImageRequired", 271 },
    { "SubimageSpecificationReturnsNoImages", 272 },
    { "UnableToAddOrRemoveProfile", 273 },
    { "UnableToAverageImageSequence", 274 },
    { "UnableToBlurImage", 275 },
    { "UnableToChopImage", 276 },
    { "UnableToColorMatrixImage", 277 },
    { "UnableToConstituteImage", 278 },
    { "UnableToConvolveImage", 279 },
    { "UnableToEdgeImage", 280 },
    { "UnableToEqualizeImage", 281 },
    { "UnableToFilterImage", 282 },
    { "UnableToFormatImageMetadata", 283 },
    { "UnableToFrameImage", 284 },
    { "UnableToOilPaintImage", 285 },
    { "UnableToPaintImage", 286 },
    { "UnableToRaiseImage", 287 },
    { "UnableToSharpenImage", 288 },
    { "UnableToThresholdImage", 289 },
    { "UnableToWaveImage", 290 },
    { "UnrecognizedAttribute", 291 },
    { "UnrecognizedChannelType", 292 },
    { "UnrecognizedColor", 293 },
    { "UnrecognizedColormapType", 294 },
    { "UnrecognizedColorspace", 295 },
    { "UnrecognizedCommand", 296 },
    { "UnrecognizedComposeOperator", 297 },
    { "UnrecognizedDisposeMethod", 298 },
    { "UnrecognizedElement", 299 },
    { "UnrecognizedEndianType", 300 },
    { "UnrecognizedGravityType", 301 },
    { "UnrecognizedHighlightStyle", 302 },
    { "UnrecognizedImageCompression", 303 },
    { "UnrecognizedImageFilter", 304 },
    { "UnrecognizedImageFormat", 305 },
    { "UnrecognizedImageMode", 306 },
    { "UnrecognizedImageType", 307 },
    { "UnrecognizedIntentType", 308 },
    { "UnrecognizedInterlaceType", 309 },
    { "UnrecognizedListType", 310 },
    { "UnrecognizedMetric", 311 },
    { "UnrecognizedModeType", 312 },
    { "UnrecognizedNoiseType", 313 },
    { "UnrecognizedOperator", 314 },
    { "UnrecognizedOption", 315 },
    { "UnrecognizedPerlMagickMethod", 316 },
    { "UnrecognizedPixelMap", 317 },
    { "UnrecognizedPreviewType", 318 },
    { "UnrecognizedResourceType", 319 },
    { "UnrecognizedType", 320 },
    { "UnrecognizedUnitsType", 321 },
    { "UnrecognizedVirtualPixelMethod", 322 },
    { "UnsupportedSamplingFactor", 323 },
    { "UsageError", 324 },
    { "InvalidColorspaceType", 325 },
    { "InvalidEndianType", 326 },
    { "InvalidImageType", 327 },
    { "InvalidInterlaceType", 328 },
    { "MissingAnImageFilename", 329 },
    { "MissingArgument", 330 },
    { "NoImagesWereLoaded", 331 },
    { "OptionLengthExceedsLimit", 332 },
    { "RequestDidNotReturnAnImage", 333 },
    { "UnableToOpenXServer", 334 },
    { "UnableToPersistKey", 335 },
    { "UnrecognizedColormapType", 336 },
    { "UnrecognizedColorspaceType", 337 },
    { "UnrecognizedDisposeMethod", 338 },
    { "UnrecognizedEndianType", 339 },
    { "UnrecognizedFilterType", 340 },
    { "UnrecognizedImageCompressionType", 341 },
    { "UnrecognizedImageType", 342 },
    { "UnrecognizedInterlaceType", 343 },
    { "UnrecognizedOption", 344 },
    { "UnrecognizedResourceType", 345 },
    { "UnrecognizedVirtualPixelMethod", 346 },
    { "UnrecognizedColor", 347 },
    { "ImageExpected", 348 },
    { "ImageInfoExpected", 349 },
    { "StructureSizeMismatch", 350 },
    { "UnableToGetRegistryID", 351 },
    { "UnableToLocateImage", 352 },
    { "UnableToSetRegistry", 353 },
    { "Default", 354 },
    { "Default", 355 },
    { "CacheResourcesExhausted", 356 },
    { "ImagePixelLimitExceeded", 357 },
    { "MemoryAllocationFailed", 358 },
    { "NoPixelsDefinedInCache", 359 },
    { "PixelCacheAllocationFailed", 360 },
    { "UnableToAddColorProfile", 361 },
    { "UnableToAddGenericProfile", 362 },
    { "UnableToAddIPTCProfile", 363 },
    { "UnableToAllocateCoefficients", 364 },
    { "UnableToAllocateColormap", 365 },
    { "UnableToAllocateICCProfile", 366 },
    { "UnableToAllocateString", 367 },
    { "UnableToAnnotateImage", 368 },
    { "UnableToAverageImageSequence", 369 },
    { "UnableToCloneDrawingWand", 370 },
    { "UnableToCloneImage", 371 },
    { "UnableToComputeImageSignature", 372 },
    { "UnableToConstituteImage", 373 },
    { "UnableToConvertFont", 374 },
    { "UnableToConvertStringToTokens", 375 },
    { "UnableToCreateColormap", 376 },
    { "UnableToCreateColorTransform", 377 },
    { "UnableToCreateCommandWidget", 378 },
    { "UnableToCreateImageGroup", 379 },
    { "UnableToCreateImageMontage", 380 },
    { "UnableToCreateXWindow", 381 },
    { "UnableToCropImage", 382 },
    { "UnableToDespeckleImage", 383 },
    { "UnableToDetermineImageClass", 384 },
    { "UnableToDetermineTheNumberOfImageColors", 385 },
    { "UnableToDitherImage", 386 },
    { "UnableToDrawOnImage", 387 },
    { "UnableToEdgeImage", 388 },
    { "UnableToEmbossImage", 389 },
    { "UnableToEnhanceImage", 390 },
    { "UnableToFloodfillImage", 391 },
    { "UnableToGammaCorrectImage", 392 },
    { "UnableToGetBestIconSize", 393 },
    { "UnableToGetFromRegistry", 394 },
    { "UnableToGetPackageInfo", 395 },
    { "UnableToLevelImage", 396 },
    { "UnableToMagnifyImage", 397 },
    { "UnableToManageColor", 398 },
    { "UnableToMapImage", 399 },
    { "UnableToMapImageSequence", 400 },
    { "UnableToMedianFilterImage", 401 },
    { "UnableToMotionBlurImage", 402 },
    { "UnableToNoiseFilterImage", 403 },
    { "UnableToNormalizeImage", 404 },
    { "UnableToOpenColorProfile", 405 },
    { "UnableToQuantizeImage", 406 },
    { "UnableToQuantizeImageSequence", 407 },
    { "UnableToReadTextChunk", 408 },
    { "UnableToReadXImage", 409 },
    { "UnableToReadXServerColormap", 410 },
    { "UnableToResizeImage", 411 },
    { "UnableToRotateImage", 412 },
    { "UnableToSampleImage", 413 },
    { "UnableToScaleImage", 414 },
    { "UnableToSelectImage", 415 },
    { "UnableToSharpenImage", 416 },
    { "UnableToShaveImage", 417 },
    { "UnableToShearImage", 418 },
    { "UnableToSortImageColormap", 419 },
    { "UnableToThresholdImage", 420 },
    { "UnableToTransformColorspace", 421 },
    { "MemoryAllocationFailed", 422 },
    { "SemaporeOperationFailed", 423 },
    { "UnableToAllocateAscii85Info", 424 },
    { "UnableToAllocateCacheInfo", 425 },
    { "UnableToAllocateCacheView", 426 },
    { "UnableToAllocateColorInfo", 427 },
    { "UnableToAllocateDashPattern", 428 },
    { "UnableToAllocateDelegateInfo", 429 },
    { "UnableToAllocateDerivatives", 430 },
    { "UnableToAllocateDrawContext", 431 },
    { "UnableToAllocateDrawInfo", 432 },
    { "UnableToAllocateDrawingWand", 433 },
    { "UnableToAllocateGammaMap", 434 },
    { "UnableToAllocateImage", 435 },
    { "UnableToAllocateImagePixels", 436 },
    { "UnableToAllocateLogInfo", 437 },
    { "UnableToAllocateMagicInfo", 438 },
    { "UnableToAllocateMagickInfo", 439 },
    { "UnableToAllocateModuleInfo", 440 },
    { "UnableToAllocateMontageInfo", 441 },
    { "UnableToAllocateQuantizeInfo", 442 },
    { "UnableToAllocateRandomKernel", 443 },
    { "UnableToAllocateRegistryInfo", 444 },
    { "UnableToAllocateSemaphoreInfo", 445 },
    { "UnableToAllocateString", 446 },
    { "UnableToAllocateTypeInfo", 447 },
    { "UnableToAllocateWand", 448 },
    { "UnableToAnimateImageSequence", 449 },
    { "UnableToCloneBlobInfo", 450 },
    { "UnableToCloneCacheInfo", 451 },
    { "UnableToCloneImage", 452 },
    { "UnableToCloneImageInfo", 453 },
    { "UnableToConcatenateString", 454 },
    { "UnableToConvertText", 455 },
    { "UnableToCreateColormap", 456 },
    { "UnableToDestroySemaphore", 457 },
    { "UnableToDisplayImage", 458 },
    { "UnableToEscapeString", 459 },
    { "UnableToInitializeSemaphore", 460 },
    { "UnableToInterpretMSLImage", 461 },
    { "UnableToLockSemaphore", 462 },
    { "UnableToUnlockSemaphore", 463 },
    { "MemoryAllocationFailed", 464 },
    { "ImageDoesNotContainTheStreamGeometry", 465 },
    { "NoStreamHandlerIsDefined", 466 },
    { "PixelCacheIsNotOpen", 467 },
    { "UnableToAcquirePixelStream", 468 },
    { "UnableToSetPixelStream", 469 },
    { "UnableToSyncPixelStream", 470 },
    { "Default", 471 },
    { "Default", 472 },
    { "FontSubstitutionRequired", 473 },
    { "UnableToGetTypeMetrics", 474 },
    { "UnableToInitializeFreetypeLibrary", 475 },
    { "UnableToReadFont", 476 },
    { "UnrecognizedFontEncoding", 477 },
    { "Default", 478 },
    { "Default", 479 },
    { "InvalidColormapIndex", 480 },
    { "WandAPINotImplemented", 481 },
    { "WandContainsNoImageIndexs", 482 },
    { "WandContainsNoImages", 483 },
    { "ColorIsNotKnownToServer", 484 },
    { "NoWindowWithSpecifiedIDExists", 485 },
    { "StandardColormapIsNotInitialized", 486 },
    { "UnableToConnectToRemoteDisplay", 487 },
    { "UnableToCreateBitmap", 488 },
    { "UnableToCreateColormap", 489 },
    { "UnableToCreatePixmap", 490 },
    { "UnableToCreateProperty", 491 },
    { "UnableToCreateStandardColormap", 492 },
    { "UnableToDisplayImageInfo", 493 },
    { "UnableToGetProperty", 494 },
    { "UnableToGetStandardColormap", 495 },
    { "UnableToGetVisual", 496 },
    { "UnableToGrabMouse", 497 },
    { "UnableToLoadFont", 498 },
    { "UnableToMatchVisualToStandardColormap", 499 },
    { "UnableToOpenXServer", 500 },
    { "UnableToReadXAttributes", 501 },
    { "UnableToReadXWindowImage", 502 },
    { "UnrecognizedColormapType", 503 },
    { "UnrecognizedGravityType", 504 },
    { "UnrecognizedVisualSpecifier", 505 },
    { "UnableToAllocateXHints", 506 },
    { "UnableToCreateCursor", 507 },
    { "UnableToCreateGraphicContext", 508 },
    { "UnableToCreateStandardColormap", 509 },
    { "UnableToCreateTextProperty", 510 },
    { "UnableToCreateXImage", 511 },
    { "UnableToCreateXPixmap", 512 },
    { "UnableToCreateXWindow", 513 },
    { "UnableToDisplayImage", 514 },
    { "UnableToDitherImage", 515 },
    { "UnableToGetPixelInfo", 516 },
    { "UnableToGetVisual", 517 },
    { "UnableToLoadFont", 518 },
    { "UnableToMakeXWindow", 519 },
    { "UnableToOpenXServer", 520 },
    { "UnableToViewFonts", 521 },
    { "UnableToGetVisual", 522 },
    { "UsingDefaultVisual", 523 },
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
    "Unrecognized number of colors",
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
    "Image pixel limit exceeded (see -limit Pixels)",
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
