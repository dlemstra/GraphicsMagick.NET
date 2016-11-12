#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 554

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
#define MGK_DrawErrorPrimitiveArithmeticOverflow 195
#define MGK_DrawErrorTooManyCoordinates 196
#define MGK_DrawErrorUnableToPrint 197
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 198
#define MGK_DrawErrorUnreasonableGradientSize 199
#define MGK_DrawErrorVectorPathTruncated 200
#define MGK_DrawFatalErrorDefault 201
#define MGK_DrawWarningNotARelativeURL 202
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 203
#define MGK_DrawWarningURLNotFound 204
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 205
#define MGK_FileOpenErrorUnableToOpenFile 206
#define MGK_FileOpenErrorUnableToWriteFile 207
#define MGK_FileOpenFatalErrorDefault 208
#define MGK_FileOpenWarningDefault 209
#define MGK_ImageErrorAngleIsDiscontinuous 210
#define MGK_ImageErrorColorspaceColorProfileMismatch 211
#define MGK_ImageErrorImageColorspaceDiffers 212
#define MGK_ImageErrorImageColorspaceMismatch 213
#define MGK_ImageErrorImageDifferenceExceedsLimit 214
#define MGK_ImageErrorImageDoesNotContainResolution 215
#define MGK_ImageErrorImageOpacityDiffers 216
#define MGK_ImageErrorImageSequenceIsRequired 217
#define MGK_ImageErrorImageSizeDiffers 218
#define MGK_ImageErrorInvalidColormapIndex 219
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 220
#define MGK_ImageErrorNoImagesWereFound 221
#define MGK_ImageErrorNoImagesWereLoaded 222
#define MGK_ImageErrorNoLocaleImageAttribute 223
#define MGK_ImageErrorTooManyClusters 224
#define MGK_ImageErrorUnableToAppendImage 225
#define MGK_ImageErrorUnableToAssignProfile 226
#define MGK_ImageErrorUnableToAverageImage 227
#define MGK_ImageErrorUnableToCoalesceImage 228
#define MGK_ImageErrorUnableToCompareImages 229
#define MGK_ImageErrorUnableToCreateImageMosaic 230
#define MGK_ImageErrorUnableToCreateStereoImage 231
#define MGK_ImageErrorUnableToDeconstructImageSequence 232
#define MGK_ImageErrorUnableToFlattenImage 233
#define MGK_ImageErrorUnableToGetClipMask 234
#define MGK_ImageErrorUnableToHandleImageChannel 235
#define MGK_ImageErrorUnableToResizeImage 236
#define MGK_ImageErrorUnableToSegmentImage 237
#define MGK_ImageErrorUnableToSetClipMask 238
#define MGK_ImageErrorUnableToShearImage 239
#define MGK_ImageErrorWidthOrHeightExceedsLimit 240
#define MGK_ImageFatalErrorUnableToPersistKey 241
#define MGK_ImageWarningDefault 242
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 243
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 244
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 245
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 246
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 247
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 248
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 249
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 250
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 251
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 252
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 253
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 254
#define MGK_MissingDelegateFatalErrorDefault 255
#define MGK_MissingDelegateWarningDefault 256
#define MGK_ModuleErrorFailedToCloseModule 257
#define MGK_ModuleErrorFailedToFindSymbol 258
#define MGK_ModuleErrorUnableToLoadModule 259
#define MGK_ModuleErrorUnableToRegisterImageFormat 260
#define MGK_ModuleErrorUnrecognizedModule 261
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 262
#define MGK_ModuleWarningDefault 263
#define MGK_MonitorErrorDefault 264
#define MGK_MonitorFatalErrorDefault 265
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 266
#define MGK_MonitorWarningDefault 267
#define MGK_OptionErrorBevelWidthIsNegative 268
#define MGK_OptionErrorColorSeparatedImageRequired 269
#define MGK_OptionErrorFrameIsLessThanImageSize 270
#define MGK_OptionErrorGeometryDimensionsAreZero 271
#define MGK_OptionErrorGeometryDoesNotContainImage 272
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 273
#define MGK_OptionErrorImagesAreNotTheSameSize 274
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 275
#define MGK_OptionErrorImageSmallerThanKernelWidth 276
#define MGK_OptionErrorImageSmallerThanRadius 277
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 278
#define MGK_OptionErrorInputImagesAlreadySpecified 279
#define MGK_OptionErrorInvalidSubimageSpecification 280
#define MGK_OptionErrorKernelRadiusIsTooSmall 281
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 282
#define MGK_OptionErrorMatrixIsNotSquare 283
#define MGK_OptionErrorMatrixOrderOutOfRange 284
#define MGK_OptionErrorMissingAnImageFilename 285
#define MGK_OptionErrorMissingArgument 286
#define MGK_OptionErrorMustSpecifyAnImageName 287
#define MGK_OptionErrorMustSpecifyImageSize 288
#define MGK_OptionErrorNoBlobDefined 289
#define MGK_OptionErrorNoImagesDefined 290
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 291
#define MGK_OptionErrorNoProfileNameWasGiven 292
#define MGK_OptionErrorNullBlobArgument 293
#define MGK_OptionErrorReferenceImageRequired 294
#define MGK_OptionErrorReferenceIsNotMyType 295
#define MGK_OptionErrorRegionAreaExceedsLimit 296
#define MGK_OptionErrorRequestDidNotReturnAnImage 297
#define MGK_OptionErrorSteganoImageRequired 298
#define MGK_OptionErrorStereoImageRequired 299
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 300
#define MGK_OptionErrorUnableToAddOrRemoveProfile 301
#define MGK_OptionErrorUnableToAverageImageSequence 302
#define MGK_OptionErrorUnableToBlurImage 303
#define MGK_OptionErrorUnableToChopImage 304
#define MGK_OptionErrorUnableToColorMatrixImage 305
#define MGK_OptionErrorUnableToConstituteImage 306
#define MGK_OptionErrorUnableToConvolveImage 307
#define MGK_OptionErrorUnableToEdgeImage 308
#define MGK_OptionErrorUnableToEqualizeImage 309
#define MGK_OptionErrorUnableToFilterImage 310
#define MGK_OptionErrorUnableToFormatImageMetadata 311
#define MGK_OptionErrorUnableToFrameImage 312
#define MGK_OptionErrorUnableToOilPaintImage 313
#define MGK_OptionErrorUnableToPaintImage 314
#define MGK_OptionErrorUnableToRaiseImage 315
#define MGK_OptionErrorUnableToSharpenImage 316
#define MGK_OptionErrorUnableToThresholdImage 317
#define MGK_OptionErrorUnableToWaveImage 318
#define MGK_OptionErrorUnrecognizedAttribute 319
#define MGK_OptionErrorUnrecognizedChannelType 320
#define MGK_OptionErrorUnrecognizedColor 321
#define MGK_OptionErrorUnrecognizedColormapType 322
#define MGK_OptionErrorUnrecognizedColorspace 323
#define MGK_OptionErrorUnrecognizedCommand 324
#define MGK_OptionErrorUnrecognizedComposeOperator 325
#define MGK_OptionErrorUnrecognizedDisposeMethod 326
#define MGK_OptionErrorUnrecognizedElement 327
#define MGK_OptionErrorUnrecognizedEndianType 328
#define MGK_OptionErrorUnrecognizedGravityType 329
#define MGK_OptionErrorUnrecognizedHighlightStyle 330
#define MGK_OptionErrorUnrecognizedImageCompression 331
#define MGK_OptionErrorUnrecognizedImageFilter 332
#define MGK_OptionErrorUnrecognizedImageFormat 333
#define MGK_OptionErrorUnrecognizedImageMode 334
#define MGK_OptionErrorUnrecognizedImageType 335
#define MGK_OptionErrorUnrecognizedIntentType 336
#define MGK_OptionErrorUnrecognizedInterlaceType 337
#define MGK_OptionErrorUnrecognizedListType 338
#define MGK_OptionErrorUnrecognizedMetric 339
#define MGK_OptionErrorUnrecognizedModeType 340
#define MGK_OptionErrorUnrecognizedNoiseType 341
#define MGK_OptionErrorUnrecognizedOperator 342
#define MGK_OptionErrorUnrecognizedOption 343
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 344
#define MGK_OptionErrorUnrecognizedPixelMap 345
#define MGK_OptionErrorUnrecognizedPreviewType 346
#define MGK_OptionErrorUnrecognizedResourceType 347
#define MGK_OptionErrorUnrecognizedType 348
#define MGK_OptionErrorUnrecognizedUnitsType 349
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 350
#define MGK_OptionErrorUnsupportedSamplingFactor 351
#define MGK_OptionErrorUsageError 352
#define MGK_OptionFatalErrorInvalidColorspaceType 353
#define MGK_OptionFatalErrorInvalidEndianType 354
#define MGK_OptionFatalErrorInvalidImageType 355
#define MGK_OptionFatalErrorInvalidInterlaceType 356
#define MGK_OptionFatalErrorMissingAnImageFilename 357
#define MGK_OptionFatalErrorMissingArgument 358
#define MGK_OptionFatalErrorNoImagesWereLoaded 359
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 360
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 361
#define MGK_OptionFatalErrorUnableToOpenXServer 362
#define MGK_OptionFatalErrorUnableToPersistKey 363
#define MGK_OptionFatalErrorUnrecognizedColormapType 364
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 365
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 366
#define MGK_OptionFatalErrorUnrecognizedEndianType 367
#define MGK_OptionFatalErrorUnrecognizedFilterType 368
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 369
#define MGK_OptionFatalErrorUnrecognizedImageType 370
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 371
#define MGK_OptionFatalErrorUnrecognizedOption 372
#define MGK_OptionFatalErrorUnrecognizedResourceType 373
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 374
#define MGK_OptionWarningUnrecognizedColor 375
#define MGK_RegistryErrorImageExpected 376
#define MGK_RegistryErrorImageInfoExpected 377
#define MGK_RegistryErrorStructureSizeMismatch 378
#define MGK_RegistryErrorUnableToGetRegistryID 379
#define MGK_RegistryErrorUnableToLocateImage 380
#define MGK_RegistryErrorUnableToSetRegistry 381
#define MGK_RegistryFatalErrorDefault 382
#define MGK_RegistryWarningDefault 383
#define MGK_ResourceLimitErrorCacheResourcesExhausted 384
#define MGK_ResourceLimitErrorImagePixelHeightLimitExceeded 385
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 386
#define MGK_ResourceLimitErrorImagePixelWidthLimitExceeded 387
#define MGK_ResourceLimitErrorMemoryAllocationFailed 388
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 389
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 390
#define MGK_ResourceLimitErrorUnableToAddColorProfile 391
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 392
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 393
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 394
#define MGK_ResourceLimitErrorUnableToAllocateColormap 395
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 396
#define MGK_ResourceLimitErrorUnableToAllocateString 397
#define MGK_ResourceLimitErrorUnableToAnnotateImage 398
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 399
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 400
#define MGK_ResourceLimitErrorUnableToCloneImage 401
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 402
#define MGK_ResourceLimitErrorUnableToConstituteImage 403
#define MGK_ResourceLimitErrorUnableToConvertFont 404
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 405
#define MGK_ResourceLimitErrorUnableToCreateColormap 406
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 407
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 408
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 409
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 410
#define MGK_ResourceLimitErrorUnableToCreateXWindow 411
#define MGK_ResourceLimitErrorUnableToCropImage 412
#define MGK_ResourceLimitErrorUnableToDespeckleImage 413
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 414
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 415
#define MGK_ResourceLimitErrorUnableToDitherImage 416
#define MGK_ResourceLimitErrorUnableToDrawOnImage 417
#define MGK_ResourceLimitErrorUnableToEdgeImage 418
#define MGK_ResourceLimitErrorUnableToEmbossImage 419
#define MGK_ResourceLimitErrorUnableToEnhanceImage 420
#define MGK_ResourceLimitErrorUnableToFloodfillImage 421
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 422
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 423
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 424
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 425
#define MGK_ResourceLimitErrorUnableToLevelImage 426
#define MGK_ResourceLimitErrorUnableToMagnifyImage 427
#define MGK_ResourceLimitErrorUnableToManageColor 428
#define MGK_ResourceLimitErrorUnableToMapImage 429
#define MGK_ResourceLimitErrorUnableToMapImageSequence 430
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 431
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 432
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 433
#define MGK_ResourceLimitErrorUnableToNormalizeImage 434
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 435
#define MGK_ResourceLimitErrorUnableToQuantizeImage 436
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 437
#define MGK_ResourceLimitErrorUnableToReadTextChunk 438
#define MGK_ResourceLimitErrorUnableToReadXImage 439
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 440
#define MGK_ResourceLimitErrorUnableToResizeImage 441
#define MGK_ResourceLimitErrorUnableToRotateImage 442
#define MGK_ResourceLimitErrorUnableToSampleImage 443
#define MGK_ResourceLimitErrorUnableToScaleImage 444
#define MGK_ResourceLimitErrorUnableToSelectImage 445
#define MGK_ResourceLimitErrorUnableToSharpenImage 446
#define MGK_ResourceLimitErrorUnableToShaveImage 447
#define MGK_ResourceLimitErrorUnableToShearImage 448
#define MGK_ResourceLimitErrorUnableToSortImageColormap 449
#define MGK_ResourceLimitErrorUnableToThresholdImage 450
#define MGK_ResourceLimitErrorUnableToTransformColorspace 451
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 452
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 453
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 454
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 455
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 456
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 457
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 458
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 459
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 460
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 461
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 462
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 463
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 464
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 465
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 466
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 467
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 468
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 469
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 470
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 471
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 472
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 473
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 474
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 475
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 476
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 477
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 478
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 479
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 480
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 481
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 482
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 483
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 484
#define MGK_ResourceLimitFatalErrorUnableToConvertText 485
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 486
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 487
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 488
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 489
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 490
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 491
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 492
#define MGK_ResourceLimitFatalErrorUnableToObtainRandomEntropy 493
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 494
#define MGK_ResourceLimitWarningMemoryAllocationFailed 495
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 496
#define MGK_StreamErrorNoStreamHandlerIsDefined 497
#define MGK_StreamErrorPixelCacheIsNotOpen 498
#define MGK_StreamErrorUnableToAcquirePixelStream 499
#define MGK_StreamErrorUnableToSetPixelStream 500
#define MGK_StreamErrorUnableToSyncPixelStream 501
#define MGK_StreamFatalErrorDefault 502
#define MGK_StreamWarningDefault 503
#define MGK_TypeErrorFontSubstitutionRequired 504
#define MGK_TypeErrorUnableToGetTypeMetrics 505
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 506
#define MGK_TypeErrorUnableToReadFont 507
#define MGK_TypeErrorUnrecognizedFontEncoding 508
#define MGK_TypeFatalErrorDefault 509
#define MGK_TypeWarningDefault 510
#define MGK_WandErrorInvalidColormapIndex 511
#define MGK_WandErrorWandAPINotImplemented 512
#define MGK_WandErrorWandContainsNoImageIndexs 513
#define MGK_WandErrorWandContainsNoImages 514
#define MGK_XServerErrorColorIsNotKnownToServer 515
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 516
#define MGK_XServerErrorStandardColormapIsNotInitialized 517
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 518
#define MGK_XServerErrorUnableToCreateBitmap 519
#define MGK_XServerErrorUnableToCreateColormap 520
#define MGK_XServerErrorUnableToCreatePixmap 521
#define MGK_XServerErrorUnableToCreateProperty 522
#define MGK_XServerErrorUnableToCreateStandardColormap 523
#define MGK_XServerErrorUnableToDisplayImageInfo 524
#define MGK_XServerErrorUnableToGetProperty 525
#define MGK_XServerErrorUnableToGetStandardColormap 526
#define MGK_XServerErrorUnableToGetVisual 527
#define MGK_XServerErrorUnableToGrabMouse 528
#define MGK_XServerErrorUnableToLoadFont 529
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 530
#define MGK_XServerErrorUnableToOpenXServer 531
#define MGK_XServerErrorUnableToReadXAttributes 532
#define MGK_XServerErrorUnableToReadXWindowImage 533
#define MGK_XServerErrorUnrecognizedColormapType 534
#define MGK_XServerErrorUnrecognizedGravityType 535
#define MGK_XServerErrorUnrecognizedVisualSpecifier 536
#define MGK_XServerFatalErrorUnableToAllocateXHints 537
#define MGK_XServerFatalErrorUnableToCreateCursor 538
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 539
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 540
#define MGK_XServerFatalErrorUnableToCreateTextProperty 541
#define MGK_XServerFatalErrorUnableToCreateXImage 542
#define MGK_XServerFatalErrorUnableToCreateXPixmap 543
#define MGK_XServerFatalErrorUnableToCreateXWindow 544
#define MGK_XServerFatalErrorUnableToDisplayImage 545
#define MGK_XServerFatalErrorUnableToDitherImage 546
#define MGK_XServerFatalErrorUnableToGetPixelInfo 547
#define MGK_XServerFatalErrorUnableToGetVisual 548
#define MGK_XServerFatalErrorUnableToLoadFont 549
#define MGK_XServerFatalErrorUnableToMakeXWindow 550
#define MGK_XServerFatalErrorUnableToOpenXServer 551
#define MGK_XServerFatalErrorUnableToViewFonts 552
#define MGK_XServerWarningUnableToGetVisual 553
#define MGK_XServerWarningUsingDefaultVisual 554

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
    { "Draw/FatalError", 200, DrawFatalError },
    { "Draw/Warning", 201, DrawWarning },
    { "File/Open/Error", 204, FileOpenError },
    { "File/Open/FatalError", 207, FileOpenFatalError },
    { "File/Open/Warning", 208, FileOpenWarning },
    { "Image/Error", 209, ImageError },
    { "Image/FatalError", 240, ImageFatalError },
    { "Image/Warning", 241, ImageWarning },
    { "Missing/Delegate/Error", 242, MissingDelegateError },
    { "Missing/Delegate/FatalError", 254, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 255, MissingDelegateWarning },
    { "Module/Error", 256, ModuleError },
    { "Module/FatalError", 261, ModuleFatalError },
    { "Module/Warning", 262, ModuleWarning },
    { "Monitor/Error", 263, MonitorError },
    { "Monitor/FatalError", 264, MonitorFatalError },
    { "Monitor/Warning", 266, MonitorWarning },
    { "Option/Error", 267, OptionError },
    { "Option/FatalError", 352, OptionFatalError },
    { "Option/Warning", 374, OptionWarning },
    { "Registry/Error", 375, RegistryError },
    { "Registry/FatalError", 381, RegistryFatalError },
    { "Registry/Warning", 382, RegistryWarning },
    { "Resource/Limit/Error", 383, ResourceLimitError },
    { "Resource/Limit/FatalError", 451, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 494, ResourceLimitWarning },
    { "Stream/Error", 495, StreamError },
    { "Stream/FatalError", 501, StreamFatalError },
    { "Stream/Warning", 502, StreamWarning },
    { "Type/Error", 503, TypeError },
    { "Type/FatalError", 508, TypeFatalError },
    { "Type/Warning", 509, TypeWarning },
    { "Wand/Error", 510, WandError },
    { "XServer/Error", 514, XServerError },
    { "XServer/FatalError", 536, XServerFatalError },
    { "XServer/Warning", 552, XServerWarning },
    { 0, 554, UndefinedException }
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
    { "PrimitiveArithmeticOverflow", 195 },
    { "TooManyCoordinates", 196 },
    { "UnableToPrint", 197 },
    { "UnbalancedGraphicContextPushPop", 198 },
    { "UnreasonableGradientSize", 199 },
    { "VectorPathTruncated", 200 },
    { "Default", 201 },
    { "NotARelativeURL", 202 },
    { "NotCurrentlyPushingPatternDefinition", 203 },
    { "URLNotFound", 204 },
    { "UnableToCreateTemporaryFile", 205 },
    { "UnableToOpenFile", 206 },
    { "UnableToWriteFile", 207 },
    { "Default", 208 },
    { "Default", 209 },
    { "AngleIsDiscontinuous", 210 },
    { "ColorspaceColorProfileMismatch", 211 },
    { "ImageColorspaceDiffers", 212 },
    { "ImageColorspaceMismatch", 213 },
    { "ImageDifferenceExceedsLimit", 214 },
    { "ImageDoesNotContainResolution", 215 },
    { "ImageOpacityDiffers", 216 },
    { "ImageSequenceIsRequired", 217 },
    { "ImageSizeDiffers", 218 },
    { "InvalidColormapIndex", 219 },
    { "LeftAndRightImageSizesDiffer", 220 },
    { "NoImagesWereFound", 221 },
    { "NoImagesWereLoaded", 222 },
    { "NoLocaleImageAttribute", 223 },
    { "TooManyClusters", 224 },
    { "UnableToAppendImage", 225 },
    { "UnableToAssignProfile", 226 },
    { "UnableToAverageImage", 227 },
    { "UnableToCoalesceImage", 228 },
    { "UnableToCompareImages", 229 },
    { "UnableToCreateImageMosaic", 230 },
    { "UnableToCreateStereoImage", 231 },
    { "UnableToDeconstructImageSequence", 232 },
    { "UnableToFlattenImage", 233 },
    { "UnableToGetClipMask", 234 },
    { "UnableToHandleImageChannel", 235 },
    { "UnableToResizeImage", 236 },
    { "UnableToSegmentImage", 237 },
    { "UnableToSetClipMask", 238 },
    { "UnableToShearImage", 239 },
    { "WidthOrHeightExceedsLimit", 240 },
    { "UnableToPersistKey", 241 },
    { "Default", 242 },
    { "DPSLibraryIsNotAvailable", 243 },
    { "FPXLibraryIsNotAvailable", 244 },
    { "FreeTypeLibraryIsNotAvailable", 245 },
    { "JPEGLibraryIsNotAvailable", 246 },
    { "LCMSLibraryIsNotAvailable", 247 },
    { "LZWEncodingNotEnabled", 248 },
    { "NoDecodeDelegateForThisImageFormat", 249 },
    { "NoEncodeDelegateForThisImageFormat", 250 },
    { "TIFFLibraryIsNotAvailable", 251 },
    { "XMLLibraryIsNotAvailable", 252 },
    { "XWindowLibraryIsNotAvailable", 253 },
    { "ZipLibraryIsNotAvailable", 254 },
    { "Default", 255 },
    { "Default", 256 },
    { "FailedToCloseModule", 257 },
    { "FailedToFindSymbol", 258 },
    { "UnableToLoadModule", 259 },
    { "UnableToRegisterImageFormat", 260 },
    { "UnrecognizedModule", 261 },
    { "UnableToInitializeModuleLoader", 262 },
    { "Default", 263 },
    { "Default", 264 },
    { "Default", 265 },
    { "UserRequestedTerminationBySignal", 266 },
    { "Default", 267 },
    { "BevelWidthIsNegative", 268 },
    { "ColorSeparatedImageRequired", 269 },
    { "FrameIsLessThanImageSize", 270 },
    { "GeometryDimensionsAreZero", 271 },
    { "GeometryDoesNotContainImage", 272 },
    { "HaldClutImageDimensionsInvalid", 273 },
    { "ImagesAreNotTheSameSize", 274 },
    { "ImageSizeMustExceedBevelWidth", 275 },
    { "ImageSmallerThanKernelWidth", 276 },
    { "ImageSmallerThanRadius", 277 },
    { "ImageWidthsOrHeightsDiffer", 278 },
    { "InputImagesAlreadySpecified", 279 },
    { "InvalidSubimageSpecification", 280 },
    { "KernelRadiusIsTooSmall", 281 },
    { "KernelWidthMustBeAnOddNumber", 282 },
    { "MatrixIsNotSquare", 283 },
    { "MatrixOrderOutOfRange", 284 },
    { "MissingAnImageFilename", 285 },
    { "MissingArgument", 286 },
    { "MustSpecifyAnImageName", 287 },
    { "MustSpecifyImageSize", 288 },
    { "NoBlobDefined", 289 },
    { "NoImagesDefined", 290 },
    { "NonzeroWidthAndHeightRequired", 291 },
    { "NoProfileNameWasGiven", 292 },
    { "NullBlobArgument", 293 },
    { "ReferenceImageRequired", 294 },
    { "ReferenceIsNotMyType", 295 },
    { "RegionAreaExceedsLimit", 296 },
    { "RequestDidNotReturnAnImage", 297 },
    { "SteganoImageRequired", 298 },
    { "StereoImageRequired", 299 },
    { "SubimageSpecificationReturnsNoImages", 300 },
    { "UnableToAddOrRemoveProfile", 301 },
    { "UnableToAverageImageSequence", 302 },
    { "UnableToBlurImage", 303 },
    { "UnableToChopImage", 304 },
    { "UnableToColorMatrixImage", 305 },
    { "UnableToConstituteImage", 306 },
    { "UnableToConvolveImage", 307 },
    { "UnableToEdgeImage", 308 },
    { "UnableToEqualizeImage", 309 },
    { "UnableToFilterImage", 310 },
    { "UnableToFormatImageMetadata", 311 },
    { "UnableToFrameImage", 312 },
    { "UnableToOilPaintImage", 313 },
    { "UnableToPaintImage", 314 },
    { "UnableToRaiseImage", 315 },
    { "UnableToSharpenImage", 316 },
    { "UnableToThresholdImage", 317 },
    { "UnableToWaveImage", 318 },
    { "UnrecognizedAttribute", 319 },
    { "UnrecognizedChannelType", 320 },
    { "UnrecognizedColor", 321 },
    { "UnrecognizedColormapType", 322 },
    { "UnrecognizedColorspace", 323 },
    { "UnrecognizedCommand", 324 },
    { "UnrecognizedComposeOperator", 325 },
    { "UnrecognizedDisposeMethod", 326 },
    { "UnrecognizedElement", 327 },
    { "UnrecognizedEndianType", 328 },
    { "UnrecognizedGravityType", 329 },
    { "UnrecognizedHighlightStyle", 330 },
    { "UnrecognizedImageCompression", 331 },
    { "UnrecognizedImageFilter", 332 },
    { "UnrecognizedImageFormat", 333 },
    { "UnrecognizedImageMode", 334 },
    { "UnrecognizedImageType", 335 },
    { "UnrecognizedIntentType", 336 },
    { "UnrecognizedInterlaceType", 337 },
    { "UnrecognizedListType", 338 },
    { "UnrecognizedMetric", 339 },
    { "UnrecognizedModeType", 340 },
    { "UnrecognizedNoiseType", 341 },
    { "UnrecognizedOperator", 342 },
    { "UnrecognizedOption", 343 },
    { "UnrecognizedPerlMagickMethod", 344 },
    { "UnrecognizedPixelMap", 345 },
    { "UnrecognizedPreviewType", 346 },
    { "UnrecognizedResourceType", 347 },
    { "UnrecognizedType", 348 },
    { "UnrecognizedUnitsType", 349 },
    { "UnrecognizedVirtualPixelMethod", 350 },
    { "UnsupportedSamplingFactor", 351 },
    { "UsageError", 352 },
    { "InvalidColorspaceType", 353 },
    { "InvalidEndianType", 354 },
    { "InvalidImageType", 355 },
    { "InvalidInterlaceType", 356 },
    { "MissingAnImageFilename", 357 },
    { "MissingArgument", 358 },
    { "NoImagesWereLoaded", 359 },
    { "OptionLengthExceedsLimit", 360 },
    { "RequestDidNotReturnAnImage", 361 },
    { "UnableToOpenXServer", 362 },
    { "UnableToPersistKey", 363 },
    { "UnrecognizedColormapType", 364 },
    { "UnrecognizedColorspaceType", 365 },
    { "UnrecognizedDisposeMethod", 366 },
    { "UnrecognizedEndianType", 367 },
    { "UnrecognizedFilterType", 368 },
    { "UnrecognizedImageCompressionType", 369 },
    { "UnrecognizedImageType", 370 },
    { "UnrecognizedInterlaceType", 371 },
    { "UnrecognizedOption", 372 },
    { "UnrecognizedResourceType", 373 },
    { "UnrecognizedVirtualPixelMethod", 374 },
    { "UnrecognizedColor", 375 },
    { "ImageExpected", 376 },
    { "ImageInfoExpected", 377 },
    { "StructureSizeMismatch", 378 },
    { "UnableToGetRegistryID", 379 },
    { "UnableToLocateImage", 380 },
    { "UnableToSetRegistry", 381 },
    { "Default", 382 },
    { "Default", 383 },
    { "CacheResourcesExhausted", 384 },
    { "ImagePixelHeightLimitExceeded", 385 },
    { "ImagePixelLimitExceeded", 386 },
    { "ImagePixelWidthLimitExceeded", 387 },
    { "MemoryAllocationFailed", 388 },
    { "NoPixelsDefinedInCache", 389 },
    { "PixelCacheAllocationFailed", 390 },
    { "UnableToAddColorProfile", 391 },
    { "UnableToAddGenericProfile", 392 },
    { "UnableToAddIPTCProfile", 393 },
    { "UnableToAllocateCoefficients", 394 },
    { "UnableToAllocateColormap", 395 },
    { "UnableToAllocateICCProfile", 396 },
    { "UnableToAllocateString", 397 },
    { "UnableToAnnotateImage", 398 },
    { "UnableToAverageImageSequence", 399 },
    { "UnableToCloneDrawingWand", 400 },
    { "UnableToCloneImage", 401 },
    { "UnableToComputeImageSignature", 402 },
    { "UnableToConstituteImage", 403 },
    { "UnableToConvertFont", 404 },
    { "UnableToConvertStringToTokens", 405 },
    { "UnableToCreateColormap", 406 },
    { "UnableToCreateColorTransform", 407 },
    { "UnableToCreateCommandWidget", 408 },
    { "UnableToCreateImageGroup", 409 },
    { "UnableToCreateImageMontage", 410 },
    { "UnableToCreateXWindow", 411 },
    { "UnableToCropImage", 412 },
    { "UnableToDespeckleImage", 413 },
    { "UnableToDetermineImageClass", 414 },
    { "UnableToDetermineTheNumberOfImageColors", 415 },
    { "UnableToDitherImage", 416 },
    { "UnableToDrawOnImage", 417 },
    { "UnableToEdgeImage", 418 },
    { "UnableToEmbossImage", 419 },
    { "UnableToEnhanceImage", 420 },
    { "UnableToFloodfillImage", 421 },
    { "UnableToGammaCorrectImage", 422 },
    { "UnableToGetBestIconSize", 423 },
    { "UnableToGetFromRegistry", 424 },
    { "UnableToGetPackageInfo", 425 },
    { "UnableToLevelImage", 426 },
    { "UnableToMagnifyImage", 427 },
    { "UnableToManageColor", 428 },
    { "UnableToMapImage", 429 },
    { "UnableToMapImageSequence", 430 },
    { "UnableToMedianFilterImage", 431 },
    { "UnableToMotionBlurImage", 432 },
    { "UnableToNoiseFilterImage", 433 },
    { "UnableToNormalizeImage", 434 },
    { "UnableToOpenColorProfile", 435 },
    { "UnableToQuantizeImage", 436 },
    { "UnableToQuantizeImageSequence", 437 },
    { "UnableToReadTextChunk", 438 },
    { "UnableToReadXImage", 439 },
    { "UnableToReadXServerColormap", 440 },
    { "UnableToResizeImage", 441 },
    { "UnableToRotateImage", 442 },
    { "UnableToSampleImage", 443 },
    { "UnableToScaleImage", 444 },
    { "UnableToSelectImage", 445 },
    { "UnableToSharpenImage", 446 },
    { "UnableToShaveImage", 447 },
    { "UnableToShearImage", 448 },
    { "UnableToSortImageColormap", 449 },
    { "UnableToThresholdImage", 450 },
    { "UnableToTransformColorspace", 451 },
    { "MemoryAllocationFailed", 452 },
    { "SemaporeOperationFailed", 453 },
    { "UnableToAllocateAscii85Info", 454 },
    { "UnableToAllocateCacheInfo", 455 },
    { "UnableToAllocateCacheView", 456 },
    { "UnableToAllocateColorInfo", 457 },
    { "UnableToAllocateDashPattern", 458 },
    { "UnableToAllocateDelegateInfo", 459 },
    { "UnableToAllocateDerivatives", 460 },
    { "UnableToAllocateDrawContext", 461 },
    { "UnableToAllocateDrawInfo", 462 },
    { "UnableToAllocateDrawingWand", 463 },
    { "UnableToAllocateGammaMap", 464 },
    { "UnableToAllocateImage", 465 },
    { "UnableToAllocateImagePixels", 466 },
    { "UnableToAllocateLogInfo", 467 },
    { "UnableToAllocateMagicInfo", 468 },
    { "UnableToAllocateMagickInfo", 469 },
    { "UnableToAllocateModuleInfo", 470 },
    { "UnableToAllocateMontageInfo", 471 },
    { "UnableToAllocateQuantizeInfo", 472 },
    { "UnableToAllocateRandomKernel", 473 },
    { "UnableToAllocateRegistryInfo", 474 },
    { "UnableToAllocateSemaphoreInfo", 475 },
    { "UnableToAllocateString", 476 },
    { "UnableToAllocateTypeInfo", 477 },
    { "UnableToAllocateWand", 478 },
    { "UnableToAnimateImageSequence", 479 },
    { "UnableToCloneBlobInfo", 480 },
    { "UnableToCloneCacheInfo", 481 },
    { "UnableToCloneImage", 482 },
    { "UnableToCloneImageInfo", 483 },
    { "UnableToConcatenateString", 484 },
    { "UnableToConvertText", 485 },
    { "UnableToCreateColormap", 486 },
    { "UnableToDestroySemaphore", 487 },
    { "UnableToDisplayImage", 488 },
    { "UnableToEscapeString", 489 },
    { "UnableToInitializeSemaphore", 490 },
    { "UnableToInterpretMSLImage", 491 },
    { "UnableToLockSemaphore", 492 },
    { "UnableToObtainRandomEntropy", 493 },
    { "UnableToUnlockSemaphore", 494 },
    { "MemoryAllocationFailed", 495 },
    { "ImageDoesNotContainTheStreamGeometry", 496 },
    { "NoStreamHandlerIsDefined", 497 },
    { "PixelCacheIsNotOpen", 498 },
    { "UnableToAcquirePixelStream", 499 },
    { "UnableToSetPixelStream", 500 },
    { "UnableToSyncPixelStream", 501 },
    { "Default", 502 },
    { "Default", 503 },
    { "FontSubstitutionRequired", 504 },
    { "UnableToGetTypeMetrics", 505 },
    { "UnableToInitializeFreetypeLibrary", 506 },
    { "UnableToReadFont", 507 },
    { "UnrecognizedFontEncoding", 508 },
    { "Default", 509 },
    { "Default", 510 },
    { "InvalidColormapIndex", 511 },
    { "WandAPINotImplemented", 512 },
    { "WandContainsNoImageIndexs", 513 },
    { "WandContainsNoImages", 514 },
    { "ColorIsNotKnownToServer", 515 },
    { "NoWindowWithSpecifiedIDExists", 516 },
    { "StandardColormapIsNotInitialized", 517 },
    { "UnableToConnectToRemoteDisplay", 518 },
    { "UnableToCreateBitmap", 519 },
    { "UnableToCreateColormap", 520 },
    { "UnableToCreatePixmap", 521 },
    { "UnableToCreateProperty", 522 },
    { "UnableToCreateStandardColormap", 523 },
    { "UnableToDisplayImageInfo", 524 },
    { "UnableToGetProperty", 525 },
    { "UnableToGetStandardColormap", 526 },
    { "UnableToGetVisual", 527 },
    { "UnableToGrabMouse", 528 },
    { "UnableToLoadFont", 529 },
    { "UnableToMatchVisualToStandardColormap", 530 },
    { "UnableToOpenXServer", 531 },
    { "UnableToReadXAttributes", 532 },
    { "UnableToReadXWindowImage", 533 },
    { "UnrecognizedColormapType", 534 },
    { "UnrecognizedGravityType", 535 },
    { "UnrecognizedVisualSpecifier", 536 },
    { "UnableToAllocateXHints", 537 },
    { "UnableToCreateCursor", 538 },
    { "UnableToCreateGraphicContext", 539 },
    { "UnableToCreateStandardColormap", 540 },
    { "UnableToCreateTextProperty", 541 },
    { "UnableToCreateXImage", 542 },
    { "UnableToCreateXPixmap", 543 },
    { "UnableToCreateXWindow", 544 },
    { "UnableToDisplayImage", 545 },
    { "UnableToDitherImage", 546 },
    { "UnableToGetPixelInfo", 547 },
    { "UnableToGetVisual", 548 },
    { "UnableToLoadFont", 549 },
    { "UnableToMakeXWindow", 550 },
    { "UnableToOpenXServer", 551 },
    { "UnableToViewFonts", 552 },
    { "UnableToGetVisual", 553 },
    { "UsingDefaultVisual", 554 },
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
    "primitive arithmetic overflow",
    "too many coordinates",
    "Unable to print",
    "unbalanced graphic context push-pop",
    "unreasonable gradient image size",
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
