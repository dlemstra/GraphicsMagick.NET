#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 552

#define MGK_BlobErrorUnableToCreateBlob 1
#define MGK_BlobErrorUnableToObtainOffset 2
#define MGK_BlobErrorUnableToOpenFile 3
#define MGK_BlobErrorUnableToReadFile 4
#define MGK_BlobErrorUnableToReadToOffset 5
#define MGK_BlobErrorUnableToSeekToOffset 6
#define MGK_BlobErrorUnableToWriteBlob 7
#define MGK_BlobErrorUnrecognizedImageFormat 8
#define MGK_BlobFatalErrorDefault 9
#define MGK_BlobWarningDefault 10
#define MGK_CacheErrorInconsistentPersistentCacheDepth 11
#define MGK_CacheErrorPixelCacheIsNotOpen 12
#define MGK_CacheErrorUnableToAllocateCacheView 13
#define MGK_CacheErrorUnableToCloneCache 14
#define MGK_CacheErrorUnableToExtendCache 15
#define MGK_CacheErrorUnableToGetCacheNexus 16
#define MGK_CacheErrorUnableToGetPixelsFromCache 17
#define MGK_CacheErrorUnableToOpenCache 18
#define MGK_CacheErrorUnableToPeristPixelCache 19
#define MGK_CacheErrorUnableToReadPixelCache 20
#define MGK_CacheErrorUnableToSyncCache 21
#define MGK_CacheFatalErrorDiskAllocationFailed 22
#define MGK_CacheFatalErrorUnableToExtendPixelCache 23
#define MGK_CacheWarningDefault 24
#define MGK_CoderErrorColormapTooLarge 25
#define MGK_CoderErrorColormapTypeNotSupported 26
#define MGK_CoderErrorColorspaceModelIsNotSupported 27
#define MGK_CoderErrorColorTypeNotSupported 28
#define MGK_CoderErrorCompressionNotValid 29
#define MGK_CoderErrorDataEncodingSchemeIsNotSupported 30
#define MGK_CoderErrorDataStorageTypeIsNotSupported 31
#define MGK_CoderErrorDeltaPNGNotSupported 32
#define MGK_CoderErrorEncryptedWPGImageFileNotSupported 33
#define MGK_CoderErrorFractalCompressionNotSupported 34
#define MGK_CoderErrorImageColumnOrRowSizeIsNotSupported 35
#define MGK_CoderErrorImageDoesNotHaveAMatteChannel 36
#define MGK_CoderErrorImageIsNotTiled 37
#define MGK_CoderErrorImageTypeNotSupported 38
#define MGK_CoderErrorIncompatibleSizeOfDouble 39
#define MGK_CoderErrorIrregularChannelGeometryNotSupported 40
#define MGK_CoderErrorJNGCompressionNotSupported 41
#define MGK_CoderErrorJPEGCompressionNotSupported 42
#define MGK_CoderErrorJPEGEmbeddingFailed 43
#define MGK_CoderErrorLocationTypeIsNotSupported 44
#define MGK_CoderErrorMapStorageTypeIsNotSupported 45
#define MGK_CoderErrorMSBByteOrderNotSupported 46
#define MGK_CoderErrorMultidimensionalMatricesAreNotSupported 47
#define MGK_CoderErrorMultipleRecordListNotSupported 48
#define MGK_CoderErrorNo8BIMDataIsAvailable 49
#define MGK_CoderErrorNoAPP1DataIsAvailable 50
#define MGK_CoderErrorNoBitmapOnClipboard 51
#define MGK_CoderErrorNoColorProfileAvailable 52
#define MGK_CoderErrorNoDataReturned 53
#define MGK_CoderErrorNoImageVectorGraphics 54
#define MGK_CoderErrorNoIPTCInfoWasFound 55
#define MGK_CoderErrorNoIPTCProfileAvailable 56
#define MGK_CoderErrorNumberOfImagesIsNotSupported 57
#define MGK_CoderErrorOnlyContinuousTonePictureSupported 58
#define MGK_CoderErrorOnlyLevelZerofilesSupported 59
#define MGK_CoderErrorPNGCompressionNotSupported 60
#define MGK_CoderErrorPNGLibraryTooOld 61
#define MGK_CoderErrorRLECompressionNotSupported 62
#define MGK_CoderErrorSubsamplingRequiresEvenWidth 63
#define MGK_CoderErrorUnableToCopyProfile 64
#define MGK_CoderErrorUnableToCreateADC 65
#define MGK_CoderErrorUnableToCreateBitmap 66
#define MGK_CoderErrorUnableToDecompressImage 67
#define MGK_CoderErrorUnableToInitializeFPXLibrary 68
#define MGK_CoderErrorUnableToOpenBlob 69
#define MGK_CoderErrorUnableToReadAspectRatio 70
#define MGK_CoderErrorUnableToReadCIELABImages 71
#define MGK_CoderErrorUnableToReadSummaryInfo 72
#define MGK_CoderErrorUnableToSetAffineMatrix 73
#define MGK_CoderErrorUnableToSetAspectRatio 74
#define MGK_CoderErrorUnableToSetColorTwist 75
#define MGK_CoderErrorUnableToSetContrast 76
#define MGK_CoderErrorUnableToSetFilteringValue 77
#define MGK_CoderErrorUnableToSetImageComments 78
#define MGK_CoderErrorUnableToSetImageTitle 79
#define MGK_CoderErrorUnableToSetJPEGLevel 80
#define MGK_CoderErrorUnableToSetRegionOfInterest 81
#define MGK_CoderErrorUnableToSetSummaryInfo 82
#define MGK_CoderErrorUnableToTranslateText 83
#define MGK_CoderErrorUnableToWriteMPEGParameters 84
#define MGK_CoderErrorUnableToWriteTemporaryFile 85
#define MGK_CoderErrorUnableToZipCompressImage 86
#define MGK_CoderErrorUnsupportedBitsPerSample 87
#define MGK_CoderErrorUnsupportedCellTypeInTheMatrix 88
#define MGK_CoderErrorWebPDecodingFailedUserAbort 89
#define MGK_CoderErrorWebPEncodingFailed 90
#define MGK_CoderErrorWebPEncodingFailedBadDimension 91
#define MGK_CoderErrorWebPEncodingFailedBadWrite 92
#define MGK_CoderErrorWebPEncodingFailedBitstreamOutOfMemory 93
#define MGK_CoderErrorWebPEncodingFailedFileTooBig 94
#define MGK_CoderErrorWebPEncodingFailedInvalidConfiguration 95
#define MGK_CoderErrorWebPEncodingFailedNULLParameter 96
#define MGK_CoderErrorWebPEncodingFailedOutOfMemory 97
#define MGK_CoderErrorWebPEncodingFailedPartition0Overflow 98
#define MGK_CoderErrorWebPEncodingFailedPartitionOverflow 99
#define MGK_CoderErrorWebPEncodingFailedUserAbort 100
#define MGK_CoderErrorWebPInvalidConfiguration 101
#define MGK_CoderErrorWebPInvalidParameter 102
#define MGK_CoderErrorZipCompressionNotSupported 103
#define MGK_CoderFatalErrorDefault 104
#define MGK_CoderWarningLosslessToLossyJPEGConversion 105
#define MGK_ConfigureErrorIncludeElementNestedTooDeeply 106
#define MGK_ConfigureErrorRegistryKeyLookupFailed 107
#define MGK_ConfigureErrorStringTokenLengthExceeded 108
#define MGK_ConfigureErrorUnableToAccessConfigureFile 109
#define MGK_ConfigureErrorUnableToAccessFontFile 110
#define MGK_ConfigureErrorUnableToAccessLogFile 111
#define MGK_ConfigureErrorUnableToAccessModuleFile 112
#define MGK_ConfigureFatalErrorDefault 113
#define MGK_ConfigureFatalErrorUnableToChangeToWorkingDirectory 114
#define MGK_ConfigureFatalErrorUnableToGetCurrentDirectory 115
#define MGK_ConfigureFatalErrorUnableToRestoreCurrentDirectory 116
#define MGK_ConfigureWarningDefault 117
#define MGK_CorruptImageErrorAnErrorHasOccurredReadingFromFile 118
#define MGK_CorruptImageErrorAnErrorHasOccurredWritingToFile 119
#define MGK_CorruptImageErrorColormapExceedsColorsLimit 120
#define MGK_CorruptImageErrorCompressionNotValid 121
#define MGK_CorruptImageErrorCorruptImage 122
#define MGK_CorruptImageErrorImageFileDoesNotContainAnyImageData 123
#define MGK_CorruptImageErrorImageTypeNotSupported 124
#define MGK_CorruptImageErrorImproperImageHeader 125
#define MGK_CorruptImageErrorInsufficientImageDataInFile 126
#define MGK_CorruptImageErrorInvalidColormapIndex 127
#define MGK_CorruptImageErrorInvalidFileFormatVersion 128
#define MGK_CorruptImageErrorLengthAndFilesizeDoNotMatch 129
#define MGK_CorruptImageErrorMissingImageChannel 130
#define MGK_CorruptImageErrorNegativeOrZeroImageSize 131
#define MGK_CorruptImageErrorNonOS2HeaderSizeError 132
#define MGK_CorruptImageErrorNotEnoughTiles 133
#define MGK_CorruptImageErrorStaticPlanesValueNotEqualToOne 134
#define MGK_CorruptImageErrorSubsamplingRequiresEvenWidth 135
#define MGK_CorruptImageErrorTooMuchImageDataInFile 136
#define MGK_CorruptImageErrorUnableToReadColormapFromDumpFile 137
#define MGK_CorruptImageErrorUnableToReadColorProfile 138
#define MGK_CorruptImageErrorUnableToReadExtensionBlock 139
#define MGK_CorruptImageErrorUnableToReadGenericProfile 140
#define MGK_CorruptImageErrorUnableToReadImageData 141
#define MGK_CorruptImageErrorUnableToReadImageHeader 142
#define MGK_CorruptImageErrorUnableToReadIPTCProfile 143
#define MGK_CorruptImageErrorUnableToReadPixmapFromDumpFile 144
#define MGK_CorruptImageErrorUnableToReadSubImageData 145
#define MGK_CorruptImageErrorUnableToReadVIDImage 146
#define MGK_CorruptImageErrorUnableToReadWindowNameFromDumpFile 147
#define MGK_CorruptImageErrorUnableToRunlengthDecodeImage 148
#define MGK_CorruptImageErrorUnableToUncompressImage 149
#define MGK_CorruptImageErrorUnexpectedEndOfFile 150
#define MGK_CorruptImageErrorUnexpectedSamplingFactor 151
#define MGK_CorruptImageErrorUnknownPatternType 152
#define MGK_CorruptImageErrorUnrecognizedBitsPerPixel 153
#define MGK_CorruptImageErrorUnrecognizedImageCompression 154
#define MGK_CorruptImageErrorUnrecognizedNumberOfColors 155
#define MGK_CorruptImageErrorUnrecognizedXWDHeader 156
#define MGK_CorruptImageErrorUnsupportedBitsPerSample 157
#define MGK_CorruptImageErrorUnsupportedNumberOfPlanes 158
#define MGK_CorruptImageFatalErrorUnableToPersistKey 159
#define MGK_CorruptImageWarningCompressionNotValid 160
#define MGK_CorruptImageWarningImproperImageHeader 161
#define MGK_CorruptImageWarningLengthAndFilesizeDoNotMatch 162
#define MGK_CorruptImageWarningNegativeOrZeroImageSize 163
#define MGK_CorruptImageWarningNonOS2HeaderSizeError 164
#define MGK_CorruptImageWarningSkipToSyncByte 165
#define MGK_CorruptImageWarningStaticPlanesValueNotEqualToOne 166
#define MGK_CorruptImageWarningUnrecognizedBitsPerPixel 167
#define MGK_CorruptImageWarningUnrecognizedImageCompression 168
#define MGK_DelegateErrorDelegateFailed 169
#define MGK_DelegateErrorFailedToAllocateArgumentList 170
#define MGK_DelegateErrorFailedToAllocateGhostscriptInterpreter 171
#define MGK_DelegateErrorFailedToComputeOutputSize 172
#define MGK_DelegateErrorFailedToFindGhostscript 173
#define MGK_DelegateErrorFailedToRenderFile 174
#define MGK_DelegateErrorFailedToScanFile 175
#define MGK_DelegateErrorNoTagFound 176
#define MGK_DelegateErrorPostscriptDelegateFailed 177
#define MGK_DelegateErrorUnableToCreateImage 178
#define MGK_DelegateErrorUnableToCreateImageComponent 179
#define MGK_DelegateErrorUnableToDecodeImageFile 180
#define MGK_DelegateErrorUnableToEncodeImageFile 181
#define MGK_DelegateErrorUnableToInitializeFPXLibrary 182
#define MGK_DelegateErrorUnableToInitializeWMFLibrary 183
#define MGK_DelegateErrorUnableToManageJP2Stream 184
#define MGK_DelegateErrorUnableToWriteSVGFormat 185
#define MGK_DelegateErrorWebPABIMismatch 186
#define MGK_DelegateFatalErrorDefault 187
#define MGK_DelegateWarningDefault 188
#define MGK_DrawErrorAlreadyPushingPatternDefinition 189
#define MGK_DrawErrorDrawingRecursionDetected 190
#define MGK_DrawErrorFloatValueConversionError 191
#define MGK_DrawErrorIntegerValueConversionError 192
#define MGK_DrawErrorInvalidPrimitiveArgument 193
#define MGK_DrawErrorNonconformingDrawingPrimitiveDefinition 194
#define MGK_DrawErrorTooManyCoordinates 195
#define MGK_DrawErrorUnableToPrint 196
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 197
#define MGK_DrawErrorVectorPathTruncated 198
#define MGK_DrawFatalErrorDefault 199
#define MGK_DrawWarningNotARelativeURL 200
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 201
#define MGK_DrawWarningURLNotFound 202
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 203
#define MGK_FileOpenErrorUnableToOpenFile 204
#define MGK_FileOpenErrorUnableToWriteFile 205
#define MGK_FileOpenFatalErrorDefault 206
#define MGK_FileOpenWarningDefault 207
#define MGK_ImageErrorAngleIsDiscontinuous 208
#define MGK_ImageErrorColorspaceColorProfileMismatch 209
#define MGK_ImageErrorImageColorspaceDiffers 210
#define MGK_ImageErrorImageColorspaceMismatch 211
#define MGK_ImageErrorImageDifferenceExceedsLimit 212
#define MGK_ImageErrorImageDoesNotContainResolution 213
#define MGK_ImageErrorImageOpacityDiffers 214
#define MGK_ImageErrorImageSequenceIsRequired 215
#define MGK_ImageErrorImageSizeDiffers 216
#define MGK_ImageErrorInvalidColormapIndex 217
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 218
#define MGK_ImageErrorNoImagesWereFound 219
#define MGK_ImageErrorNoImagesWereLoaded 220
#define MGK_ImageErrorNoLocaleImageAttribute 221
#define MGK_ImageErrorTooManyClusters 222
#define MGK_ImageErrorUnableToAppendImage 223
#define MGK_ImageErrorUnableToAssignProfile 224
#define MGK_ImageErrorUnableToAverageImage 225
#define MGK_ImageErrorUnableToCoalesceImage 226
#define MGK_ImageErrorUnableToCompareImages 227
#define MGK_ImageErrorUnableToCreateImageMosaic 228
#define MGK_ImageErrorUnableToCreateStereoImage 229
#define MGK_ImageErrorUnableToDeconstructImageSequence 230
#define MGK_ImageErrorUnableToFlattenImage 231
#define MGK_ImageErrorUnableToGetClipMask 232
#define MGK_ImageErrorUnableToHandleImageChannel 233
#define MGK_ImageErrorUnableToResizeImage 234
#define MGK_ImageErrorUnableToSegmentImage 235
#define MGK_ImageErrorUnableToSetClipMask 236
#define MGK_ImageErrorUnableToShearImage 237
#define MGK_ImageErrorWidthOrHeightExceedsLimit 238
#define MGK_ImageFatalErrorUnableToPersistKey 239
#define MGK_ImageWarningDefault 240
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 241
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 242
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 243
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 244
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 245
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 246
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 247
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 248
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 249
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 250
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 251
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 252
#define MGK_MissingDelegateFatalErrorDefault 253
#define MGK_MissingDelegateWarningDefault 254
#define MGK_ModuleErrorFailedToCloseModule 255
#define MGK_ModuleErrorFailedToFindSymbol 256
#define MGK_ModuleErrorUnableToLoadModule 257
#define MGK_ModuleErrorUnableToRegisterImageFormat 258
#define MGK_ModuleErrorUnrecognizedModule 259
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 260
#define MGK_ModuleWarningDefault 261
#define MGK_MonitorErrorDefault 262
#define MGK_MonitorFatalErrorDefault 263
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 264
#define MGK_MonitorWarningDefault 265
#define MGK_OptionErrorBevelWidthIsNegative 266
#define MGK_OptionErrorColorSeparatedImageRequired 267
#define MGK_OptionErrorFrameIsLessThanImageSize 268
#define MGK_OptionErrorGeometryDimensionsAreZero 269
#define MGK_OptionErrorGeometryDoesNotContainImage 270
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 271
#define MGK_OptionErrorImagesAreNotTheSameSize 272
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 273
#define MGK_OptionErrorImageSmallerThanKernelWidth 274
#define MGK_OptionErrorImageSmallerThanRadius 275
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 276
#define MGK_OptionErrorInputImagesAlreadySpecified 277
#define MGK_OptionErrorInvalidSubimageSpecification 278
#define MGK_OptionErrorKernelRadiusIsTooSmall 279
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 280
#define MGK_OptionErrorMatrixIsNotSquare 281
#define MGK_OptionErrorMatrixOrderOutOfRange 282
#define MGK_OptionErrorMissingAnImageFilename 283
#define MGK_OptionErrorMissingArgument 284
#define MGK_OptionErrorMustSpecifyAnImageName 285
#define MGK_OptionErrorMustSpecifyImageSize 286
#define MGK_OptionErrorNoBlobDefined 287
#define MGK_OptionErrorNoImagesDefined 288
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 289
#define MGK_OptionErrorNoProfileNameWasGiven 290
#define MGK_OptionErrorNullBlobArgument 291
#define MGK_OptionErrorReferenceImageRequired 292
#define MGK_OptionErrorReferenceIsNotMyType 293
#define MGK_OptionErrorRegionAreaExceedsLimit 294
#define MGK_OptionErrorRequestDidNotReturnAnImage 295
#define MGK_OptionErrorSteganoImageRequired 296
#define MGK_OptionErrorStereoImageRequired 297
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 298
#define MGK_OptionErrorUnableToAddOrRemoveProfile 299
#define MGK_OptionErrorUnableToAverageImageSequence 300
#define MGK_OptionErrorUnableToBlurImage 301
#define MGK_OptionErrorUnableToChopImage 302
#define MGK_OptionErrorUnableToColorMatrixImage 303
#define MGK_OptionErrorUnableToConstituteImage 304
#define MGK_OptionErrorUnableToConvolveImage 305
#define MGK_OptionErrorUnableToEdgeImage 306
#define MGK_OptionErrorUnableToEqualizeImage 307
#define MGK_OptionErrorUnableToFilterImage 308
#define MGK_OptionErrorUnableToFormatImageMetadata 309
#define MGK_OptionErrorUnableToFrameImage 310
#define MGK_OptionErrorUnableToOilPaintImage 311
#define MGK_OptionErrorUnableToPaintImage 312
#define MGK_OptionErrorUnableToRaiseImage 313
#define MGK_OptionErrorUnableToSharpenImage 314
#define MGK_OptionErrorUnableToThresholdImage 315
#define MGK_OptionErrorUnableToWaveImage 316
#define MGK_OptionErrorUnrecognizedAttribute 317
#define MGK_OptionErrorUnrecognizedChannelType 318
#define MGK_OptionErrorUnrecognizedColor 319
#define MGK_OptionErrorUnrecognizedColormapType 320
#define MGK_OptionErrorUnrecognizedColorspace 321
#define MGK_OptionErrorUnrecognizedCommand 322
#define MGK_OptionErrorUnrecognizedComposeOperator 323
#define MGK_OptionErrorUnrecognizedDisposeMethod 324
#define MGK_OptionErrorUnrecognizedElement 325
#define MGK_OptionErrorUnrecognizedEndianType 326
#define MGK_OptionErrorUnrecognizedGravityType 327
#define MGK_OptionErrorUnrecognizedHighlightStyle 328
#define MGK_OptionErrorUnrecognizedImageCompression 329
#define MGK_OptionErrorUnrecognizedImageFilter 330
#define MGK_OptionErrorUnrecognizedImageFormat 331
#define MGK_OptionErrorUnrecognizedImageMode 332
#define MGK_OptionErrorUnrecognizedImageType 333
#define MGK_OptionErrorUnrecognizedIntentType 334
#define MGK_OptionErrorUnrecognizedInterlaceType 335
#define MGK_OptionErrorUnrecognizedListType 336
#define MGK_OptionErrorUnrecognizedMetric 337
#define MGK_OptionErrorUnrecognizedModeType 338
#define MGK_OptionErrorUnrecognizedNoiseType 339
#define MGK_OptionErrorUnrecognizedOperator 340
#define MGK_OptionErrorUnrecognizedOption 341
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 342
#define MGK_OptionErrorUnrecognizedPixelMap 343
#define MGK_OptionErrorUnrecognizedPreviewType 344
#define MGK_OptionErrorUnrecognizedResourceType 345
#define MGK_OptionErrorUnrecognizedType 346
#define MGK_OptionErrorUnrecognizedUnitsType 347
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 348
#define MGK_OptionErrorUnsupportedSamplingFactor 349
#define MGK_OptionErrorUsageError 350
#define MGK_OptionFatalErrorInvalidColorspaceType 351
#define MGK_OptionFatalErrorInvalidEndianType 352
#define MGK_OptionFatalErrorInvalidImageType 353
#define MGK_OptionFatalErrorInvalidInterlaceType 354
#define MGK_OptionFatalErrorMissingAnImageFilename 355
#define MGK_OptionFatalErrorMissingArgument 356
#define MGK_OptionFatalErrorNoImagesWereLoaded 357
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 358
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 359
#define MGK_OptionFatalErrorUnableToOpenXServer 360
#define MGK_OptionFatalErrorUnableToPersistKey 361
#define MGK_OptionFatalErrorUnrecognizedColormapType 362
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 363
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 364
#define MGK_OptionFatalErrorUnrecognizedEndianType 365
#define MGK_OptionFatalErrorUnrecognizedFilterType 366
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 367
#define MGK_OptionFatalErrorUnrecognizedImageType 368
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 369
#define MGK_OptionFatalErrorUnrecognizedOption 370
#define MGK_OptionFatalErrorUnrecognizedResourceType 371
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 372
#define MGK_OptionWarningUnrecognizedColor 373
#define MGK_RegistryErrorImageExpected 374
#define MGK_RegistryErrorImageInfoExpected 375
#define MGK_RegistryErrorStructureSizeMismatch 376
#define MGK_RegistryErrorUnableToGetRegistryID 377
#define MGK_RegistryErrorUnableToLocateImage 378
#define MGK_RegistryErrorUnableToSetRegistry 379
#define MGK_RegistryFatalErrorDefault 380
#define MGK_RegistryWarningDefault 381
#define MGK_ResourceLimitErrorCacheResourcesExhausted 382
#define MGK_ResourceLimitErrorImagePixelHeightLimitExceeded 383
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 384
#define MGK_ResourceLimitErrorImagePixelWidthLimitExceeded 385
#define MGK_ResourceLimitErrorMemoryAllocationFailed 386
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 387
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 388
#define MGK_ResourceLimitErrorUnableToAddColorProfile 389
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 390
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 391
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 392
#define MGK_ResourceLimitErrorUnableToAllocateColormap 393
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 394
#define MGK_ResourceLimitErrorUnableToAllocateString 395
#define MGK_ResourceLimitErrorUnableToAnnotateImage 396
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 397
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 398
#define MGK_ResourceLimitErrorUnableToCloneImage 399
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 400
#define MGK_ResourceLimitErrorUnableToConstituteImage 401
#define MGK_ResourceLimitErrorUnableToConvertFont 402
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 403
#define MGK_ResourceLimitErrorUnableToCreateColormap 404
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 405
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 406
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 407
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 408
#define MGK_ResourceLimitErrorUnableToCreateXWindow 409
#define MGK_ResourceLimitErrorUnableToCropImage 410
#define MGK_ResourceLimitErrorUnableToDespeckleImage 411
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 412
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 413
#define MGK_ResourceLimitErrorUnableToDitherImage 414
#define MGK_ResourceLimitErrorUnableToDrawOnImage 415
#define MGK_ResourceLimitErrorUnableToEdgeImage 416
#define MGK_ResourceLimitErrorUnableToEmbossImage 417
#define MGK_ResourceLimitErrorUnableToEnhanceImage 418
#define MGK_ResourceLimitErrorUnableToFloodfillImage 419
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 420
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 421
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 422
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 423
#define MGK_ResourceLimitErrorUnableToLevelImage 424
#define MGK_ResourceLimitErrorUnableToMagnifyImage 425
#define MGK_ResourceLimitErrorUnableToManageColor 426
#define MGK_ResourceLimitErrorUnableToMapImage 427
#define MGK_ResourceLimitErrorUnableToMapImageSequence 428
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 429
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 430
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 431
#define MGK_ResourceLimitErrorUnableToNormalizeImage 432
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 433
#define MGK_ResourceLimitErrorUnableToQuantizeImage 434
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 435
#define MGK_ResourceLimitErrorUnableToReadTextChunk 436
#define MGK_ResourceLimitErrorUnableToReadXImage 437
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 438
#define MGK_ResourceLimitErrorUnableToResizeImage 439
#define MGK_ResourceLimitErrorUnableToRotateImage 440
#define MGK_ResourceLimitErrorUnableToSampleImage 441
#define MGK_ResourceLimitErrorUnableToScaleImage 442
#define MGK_ResourceLimitErrorUnableToSelectImage 443
#define MGK_ResourceLimitErrorUnableToSharpenImage 444
#define MGK_ResourceLimitErrorUnableToShaveImage 445
#define MGK_ResourceLimitErrorUnableToShearImage 446
#define MGK_ResourceLimitErrorUnableToSortImageColormap 447
#define MGK_ResourceLimitErrorUnableToThresholdImage 448
#define MGK_ResourceLimitErrorUnableToTransformColorspace 449
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 450
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 451
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 452
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 453
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 454
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 455
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 456
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 457
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 458
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 459
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 460
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 461
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 462
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 463
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 464
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 465
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 466
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 467
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 468
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 469
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 470
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 471
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 472
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 473
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 474
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 475
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 476
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 477
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 478
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 479
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 480
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 481
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 482
#define MGK_ResourceLimitFatalErrorUnableToConvertText 483
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 484
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 485
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 486
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 487
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 488
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 489
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 490
#define MGK_ResourceLimitFatalErrorUnableToObtainRandomEntropy 491
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 492
#define MGK_ResourceLimitWarningMemoryAllocationFailed 493
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 494
#define MGK_StreamErrorNoStreamHandlerIsDefined 495
#define MGK_StreamErrorPixelCacheIsNotOpen 496
#define MGK_StreamErrorUnableToAcquirePixelStream 497
#define MGK_StreamErrorUnableToSetPixelStream 498
#define MGK_StreamErrorUnableToSyncPixelStream 499
#define MGK_StreamFatalErrorDefault 500
#define MGK_StreamWarningDefault 501
#define MGK_TypeErrorFontSubstitutionRequired 502
#define MGK_TypeErrorUnableToGetTypeMetrics 503
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 504
#define MGK_TypeErrorUnableToReadFont 505
#define MGK_TypeErrorUnrecognizedFontEncoding 506
#define MGK_TypeFatalErrorDefault 507
#define MGK_TypeWarningDefault 508
#define MGK_WandErrorInvalidColormapIndex 509
#define MGK_WandErrorWandAPINotImplemented 510
#define MGK_WandErrorWandContainsNoImageIndexs 511
#define MGK_WandErrorWandContainsNoImages 512
#define MGK_XServerErrorColorIsNotKnownToServer 513
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 514
#define MGK_XServerErrorStandardColormapIsNotInitialized 515
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 516
#define MGK_XServerErrorUnableToCreateBitmap 517
#define MGK_XServerErrorUnableToCreateColormap 518
#define MGK_XServerErrorUnableToCreatePixmap 519
#define MGK_XServerErrorUnableToCreateProperty 520
#define MGK_XServerErrorUnableToCreateStandardColormap 521
#define MGK_XServerErrorUnableToDisplayImageInfo 522
#define MGK_XServerErrorUnableToGetProperty 523
#define MGK_XServerErrorUnableToGetStandardColormap 524
#define MGK_XServerErrorUnableToGetVisual 525
#define MGK_XServerErrorUnableToGrabMouse 526
#define MGK_XServerErrorUnableToLoadFont 527
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 528
#define MGK_XServerErrorUnableToOpenXServer 529
#define MGK_XServerErrorUnableToReadXAttributes 530
#define MGK_XServerErrorUnableToReadXWindowImage 531
#define MGK_XServerErrorUnrecognizedColormapType 532
#define MGK_XServerErrorUnrecognizedGravityType 533
#define MGK_XServerErrorUnrecognizedVisualSpecifier 534
#define MGK_XServerFatalErrorUnableToAllocateXHints 535
#define MGK_XServerFatalErrorUnableToCreateCursor 536
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 537
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 538
#define MGK_XServerFatalErrorUnableToCreateTextProperty 539
#define MGK_XServerFatalErrorUnableToCreateXImage 540
#define MGK_XServerFatalErrorUnableToCreateXPixmap 541
#define MGK_XServerFatalErrorUnableToCreateXWindow 542
#define MGK_XServerFatalErrorUnableToDisplayImage 543
#define MGK_XServerFatalErrorUnableToDitherImage 544
#define MGK_XServerFatalErrorUnableToGetPixelInfo 545
#define MGK_XServerFatalErrorUnableToGetVisual 546
#define MGK_XServerFatalErrorUnableToLoadFont 547
#define MGK_XServerFatalErrorUnableToMakeXWindow 548
#define MGK_XServerFatalErrorUnableToOpenXServer 549
#define MGK_XServerFatalErrorUnableToViewFonts 550
#define MGK_XServerWarningUnableToGetVisual 551
#define MGK_XServerWarningUsingDefaultVisual 552

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
    { "Blob/FatalError", 8, BlobFatalError },
    { "Blob/Warning", 9, BlobWarning },
    { "Cache/Error", 10, CacheError },
    { "Cache/FatalError", 21, CacheFatalError },
    { "Cache/Warning", 23, CacheWarning },
    { "Coder/Error", 24, CoderError },
    { "Coder/FatalError", 103, CoderFatalError },
    { "Coder/Warning", 104, CoderWarning },
    { "Configure/Error", 105, ConfigureError },
    { "Configure/FatalError", 112, ConfigureFatalError },
    { "Configure/Warning", 116, ConfigureWarning },
    { "Corrupt/Image/Error", 117, CorruptImageError },
    { "Corrupt/Image/FatalError", 158, CorruptImageFatalError },
    { "Corrupt/Image/Warning", 159, CorruptImageWarning },
    { "Delegate/Error", 168, DelegateError },
    { "Delegate/FatalError", 186, DelegateFatalError },
    { "Delegate/Warning", 187, DelegateWarning },
    { "Draw/Error", 188, DrawError },
    { "Draw/FatalError", 198, DrawFatalError },
    { "Draw/Warning", 199, DrawWarning },
    { "File/Open/Error", 202, FileOpenError },
    { "File/Open/FatalError", 205, FileOpenFatalError },
    { "File/Open/Warning", 206, FileOpenWarning },
    { "Image/Error", 207, ImageError },
    { "Image/FatalError", 238, ImageFatalError },
    { "Image/Warning", 239, ImageWarning },
    { "Missing/Delegate/Error", 240, MissingDelegateError },
    { "Missing/Delegate/FatalError", 252, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 253, MissingDelegateWarning },
    { "Module/Error", 254, ModuleError },
    { "Module/FatalError", 259, ModuleFatalError },
    { "Module/Warning", 260, ModuleWarning },
    { "Monitor/Error", 261, MonitorError },
    { "Monitor/FatalError", 262, MonitorFatalError },
    { "Monitor/Warning", 264, MonitorWarning },
    { "Option/Error", 265, OptionError },
    { "Option/FatalError", 350, OptionFatalError },
    { "Option/Warning", 372, OptionWarning },
    { "Registry/Error", 373, RegistryError },
    { "Registry/FatalError", 379, RegistryFatalError },
    { "Registry/Warning", 380, RegistryWarning },
    { "Resource/Limit/Error", 381, ResourceLimitError },
    { "Resource/Limit/FatalError", 449, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 492, ResourceLimitWarning },
    { "Stream/Error", 493, StreamError },
    { "Stream/FatalError", 499, StreamFatalError },
    { "Stream/Warning", 500, StreamWarning },
    { "Type/Error", 501, TypeError },
    { "Type/FatalError", 506, TypeFatalError },
    { "Type/Warning", 507, TypeWarning },
    { "Wand/Error", 508, WandError },
    { "XServer/Error", 512, XServerError },
    { "XServer/FatalError", 534, XServerFatalError },
    { "XServer/Warning", 550, XServerWarning },
    { 0, 552, UndefinedException }
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
    { "UnableToObtainOffset", 2 },
    { "UnableToOpenFile", 3 },
    { "UnableToReadFile", 4 },
    { "UnableToReadToOffset", 5 },
    { "UnableToSeekToOffset", 6 },
    { "UnableToWriteBlob", 7 },
    { "UnrecognizedImageFormat", 8 },
    { "Default", 9 },
    { "Default", 10 },
    { "InconsistentPersistentCacheDepth", 11 },
    { "PixelCacheIsNotOpen", 12 },
    { "UnableToAllocateCacheView", 13 },
    { "UnableToCloneCache", 14 },
    { "UnableToExtendCache", 15 },
    { "UnableToGetCacheNexus", 16 },
    { "UnableToGetPixelsFromCache", 17 },
    { "UnableToOpenCache", 18 },
    { "UnableToPeristPixelCache", 19 },
    { "UnableToReadPixelCache", 20 },
    { "UnableToSyncCache", 21 },
    { "DiskAllocationFailed", 22 },
    { "UnableToExtendPixelCache", 23 },
    { "Default", 24 },
    { "ColormapTooLarge", 25 },
    { "ColormapTypeNotSupported", 26 },
    { "ColorspaceModelIsNotSupported", 27 },
    { "ColorTypeNotSupported", 28 },
    { "CompressionNotValid", 29 },
    { "DataEncodingSchemeIsNotSupported", 30 },
    { "DataStorageTypeIsNotSupported", 31 },
    { "DeltaPNGNotSupported", 32 },
    { "EncryptedWPGImageFileNotSupported", 33 },
    { "FractalCompressionNotSupported", 34 },
    { "ImageColumnOrRowSizeIsNotSupported", 35 },
    { "ImageDoesNotHaveAMatteChannel", 36 },
    { "ImageIsNotTiled", 37 },
    { "ImageTypeNotSupported", 38 },
    { "IncompatibleSizeOfDouble", 39 },
    { "IrregularChannelGeometryNotSupported", 40 },
    { "JNGCompressionNotSupported", 41 },
    { "JPEGCompressionNotSupported", 42 },
    { "JPEGEmbeddingFailed", 43 },
    { "LocationTypeIsNotSupported", 44 },
    { "MapStorageTypeIsNotSupported", 45 },
    { "MSBByteOrderNotSupported", 46 },
    { "MultidimensionalMatricesAreNotSupported", 47 },
    { "MultipleRecordListNotSupported", 48 },
    { "No8BIMDataIsAvailable", 49 },
    { "NoAPP1DataIsAvailable", 50 },
    { "NoBitmapOnClipboard", 51 },
    { "NoColorProfileAvailable", 52 },
    { "NoDataReturned", 53 },
    { "NoImageVectorGraphics", 54 },
    { "NoIPTCInfoWasFound", 55 },
    { "NoIPTCProfileAvailable", 56 },
    { "NumberOfImagesIsNotSupported", 57 },
    { "OnlyContinuousTonePictureSupported", 58 },
    { "OnlyLevelZerofilesSupported", 59 },
    { "PNGCompressionNotSupported", 60 },
    { "PNGLibraryTooOld", 61 },
    { "RLECompressionNotSupported", 62 },
    { "SubsamplingRequiresEvenWidth", 63 },
    { "UnableToCopyProfile", 64 },
    { "UnableToCreateADC", 65 },
    { "UnableToCreateBitmap", 66 },
    { "UnableToDecompressImage", 67 },
    { "UnableToInitializeFPXLibrary", 68 },
    { "UnableToOpenBlob", 69 },
    { "UnableToReadAspectRatio", 70 },
    { "UnableToReadCIELABImages", 71 },
    { "UnableToReadSummaryInfo", 72 },
    { "UnableToSetAffineMatrix", 73 },
    { "UnableToSetAspectRatio", 74 },
    { "UnableToSetColorTwist", 75 },
    { "UnableToSetContrast", 76 },
    { "UnableToSetFilteringValue", 77 },
    { "UnableToSetImageComments", 78 },
    { "UnableToSetImageTitle", 79 },
    { "UnableToSetJPEGLevel", 80 },
    { "UnableToSetRegionOfInterest", 81 },
    { "UnableToSetSummaryInfo", 82 },
    { "UnableToTranslateText", 83 },
    { "UnableToWriteMPEGParameters", 84 },
    { "UnableToWriteTemporaryFile", 85 },
    { "UnableToZipCompressImage", 86 },
    { "UnsupportedBitsPerSample", 87 },
    { "UnsupportedCellTypeInTheMatrix", 88 },
    { "WebPDecodingFailedUserAbort", 89 },
    { "WebPEncodingFailed", 90 },
    { "WebPEncodingFailedBadDimension", 91 },
    { "WebPEncodingFailedBadWrite", 92 },
    { "WebPEncodingFailedBitstreamOutOfMemory", 93 },
    { "WebPEncodingFailedFileTooBig", 94 },
    { "WebPEncodingFailedInvalidConfiguration", 95 },
    { "WebPEncodingFailedNULLParameter", 96 },
    { "WebPEncodingFailedOutOfMemory", 97 },
    { "WebPEncodingFailedPartition0Overflow", 98 },
    { "WebPEncodingFailedPartitionOverflow", 99 },
    { "WebPEncodingFailedUserAbort", 100 },
    { "WebPInvalidConfiguration", 101 },
    { "WebPInvalidParameter", 102 },
    { "ZipCompressionNotSupported", 103 },
    { "Default", 104 },
    { "LosslessToLossyJPEGConversion", 105 },
    { "IncludeElementNestedTooDeeply", 106 },
    { "RegistryKeyLookupFailed", 107 },
    { "StringTokenLengthExceeded", 108 },
    { "UnableToAccessConfigureFile", 109 },
    { "UnableToAccessFontFile", 110 },
    { "UnableToAccessLogFile", 111 },
    { "UnableToAccessModuleFile", 112 },
    { "Default", 113 },
    { "UnableToChangeToWorkingDirectory", 114 },
    { "UnableToGetCurrentDirectory", 115 },
    { "UnableToRestoreCurrentDirectory", 116 },
    { "Default", 117 },
    { "AnErrorHasOccurredReadingFromFile", 118 },
    { "AnErrorHasOccurredWritingToFile", 119 },
    { "ColormapExceedsColorsLimit", 120 },
    { "CompressionNotValid", 121 },
    { "CorruptImage", 122 },
    { "ImageFileDoesNotContainAnyImageData", 123 },
    { "ImageTypeNotSupported", 124 },
    { "ImproperImageHeader", 125 },
    { "InsufficientImageDataInFile", 126 },
    { "InvalidColormapIndex", 127 },
    { "InvalidFileFormatVersion", 128 },
    { "LengthAndFilesizeDoNotMatch", 129 },
    { "MissingImageChannel", 130 },
    { "NegativeOrZeroImageSize", 131 },
    { "NonOS2HeaderSizeError", 132 },
    { "NotEnoughTiles", 133 },
    { "StaticPlanesValueNotEqualToOne", 134 },
    { "SubsamplingRequiresEvenWidth", 135 },
    { "TooMuchImageDataInFile", 136 },
    { "UnableToReadColormapFromDumpFile", 137 },
    { "UnableToReadColorProfile", 138 },
    { "UnableToReadExtensionBlock", 139 },
    { "UnableToReadGenericProfile", 140 },
    { "UnableToReadImageData", 141 },
    { "UnableToReadImageHeader", 142 },
    { "UnableToReadIPTCProfile", 143 },
    { "UnableToReadPixmapFromDumpFile", 144 },
    { "UnableToReadSubImageData", 145 },
    { "UnableToReadVIDImage", 146 },
    { "UnableToReadWindowNameFromDumpFile", 147 },
    { "UnableToRunlengthDecodeImage", 148 },
    { "UnableToUncompressImage", 149 },
    { "UnexpectedEndOfFile", 150 },
    { "UnexpectedSamplingFactor", 151 },
    { "UnknownPatternType", 152 },
    { "UnrecognizedBitsPerPixel", 153 },
    { "UnrecognizedImageCompression", 154 },
    { "UnrecognizedNumberOfColors", 155 },
    { "UnrecognizedXWDHeader", 156 },
    { "UnsupportedBitsPerSample", 157 },
    { "UnsupportedNumberOfPlanes", 158 },
    { "UnableToPersistKey", 159 },
    { "CompressionNotValid", 160 },
    { "ImproperImageHeader", 161 },
    { "LengthAndFilesizeDoNotMatch", 162 },
    { "NegativeOrZeroImageSize", 163 },
    { "NonOS2HeaderSizeError", 164 },
    { "SkipToSyncByte", 165 },
    { "StaticPlanesValueNotEqualToOne", 166 },
    { "UnrecognizedBitsPerPixel", 167 },
    { "UnrecognizedImageCompression", 168 },
    { "DelegateFailed", 169 },
    { "FailedToAllocateArgumentList", 170 },
    { "FailedToAllocateGhostscriptInterpreter", 171 },
    { "FailedToComputeOutputSize", 172 },
    { "FailedToFindGhostscript", 173 },
    { "FailedToRenderFile", 174 },
    { "FailedToScanFile", 175 },
    { "NoTagFound", 176 },
    { "PostscriptDelegateFailed", 177 },
    { "UnableToCreateImage", 178 },
    { "UnableToCreateImageComponent", 179 },
    { "UnableToDecodeImageFile", 180 },
    { "UnableToEncodeImageFile", 181 },
    { "UnableToInitializeFPXLibrary", 182 },
    { "UnableToInitializeWMFLibrary", 183 },
    { "UnableToManageJP2Stream", 184 },
    { "UnableToWriteSVGFormat", 185 },
    { "WebPABIMismatch", 186 },
    { "Default", 187 },
    { "Default", 188 },
    { "AlreadyPushingPatternDefinition", 189 },
    { "DrawingRecursionDetected", 190 },
    { "FloatValueConversionError", 191 },
    { "IntegerValueConversionError", 192 },
    { "InvalidPrimitiveArgument", 193 },
    { "NonconformingDrawingPrimitiveDefinition", 194 },
    { "TooManyCoordinates", 195 },
    { "UnableToPrint", 196 },
    { "UnbalancedGraphicContextPushPop", 197 },
    { "VectorPathTruncated", 198 },
    { "Default", 199 },
    { "NotARelativeURL", 200 },
    { "NotCurrentlyPushingPatternDefinition", 201 },
    { "URLNotFound", 202 },
    { "UnableToCreateTemporaryFile", 203 },
    { "UnableToOpenFile", 204 },
    { "UnableToWriteFile", 205 },
    { "Default", 206 },
    { "Default", 207 },
    { "AngleIsDiscontinuous", 208 },
    { "ColorspaceColorProfileMismatch", 209 },
    { "ImageColorspaceDiffers", 210 },
    { "ImageColorspaceMismatch", 211 },
    { "ImageDifferenceExceedsLimit", 212 },
    { "ImageDoesNotContainResolution", 213 },
    { "ImageOpacityDiffers", 214 },
    { "ImageSequenceIsRequired", 215 },
    { "ImageSizeDiffers", 216 },
    { "InvalidColormapIndex", 217 },
    { "LeftAndRightImageSizesDiffer", 218 },
    { "NoImagesWereFound", 219 },
    { "NoImagesWereLoaded", 220 },
    { "NoLocaleImageAttribute", 221 },
    { "TooManyClusters", 222 },
    { "UnableToAppendImage", 223 },
    { "UnableToAssignProfile", 224 },
    { "UnableToAverageImage", 225 },
    { "UnableToCoalesceImage", 226 },
    { "UnableToCompareImages", 227 },
    { "UnableToCreateImageMosaic", 228 },
    { "UnableToCreateStereoImage", 229 },
    { "UnableToDeconstructImageSequence", 230 },
    { "UnableToFlattenImage", 231 },
    { "UnableToGetClipMask", 232 },
    { "UnableToHandleImageChannel", 233 },
    { "UnableToResizeImage", 234 },
    { "UnableToSegmentImage", 235 },
    { "UnableToSetClipMask", 236 },
    { "UnableToShearImage", 237 },
    { "WidthOrHeightExceedsLimit", 238 },
    { "UnableToPersistKey", 239 },
    { "Default", 240 },
    { "DPSLibraryIsNotAvailable", 241 },
    { "FPXLibraryIsNotAvailable", 242 },
    { "FreeTypeLibraryIsNotAvailable", 243 },
    { "JPEGLibraryIsNotAvailable", 244 },
    { "LCMSLibraryIsNotAvailable", 245 },
    { "LZWEncodingNotEnabled", 246 },
    { "NoDecodeDelegateForThisImageFormat", 247 },
    { "NoEncodeDelegateForThisImageFormat", 248 },
    { "TIFFLibraryIsNotAvailable", 249 },
    { "XMLLibraryIsNotAvailable", 250 },
    { "XWindowLibraryIsNotAvailable", 251 },
    { "ZipLibraryIsNotAvailable", 252 },
    { "Default", 253 },
    { "Default", 254 },
    { "FailedToCloseModule", 255 },
    { "FailedToFindSymbol", 256 },
    { "UnableToLoadModule", 257 },
    { "UnableToRegisterImageFormat", 258 },
    { "UnrecognizedModule", 259 },
    { "UnableToInitializeModuleLoader", 260 },
    { "Default", 261 },
    { "Default", 262 },
    { "Default", 263 },
    { "UserRequestedTerminationBySignal", 264 },
    { "Default", 265 },
    { "BevelWidthIsNegative", 266 },
    { "ColorSeparatedImageRequired", 267 },
    { "FrameIsLessThanImageSize", 268 },
    { "GeometryDimensionsAreZero", 269 },
    { "GeometryDoesNotContainImage", 270 },
    { "HaldClutImageDimensionsInvalid", 271 },
    { "ImagesAreNotTheSameSize", 272 },
    { "ImageSizeMustExceedBevelWidth", 273 },
    { "ImageSmallerThanKernelWidth", 274 },
    { "ImageSmallerThanRadius", 275 },
    { "ImageWidthsOrHeightsDiffer", 276 },
    { "InputImagesAlreadySpecified", 277 },
    { "InvalidSubimageSpecification", 278 },
    { "KernelRadiusIsTooSmall", 279 },
    { "KernelWidthMustBeAnOddNumber", 280 },
    { "MatrixIsNotSquare", 281 },
    { "MatrixOrderOutOfRange", 282 },
    { "MissingAnImageFilename", 283 },
    { "MissingArgument", 284 },
    { "MustSpecifyAnImageName", 285 },
    { "MustSpecifyImageSize", 286 },
    { "NoBlobDefined", 287 },
    { "NoImagesDefined", 288 },
    { "NonzeroWidthAndHeightRequired", 289 },
    { "NoProfileNameWasGiven", 290 },
    { "NullBlobArgument", 291 },
    { "ReferenceImageRequired", 292 },
    { "ReferenceIsNotMyType", 293 },
    { "RegionAreaExceedsLimit", 294 },
    { "RequestDidNotReturnAnImage", 295 },
    { "SteganoImageRequired", 296 },
    { "StereoImageRequired", 297 },
    { "SubimageSpecificationReturnsNoImages", 298 },
    { "UnableToAddOrRemoveProfile", 299 },
    { "UnableToAverageImageSequence", 300 },
    { "UnableToBlurImage", 301 },
    { "UnableToChopImage", 302 },
    { "UnableToColorMatrixImage", 303 },
    { "UnableToConstituteImage", 304 },
    { "UnableToConvolveImage", 305 },
    { "UnableToEdgeImage", 306 },
    { "UnableToEqualizeImage", 307 },
    { "UnableToFilterImage", 308 },
    { "UnableToFormatImageMetadata", 309 },
    { "UnableToFrameImage", 310 },
    { "UnableToOilPaintImage", 311 },
    { "UnableToPaintImage", 312 },
    { "UnableToRaiseImage", 313 },
    { "UnableToSharpenImage", 314 },
    { "UnableToThresholdImage", 315 },
    { "UnableToWaveImage", 316 },
    { "UnrecognizedAttribute", 317 },
    { "UnrecognizedChannelType", 318 },
    { "UnrecognizedColor", 319 },
    { "UnrecognizedColormapType", 320 },
    { "UnrecognizedColorspace", 321 },
    { "UnrecognizedCommand", 322 },
    { "UnrecognizedComposeOperator", 323 },
    { "UnrecognizedDisposeMethod", 324 },
    { "UnrecognizedElement", 325 },
    { "UnrecognizedEndianType", 326 },
    { "UnrecognizedGravityType", 327 },
    { "UnrecognizedHighlightStyle", 328 },
    { "UnrecognizedImageCompression", 329 },
    { "UnrecognizedImageFilter", 330 },
    { "UnrecognizedImageFormat", 331 },
    { "UnrecognizedImageMode", 332 },
    { "UnrecognizedImageType", 333 },
    { "UnrecognizedIntentType", 334 },
    { "UnrecognizedInterlaceType", 335 },
    { "UnrecognizedListType", 336 },
    { "UnrecognizedMetric", 337 },
    { "UnrecognizedModeType", 338 },
    { "UnrecognizedNoiseType", 339 },
    { "UnrecognizedOperator", 340 },
    { "UnrecognizedOption", 341 },
    { "UnrecognizedPerlMagickMethod", 342 },
    { "UnrecognizedPixelMap", 343 },
    { "UnrecognizedPreviewType", 344 },
    { "UnrecognizedResourceType", 345 },
    { "UnrecognizedType", 346 },
    { "UnrecognizedUnitsType", 347 },
    { "UnrecognizedVirtualPixelMethod", 348 },
    { "UnsupportedSamplingFactor", 349 },
    { "UsageError", 350 },
    { "InvalidColorspaceType", 351 },
    { "InvalidEndianType", 352 },
    { "InvalidImageType", 353 },
    { "InvalidInterlaceType", 354 },
    { "MissingAnImageFilename", 355 },
    { "MissingArgument", 356 },
    { "NoImagesWereLoaded", 357 },
    { "OptionLengthExceedsLimit", 358 },
    { "RequestDidNotReturnAnImage", 359 },
    { "UnableToOpenXServer", 360 },
    { "UnableToPersistKey", 361 },
    { "UnrecognizedColormapType", 362 },
    { "UnrecognizedColorspaceType", 363 },
    { "UnrecognizedDisposeMethod", 364 },
    { "UnrecognizedEndianType", 365 },
    { "UnrecognizedFilterType", 366 },
    { "UnrecognizedImageCompressionType", 367 },
    { "UnrecognizedImageType", 368 },
    { "UnrecognizedInterlaceType", 369 },
    { "UnrecognizedOption", 370 },
    { "UnrecognizedResourceType", 371 },
    { "UnrecognizedVirtualPixelMethod", 372 },
    { "UnrecognizedColor", 373 },
    { "ImageExpected", 374 },
    { "ImageInfoExpected", 375 },
    { "StructureSizeMismatch", 376 },
    { "UnableToGetRegistryID", 377 },
    { "UnableToLocateImage", 378 },
    { "UnableToSetRegistry", 379 },
    { "Default", 380 },
    { "Default", 381 },
    { "CacheResourcesExhausted", 382 },
    { "ImagePixelHeightLimitExceeded", 383 },
    { "ImagePixelLimitExceeded", 384 },
    { "ImagePixelWidthLimitExceeded", 385 },
    { "MemoryAllocationFailed", 386 },
    { "NoPixelsDefinedInCache", 387 },
    { "PixelCacheAllocationFailed", 388 },
    { "UnableToAddColorProfile", 389 },
    { "UnableToAddGenericProfile", 390 },
    { "UnableToAddIPTCProfile", 391 },
    { "UnableToAllocateCoefficients", 392 },
    { "UnableToAllocateColormap", 393 },
    { "UnableToAllocateICCProfile", 394 },
    { "UnableToAllocateString", 395 },
    { "UnableToAnnotateImage", 396 },
    { "UnableToAverageImageSequence", 397 },
    { "UnableToCloneDrawingWand", 398 },
    { "UnableToCloneImage", 399 },
    { "UnableToComputeImageSignature", 400 },
    { "UnableToConstituteImage", 401 },
    { "UnableToConvertFont", 402 },
    { "UnableToConvertStringToTokens", 403 },
    { "UnableToCreateColormap", 404 },
    { "UnableToCreateColorTransform", 405 },
    { "UnableToCreateCommandWidget", 406 },
    { "UnableToCreateImageGroup", 407 },
    { "UnableToCreateImageMontage", 408 },
    { "UnableToCreateXWindow", 409 },
    { "UnableToCropImage", 410 },
    { "UnableToDespeckleImage", 411 },
    { "UnableToDetermineImageClass", 412 },
    { "UnableToDetermineTheNumberOfImageColors", 413 },
    { "UnableToDitherImage", 414 },
    { "UnableToDrawOnImage", 415 },
    { "UnableToEdgeImage", 416 },
    { "UnableToEmbossImage", 417 },
    { "UnableToEnhanceImage", 418 },
    { "UnableToFloodfillImage", 419 },
    { "UnableToGammaCorrectImage", 420 },
    { "UnableToGetBestIconSize", 421 },
    { "UnableToGetFromRegistry", 422 },
    { "UnableToGetPackageInfo", 423 },
    { "UnableToLevelImage", 424 },
    { "UnableToMagnifyImage", 425 },
    { "UnableToManageColor", 426 },
    { "UnableToMapImage", 427 },
    { "UnableToMapImageSequence", 428 },
    { "UnableToMedianFilterImage", 429 },
    { "UnableToMotionBlurImage", 430 },
    { "UnableToNoiseFilterImage", 431 },
    { "UnableToNormalizeImage", 432 },
    { "UnableToOpenColorProfile", 433 },
    { "UnableToQuantizeImage", 434 },
    { "UnableToQuantizeImageSequence", 435 },
    { "UnableToReadTextChunk", 436 },
    { "UnableToReadXImage", 437 },
    { "UnableToReadXServerColormap", 438 },
    { "UnableToResizeImage", 439 },
    { "UnableToRotateImage", 440 },
    { "UnableToSampleImage", 441 },
    { "UnableToScaleImage", 442 },
    { "UnableToSelectImage", 443 },
    { "UnableToSharpenImage", 444 },
    { "UnableToShaveImage", 445 },
    { "UnableToShearImage", 446 },
    { "UnableToSortImageColormap", 447 },
    { "UnableToThresholdImage", 448 },
    { "UnableToTransformColorspace", 449 },
    { "MemoryAllocationFailed", 450 },
    { "SemaporeOperationFailed", 451 },
    { "UnableToAllocateAscii85Info", 452 },
    { "UnableToAllocateCacheInfo", 453 },
    { "UnableToAllocateCacheView", 454 },
    { "UnableToAllocateColorInfo", 455 },
    { "UnableToAllocateDashPattern", 456 },
    { "UnableToAllocateDelegateInfo", 457 },
    { "UnableToAllocateDerivatives", 458 },
    { "UnableToAllocateDrawContext", 459 },
    { "UnableToAllocateDrawInfo", 460 },
    { "UnableToAllocateDrawingWand", 461 },
    { "UnableToAllocateGammaMap", 462 },
    { "UnableToAllocateImage", 463 },
    { "UnableToAllocateImagePixels", 464 },
    { "UnableToAllocateLogInfo", 465 },
    { "UnableToAllocateMagicInfo", 466 },
    { "UnableToAllocateMagickInfo", 467 },
    { "UnableToAllocateModuleInfo", 468 },
    { "UnableToAllocateMontageInfo", 469 },
    { "UnableToAllocateQuantizeInfo", 470 },
    { "UnableToAllocateRandomKernel", 471 },
    { "UnableToAllocateRegistryInfo", 472 },
    { "UnableToAllocateSemaphoreInfo", 473 },
    { "UnableToAllocateString", 474 },
    { "UnableToAllocateTypeInfo", 475 },
    { "UnableToAllocateWand", 476 },
    { "UnableToAnimateImageSequence", 477 },
    { "UnableToCloneBlobInfo", 478 },
    { "UnableToCloneCacheInfo", 479 },
    { "UnableToCloneImage", 480 },
    { "UnableToCloneImageInfo", 481 },
    { "UnableToConcatenateString", 482 },
    { "UnableToConvertText", 483 },
    { "UnableToCreateColormap", 484 },
    { "UnableToDestroySemaphore", 485 },
    { "UnableToDisplayImage", 486 },
    { "UnableToEscapeString", 487 },
    { "UnableToInitializeSemaphore", 488 },
    { "UnableToInterpretMSLImage", 489 },
    { "UnableToLockSemaphore", 490 },
    { "UnableToObtainRandomEntropy", 491 },
    { "UnableToUnlockSemaphore", 492 },
    { "MemoryAllocationFailed", 493 },
    { "ImageDoesNotContainTheStreamGeometry", 494 },
    { "NoStreamHandlerIsDefined", 495 },
    { "PixelCacheIsNotOpen", 496 },
    { "UnableToAcquirePixelStream", 497 },
    { "UnableToSetPixelStream", 498 },
    { "UnableToSyncPixelStream", 499 },
    { "Default", 500 },
    { "Default", 501 },
    { "FontSubstitutionRequired", 502 },
    { "UnableToGetTypeMetrics", 503 },
    { "UnableToInitializeFreetypeLibrary", 504 },
    { "UnableToReadFont", 505 },
    { "UnrecognizedFontEncoding", 506 },
    { "Default", 507 },
    { "Default", 508 },
    { "InvalidColormapIndex", 509 },
    { "WandAPINotImplemented", 510 },
    { "WandContainsNoImageIndexs", 511 },
    { "WandContainsNoImages", 512 },
    { "ColorIsNotKnownToServer", 513 },
    { "NoWindowWithSpecifiedIDExists", 514 },
    { "StandardColormapIsNotInitialized", 515 },
    { "UnableToConnectToRemoteDisplay", 516 },
    { "UnableToCreateBitmap", 517 },
    { "UnableToCreateColormap", 518 },
    { "UnableToCreatePixmap", 519 },
    { "UnableToCreateProperty", 520 },
    { "UnableToCreateStandardColormap", 521 },
    { "UnableToDisplayImageInfo", 522 },
    { "UnableToGetProperty", 523 },
    { "UnableToGetStandardColormap", 524 },
    { "UnableToGetVisual", 525 },
    { "UnableToGrabMouse", 526 },
    { "UnableToLoadFont", 527 },
    { "UnableToMatchVisualToStandardColormap", 528 },
    { "UnableToOpenXServer", 529 },
    { "UnableToReadXAttributes", 530 },
    { "UnableToReadXWindowImage", 531 },
    { "UnrecognizedColormapType", 532 },
    { "UnrecognizedGravityType", 533 },
    { "UnrecognizedVisualSpecifier", 534 },
    { "UnableToAllocateXHints", 535 },
    { "UnableToCreateCursor", 536 },
    { "UnableToCreateGraphicContext", 537 },
    { "UnableToCreateStandardColormap", 538 },
    { "UnableToCreateTextProperty", 539 },
    { "UnableToCreateXImage", 540 },
    { "UnableToCreateXPixmap", 541 },
    { "UnableToCreateXWindow", 542 },
    { "UnableToDisplayImage", 543 },
    { "UnableToDitherImage", 544 },
    { "UnableToGetPixelInfo", 545 },
    { "UnableToGetVisual", 546 },
    { "UnableToLoadFont", 547 },
    { "UnableToMakeXWindow", 548 },
    { "UnableToOpenXServer", 549 },
    { "UnableToViewFonts", 550 },
    { "UnableToGetVisual", 551 },
    { "UsingDefaultVisual", 552 },
    { 0, 0 }
  };
#endif

#if defined(_INCLUDE_MESSAGE_TABLE_)
static const char *message_dat[] =
  {
    "%1",
    "Unable to create blob",
    "Unable to obtain current offset",
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
    "Unable to write to temporary file",
    "Unable to zip-compress image",
    "Unsupported bits per sample",
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
    "Colormap exceeded colors limit",
    "Compression not valid",
    "Corrupt image",
    "Image file or blob does not contain any image data",
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
    "Unsupported bits per sample",
    "Unsupported number of planes",
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
    "drawing recursion detected",
    "text value does not convert to float",
    "text value does not convert to integer",
    "invalid primitive argument",
    "Non-conforming drawing primitive definition",
    "too many coordinates",
    "Unable to print",
    "unbalanced graphic context push-pop",
    "vector path truncated",
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
    "unable to obtain random bytes from operating system",
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
