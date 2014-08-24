#ifndef _LOCAL_C_H
#define _LOCAL_C_H

extern MagickExport const char *GetLocaleMessageFromID(const int);

#define MAX_LOCALE_MSGS 538

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
#define MGK_CorruptImageErrorCorruptImage 118
#define MGK_CorruptImageErrorImageFileDoesNotContainAnyImageData 119
#define MGK_CorruptImageErrorImageTypeNotSupported 120
#define MGK_CorruptImageErrorImproperImageHeader 121
#define MGK_CorruptImageErrorInsufficientImageDataInFile 122
#define MGK_CorruptImageErrorInvalidColormapIndex 123
#define MGK_CorruptImageErrorInvalidFileFormatVersion 124
#define MGK_CorruptImageErrorLengthAndFilesizeDoNotMatch 125
#define MGK_CorruptImageErrorMissingImageChannel 126
#define MGK_CorruptImageErrorNegativeOrZeroImageSize 127
#define MGK_CorruptImageErrorNonOS2HeaderSizeError 128
#define MGK_CorruptImageErrorNotEnoughTiles 129
#define MGK_CorruptImageErrorStaticPlanesValueNotEqualToOne 130
#define MGK_CorruptImageErrorSubsamplingRequiresEvenWidth 131
#define MGK_CorruptImageErrorTooMuchImageDataInFile 132
#define MGK_CorruptImageErrorUnableToReadColormapFromDumpFile 133
#define MGK_CorruptImageErrorUnableToReadColorProfile 134
#define MGK_CorruptImageErrorUnableToReadExtensionBlock 135
#define MGK_CorruptImageErrorUnableToReadGenericProfile 136
#define MGK_CorruptImageErrorUnableToReadImageData 137
#define MGK_CorruptImageErrorUnableToReadImageHeader 138
#define MGK_CorruptImageErrorUnableToReadIPTCProfile 139
#define MGK_CorruptImageErrorUnableToReadPixmapFromDumpFile 140
#define MGK_CorruptImageErrorUnableToReadSubImageData 141
#define MGK_CorruptImageErrorUnableToReadVIDImage 142
#define MGK_CorruptImageErrorUnableToReadWindowNameFromDumpFile 143
#define MGK_CorruptImageErrorUnableToRunlengthDecodeImage 144
#define MGK_CorruptImageErrorUnableToUncompressImage 145
#define MGK_CorruptImageErrorUnexpectedEndOfFile 146
#define MGK_CorruptImageErrorUnexpectedSamplingFactor 147
#define MGK_CorruptImageErrorUnknownPatternType 148
#define MGK_CorruptImageErrorUnrecognizedBitsPerPixel 149
#define MGK_CorruptImageErrorUnrecognizedImageCompression 150
#define MGK_CorruptImageErrorUnrecognizedXWDHeader 151
#define MGK_CorruptImageFatalErrorUnableToPersistKey 152
#define MGK_CorruptImageWarningCompressionNotValid 153
#define MGK_CorruptImageWarningImproperImageHeader 154
#define MGK_CorruptImageWarningLengthAndFilesizeDoNotMatch 155
#define MGK_CorruptImageWarningNegativeOrZeroImageSize 156
#define MGK_CorruptImageWarningNonOS2HeaderSizeError 157
#define MGK_CorruptImageWarningSkipToSyncByte 158
#define MGK_CorruptImageWarningStaticPlanesValueNotEqualToOne 159
#define MGK_CorruptImageWarningUnrecognizedBitsPerPixel 160
#define MGK_CorruptImageWarningUnrecognizedImageCompression 161
#define MGK_CorruptImageWarningUnrecognizedNumberOfColors 162
#define MGK_DelegateErrorDelegateFailed 163
#define MGK_DelegateErrorFailedToAllocateArgumentList 164
#define MGK_DelegateErrorFailedToAllocateGhostscriptInterpreter 165
#define MGK_DelegateErrorFailedToComputeOutputSize 166
#define MGK_DelegateErrorFailedToFindGhostscript 167
#define MGK_DelegateErrorFailedToRenderFile 168
#define MGK_DelegateErrorFailedToScanFile 169
#define MGK_DelegateErrorNoTagFound 170
#define MGK_DelegateErrorPostscriptDelegateFailed 171
#define MGK_DelegateErrorUnableToCreateImage 172
#define MGK_DelegateErrorUnableToCreateImageComponent 173
#define MGK_DelegateErrorUnableToDecodeImageFile 174
#define MGK_DelegateErrorUnableToEncodeImageFile 175
#define MGK_DelegateErrorUnableToInitializeFPXLibrary 176
#define MGK_DelegateErrorUnableToInitializeWMFLibrary 177
#define MGK_DelegateErrorUnableToManageJP2Stream 178
#define MGK_DelegateErrorUnableToWriteSVGFormat 179
#define MGK_DelegateErrorWebPABIMismatch 180
#define MGK_DelegateFatalErrorDefault 181
#define MGK_DelegateWarningDefault 182
#define MGK_DrawErrorAlreadyPushingPatternDefinition 183
#define MGK_DrawErrorNonconformingDrawingPrimitiveDefinition 184
#define MGK_DrawErrorTooManyCoordinates 185
#define MGK_DrawErrorUnableToPrint 186
#define MGK_DrawErrorUnbalancedGraphicContextPushPop 187
#define MGK_DrawFatalErrorDefault 188
#define MGK_DrawWarningNotARelativeURL 189
#define MGK_DrawWarningNotCurrentlyPushingPatternDefinition 190
#define MGK_DrawWarningURLNotFound 191
#define MGK_FileOpenErrorUnableToCreateTemporaryFile 192
#define MGK_FileOpenErrorUnableToOpenFile 193
#define MGK_FileOpenErrorUnableToWriteFile 194
#define MGK_FileOpenFatalErrorDefault 195
#define MGK_FileOpenWarningDefault 196
#define MGK_ImageErrorAngleIsDiscontinuous 197
#define MGK_ImageErrorColorspaceColorProfileMismatch 198
#define MGK_ImageErrorImageColorspaceDiffers 199
#define MGK_ImageErrorImageColorspaceMismatch 200
#define MGK_ImageErrorImageDifferenceExceedsLimit 201
#define MGK_ImageErrorImageDoesNotContainResolution 202
#define MGK_ImageErrorImageOpacityDiffers 203
#define MGK_ImageErrorImageSequenceIsRequired 204
#define MGK_ImageErrorImageSizeDiffers 205
#define MGK_ImageErrorInvalidColormapIndex 206
#define MGK_ImageErrorLeftAndRightImageSizesDiffer 207
#define MGK_ImageErrorNoImagesWereFound 208
#define MGK_ImageErrorNoImagesWereLoaded 209
#define MGK_ImageErrorNoLocaleImageAttribute 210
#define MGK_ImageErrorTooManyClusters 211
#define MGK_ImageErrorUnableToAppendImage 212
#define MGK_ImageErrorUnableToAssignProfile 213
#define MGK_ImageErrorUnableToAverageImage 214
#define MGK_ImageErrorUnableToCoalesceImage 215
#define MGK_ImageErrorUnableToCompareImages 216
#define MGK_ImageErrorUnableToCreateImageMosaic 217
#define MGK_ImageErrorUnableToCreateStereoImage 218
#define MGK_ImageErrorUnableToDeconstructImageSequence 219
#define MGK_ImageErrorUnableToFlattenImage 220
#define MGK_ImageErrorUnableToGetClipMask 221
#define MGK_ImageErrorUnableToHandleImageChannel 222
#define MGK_ImageErrorUnableToResizeImage 223
#define MGK_ImageErrorUnableToSegmentImage 224
#define MGK_ImageErrorUnableToSetClipMask 225
#define MGK_ImageErrorUnableToShearImage 226
#define MGK_ImageErrorWidthOrHeightExceedsLimit 227
#define MGK_ImageFatalErrorUnableToPersistKey 228
#define MGK_ImageWarningDefault 229
#define MGK_MissingDelegateErrorDPSLibraryIsNotAvailable 230
#define MGK_MissingDelegateErrorFPXLibraryIsNotAvailable 231
#define MGK_MissingDelegateErrorFreeTypeLibraryIsNotAvailable 232
#define MGK_MissingDelegateErrorJPEGLibraryIsNotAvailable 233
#define MGK_MissingDelegateErrorLCMSLibraryIsNotAvailable 234
#define MGK_MissingDelegateErrorLZWEncodingNotEnabled 235
#define MGK_MissingDelegateErrorNoDecodeDelegateForThisImageFormat 236
#define MGK_MissingDelegateErrorNoEncodeDelegateForThisImageFormat 237
#define MGK_MissingDelegateErrorTIFFLibraryIsNotAvailable 238
#define MGK_MissingDelegateErrorXMLLibraryIsNotAvailable 239
#define MGK_MissingDelegateErrorXWindowLibraryIsNotAvailable 240
#define MGK_MissingDelegateErrorZipLibraryIsNotAvailable 241
#define MGK_MissingDelegateFatalErrorDefault 242
#define MGK_MissingDelegateWarningDefault 243
#define MGK_ModuleErrorFailedToCloseModule 244
#define MGK_ModuleErrorFailedToFindSymbol 245
#define MGK_ModuleErrorUnableToLoadModule 246
#define MGK_ModuleErrorUnableToRegisterImageFormat 247
#define MGK_ModuleErrorUnrecognizedModule 248
#define MGK_ModuleFatalErrorUnableToInitializeModuleLoader 249
#define MGK_ModuleWarningDefault 250
#define MGK_MonitorErrorDefault 251
#define MGK_MonitorFatalErrorDefault 252
#define MGK_MonitorFatalErrorUserRequestedTerminationBySignal 253
#define MGK_MonitorWarningDefault 254
#define MGK_OptionErrorBevelWidthIsNegative 255
#define MGK_OptionErrorColorSeparatedImageRequired 256
#define MGK_OptionErrorFrameIsLessThanImageSize 257
#define MGK_OptionErrorGeometryDimensionsAreZero 258
#define MGK_OptionErrorGeometryDoesNotContainImage 259
#define MGK_OptionErrorHaldClutImageDimensionsInvalid 260
#define MGK_OptionErrorImagesAreNotTheSameSize 261
#define MGK_OptionErrorImageSizeMustExceedBevelWidth 262
#define MGK_OptionErrorImageSmallerThanKernelWidth 263
#define MGK_OptionErrorImageSmallerThanRadius 264
#define MGK_OptionErrorImageWidthsOrHeightsDiffer 265
#define MGK_OptionErrorInputImagesAlreadySpecified 266
#define MGK_OptionErrorInvalidSubimageSpecification 267
#define MGK_OptionErrorKernelRadiusIsTooSmall 268
#define MGK_OptionErrorKernelWidthMustBeAnOddNumber 269
#define MGK_OptionErrorMatrixIsNotSquare 270
#define MGK_OptionErrorMatrixOrderOutOfRange 271
#define MGK_OptionErrorMissingAnImageFilename 272
#define MGK_OptionErrorMissingArgument 273
#define MGK_OptionErrorMustSpecifyAnImageName 274
#define MGK_OptionErrorMustSpecifyImageSize 275
#define MGK_OptionErrorNoBlobDefined 276
#define MGK_OptionErrorNoImagesDefined 277
#define MGK_OptionErrorNonzeroWidthAndHeightRequired 278
#define MGK_OptionErrorNoProfileNameWasGiven 279
#define MGK_OptionErrorNullBlobArgument 280
#define MGK_OptionErrorReferenceImageRequired 281
#define MGK_OptionErrorReferenceIsNotMyType 282
#define MGK_OptionErrorRegionAreaExceedsLimit 283
#define MGK_OptionErrorRequestDidNotReturnAnImage 284
#define MGK_OptionErrorSteganoImageRequired 285
#define MGK_OptionErrorStereoImageRequired 286
#define MGK_OptionErrorSubimageSpecificationReturnsNoImages 287
#define MGK_OptionErrorUnableToAddOrRemoveProfile 288
#define MGK_OptionErrorUnableToAverageImageSequence 289
#define MGK_OptionErrorUnableToBlurImage 290
#define MGK_OptionErrorUnableToChopImage 291
#define MGK_OptionErrorUnableToColorMatrixImage 292
#define MGK_OptionErrorUnableToConstituteImage 293
#define MGK_OptionErrorUnableToConvolveImage 294
#define MGK_OptionErrorUnableToEdgeImage 295
#define MGK_OptionErrorUnableToEqualizeImage 296
#define MGK_OptionErrorUnableToFilterImage 297
#define MGK_OptionErrorUnableToFormatImageMetadata 298
#define MGK_OptionErrorUnableToFrameImage 299
#define MGK_OptionErrorUnableToOilPaintImage 300
#define MGK_OptionErrorUnableToPaintImage 301
#define MGK_OptionErrorUnableToRaiseImage 302
#define MGK_OptionErrorUnableToSharpenImage 303
#define MGK_OptionErrorUnableToThresholdImage 304
#define MGK_OptionErrorUnableToWaveImage 305
#define MGK_OptionErrorUnrecognizedAttribute 306
#define MGK_OptionErrorUnrecognizedChannelType 307
#define MGK_OptionErrorUnrecognizedColor 308
#define MGK_OptionErrorUnrecognizedColormapType 309
#define MGK_OptionErrorUnrecognizedColorspace 310
#define MGK_OptionErrorUnrecognizedCommand 311
#define MGK_OptionErrorUnrecognizedComposeOperator 312
#define MGK_OptionErrorUnrecognizedDisposeMethod 313
#define MGK_OptionErrorUnrecognizedElement 314
#define MGK_OptionErrorUnrecognizedEndianType 315
#define MGK_OptionErrorUnrecognizedGravityType 316
#define MGK_OptionErrorUnrecognizedHighlightStyle 317
#define MGK_OptionErrorUnrecognizedImageCompression 318
#define MGK_OptionErrorUnrecognizedImageFilter 319
#define MGK_OptionErrorUnrecognizedImageFormat 320
#define MGK_OptionErrorUnrecognizedImageMode 321
#define MGK_OptionErrorUnrecognizedImageType 322
#define MGK_OptionErrorUnrecognizedIntentType 323
#define MGK_OptionErrorUnrecognizedInterlaceType 324
#define MGK_OptionErrorUnrecognizedListType 325
#define MGK_OptionErrorUnrecognizedMetric 326
#define MGK_OptionErrorUnrecognizedModeType 327
#define MGK_OptionErrorUnrecognizedNoiseType 328
#define MGK_OptionErrorUnrecognizedOperator 329
#define MGK_OptionErrorUnrecognizedOption 330
#define MGK_OptionErrorUnrecognizedPerlMagickMethod 331
#define MGK_OptionErrorUnrecognizedPixelMap 332
#define MGK_OptionErrorUnrecognizedPreviewType 333
#define MGK_OptionErrorUnrecognizedResourceType 334
#define MGK_OptionErrorUnrecognizedType 335
#define MGK_OptionErrorUnrecognizedUnitsType 336
#define MGK_OptionErrorUnrecognizedVirtualPixelMethod 337
#define MGK_OptionErrorUnsupportedSamplingFactor 338
#define MGK_OptionErrorUsageError 339
#define MGK_OptionFatalErrorInvalidColorspaceType 340
#define MGK_OptionFatalErrorInvalidEndianType 341
#define MGK_OptionFatalErrorInvalidImageType 342
#define MGK_OptionFatalErrorInvalidInterlaceType 343
#define MGK_OptionFatalErrorMissingAnImageFilename 344
#define MGK_OptionFatalErrorMissingArgument 345
#define MGK_OptionFatalErrorNoImagesWereLoaded 346
#define MGK_OptionFatalErrorOptionLengthExceedsLimit 347
#define MGK_OptionFatalErrorRequestDidNotReturnAnImage 348
#define MGK_OptionFatalErrorUnableToOpenXServer 349
#define MGK_OptionFatalErrorUnableToPersistKey 350
#define MGK_OptionFatalErrorUnrecognizedColormapType 351
#define MGK_OptionFatalErrorUnrecognizedColorspaceType 352
#define MGK_OptionFatalErrorUnrecognizedDisposeMethod 353
#define MGK_OptionFatalErrorUnrecognizedEndianType 354
#define MGK_OptionFatalErrorUnrecognizedFilterType 355
#define MGK_OptionFatalErrorUnrecognizedImageCompressionType 356
#define MGK_OptionFatalErrorUnrecognizedImageType 357
#define MGK_OptionFatalErrorUnrecognizedInterlaceType 358
#define MGK_OptionFatalErrorUnrecognizedOption 359
#define MGK_OptionFatalErrorUnrecognizedResourceType 360
#define MGK_OptionFatalErrorUnrecognizedVirtualPixelMethod 361
#define MGK_OptionWarningUnrecognizedColor 362
#define MGK_RegistryErrorImageExpected 363
#define MGK_RegistryErrorImageInfoExpected 364
#define MGK_RegistryErrorStructureSizeMismatch 365
#define MGK_RegistryErrorUnableToGetRegistryID 366
#define MGK_RegistryErrorUnableToLocateImage 367
#define MGK_RegistryErrorUnableToSetRegistry 368
#define MGK_RegistryFatalErrorDefault 369
#define MGK_RegistryWarningDefault 370
#define MGK_ResourceLimitErrorCacheResourcesExhausted 371
#define MGK_ResourceLimitErrorImagePixelLimitExceeded 372
#define MGK_ResourceLimitErrorMemoryAllocationFailed 373
#define MGK_ResourceLimitErrorNoPixelsDefinedInCache 374
#define MGK_ResourceLimitErrorPixelCacheAllocationFailed 375
#define MGK_ResourceLimitErrorUnableToAddColorProfile 376
#define MGK_ResourceLimitErrorUnableToAddGenericProfile 377
#define MGK_ResourceLimitErrorUnableToAddIPTCProfile 378
#define MGK_ResourceLimitErrorUnableToAllocateCoefficients 379
#define MGK_ResourceLimitErrorUnableToAllocateColormap 380
#define MGK_ResourceLimitErrorUnableToAllocateICCProfile 381
#define MGK_ResourceLimitErrorUnableToAllocateString 382
#define MGK_ResourceLimitErrorUnableToAnnotateImage 383
#define MGK_ResourceLimitErrorUnableToAverageImageSequence 384
#define MGK_ResourceLimitErrorUnableToCloneDrawingWand 385
#define MGK_ResourceLimitErrorUnableToCloneImage 386
#define MGK_ResourceLimitErrorUnableToComputeImageSignature 387
#define MGK_ResourceLimitErrorUnableToConstituteImage 388
#define MGK_ResourceLimitErrorUnableToConvertFont 389
#define MGK_ResourceLimitErrorUnableToConvertStringToTokens 390
#define MGK_ResourceLimitErrorUnableToCreateColormap 391
#define MGK_ResourceLimitErrorUnableToCreateColorTransform 392
#define MGK_ResourceLimitErrorUnableToCreateCommandWidget 393
#define MGK_ResourceLimitErrorUnableToCreateImageGroup 394
#define MGK_ResourceLimitErrorUnableToCreateImageMontage 395
#define MGK_ResourceLimitErrorUnableToCreateXWindow 396
#define MGK_ResourceLimitErrorUnableToCropImage 397
#define MGK_ResourceLimitErrorUnableToDespeckleImage 398
#define MGK_ResourceLimitErrorUnableToDetermineImageClass 399
#define MGK_ResourceLimitErrorUnableToDetermineTheNumberOfImageColors 400
#define MGK_ResourceLimitErrorUnableToDitherImage 401
#define MGK_ResourceLimitErrorUnableToDrawOnImage 402
#define MGK_ResourceLimitErrorUnableToEdgeImage 403
#define MGK_ResourceLimitErrorUnableToEmbossImage 404
#define MGK_ResourceLimitErrorUnableToEnhanceImage 405
#define MGK_ResourceLimitErrorUnableToFloodfillImage 406
#define MGK_ResourceLimitErrorUnableToGammaCorrectImage 407
#define MGK_ResourceLimitErrorUnableToGetBestIconSize 408
#define MGK_ResourceLimitErrorUnableToGetFromRegistry 409
#define MGK_ResourceLimitErrorUnableToGetPackageInfo 410
#define MGK_ResourceLimitErrorUnableToLevelImage 411
#define MGK_ResourceLimitErrorUnableToMagnifyImage 412
#define MGK_ResourceLimitErrorUnableToManageColor 413
#define MGK_ResourceLimitErrorUnableToMapImage 414
#define MGK_ResourceLimitErrorUnableToMapImageSequence 415
#define MGK_ResourceLimitErrorUnableToMedianFilterImage 416
#define MGK_ResourceLimitErrorUnableToMotionBlurImage 417
#define MGK_ResourceLimitErrorUnableToNoiseFilterImage 418
#define MGK_ResourceLimitErrorUnableToNormalizeImage 419
#define MGK_ResourceLimitErrorUnableToOpenColorProfile 420
#define MGK_ResourceLimitErrorUnableToQuantizeImage 421
#define MGK_ResourceLimitErrorUnableToQuantizeImageSequence 422
#define MGK_ResourceLimitErrorUnableToReadTextChunk 423
#define MGK_ResourceLimitErrorUnableToReadXImage 424
#define MGK_ResourceLimitErrorUnableToReadXServerColormap 425
#define MGK_ResourceLimitErrorUnableToResizeImage 426
#define MGK_ResourceLimitErrorUnableToRotateImage 427
#define MGK_ResourceLimitErrorUnableToSampleImage 428
#define MGK_ResourceLimitErrorUnableToScaleImage 429
#define MGK_ResourceLimitErrorUnableToSelectImage 430
#define MGK_ResourceLimitErrorUnableToSharpenImage 431
#define MGK_ResourceLimitErrorUnableToShaveImage 432
#define MGK_ResourceLimitErrorUnableToShearImage 433
#define MGK_ResourceLimitErrorUnableToSortImageColormap 434
#define MGK_ResourceLimitErrorUnableToThresholdImage 435
#define MGK_ResourceLimitErrorUnableToTransformColorspace 436
#define MGK_ResourceLimitFatalErrorMemoryAllocationFailed 437
#define MGK_ResourceLimitFatalErrorSemaporeOperationFailed 438
#define MGK_ResourceLimitFatalErrorUnableToAllocateAscii85Info 439
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheInfo 440
#define MGK_ResourceLimitFatalErrorUnableToAllocateCacheView 441
#define MGK_ResourceLimitFatalErrorUnableToAllocateColorInfo 442
#define MGK_ResourceLimitFatalErrorUnableToAllocateDashPattern 443
#define MGK_ResourceLimitFatalErrorUnableToAllocateDelegateInfo 444
#define MGK_ResourceLimitFatalErrorUnableToAllocateDerivatives 445
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawContext 446
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawInfo 447
#define MGK_ResourceLimitFatalErrorUnableToAllocateDrawingWand 448
#define MGK_ResourceLimitFatalErrorUnableToAllocateGammaMap 449
#define MGK_ResourceLimitFatalErrorUnableToAllocateImage 450
#define MGK_ResourceLimitFatalErrorUnableToAllocateImagePixels 451
#define MGK_ResourceLimitFatalErrorUnableToAllocateLogInfo 452
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagicInfo 453
#define MGK_ResourceLimitFatalErrorUnableToAllocateMagickInfo 454
#define MGK_ResourceLimitFatalErrorUnableToAllocateModuleInfo 455
#define MGK_ResourceLimitFatalErrorUnableToAllocateMontageInfo 456
#define MGK_ResourceLimitFatalErrorUnableToAllocateQuantizeInfo 457
#define MGK_ResourceLimitFatalErrorUnableToAllocateRandomKernel 458
#define MGK_ResourceLimitFatalErrorUnableToAllocateRegistryInfo 459
#define MGK_ResourceLimitFatalErrorUnableToAllocateSemaphoreInfo 460
#define MGK_ResourceLimitFatalErrorUnableToAllocateString 461
#define MGK_ResourceLimitFatalErrorUnableToAllocateTypeInfo 462
#define MGK_ResourceLimitFatalErrorUnableToAllocateWand 463
#define MGK_ResourceLimitFatalErrorUnableToAnimateImageSequence 464
#define MGK_ResourceLimitFatalErrorUnableToCloneBlobInfo 465
#define MGK_ResourceLimitFatalErrorUnableToCloneCacheInfo 466
#define MGK_ResourceLimitFatalErrorUnableToCloneImage 467
#define MGK_ResourceLimitFatalErrorUnableToCloneImageInfo 468
#define MGK_ResourceLimitFatalErrorUnableToConcatenateString 469
#define MGK_ResourceLimitFatalErrorUnableToConvertText 470
#define MGK_ResourceLimitFatalErrorUnableToCreateColormap 471
#define MGK_ResourceLimitFatalErrorUnableToDestroySemaphore 472
#define MGK_ResourceLimitFatalErrorUnableToDisplayImage 473
#define MGK_ResourceLimitFatalErrorUnableToEscapeString 474
#define MGK_ResourceLimitFatalErrorUnableToInitializeSemaphore 475
#define MGK_ResourceLimitFatalErrorUnableToInterpretMSLImage 476
#define MGK_ResourceLimitFatalErrorUnableToLockSemaphore 477
#define MGK_ResourceLimitFatalErrorUnableToUnlockSemaphore 478
#define MGK_ResourceLimitWarningMemoryAllocationFailed 479
#define MGK_StreamErrorImageDoesNotContainTheStreamGeometry 480
#define MGK_StreamErrorNoStreamHandlerIsDefined 481
#define MGK_StreamErrorPixelCacheIsNotOpen 482
#define MGK_StreamErrorUnableToAcquirePixelStream 483
#define MGK_StreamErrorUnableToSetPixelStream 484
#define MGK_StreamErrorUnableToSyncPixelStream 485
#define MGK_StreamFatalErrorDefault 486
#define MGK_StreamWarningDefault 487
#define MGK_TypeErrorFontSubstitutionRequired 488
#define MGK_TypeErrorUnableToGetTypeMetrics 489
#define MGK_TypeErrorUnableToInitializeFreetypeLibrary 490
#define MGK_TypeErrorUnableToReadFont 491
#define MGK_TypeErrorUnrecognizedFontEncoding 492
#define MGK_TypeFatalErrorDefault 493
#define MGK_TypeWarningDefault 494
#define MGK_WandErrorInvalidColormapIndex 495
#define MGK_WandErrorWandAPINotImplemented 496
#define MGK_WandErrorWandContainsNoImageIndexs 497
#define MGK_WandErrorWandContainsNoImages 498
#define MGK_XServerErrorColorIsNotKnownToServer 499
#define MGK_XServerErrorNoWindowWithSpecifiedIDExists 500
#define MGK_XServerErrorStandardColormapIsNotInitialized 501
#define MGK_XServerErrorUnableToConnectToRemoteDisplay 502
#define MGK_XServerErrorUnableToCreateBitmap 503
#define MGK_XServerErrorUnableToCreateColormap 504
#define MGK_XServerErrorUnableToCreatePixmap 505
#define MGK_XServerErrorUnableToCreateProperty 506
#define MGK_XServerErrorUnableToCreateStandardColormap 507
#define MGK_XServerErrorUnableToDisplayImageInfo 508
#define MGK_XServerErrorUnableToGetProperty 509
#define MGK_XServerErrorUnableToGetStandardColormap 510
#define MGK_XServerErrorUnableToGetVisual 511
#define MGK_XServerErrorUnableToGrabMouse 512
#define MGK_XServerErrorUnableToLoadFont 513
#define MGK_XServerErrorUnableToMatchVisualToStandardColormap 514
#define MGK_XServerErrorUnableToOpenXServer 515
#define MGK_XServerErrorUnableToReadXAttributes 516
#define MGK_XServerErrorUnableToReadXWindowImage 517
#define MGK_XServerErrorUnrecognizedColormapType 518
#define MGK_XServerErrorUnrecognizedGravityType 519
#define MGK_XServerErrorUnrecognizedVisualSpecifier 520
#define MGK_XServerFatalErrorUnableToAllocateXHints 521
#define MGK_XServerFatalErrorUnableToCreateCursor 522
#define MGK_XServerFatalErrorUnableToCreateGraphicContext 523
#define MGK_XServerFatalErrorUnableToCreateStandardColormap 524
#define MGK_XServerFatalErrorUnableToCreateTextProperty 525
#define MGK_XServerFatalErrorUnableToCreateXImage 526
#define MGK_XServerFatalErrorUnableToCreateXPixmap 527
#define MGK_XServerFatalErrorUnableToCreateXWindow 528
#define MGK_XServerFatalErrorUnableToDisplayImage 529
#define MGK_XServerFatalErrorUnableToDitherImage 530
#define MGK_XServerFatalErrorUnableToGetPixelInfo 531
#define MGK_XServerFatalErrorUnableToGetVisual 532
#define MGK_XServerFatalErrorUnableToLoadFont 533
#define MGK_XServerFatalErrorUnableToMakeXWindow 534
#define MGK_XServerFatalErrorUnableToOpenXServer 535
#define MGK_XServerFatalErrorUnableToViewFonts 536
#define MGK_XServerWarningUnableToGetVisual 537
#define MGK_XServerWarningUsingDefaultVisual 538

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
    { "Corrupt/Image/FatalError", 151, CorruptImageFatalError },
    { "Corrupt/Image/Warning", 152, CorruptImageWarning },
    { "Delegate/Error", 162, DelegateError },
    { "Delegate/FatalError", 180, DelegateFatalError },
    { "Delegate/Warning", 181, DelegateWarning },
    { "Draw/Error", 182, DrawError },
    { "Draw/FatalError", 187, DrawFatalError },
    { "Draw/Warning", 188, DrawWarning },
    { "File/Open/Error", 191, FileOpenError },
    { "File/Open/FatalError", 194, FileOpenFatalError },
    { "File/Open/Warning", 195, FileOpenWarning },
    { "Image/Error", 196, ImageError },
    { "Image/FatalError", 227, ImageFatalError },
    { "Image/Warning", 228, ImageWarning },
    { "Missing/Delegate/Error", 229, MissingDelegateError },
    { "Missing/Delegate/FatalError", 241, MissingDelegateFatalError },
    { "Missing/Delegate/Warning", 242, MissingDelegateWarning },
    { "Module/Error", 243, ModuleError },
    { "Module/FatalError", 248, ModuleFatalError },
    { "Module/Warning", 249, ModuleWarning },
    { "Monitor/Error", 250, MonitorError },
    { "Monitor/FatalError", 251, MonitorFatalError },
    { "Monitor/Warning", 253, MonitorWarning },
    { "Option/Error", 254, OptionError },
    { "Option/FatalError", 339, OptionFatalError },
    { "Option/Warning", 361, OptionWarning },
    { "Registry/Error", 362, RegistryError },
    { "Registry/FatalError", 368, RegistryFatalError },
    { "Registry/Warning", 369, RegistryWarning },
    { "Resource/Limit/Error", 370, ResourceLimitError },
    { "Resource/Limit/FatalError", 436, ResourceLimitFatalError },
    { "Resource/Limit/Warning", 478, ResourceLimitWarning },
    { "Stream/Error", 479, StreamError },
    { "Stream/FatalError", 485, StreamFatalError },
    { "Stream/Warning", 486, StreamWarning },
    { "Type/Error", 487, TypeError },
    { "Type/FatalError", 492, TypeFatalError },
    { "Type/Warning", 493, TypeWarning },
    { "Wand/Error", 494, WandError },
    { "XServer/Error", 498, XServerError },
    { "XServer/FatalError", 520, XServerFatalError },
    { "XServer/Warning", 536, XServerWarning },
    { 0, 538, UndefinedException }
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
    { "CorruptImage", 118 },
    { "ImageFileDoesNotContainAnyImageData", 119 },
    { "ImageTypeNotSupported", 120 },
    { "ImproperImageHeader", 121 },
    { "InsufficientImageDataInFile", 122 },
    { "InvalidColormapIndex", 123 },
    { "InvalidFileFormatVersion", 124 },
    { "LengthAndFilesizeDoNotMatch", 125 },
    { "MissingImageChannel", 126 },
    { "NegativeOrZeroImageSize", 127 },
    { "NonOS2HeaderSizeError", 128 },
    { "NotEnoughTiles", 129 },
    { "StaticPlanesValueNotEqualToOne", 130 },
    { "SubsamplingRequiresEvenWidth", 131 },
    { "TooMuchImageDataInFile", 132 },
    { "UnableToReadColormapFromDumpFile", 133 },
    { "UnableToReadColorProfile", 134 },
    { "UnableToReadExtensionBlock", 135 },
    { "UnableToReadGenericProfile", 136 },
    { "UnableToReadImageData", 137 },
    { "UnableToReadImageHeader", 138 },
    { "UnableToReadIPTCProfile", 139 },
    { "UnableToReadPixmapFromDumpFile", 140 },
    { "UnableToReadSubImageData", 141 },
    { "UnableToReadVIDImage", 142 },
    { "UnableToReadWindowNameFromDumpFile", 143 },
    { "UnableToRunlengthDecodeImage", 144 },
    { "UnableToUncompressImage", 145 },
    { "UnexpectedEndOfFile", 146 },
    { "UnexpectedSamplingFactor", 147 },
    { "UnknownPatternType", 148 },
    { "UnrecognizedBitsPerPixel", 149 },
    { "UnrecognizedImageCompression", 150 },
    { "UnrecognizedXWDHeader", 151 },
    { "UnableToPersistKey", 152 },
    { "CompressionNotValid", 153 },
    { "ImproperImageHeader", 154 },
    { "LengthAndFilesizeDoNotMatch", 155 },
    { "NegativeOrZeroImageSize", 156 },
    { "NonOS2HeaderSizeError", 157 },
    { "SkipToSyncByte", 158 },
    { "StaticPlanesValueNotEqualToOne", 159 },
    { "UnrecognizedBitsPerPixel", 160 },
    { "UnrecognizedImageCompression", 161 },
    { "UnrecognizedNumberOfColors", 162 },
    { "DelegateFailed", 163 },
    { "FailedToAllocateArgumentList", 164 },
    { "FailedToAllocateGhostscriptInterpreter", 165 },
    { "FailedToComputeOutputSize", 166 },
    { "FailedToFindGhostscript", 167 },
    { "FailedToRenderFile", 168 },
    { "FailedToScanFile", 169 },
    { "NoTagFound", 170 },
    { "PostscriptDelegateFailed", 171 },
    { "UnableToCreateImage", 172 },
    { "UnableToCreateImageComponent", 173 },
    { "UnableToDecodeImageFile", 174 },
    { "UnableToEncodeImageFile", 175 },
    { "UnableToInitializeFPXLibrary", 176 },
    { "UnableToInitializeWMFLibrary", 177 },
    { "UnableToManageJP2Stream", 178 },
    { "UnableToWriteSVGFormat", 179 },
    { "WebPABIMismatch", 180 },
    { "Default", 181 },
    { "Default", 182 },
    { "AlreadyPushingPatternDefinition", 183 },
    { "NonconformingDrawingPrimitiveDefinition", 184 },
    { "TooManyCoordinates", 185 },
    { "UnableToPrint", 186 },
    { "UnbalancedGraphicContextPushPop", 187 },
    { "Default", 188 },
    { "NotARelativeURL", 189 },
    { "NotCurrentlyPushingPatternDefinition", 190 },
    { "URLNotFound", 191 },
    { "UnableToCreateTemporaryFile", 192 },
    { "UnableToOpenFile", 193 },
    { "UnableToWriteFile", 194 },
    { "Default", 195 },
    { "Default", 196 },
    { "AngleIsDiscontinuous", 197 },
    { "ColorspaceColorProfileMismatch", 198 },
    { "ImageColorspaceDiffers", 199 },
    { "ImageColorspaceMismatch", 200 },
    { "ImageDifferenceExceedsLimit", 201 },
    { "ImageDoesNotContainResolution", 202 },
    { "ImageOpacityDiffers", 203 },
    { "ImageSequenceIsRequired", 204 },
    { "ImageSizeDiffers", 205 },
    { "InvalidColormapIndex", 206 },
    { "LeftAndRightImageSizesDiffer", 207 },
    { "NoImagesWereFound", 208 },
    { "NoImagesWereLoaded", 209 },
    { "NoLocaleImageAttribute", 210 },
    { "TooManyClusters", 211 },
    { "UnableToAppendImage", 212 },
    { "UnableToAssignProfile", 213 },
    { "UnableToAverageImage", 214 },
    { "UnableToCoalesceImage", 215 },
    { "UnableToCompareImages", 216 },
    { "UnableToCreateImageMosaic", 217 },
    { "UnableToCreateStereoImage", 218 },
    { "UnableToDeconstructImageSequence", 219 },
    { "UnableToFlattenImage", 220 },
    { "UnableToGetClipMask", 221 },
    { "UnableToHandleImageChannel", 222 },
    { "UnableToResizeImage", 223 },
    { "UnableToSegmentImage", 224 },
    { "UnableToSetClipMask", 225 },
    { "UnableToShearImage", 226 },
    { "WidthOrHeightExceedsLimit", 227 },
    { "UnableToPersistKey", 228 },
    { "Default", 229 },
    { "DPSLibraryIsNotAvailable", 230 },
    { "FPXLibraryIsNotAvailable", 231 },
    { "FreeTypeLibraryIsNotAvailable", 232 },
    { "JPEGLibraryIsNotAvailable", 233 },
    { "LCMSLibraryIsNotAvailable", 234 },
    { "LZWEncodingNotEnabled", 235 },
    { "NoDecodeDelegateForThisImageFormat", 236 },
    { "NoEncodeDelegateForThisImageFormat", 237 },
    { "TIFFLibraryIsNotAvailable", 238 },
    { "XMLLibraryIsNotAvailable", 239 },
    { "XWindowLibraryIsNotAvailable", 240 },
    { "ZipLibraryIsNotAvailable", 241 },
    { "Default", 242 },
    { "Default", 243 },
    { "FailedToCloseModule", 244 },
    { "FailedToFindSymbol", 245 },
    { "UnableToLoadModule", 246 },
    { "UnableToRegisterImageFormat", 247 },
    { "UnrecognizedModule", 248 },
    { "UnableToInitializeModuleLoader", 249 },
    { "Default", 250 },
    { "Default", 251 },
    { "Default", 252 },
    { "UserRequestedTerminationBySignal", 253 },
    { "Default", 254 },
    { "BevelWidthIsNegative", 255 },
    { "ColorSeparatedImageRequired", 256 },
    { "FrameIsLessThanImageSize", 257 },
    { "GeometryDimensionsAreZero", 258 },
    { "GeometryDoesNotContainImage", 259 },
    { "HaldClutImageDimensionsInvalid", 260 },
    { "ImagesAreNotTheSameSize", 261 },
    { "ImageSizeMustExceedBevelWidth", 262 },
    { "ImageSmallerThanKernelWidth", 263 },
    { "ImageSmallerThanRadius", 264 },
    { "ImageWidthsOrHeightsDiffer", 265 },
    { "InputImagesAlreadySpecified", 266 },
    { "InvalidSubimageSpecification", 267 },
    { "KernelRadiusIsTooSmall", 268 },
    { "KernelWidthMustBeAnOddNumber", 269 },
    { "MatrixIsNotSquare", 270 },
    { "MatrixOrderOutOfRange", 271 },
    { "MissingAnImageFilename", 272 },
    { "MissingArgument", 273 },
    { "MustSpecifyAnImageName", 274 },
    { "MustSpecifyImageSize", 275 },
    { "NoBlobDefined", 276 },
    { "NoImagesDefined", 277 },
    { "NonzeroWidthAndHeightRequired", 278 },
    { "NoProfileNameWasGiven", 279 },
    { "NullBlobArgument", 280 },
    { "ReferenceImageRequired", 281 },
    { "ReferenceIsNotMyType", 282 },
    { "RegionAreaExceedsLimit", 283 },
    { "RequestDidNotReturnAnImage", 284 },
    { "SteganoImageRequired", 285 },
    { "StereoImageRequired", 286 },
    { "SubimageSpecificationReturnsNoImages", 287 },
    { "UnableToAddOrRemoveProfile", 288 },
    { "UnableToAverageImageSequence", 289 },
    { "UnableToBlurImage", 290 },
    { "UnableToChopImage", 291 },
    { "UnableToColorMatrixImage", 292 },
    { "UnableToConstituteImage", 293 },
    { "UnableToConvolveImage", 294 },
    { "UnableToEdgeImage", 295 },
    { "UnableToEqualizeImage", 296 },
    { "UnableToFilterImage", 297 },
    { "UnableToFormatImageMetadata", 298 },
    { "UnableToFrameImage", 299 },
    { "UnableToOilPaintImage", 300 },
    { "UnableToPaintImage", 301 },
    { "UnableToRaiseImage", 302 },
    { "UnableToSharpenImage", 303 },
    { "UnableToThresholdImage", 304 },
    { "UnableToWaveImage", 305 },
    { "UnrecognizedAttribute", 306 },
    { "UnrecognizedChannelType", 307 },
    { "UnrecognizedColor", 308 },
    { "UnrecognizedColormapType", 309 },
    { "UnrecognizedColorspace", 310 },
    { "UnrecognizedCommand", 311 },
    { "UnrecognizedComposeOperator", 312 },
    { "UnrecognizedDisposeMethod", 313 },
    { "UnrecognizedElement", 314 },
    { "UnrecognizedEndianType", 315 },
    { "UnrecognizedGravityType", 316 },
    { "UnrecognizedHighlightStyle", 317 },
    { "UnrecognizedImageCompression", 318 },
    { "UnrecognizedImageFilter", 319 },
    { "UnrecognizedImageFormat", 320 },
    { "UnrecognizedImageMode", 321 },
    { "UnrecognizedImageType", 322 },
    { "UnrecognizedIntentType", 323 },
    { "UnrecognizedInterlaceType", 324 },
    { "UnrecognizedListType", 325 },
    { "UnrecognizedMetric", 326 },
    { "UnrecognizedModeType", 327 },
    { "UnrecognizedNoiseType", 328 },
    { "UnrecognizedOperator", 329 },
    { "UnrecognizedOption", 330 },
    { "UnrecognizedPerlMagickMethod", 331 },
    { "UnrecognizedPixelMap", 332 },
    { "UnrecognizedPreviewType", 333 },
    { "UnrecognizedResourceType", 334 },
    { "UnrecognizedType", 335 },
    { "UnrecognizedUnitsType", 336 },
    { "UnrecognizedVirtualPixelMethod", 337 },
    { "UnsupportedSamplingFactor", 338 },
    { "UsageError", 339 },
    { "InvalidColorspaceType", 340 },
    { "InvalidEndianType", 341 },
    { "InvalidImageType", 342 },
    { "InvalidInterlaceType", 343 },
    { "MissingAnImageFilename", 344 },
    { "MissingArgument", 345 },
    { "NoImagesWereLoaded", 346 },
    { "OptionLengthExceedsLimit", 347 },
    { "RequestDidNotReturnAnImage", 348 },
    { "UnableToOpenXServer", 349 },
    { "UnableToPersistKey", 350 },
    { "UnrecognizedColormapType", 351 },
    { "UnrecognizedColorspaceType", 352 },
    { "UnrecognizedDisposeMethod", 353 },
    { "UnrecognizedEndianType", 354 },
    { "UnrecognizedFilterType", 355 },
    { "UnrecognizedImageCompressionType", 356 },
    { "UnrecognizedImageType", 357 },
    { "UnrecognizedInterlaceType", 358 },
    { "UnrecognizedOption", 359 },
    { "UnrecognizedResourceType", 360 },
    { "UnrecognizedVirtualPixelMethod", 361 },
    { "UnrecognizedColor", 362 },
    { "ImageExpected", 363 },
    { "ImageInfoExpected", 364 },
    { "StructureSizeMismatch", 365 },
    { "UnableToGetRegistryID", 366 },
    { "UnableToLocateImage", 367 },
    { "UnableToSetRegistry", 368 },
    { "Default", 369 },
    { "Default", 370 },
    { "CacheResourcesExhausted", 371 },
    { "ImagePixelLimitExceeded", 372 },
    { "MemoryAllocationFailed", 373 },
    { "NoPixelsDefinedInCache", 374 },
    { "PixelCacheAllocationFailed", 375 },
    { "UnableToAddColorProfile", 376 },
    { "UnableToAddGenericProfile", 377 },
    { "UnableToAddIPTCProfile", 378 },
    { "UnableToAllocateCoefficients", 379 },
    { "UnableToAllocateColormap", 380 },
    { "UnableToAllocateICCProfile", 381 },
    { "UnableToAllocateString", 382 },
    { "UnableToAnnotateImage", 383 },
    { "UnableToAverageImageSequence", 384 },
    { "UnableToCloneDrawingWand", 385 },
    { "UnableToCloneImage", 386 },
    { "UnableToComputeImageSignature", 387 },
    { "UnableToConstituteImage", 388 },
    { "UnableToConvertFont", 389 },
    { "UnableToConvertStringToTokens", 390 },
    { "UnableToCreateColormap", 391 },
    { "UnableToCreateColorTransform", 392 },
    { "UnableToCreateCommandWidget", 393 },
    { "UnableToCreateImageGroup", 394 },
    { "UnableToCreateImageMontage", 395 },
    { "UnableToCreateXWindow", 396 },
    { "UnableToCropImage", 397 },
    { "UnableToDespeckleImage", 398 },
    { "UnableToDetermineImageClass", 399 },
    { "UnableToDetermineTheNumberOfImageColors", 400 },
    { "UnableToDitherImage", 401 },
    { "UnableToDrawOnImage", 402 },
    { "UnableToEdgeImage", 403 },
    { "UnableToEmbossImage", 404 },
    { "UnableToEnhanceImage", 405 },
    { "UnableToFloodfillImage", 406 },
    { "UnableToGammaCorrectImage", 407 },
    { "UnableToGetBestIconSize", 408 },
    { "UnableToGetFromRegistry", 409 },
    { "UnableToGetPackageInfo", 410 },
    { "UnableToLevelImage", 411 },
    { "UnableToMagnifyImage", 412 },
    { "UnableToManageColor", 413 },
    { "UnableToMapImage", 414 },
    { "UnableToMapImageSequence", 415 },
    { "UnableToMedianFilterImage", 416 },
    { "UnableToMotionBlurImage", 417 },
    { "UnableToNoiseFilterImage", 418 },
    { "UnableToNormalizeImage", 419 },
    { "UnableToOpenColorProfile", 420 },
    { "UnableToQuantizeImage", 421 },
    { "UnableToQuantizeImageSequence", 422 },
    { "UnableToReadTextChunk", 423 },
    { "UnableToReadXImage", 424 },
    { "UnableToReadXServerColormap", 425 },
    { "UnableToResizeImage", 426 },
    { "UnableToRotateImage", 427 },
    { "UnableToSampleImage", 428 },
    { "UnableToScaleImage", 429 },
    { "UnableToSelectImage", 430 },
    { "UnableToSharpenImage", 431 },
    { "UnableToShaveImage", 432 },
    { "UnableToShearImage", 433 },
    { "UnableToSortImageColormap", 434 },
    { "UnableToThresholdImage", 435 },
    { "UnableToTransformColorspace", 436 },
    { "MemoryAllocationFailed", 437 },
    { "SemaporeOperationFailed", 438 },
    { "UnableToAllocateAscii85Info", 439 },
    { "UnableToAllocateCacheInfo", 440 },
    { "UnableToAllocateCacheView", 441 },
    { "UnableToAllocateColorInfo", 442 },
    { "UnableToAllocateDashPattern", 443 },
    { "UnableToAllocateDelegateInfo", 444 },
    { "UnableToAllocateDerivatives", 445 },
    { "UnableToAllocateDrawContext", 446 },
    { "UnableToAllocateDrawInfo", 447 },
    { "UnableToAllocateDrawingWand", 448 },
    { "UnableToAllocateGammaMap", 449 },
    { "UnableToAllocateImage", 450 },
    { "UnableToAllocateImagePixels", 451 },
    { "UnableToAllocateLogInfo", 452 },
    { "UnableToAllocateMagicInfo", 453 },
    { "UnableToAllocateMagickInfo", 454 },
    { "UnableToAllocateModuleInfo", 455 },
    { "UnableToAllocateMontageInfo", 456 },
    { "UnableToAllocateQuantizeInfo", 457 },
    { "UnableToAllocateRandomKernel", 458 },
    { "UnableToAllocateRegistryInfo", 459 },
    { "UnableToAllocateSemaphoreInfo", 460 },
    { "UnableToAllocateString", 461 },
    { "UnableToAllocateTypeInfo", 462 },
    { "UnableToAllocateWand", 463 },
    { "UnableToAnimateImageSequence", 464 },
    { "UnableToCloneBlobInfo", 465 },
    { "UnableToCloneCacheInfo", 466 },
    { "UnableToCloneImage", 467 },
    { "UnableToCloneImageInfo", 468 },
    { "UnableToConcatenateString", 469 },
    { "UnableToConvertText", 470 },
    { "UnableToCreateColormap", 471 },
    { "UnableToDestroySemaphore", 472 },
    { "UnableToDisplayImage", 473 },
    { "UnableToEscapeString", 474 },
    { "UnableToInitializeSemaphore", 475 },
    { "UnableToInterpretMSLImage", 476 },
    { "UnableToLockSemaphore", 477 },
    { "UnableToUnlockSemaphore", 478 },
    { "MemoryAllocationFailed", 479 },
    { "ImageDoesNotContainTheStreamGeometry", 480 },
    { "NoStreamHandlerIsDefined", 481 },
    { "PixelCacheIsNotOpen", 482 },
    { "UnableToAcquirePixelStream", 483 },
    { "UnableToSetPixelStream", 484 },
    { "UnableToSyncPixelStream", 485 },
    { "Default", 486 },
    { "Default", 487 },
    { "FontSubstitutionRequired", 488 },
    { "UnableToGetTypeMetrics", 489 },
    { "UnableToInitializeFreetypeLibrary", 490 },
    { "UnableToReadFont", 491 },
    { "UnrecognizedFontEncoding", 492 },
    { "Default", 493 },
    { "Default", 494 },
    { "InvalidColormapIndex", 495 },
    { "WandAPINotImplemented", 496 },
    { "WandContainsNoImageIndexs", 497 },
    { "WandContainsNoImages", 498 },
    { "ColorIsNotKnownToServer", 499 },
    { "NoWindowWithSpecifiedIDExists", 500 },
    { "StandardColormapIsNotInitialized", 501 },
    { "UnableToConnectToRemoteDisplay", 502 },
    { "UnableToCreateBitmap", 503 },
    { "UnableToCreateColormap", 504 },
    { "UnableToCreatePixmap", 505 },
    { "UnableToCreateProperty", 506 },
    { "UnableToCreateStandardColormap", 507 },
    { "UnableToDisplayImageInfo", 508 },
    { "UnableToGetProperty", 509 },
    { "UnableToGetStandardColormap", 510 },
    { "UnableToGetVisual", 511 },
    { "UnableToGrabMouse", 512 },
    { "UnableToLoadFont", 513 },
    { "UnableToMatchVisualToStandardColormap", 514 },
    { "UnableToOpenXServer", 515 },
    { "UnableToReadXAttributes", 516 },
    { "UnableToReadXWindowImage", 517 },
    { "UnrecognizedColormapType", 518 },
    { "UnrecognizedGravityType", 519 },
    { "UnrecognizedVisualSpecifier", 520 },
    { "UnableToAllocateXHints", 521 },
    { "UnableToCreateCursor", 522 },
    { "UnableToCreateGraphicContext", 523 },
    { "UnableToCreateStandardColormap", 524 },
    { "UnableToCreateTextProperty", 525 },
    { "UnableToCreateXImage", 526 },
    { "UnableToCreateXPixmap", 527 },
    { "UnableToCreateXWindow", 528 },
    { "UnableToDisplayImage", 529 },
    { "UnableToDitherImage", 530 },
    { "UnableToGetPixelInfo", 531 },
    { "UnableToGetVisual", 532 },
    { "UnableToLoadFont", 533 },
    { "UnableToMakeXWindow", 534 },
    { "UnableToOpenXServer", 535 },
    { "UnableToViewFonts", 536 },
    { "UnableToGetVisual", 537 },
    { "UsingDefaultVisual", 538 },
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
