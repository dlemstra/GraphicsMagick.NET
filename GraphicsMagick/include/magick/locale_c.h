#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 544

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
#define MGK_CoderErrorUnsupportedCellTypeInTheMatrix 87
#define MGK_CoderErrorWebPDecodingFailedUserAbort 88
#define MGK_CoderErrorWebPEncodingFailed 89
#define MGK_CoderErrorWebPEncodingFailedBadDimension 90
#define MGK_CoderErrorWebPEncodingFailedBadWrite 91
#define MGK_CoderErrorWebPEncodingFailedBitstreamOutOfMemory 92
#define MGK_CoderErrorWebPEncodingFailedFileTooBig 93
#define MGK_CoderErrorWebPEncodingFailedInvalidConfiguration 94
#define MGK_CoderErrorWebPEncodingFailedNULLParameter 95
#define MGK_CoderErrorWebPEncodingFailedOutOfMemory 96
#define MGK_CoderErrorWebPEncodingFailedPartition0Overflow 97
#define MGK_CoderErrorWebPEncodingFailedPartitionOverflow 98
#define MGK_CoderErrorWebPEncodingFailedUserAbort 99
#define MGK_CoderErrorWebPInvalidConfiguration 100
#define MGK_CoderErrorWebPInvalidParameter 101
#define MGK_CoderErrorZipCompressionNotSupported 102
#define MGK_CoderFatalErrorDefault 103
#define MGK_CoderWarningLosslessToLossyJPEGConversion 104
#define MGK_ConfigureErrorIncludeElementNestedTooDeeply 105
#define MGK_ConfigureErrorRegistryKeyLookupFailed 106
#define MGK_ConfigureErrorStringTokenLengthExceeded 107
#define MGK_ConfigureErrorUnableToAccessConfigureFile 108
#define MGK_ConfigureErrorUnableToAccessFontFile 109
#define MGK_ConfigureErrorUnableToAccessLogFile 110
#define MGK_ConfigureErrorUnableToAccessModuleFile 111
#define MGK_ConfigureFatalErrorDefault 112
#define MGK_ConfigureFatalErrorUnableToChangeToWorkingDirectory 113
#define MGK_ConfigureFatalErrorUnableToGetCurrentDirectory 114
#define MGK_ConfigureFatalErrorUnableToRestoreCurrentDirectory 115
#define MGK_ConfigureWarningDefault 116
#define MGK_CorruptImageErrorAnErrorHasOccurredReadingFromFile 117
#define MGK_CorruptImageErrorAnErrorHasOccurredWritingToFile 118
#define MGK_CorruptImageErrorColormapExceedsColorsLimit 119
#define MGK_CorruptImageErrorCompressionNotValid 120
#define MGK_CorruptImageErrorCorruptImage 121
#define MGK_CorruptImageErrorImageFileDoesNotContainAnyImageData 122
#define MGK_CorruptImageErrorImageTypeNotSupported 123
#define MGK_CorruptImageErrorImproperImageHeader 124
#define MGK_CorruptImageErrorInsufficientImageDataInFile 125
#define MGK_CorruptImageErrorInvalidColormapIndex 126
#define MGK_CorruptImageErrorInvalidFileFormatVersion 127
#define MGK_CorruptImageErrorLengthAndFilesizeDoNotMatch 128
#define MGK_CorruptImageErrorMissingImageChannel 129
#define MGK_CorruptImageErrorNegativeOrZeroImageSize 130
#define MGK_CorruptImageErrorNonOS2HeaderSizeError 131
#define MGK_CorruptImageErrorNotEnoughTiles 132
#define MGK_CorruptImageErrorStaticPlanesValueNotEqualToOne 133
#define MGK_CorruptImageErrorSubsamplingRequiresEvenWidth 134
#define MGK_CorruptImageErrorTooMuchImageDataInFile 135
#define MGK_CorruptImageErrorUnableToReadColormapFromDumpFile 136
#define MGK_CorruptImageErrorUnableToReadColorProfile 137
#define MGK_CorruptImageErrorUnableToReadExtensionBlock 138
#define MGK_CorruptImageErrorUnableToReadGenericProfile 139
#define MGK_CorruptImageErrorUnableToReadImageData 140
#define MGK_CorruptImageErrorUnableToReadImageHeader 141
#define MGK_CorruptImageErrorUnableToReadIPTCProfile 142
#define MGK_CorruptImageErrorUnableToReadPixmapFromDumpFile 143
#define MGK_CorruptImageErrorUnableToReadSubImageData 144
#define MGK_CorruptImageErrorUnableToReadVIDImage 145
#define MGK_CorruptImageErrorUnableToReadWindowNameFromDumpFile 146
#define MGK_CorruptImageErrorUnableToRunlengthDecodeImage 147
#define MGK_CorruptImageErrorUnableToUncompressImage 148
#define MGK_CorruptImageErrorUnexpectedEndOfFile 149
#define MGK_CorruptImageErrorUnexpectedSamplingFactor 150
#define MGK_CorruptImageErrorUnknownPatternType 151
#define MGK_CorruptImageErrorUnrecognizedBitsPerPixel 152
#define MGK_CorruptImageErrorUnrecognizedImageCompression 153
#define MGK_CorruptImageErrorUnrecognizedNumberOfColors 154
#define MGK_CorruptImageErrorUnrecognizedXWDHeader 155
#define MGK_CorruptImageFatalErrorUnableToPersistKey 156
#define MGK_CorruptImageWarningCompressionNotValid 157
#define MGK_CorruptImageWarningImproperImageHeader 158
#define MGK_CorruptImageWarningLengthAndFilesizeDoNotMatch 159
#define MGK_CorruptImageWarningNegativeOrZeroImageSize 160
#define MGK_CorruptImageWarningNonOS2HeaderSizeError 161
#define MGK_CorruptImageWarningSkipToSyncByte 162
#define MGK_CorruptImageWarningStaticPlanesValueNotEqualToOne 163
#define MGK_CorruptImageWarningUnrecognizedBitsPerPixel 164
#define MGK_CorruptImageWarningUnrecognizedImageCompression 165
#define MGK_DelegateErrorDelegateFailed 166
#define MGK_DelegateErrorFailedToAllocateArgumentList 167
#define MGK_DelegateErrorFailedToAllocateGhostscriptInterpreter 168
#define MGK_DelegateErrorFailedToComputeOutputSize 169
#define MGK_DelegateErrorFailedToFindGhostscript 170
#define MGK_DelegateErrorFailedToRenderFile 171
#define MGK_DelegateErrorFailedToScanFile 172
#define MGK_DelegateErrorNoTagFound 173
#define MGK_DelegateErrorPostscriptDelegateFailed 174
#define MGK_DelegateErrorUnableToCreateImage 175
#define MGK_DelegateErrorUnableToCreateImageComponent 176
#define MGK_DelegateErrorUnableToDecodeImageFile 177
#define MGK_DelegateErrorUnableToEncodeImageFile 178
#define MGK_DelegateErrorUnableToInitializeFPXLibrary 179
#define MGK_DelegateErrorUnableToInitializeWMFLibrary 180
#define MGK_DelegateErrorUnableToManageJP2Stream 181
#define MGK_DelegateErrorUnableToWriteSVGFormat 182
#define MGK_DelegateErrorWebPABIMismatch 183
#define MGK_DelegateFatalErrorDefault 184
#define MGK_DelegateWarningDefault 185
#define MGK_DrawErrorAlreadyPushingPatternDefinition 186
#define MGK_DrawErrorNonconformingDrawingPrimitiveDefinition 187
#define MGK_DrawErrorTooManyCoordinates 188
#define MGK_DrawErrorUnableToPrint 189
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 190
#define MGK_DrawFatalErrorDefault 191
#define MGK_DrawWarningNotARelativeURL 192
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 193
#define MGK_DrawWarningURLNotFound 194
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 195
#define MGK_FileOpenErrorUnableToOpenFile 196
#define MGK_FileOpenErrorUnableToWriteFile 197
#define MGK_FileOpenFatalErrorDefault 198
#define MGK_FileOpenWarningDefault 199
#define MGK_ImageErrorAngleIsDiscontinuous 200
#define MGK_ImageErrorColorspaceColorProfileMismatch 201
#define MGK_ImageErrorImageColorspaceDiffers 202
#define MGK_ImageErrorImageColorspaceMismatch 203
#define MGK_ImageErrorImageDifferenceExceedsLimit 204
#define MGK_ImageErrorImageDoesNotContainResolution 205
#define MGK_ImageErrorImageOpacityDiffers 206
#define MGK_ImageErrorImageSequenceIsRequired 207
#define MGK_ImageErrorImageSizeDiffers 208
#define MGK_ImageErrorInvalidColormapIndex 209
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 210
#define MGK_ImageErrorNoImagesWereFound 211
#define MGK_ImageErrorNoImagesWereLoaded 212
#define MGK_ImageErrorNoLocaleImageAttribute 213
#define MGK_ImageErrorTooManyClusters 214
#define MGK_ImageErrorUnableToAppendImage 215
#define MGK_ImageErrorUnableToAssignProfile 216
#define MGK_ImageErrorUnableToAverageImage 217
#define MGK_ImageErrorUnableToCoalesceImage 218
#define MGK_ImageErrorUnableToCompareImages 219
#define MGK_ImageErrorUnableToCreateImageMosaic 220
#define MGK_ImageErrorUnableToCreateStereoImage 221
#define MGK_ImageErrorUnableToDeconstructImageSequence 222
#define MGK_ImageErrorUnableToFlattenImage 223
#define MGK_ImageErrorUnableToGetClipMask 224
#define MGK_ImageErrorUnableToHandleImageChannel 225
#define MGK_ImageErrorUnableToResizeImage 226
#define MGK_ImageErrorUnableToSegmentImage 227
#define MGK_ImageErrorUnableToSetClipMask 228
#define MGK_ImageErrorUnableToShearImage 229
#define MGK_ImageErrorWidthOrHeightExceedsLimit 230
#define MGK_ImageFatalErrorUnableToPersistKey 231
#define MGK_ImageWarningDefault 232
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 233
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 234
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 235
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 236
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 237
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 238
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 239
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 240
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 241
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 242
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 243
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 244
#define MGK_MissingDelegateFatalErrorDefault 245
#define MGK_MissingDelegateWarningDefault 246
#define MGK_ModuleErrorFailedToCloseModule 247
#define MGK_ModuleErrorFailedToFindSymbol 248
#define MGK_ModuleErrorUnableToLoadModule 249
#define MGK_ModuleErrorUnableToRegisterImageFormat 250
#define MGK_ModuleErrorUnrecognizedModule 251
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 252
#define MGK_ModuleWarningDefault 253
#define MGK_MonitorErrorDefault 254
#define MGK_MonitorFatalErrorDefault 255
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 256
#define MGK_MonitorWarningDefault 257
#define MGK_OptionErrorBevelWidthIsNegative 258
#define MGK_OptionErrorColorSeparatedImageRequired 259
#define MGK_OptionErrorFrameIsLessThanImageSize 260
#define MGK_OptionErrorGeometryDimensionsAreZero 261
#define MGK_OptionErrorGeometryDoesNotContainImage 262
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 263
#define MGK_OptionErrorImagesAreNotTheSameSize 264
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 265
#define MGK_OptionErrorImageSmallerThanKernelWidth 266
#define MGK_OptionErrorImageSmallerThanRadius 267
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 268
#define MGK_OptionErrorInputImagesAlreadySpecified 269
#define MGK_OptionErrorInvalidSubimageSpecification 270
#define MGK_OptionErrorKernelRadiusIsTooSmall 271
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 272
#define MGK_OptionErrorMatrixIsNotSquare 273
#define MGK_OptionErrorMatrixOrderOutOfRange 274
#define MGK_OptionErrorMissingAnImageFilename 275
#define MGK_OptionErrorMissingArgument 276
#define MGK_OptionErrorMustSpecifyAnImageName 277
#define MGK_OptionErrorMustSpecifyImageSize 278
#define MGK_OptionErrorNoBlobDefined 279
#define MGK_OptionErrorNoImagesDefined 280
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 281
#define MGK_OptionErrorNoProfileNameWasGiven 282
#define MGK_OptionErrorNullBlobArgument 283
#define MGK_OptionErrorReferenceImageRequired 284
#define MGK_OptionErrorReferenceIsNotMyType 285
#define MGK_OptionErrorRegionAreaExceedsLimit 286
#define MGK_OptionErrorRequestDidNotReturnAnImage 287
#define MGK_OptionErrorSteganoImageRequired 288
#define MGK_OptionErrorStereoImageRequired 289
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 290
#define MGK_OptionErrorUnableToAddOrRemoveProfile 291
#define MGK_OptionErrorUnableToAverageImageSequence 292
#define MGK_OptionErrorUnableToBlurImage 293
#define MGK_OptionErrorUnableToChopImage 294
#define MGK_OptionErrorUnableToColorMatrixImage 295
#define MGK_OptionErrorUnableToConstituteImage 296
#define MGK_OptionErrorUnableToConvolveImage 297
#define MGK_OptionErrorUnableToEdgeImage 298
#define MGK_OptionErrorUnableToEqualizeImage 299
#define MGK_OptionErrorUnableToFilterImage 300
#define MGK_OptionErrorUnableToFormatImageMetadata 301
#define MGK_OptionErrorUnableToFrameImage 302
#define MGK_OptionErrorUnableToOilPaintImage 303
#define MGK_OptionErrorUnableToPaintImage 304
#define MGK_OptionErrorUnableToRaiseImage 305
#define MGK_OptionErrorUnableToSharpenImage 306
#define MGK_OptionErrorUnableToThresholdImage 307
#define MGK_OptionErrorUnableToWaveImage 308
#define MGK_OptionErrorUnrecognizedAttribute 309
#define MGK_OptionErrorUnrecognizedChannelType 310
#define MGK_OptionErrorUnrecognizedColor 311
#define MGK_OptionErrorUnrecognizedColormapType 312
#define MGK_OptionErrorUnrecognizedColorspace 313
#define MGK_OptionErrorUnrecognizedCommand 314
#define MGK_OptionErrorUnrecognizedComposeOperator 315
#define MGK_OptionErrorUnrecognizedDisposeMethod 316
#define MGK_OptionErrorUnrecognizedElement 317
#define MGK_OptionErrorUnrecognizedEndianType 318
#define MGK_OptionErrorUnrecognizedGravityType 319
#define MGK_OptionErrorUnrecognizedHighlightStyle 320
#define MGK_OptionErrorUnrecognizedImageCompression 321
#define MGK_OptionErrorUnrecognizedImageFilter 322
#define MGK_OptionErrorUnrecognizedImageFormat 323
#define MGK_OptionErrorUnrecognizedImageMode 324
#define MGK_OptionErrorUnrecognizedImageType 325
#define MGK_OptionErrorUnrecognizedIntentType 326
#define MGK_OptionErrorUnrecognizedInterlaceType 327
#define MGK_OptionErrorUnrecognizedListType 328
#define MGK_OptionErrorUnrecognizedMetric 329
#define MGK_OptionErrorUnrecognizedModeType 330
#define MGK_OptionErrorUnrecognizedNoiseType 331
#define MGK_OptionErrorUnrecognizedOperator 332
#define MGK_OptionErrorUnrecognizedOption 333
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 334
#define MGK_OptionErrorUnrecognizedPixelMap 335
#define MGK_OptionErrorUnrecognizedPreviewType 336
#define MGK_OptionErrorUnrecognizedResourceType 337
#define MGK_OptionErrorUnrecognizedType 338
#define MGK_OptionErrorUnrecognizedUnitsType 339
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 340
#define MGK_OptionErrorUnsupportedSamplingFactor 341
#define MGK_OptionErrorUsageError 342
#define MGK_OptionFatalErrorInvalidColorspaceType 343
#define MGK_OptionFatalErrorInvalidEndianType 344
#define MGK_OptionFatalErrorInvalidImageType 345
#define MGK_OptionFatalErrorInvalidInterlaceType 346
#define MGK_OptionFatalErrorMissingAnImageFilename 347
#define MGK_OptionFatalErrorMissingArgument 348
#define MGK_OptionFatalErrorNoImagesWereLoaded 349
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 350
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 351
#define MGK_OptionFatalErrorUnableToOpenXServer 352
#define MGK_OptionFatalErrorUnableToPersistKey 353
#define MGK_OptionFatalErrorUnrecognizedColormapType 354
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 355
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 356
#define MGK_OptionFatalErrorUnrecognizedEndianType 357
#define MGK_OptionFatalErrorUnrecognizedFilterType 358
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 359
#define MGK_OptionFatalErrorUnrecognizedImageType 360
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 361
#define MGK_OptionFatalErrorUnrecognizedOption 362
#define MGK_OptionFatalErrorUnrecognizedResourceType 363
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 364
#define MGK_OptionWarningUnrecognizedColor 365
#define MGK_RegistryErrorImageExpected 366
#define MGK_RegistryErrorImageInfoExpected 367
#define MGK_RegistryErrorStructureSizeMismatch 368
#define MGK_RegistryErrorUnableToGetRegistryID 369
#define MGK_RegistryErrorUnableToLocateImage 370
#define MGK_RegistryErrorUnableToSetRegistry 371
#define MGK_RegistryFatalErrorDefault 372
#define MGK_RegistryWarningDefault 373
#define MGK_ResourceLimitErrorCacheResourcesExhausted 374
#define MGK_ResourceLimitErrorImagePixelHeightLimitExceeded 375
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 376
#define MGK_ResourceLimitErrorImagePixelWidthLimitExceeded 377
#define MGK_ResourceLimitErrorMemoryAllocationFailed 378
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 379
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 380
#define MGK_ResourceLimitErrorUnableToAddColorProfile 381
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 382
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 383
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 384
#define MGK_ResourceLimitErrorUnableToAllocateColormap 385
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 386
#define MGK_ResourceLimitErrorUnableToAllocateString 387
#define MGK_ResourceLimitErrorUnableToAnnotateImage 388
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 389
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 390
#define MGK_ResourceLimitErrorUnableToCloneImage 391
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 392
#define MGK_ResourceLimitErrorUnableToConstituteImage 393
#define MGK_ResourceLimitErrorUnableToConvertFont 394
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 395
#define MGK_ResourceLimitErrorUnableToCreateColormap 396
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 397
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 398
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 399
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 400
#define MGK_ResourceLimitErrorUnableToCreateXWindow 401
#define MGK_ResourceLimitErrorUnableToCropImage 402
#define MGK_ResourceLimitErrorUnableToDespeckleImage 403
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 404
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 405
#define MGK_ResourceLimitErrorUnableToDitherImage 406
#define MGK_ResourceLimitErrorUnableToDrawOnImage 407
#define MGK_ResourceLimitErrorUnableToEdgeImage 408
#define MGK_ResourceLimitErrorUnableToEmbossImage 409
#define MGK_ResourceLimitErrorUnableToEnhanceImage 410
#define MGK_ResourceLimitErrorUnableToFloodfillImage 411
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 412
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 413
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 414
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 415
#define MGK_ResourceLimitErrorUnableToLevelImage 416
#define MGK_ResourceLimitErrorUnableToMagnifyImage 417
#define MGK_ResourceLimitErrorUnableToManageColor 418
#define MGK_ResourceLimitErrorUnableToMapImage 419
#define MGK_ResourceLimitErrorUnableToMapImageSequence 420
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 421
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 422
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 423
#define MGK_ResourceLimitErrorUnableToNormalizeImage 424
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 425
#define MGK_ResourceLimitErrorUnableToQuantizeImage 426
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 427
#define MGK_ResourceLimitErrorUnableToReadTextChunk 428
#define MGK_ResourceLimitErrorUnableToReadXImage 429
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 430
#define MGK_ResourceLimitErrorUnableToResizeImage 431
#define MGK_ResourceLimitErrorUnableToRotateImage 432
#define MGK_ResourceLimitErrorUnableToSampleImage 433
#define MGK_ResourceLimitErrorUnableToScaleImage 434
#define MGK_ResourceLimitErrorUnableToSelectImage 435
#define MGK_ResourceLimitErrorUnableToSharpenImage 436
#define MGK_ResourceLimitErrorUnableToShaveImage 437
#define MGK_ResourceLimitErrorUnableToShearImage 438
#define MGK_ResourceLimitErrorUnableToSortImageColormap 439
#define MGK_ResourceLimitErrorUnableToThresholdImage 440
#define MGK_ResourceLimitErrorUnableToTransformColorspace 441
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 442
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 443
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 444
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 445
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 446
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 447
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 448
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 449
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 450
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 451
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 452
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 453
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 454
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 455
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 456
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 457
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 458
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 459
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 460
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 461
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 462
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 463
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 464
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 465
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 466
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 467
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 468
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 469
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 470
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 471
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 472
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 473
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 474
#define MGK_ResourceLimitFatalErrorUnableToConvertText 475
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 476
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 477
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 478
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 479
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 480
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 481
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 482
#define MGK_ResourceLimitFatalErrorUnableToObtainRandomEntropy 483
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 484
#define MGK_ResourceLimitWarningMemoryAllocationFailed 485
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 486
#define MGK_StreamErrorNoStreamHandlerIsDefined 487
#define MGK_StreamErrorPixelCacheIsNotOpen 488
#define MGK_StreamErrorUnableToAcquirePixelStream 489
#define MGK_StreamErrorUnableToSetPixelStream 490
#define MGK_StreamErrorUnableToSyncPixelStream 491
#define MGK_StreamFatalErrorDefault 492
#define MGK_StreamWarningDefault 493
#define MGK_TypeErrorFontSubstitutionRequired 494
#define MGK_TypeErrorUnableToGetTypeMetrics 495
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 496
#define MGK_TypeErrorUnableToReadFont 497
#define MGK_TypeErrorUnrecognizedFontEncoding 498
#define MGK_TypeFatalErrorDefault 499
#define MGK_TypeWarningDefault 500
#define MGK_WandErrorInvalidColormapIndex 501
#define MGK_WandErrorWandAPINotImplemented 502
#define MGK_WandErrorWandContainsNoImageIndexs 503
#define MGK_WandErrorWandContainsNoImages 504
#define MGK_XServerErrorColorIsNotKnownToServer 505
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 506
#define MGK_XServerErrorStandardColormapIsNotInitialized 507
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 508
#define MGK_XServerErrorUnableToCreateBitmap 509
#define MGK_XServerErrorUnableToCreateColormap 510
#define MGK_XServerErrorUnableToCreatePixmap 511
#define MGK_XServerErrorUnableToCreateProperty 512
#define MGK_XServerErrorUnableToCreateStandardColormap 513
#define MGK_XServerErrorUnableToDisplayImageInfo 514
#define MGK_XServerErrorUnableToGetProperty 515
#define MGK_XServerErrorUnableToGetStandardColormap 516
#define MGK_XServerErrorUnableToGetVisual 517
#define MGK_XServerErrorUnableToGrabMouse 518
#define MGK_XServerErrorUnableToLoadFont 519
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 520
#define MGK_XServerErrorUnableToOpenXServer 521
#define MGK_XServerErrorUnableToReadXAttributes 522
#define MGK_XServerErrorUnableToReadXWindowImage 523
#define MGK_XServerErrorUnrecognizedColormapType 524
#define MGK_XServerErrorUnrecognizedGravityType 525
#define MGK_XServerErrorUnrecognizedVisualSpecifier 526
#define MGK_XServerFatalErrorUnableToAllocateXHints 527
#define MGK_XServerFatalErrorUnableToCreateCursor 528
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 529
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 530
#define MGK_XServerFatalErrorUnableToCreateTextProperty 531
#define MGK_XServerFatalErrorUnableToCreateXImage 532
#define MGK_XServerFatalErrorUnableToCreateXPixmap 533
#define MGK_XServerFatalErrorUnableToCreateXWindow 534
#define MGK_XServerFatalErrorUnableToDisplayImage 535
#define MGK_XServerFatalErrorUnableToDitherImage 536
#define MGK_XServerFatalErrorUnableToGetPixelInfo 537
#define MGK_XServerFatalErrorUnableToGetVisual 538
#define MGK_XServerFatalErrorUnableToLoadFont 539
#define MGK_XServerFatalErrorUnableToMakeXWindow 540
#define MGK_XServerFatalErrorUnableToOpenXServer 541
#define MGK_XServerFatalErrorUnableToViewFonts 542
#define MGK_XServerWarningUnableToGetVisual 543
#define MGK_XServerWarningUsingDefaultVisual 544

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
    { "Coder/FatalError", 102, CoderFatalError },
    { "Coder/Warning", 103, CoderWarning },
    { "Configure/Error", 104, ConfigureError },
    { "Configure/FatalError", 111, ConfigureFatalError },
    { "Configure/Warning", 115, ConfigureWarning },
    { "Corrupt/Image/Error", 116, CorruptImageError },
    { "Corrupt/Image/FatalError", 155, CorruptImageFatalError },
    { "Corrupt/Image/Warning", 156, CorruptImageWarning },
    { "Delegate/Error", 165, DelegateError },
    { "Delegate/FatalError", 183, DelegateFatalError },
    { "Delegate/Warning", 184, DelegateWarning },
    { "Draw/Error", 185, DrawError },
    { "Draw/FatalError", 190, DrawFatalError },
    { "Draw/Warning", 191, DrawWarning },
    { "File/Open/Error", 194, FileOpenError },
    { "File/Open/FatalError", 197, FileOpenFatalError },
    { "File/Open/Warning", 198, FileOpenWarning },
    { "Image/Error", 199, ImageError },
    { "Image/FatalError", 230, ImageFatalError },
    { "Image/Warning", 231, ImageWarning },
    { "Missing/Delegate/Error", 232, MissingDelegateError },
    { "Missing/Delegate/FatalError", 244, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 245, MissingDelegateWarning },
    { "Module/Error", 246, ModuleError },
    { "Module/FatalError", 251, ModuleFatalError },
    { "Module/Warning", 252, ModuleWarning },
    { "Monitor/Error", 253, MonitorError },
    { "Monitor/FatalError", 254, MonitorFatalError },
    { "Monitor/Warning", 256, MonitorWarning },
    { "Option/Error", 257, OptionError },
    { "Option/FatalError", 342, OptionFatalError },
    { "Option/Warning", 364, OptionWarning },
    { "Registry/Error", 365, RegistryError },
    { "Registry/FatalError", 371, RegistryFatalError },
    { "Registry/Warning", 372, RegistryWarning },
    { "Resource/Limit/Error", 373, ResourceLimitError },
    { "Resource/Limit/FatalError", 441, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 484, ResourceLimitWarning },
    { "Stream/Error", 485, StreamError },
    { "Stream/FatalError", 491, StreamFatalError },
    { "Stream/Warning", 492, StreamWarning },
    { "Type/Error", 493, TypeError },
    { "Type/FatalError", 498, TypeFatalError },
    { "Type/Warning", 499, TypeWarning },
    { "Wand/Error", 500, WandError },
    { "XServer/Error", 504, XServerError },
    { "XServer/FatalError", 526, XServerFatalError },
    { "XServer/Warning", 542, XServerWarning },
    { 0, 544, UndefinedException }
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
    { "UnsupportedCellTypeInTheMatrix", 87 },
    { "WebPDecodingFailedUserAbort", 88 },
    { "WebPEncodingFailed", 89 },
    { "WebPEncodingFailedBadDimension", 90 },
    { "WebPEncodingFailedBadWrite", 91 },
    { "WebPEncodingFailedBitstreamOutOfMemory", 92 },
    { "WebPEncodingFailedFileTooBig", 93 },
    { "WebPEncodingFailedInvalidConfiguration", 94 },
    { "WebPEncodingFailedNULLParameter", 95 },
    { "WebPEncodingFailedOutOfMemory", 96 },
    { "WebPEncodingFailedPartition0Overflow", 97 },
    { "WebPEncodingFailedPartitionOverflow", 98 },
    { "WebPEncodingFailedUserAbort", 99 },
    { "WebPInvalidConfiguration", 100 },
    { "WebPInvalidParameter", 101 },
    { "ZipCompressionNotSupported", 102 },
    { "Default", 103 },
    { "LosslessToLossyJPEGConversion", 104 },
    { "IncludeElementNestedTooDeeply", 105 },
    { "RegistryKeyLookupFailed", 106 },
    { "StringTokenLengthExceeded", 107 },
    { "UnableToAccessConfigureFile", 108 },
    { "UnableToAccessFontFile", 109 },
    { "UnableToAccessLogFile", 110 },
    { "UnableToAccessModuleFile", 111 },
    { "Default", 112 },
    { "UnableToChangeToWorkingDirectory", 113 },
    { "UnableToGetCurrentDirectory", 114 },
    { "UnableToRestoreCurrentDirectory", 115 },
    { "Default", 116 },
    { "AnErrorHasOccurredReadingFromFile", 117 },
    { "AnErrorHasOccurredWritingToFile", 118 },
    { "ColormapExceedsColorsLimit", 119 },
    { "CompressionNotValid", 120 },
    { "CorruptImage", 121 },
    { "ImageFileDoesNotContainAnyImageData", 122 },
    { "ImageTypeNotSupported", 123 },
    { "ImproperImageHeader", 124 },
    { "InsufficientImageDataInFile", 125 },
    { "InvalidColormapIndex", 126 },
    { "InvalidFileFormatVersion", 127 },
    { "LengthAndFilesizeDoNotMatch", 128 },
    { "MissingImageChannel", 129 },
    { "NegativeOrZeroImageSize", 130 },
    { "NonOS2HeaderSizeError", 131 },
    { "NotEnoughTiles", 132 },
    { "StaticPlanesValueNotEqualToOne", 133 },
    { "SubsamplingRequiresEvenWidth", 134 },
    { "TooMuchImageDataInFile", 135 },
    { "UnableToReadColormapFromDumpFile", 136 },
    { "UnableToReadColorProfile", 137 },
    { "UnableToReadExtensionBlock", 138 },
    { "UnableToReadGenericProfile", 139 },
    { "UnableToReadImageData", 140 },
    { "UnableToReadImageHeader", 141 },
    { "UnableToReadIPTCProfile", 142 },
    { "UnableToReadPixmapFromDumpFile", 143 },
    { "UnableToReadSubImageData", 144 },
    { "UnableToReadVIDImage", 145 },
    { "UnableToReadWindowNameFromDumpFile", 146 },
    { "UnableToRunlengthDecodeImage", 147 },
    { "UnableToUncompressImage", 148 },
    { "UnexpectedEndOfFile", 149 },
    { "UnexpectedSamplingFactor", 150 },
    { "UnknownPatternType", 151 },
    { "UnrecognizedBitsPerPixel", 152 },
    { "UnrecognizedImageCompression", 153 },
    { "UnrecognizedNumberOfColors", 154 },
    { "UnrecognizedXWDHeader", 155 },
    { "UnableToPersistKey", 156 },
    { "CompressionNotValid", 157 },
    { "ImproperImageHeader", 158 },
    { "LengthAndFilesizeDoNotMatch", 159 },
    { "NegativeOrZeroImageSize", 160 },
    { "NonOS2HeaderSizeError", 161 },
    { "SkipToSyncByte", 162 },
    { "StaticPlanesValueNotEqualToOne", 163 },
    { "UnrecognizedBitsPerPixel", 164 },
    { "UnrecognizedImageCompression", 165 },
    { "DelegateFailed", 166 },
    { "FailedToAllocateArgumentList", 167 },
    { "FailedToAllocateGhostscriptInterpreter", 168 },
    { "FailedToComputeOutputSize", 169 },
    { "FailedToFindGhostscript", 170 },
    { "FailedToRenderFile", 171 },
    { "FailedToScanFile", 172 },
    { "NoTagFound", 173 },
    { "PostscriptDelegateFailed", 174 },
    { "UnableToCreateImage", 175 },
    { "UnableToCreateImageComponent", 176 },
    { "UnableToDecodeImageFile", 177 },
    { "UnableToEncodeImageFile", 178 },
    { "UnableToInitializeFPXLibrary", 179 },
    { "UnableToInitializeWMFLibrary", 180 },
    { "UnableToManageJP2Stream", 181 },
    { "UnableToWriteSVGFormat", 182 },
    { "WebPABIMismatch", 183 },
    { "Default", 184 },
    { "Default", 185 },
    { "AlreadyPushingPatternDefinition", 186 },
    { "NonconformingDrawingPrimitiveDefinition", 187 },
    { "TooManyCoordinates", 188 },
    { "UnableToPrint", 189 },
    { "UnbalancedGraphicContextPushPop", 190 },
    { "Default", 191 },
    { "NotARelativeURL", 192 },
    { "NotCurrentlyPushingPatternDefinition", 193 },
    { "URLNotFound", 194 },
    { "UnableToCreateTemporaryFile", 195 },
    { "UnableToOpenFile", 196 },
    { "UnableToWriteFile", 197 },
    { "Default", 198 },
    { "Default", 199 },
    { "AngleIsDiscontinuous", 200 },
    { "ColorspaceColorProfileMismatch", 201 },
    { "ImageColorspaceDiffers", 202 },
    { "ImageColorspaceMismatch", 203 },
    { "ImageDifferenceExceedsLimit", 204 },
    { "ImageDoesNotContainResolution", 205 },
    { "ImageOpacityDiffers", 206 },
    { "ImageSequenceIsRequired", 207 },
    { "ImageSizeDiffers", 208 },
    { "InvalidColormapIndex", 209 },
    { "LeftAndRightImageSizesDiffer", 210 },
    { "NoImagesWereFound", 211 },
    { "NoImagesWereLoaded", 212 },
    { "NoLocaleImageAttribute", 213 },
    { "TooManyClusters", 214 },
    { "UnableToAppendImage", 215 },
    { "UnableToAssignProfile", 216 },
    { "UnableToAverageImage", 217 },
    { "UnableToCoalesceImage", 218 },
    { "UnableToCompareImages", 219 },
    { "UnableToCreateImageMosaic", 220 },
    { "UnableToCreateStereoImage", 221 },
    { "UnableToDeconstructImageSequence", 222 },
    { "UnableToFlattenImage", 223 },
    { "UnableToGetClipMask", 224 },
    { "UnableToHandleImageChannel", 225 },
    { "UnableToResizeImage", 226 },
    { "UnableToSegmentImage", 227 },
    { "UnableToSetClipMask", 228 },
    { "UnableToShearImage", 229 },
    { "WidthOrHeightExceedsLimit", 230 },
    { "UnableToPersistKey", 231 },
    { "Default", 232 },
    { "DPSLibraryIsNotAvailable", 233 },
    { "FPXLibraryIsNotAvailable", 234 },
    { "FreeTypeLibraryIsNotAvailable", 235 },
    { "JPEGLibraryIsNotAvailable", 236 },
    { "LCMSLibraryIsNotAvailable", 237 },
    { "LZWEncodingNotEnabled", 238 },
    { "NoDecodeDelegateForThisImageFormat", 239 },
    { "NoEncodeDelegateForThisImageFormat", 240 },
    { "TIFFLibraryIsNotAvailable", 241 },
    { "XMLLibraryIsNotAvailable", 242 },
    { "XWindowLibraryIsNotAvailable", 243 },
    { "ZipLibraryIsNotAvailable", 244 },
    { "Default", 245 },
    { "Default", 246 },
    { "FailedToCloseModule", 247 },
    { "FailedToFindSymbol", 248 },
    { "UnableToLoadModule", 249 },
    { "UnableToRegisterImageFormat", 250 },
    { "UnrecognizedModule", 251 },
    { "UnableToInitializeModuleLoader", 252 },
    { "Default", 253 },
    { "Default", 254 },
    { "Default", 255 },
    { "UserRequestedTerminationBySignal", 256 },
    { "Default", 257 },
    { "BevelWidthIsNegative", 258 },
    { "ColorSeparatedImageRequired", 259 },
    { "FrameIsLessThanImageSize", 260 },
    { "GeometryDimensionsAreZero", 261 },
    { "GeometryDoesNotContainImage", 262 },
    { "HaldClutImageDimensionsInvalid", 263 },
    { "ImagesAreNotTheSameSize", 264 },
    { "ImageSizeMustExceedBevelWidth", 265 },
    { "ImageSmallerThanKernelWidth", 266 },
    { "ImageSmallerThanRadius", 267 },
    { "ImageWidthsOrHeightsDiffer", 268 },
    { "InputImagesAlreadySpecified", 269 },
    { "InvalidSubimageSpecification", 270 },
    { "KernelRadiusIsTooSmall", 271 },
    { "KernelWidthMustBeAnOddNumber", 272 },
    { "MatrixIsNotSquare", 273 },
    { "MatrixOrderOutOfRange", 274 },
    { "MissingAnImageFilename", 275 },
    { "MissingArgument", 276 },
    { "MustSpecifyAnImageName", 277 },
    { "MustSpecifyImageSize", 278 },
    { "NoBlobDefined", 279 },
    { "NoImagesDefined", 280 },
    { "NonzeroWidthAndHeightRequired", 281 },
    { "NoProfileNameWasGiven", 282 },
    { "NullBlobArgument", 283 },
    { "ReferenceImageRequired", 284 },
    { "ReferenceIsNotMyType", 285 },
    { "RegionAreaExceedsLimit", 286 },
    { "RequestDidNotReturnAnImage", 287 },
    { "SteganoImageRequired", 288 },
    { "StereoImageRequired", 289 },
    { "SubimageSpecificationReturnsNoImages", 290 },
    { "UnableToAddOrRemoveProfile", 291 },
    { "UnableToAverageImageSequence", 292 },
    { "UnableToBlurImage", 293 },
    { "UnableToChopImage", 294 },
    { "UnableToColorMatrixImage", 295 },
    { "UnableToConstituteImage", 296 },
    { "UnableToConvolveImage", 297 },
    { "UnableToEdgeImage", 298 },
    { "UnableToEqualizeImage", 299 },
    { "UnableToFilterImage", 300 },
    { "UnableToFormatImageMetadata", 301 },
    { "UnableToFrameImage", 302 },
    { "UnableToOilPaintImage", 303 },
    { "UnableToPaintImage", 304 },
    { "UnableToRaiseImage", 305 },
    { "UnableToSharpenImage", 306 },
    { "UnableToThresholdImage", 307 },
    { "UnableToWaveImage", 308 },
    { "UnrecognizedAttribute", 309 },
    { "UnrecognizedChannelType", 310 },
    { "UnrecognizedColor", 311 },
    { "UnrecognizedColormapType", 312 },
    { "UnrecognizedColorspace", 313 },
    { "UnrecognizedCommand", 314 },
    { "UnrecognizedComposeOperator", 315 },
    { "UnrecognizedDisposeMethod", 316 },
    { "UnrecognizedElement", 317 },
    { "UnrecognizedEndianType", 318 },
    { "UnrecognizedGravityType", 319 },
    { "UnrecognizedHighlightStyle", 320 },
    { "UnrecognizedImageCompression", 321 },
    { "UnrecognizedImageFilter", 322 },
    { "UnrecognizedImageFormat", 323 },
    { "UnrecognizedImageMode", 324 },
    { "UnrecognizedImageType", 325 },
    { "UnrecognizedIntentType", 326 },
    { "UnrecognizedInterlaceType", 327 },
    { "UnrecognizedListType", 328 },
    { "UnrecognizedMetric", 329 },
    { "UnrecognizedModeType", 330 },
    { "UnrecognizedNoiseType", 331 },
    { "UnrecognizedOperator", 332 },
    { "UnrecognizedOption", 333 },
    { "UnrecognizedPerlMagickMethod", 334 },
    { "UnrecognizedPixelMap", 335 },
    { "UnrecognizedPreviewType", 336 },
    { "UnrecognizedResourceType", 337 },
    { "UnrecognizedType", 338 },
    { "UnrecognizedUnitsType", 339 },
    { "UnrecognizedVirtualPixelMethod", 340 },
    { "UnsupportedSamplingFactor", 341 },
    { "UsageError", 342 },
    { "InvalidColorspaceType", 343 },
    { "InvalidEndianType", 344 },
    { "InvalidImageType", 345 },
    { "InvalidInterlaceType", 346 },
    { "MissingAnImageFilename", 347 },
    { "MissingArgument", 348 },
    { "NoImagesWereLoaded", 349 },
    { "OptionLengthExceedsLimit", 350 },
    { "RequestDidNotReturnAnImage", 351 },
    { "UnableToOpenXServer", 352 },
    { "UnableToPersistKey", 353 },
    { "UnrecognizedColormapType", 354 },
    { "UnrecognizedColorspaceType", 355 },
    { "UnrecognizedDisposeMethod", 356 },
    { "UnrecognizedEndianType", 357 },
    { "UnrecognizedFilterType", 358 },
    { "UnrecognizedImageCompressionType", 359 },
    { "UnrecognizedImageType", 360 },
    { "UnrecognizedInterlaceType", 361 },
    { "UnrecognizedOption", 362 },
    { "UnrecognizedResourceType", 363 },
    { "UnrecognizedVirtualPixelMethod", 364 },
    { "UnrecognizedColor", 365 },
    { "ImageExpected", 366 },
    { "ImageInfoExpected", 367 },
    { "StructureSizeMismatch", 368 },
    { "UnableToGetRegistryID", 369 },
    { "UnableToLocateImage", 370 },
    { "UnableToSetRegistry", 371 },
    { "Default", 372 },
    { "Default", 373 },
    { "CacheResourcesExhausted", 374 },
    { "ImagePixelHeightLimitExceeded", 375 },
    { "ImagePixelLimitExceeded", 376 },
    { "ImagePixelWidthLimitExceeded", 377 },
    { "MemoryAllocationFailed", 378 },
    { "NoPixelsDefinedInCache", 379 },
    { "PixelCacheAllocationFailed", 380 },
    { "UnableToAddColorProfile", 381 },
    { "UnableToAddGenericProfile", 382 },
    { "UnableToAddIPTCProfile", 383 },
    { "UnableToAllocateCoefficients", 384 },
    { "UnableToAllocateColormap", 385 },
    { "UnableToAllocateICCProfile", 386 },
    { "UnableToAllocateString", 387 },
    { "UnableToAnnotateImage", 388 },
    { "UnableToAverageImageSequence", 389 },
    { "UnableToCloneDrawingWand", 390 },
    { "UnableToCloneImage", 391 },
    { "UnableToComputeImageSignature", 392 },
    { "UnableToConstituteImage", 393 },
    { "UnableToConvertFont", 394 },
    { "UnableToConvertStringToTokens", 395 },
    { "UnableToCreateColormap", 396 },
    { "UnableToCreateColorTransform", 397 },
    { "UnableToCreateCommandWidget", 398 },
    { "UnableToCreateImageGroup", 399 },
    { "UnableToCreateImageMontage", 400 },
    { "UnableToCreateXWindow", 401 },
    { "UnableToCropImage", 402 },
    { "UnableToDespeckleImage", 403 },
    { "UnableToDetermineImageClass", 404 },
    { "UnableToDetermineTheNumberOfImageColors", 405 },
    { "UnableToDitherImage", 406 },
    { "UnableToDrawOnImage", 407 },
    { "UnableToEdgeImage", 408 },
    { "UnableToEmbossImage", 409 },
    { "UnableToEnhanceImage", 410 },
    { "UnableToFloodfillImage", 411 },
    { "UnableToGammaCorrectImage", 412 },
    { "UnableToGetBestIconSize", 413 },
    { "UnableToGetFromRegistry", 414 },
    { "UnableToGetPackageInfo", 415 },
    { "UnableToLevelImage", 416 },
    { "UnableToMagnifyImage", 417 },
    { "UnableToManageColor", 418 },
    { "UnableToMapImage", 419 },
    { "UnableToMapImageSequence", 420 },
    { "UnableToMedianFilterImage", 421 },
    { "UnableToMotionBlurImage", 422 },
    { "UnableToNoiseFilterImage", 423 },
    { "UnableToNormalizeImage", 424 },
    { "UnableToOpenColorProfile", 425 },
    { "UnableToQuantizeImage", 426 },
    { "UnableToQuantizeImageSequence", 427 },
    { "UnableToReadTextChunk", 428 },
    { "UnableToReadXImage", 429 },
    { "UnableToReadXServerColormap", 430 },
    { "UnableToResizeImage", 431 },
    { "UnableToRotateImage", 432 },
    { "UnableToSampleImage", 433 },
    { "UnableToScaleImage", 434 },
    { "UnableToSelectImage", 435 },
    { "UnableToSharpenImage", 436 },
    { "UnableToShaveImage", 437 },
    { "UnableToShearImage", 438 },
    { "UnableToSortImageColormap", 439 },
    { "UnableToThresholdImage", 440 },
    { "UnableToTransformColorspace", 441 },
    { "MemoryAllocationFailed", 442 },
    { "SemaporeOperationFailed", 443 },
    { "UnableToAllocateAscii85Info", 444 },
    { "UnableToAllocateCacheInfo", 445 },
    { "UnableToAllocateCacheView", 446 },
    { "UnableToAllocateColorInfo", 447 },
    { "UnableToAllocateDashPattern", 448 },
    { "UnableToAllocateDelegateInfo", 449 },
    { "UnableToAllocateDerivatives", 450 },
    { "UnableToAllocateDrawContext", 451 },
    { "UnableToAllocateDrawInfo", 452 },
    { "UnableToAllocateDrawingWand", 453 },
    { "UnableToAllocateGammaMap", 454 },
    { "UnableToAllocateImage", 455 },
    { "UnableToAllocateImagePixels", 456 },
    { "UnableToAllocateLogInfo", 457 },
    { "UnableToAllocateMagicInfo", 458 },
    { "UnableToAllocateMagickInfo", 459 },
    { "UnableToAllocateModuleInfo", 460 },
    { "UnableToAllocateMontageInfo", 461 },
    { "UnableToAllocateQuantizeInfo", 462 },
    { "UnableToAllocateRandomKernel", 463 },
    { "UnableToAllocateRegistryInfo", 464 },
    { "UnableToAllocateSemaphoreInfo", 465 },
    { "UnableToAllocateString", 466 },
    { "UnableToAllocateTypeInfo", 467 },
    { "UnableToAllocateWand", 468 },
    { "UnableToAnimateImageSequence", 469 },
    { "UnableToCloneBlobInfo", 470 },
    { "UnableToCloneCacheInfo", 471 },
    { "UnableToCloneImage", 472 },
    { "UnableToCloneImageInfo", 473 },
    { "UnableToConcatenateString", 474 },
    { "UnableToConvertText", 475 },
    { "UnableToCreateColormap", 476 },
    { "UnableToDestroySemaphore", 477 },
    { "UnableToDisplayImage", 478 },
    { "UnableToEscapeString", 479 },
    { "UnableToInitializeSemaphore", 480 },
    { "UnableToInterpretMSLImage", 481 },
    { "UnableToLockSemaphore", 482 },
    { "UnableToObtainRandomEntropy", 483 },
    { "UnableToUnlockSemaphore", 484 },
    { "MemoryAllocationFailed", 485 },
    { "ImageDoesNotContainTheStreamGeometry", 486 },
    { "NoStreamHandlerIsDefined", 487 },
    { "PixelCacheIsNotOpen", 488 },
    { "UnableToAcquirePixelStream", 489 },
    { "UnableToSetPixelStream", 490 },
    { "UnableToSyncPixelStream", 491 },
    { "Default", 492 },
    { "Default", 493 },
    { "FontSubstitutionRequired", 494 },
    { "UnableToGetTypeMetrics", 495 },
    { "UnableToInitializeFreetypeLibrary", 496 },
    { "UnableToReadFont", 497 },
    { "UnrecognizedFontEncoding", 498 },
    { "Default", 499 },
    { "Default", 500 },
    { "InvalidColormapIndex", 501 },
    { "WandAPINotImplemented", 502 },
    { "WandContainsNoImageIndexs", 503 },
    { "WandContainsNoImages", 504 },
    { "ColorIsNotKnownToServer", 505 },
    { "NoWindowWithSpecifiedIDExists", 506 },
    { "StandardColormapIsNotInitialized", 507 },
    { "UnableToConnectToRemoteDisplay", 508 },
    { "UnableToCreateBitmap", 509 },
    { "UnableToCreateColormap", 510 },
    { "UnableToCreatePixmap", 511 },
    { "UnableToCreateProperty", 512 },
    { "UnableToCreateStandardColormap", 513 },
    { "UnableToDisplayImageInfo", 514 },
    { "UnableToGetProperty", 515 },
    { "UnableToGetStandardColormap", 516 },
    { "UnableToGetVisual", 517 },
    { "UnableToGrabMouse", 518 },
    { "UnableToLoadFont", 519 },
    { "UnableToMatchVisualToStandardColormap", 520 },
    { "UnableToOpenXServer", 521 },
    { "UnableToReadXAttributes", 522 },
    { "UnableToReadXWindowImage", 523 },
    { "UnrecognizedColormapType", 524 },
    { "UnrecognizedGravityType", 525 },
    { "UnrecognizedVisualSpecifier", 526 },
    { "UnableToAllocateXHints", 527 },
    { "UnableToCreateCursor", 528 },
    { "UnableToCreateGraphicContext", 529 },
    { "UnableToCreateStandardColormap", 530 },
    { "UnableToCreateTextProperty", 531 },
    { "UnableToCreateXImage", 532 },
    { "UnableToCreateXPixmap", 533 },
    { "UnableToCreateXWindow", 534 },
    { "UnableToDisplayImage", 535 },
    { "UnableToDitherImage", 536 },
    { "UnableToGetPixelInfo", 537 },
    { "UnableToGetVisual", 538 },
    { "UnableToLoadFont", 539 },
    { "UnableToMakeXWindow", 540 },
    { "UnableToOpenXServer", 541 },
    { "UnableToViewFonts", 542 },
    { "UnableToGetVisual", 543 },
    { "UsingDefaultVisual", 544 },
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
