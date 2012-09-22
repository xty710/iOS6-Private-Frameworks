/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class MSASAssetCollection, NSArray, NSDictionary, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    BOOL _replacingOriginalWithDerivative;
    NSString *_currentFilePath;
    BOOL _isCreatingPlaceHolder;
    NSDictionary *_mstreamdInfoDictionary;
    NSDictionary *_currentCloudAssetMetadata;
    NSString *_cloudPersonID;
    NSString *_currentCloudAssetGUID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSString *_cloudAlbumGUID;
    int _jobType;
    NSArray *_cloudAssetGUIDsToDelete;
    NSArray *_cloudAssetCollections;
}

+ (id)placeholderImageProperties;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;
+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (id)directoryPathForInFlightAssets:(BOOL)arg1;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 albumGUID:(id)arg3 assetMetadata:(id)arg4 personID:(id)arg5 info:(id)arg6;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
@property(retain, nonatomic) NSArray *cloudAssetCollections; // @synthesize cloudAssetCollections=_cloudAssetCollections;
@property(retain, nonatomic) NSArray *cloudAssetGUIDsToDelete; // @synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete;
@property(nonatomic) int jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSString *cloudAlbumGUID; // @synthesize cloudAlbumGUID=_cloudAlbumGUID;
@property(retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // @synthesize currentCloudAssetCollection=_currentCloudAssetCollection;
@property(retain, nonatomic) NSString *currentCloudAssetGUID; // @synthesize currentCloudAssetGUID=_currentCloudAssetGUID;
@property(retain, nonatomic) NSString *cloudPersonID; // @synthesize cloudPersonID=_cloudPersonID;
@property(retain, nonatomic) NSDictionary *currentCloudAssetMetadata; // @synthesize currentCloudAssetMetadata=_currentCloudAssetMetadata;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(nonatomic) BOOL isCreatingPlaceHolder; // @synthesize isCreatingPlaceHolder=_isCreatingPlaceHolder;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (unsigned int)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (id)assetsToRetriveForAssetMetadataForCurrentCollectionWithExistingPlaceHolderKind:(int)arg1;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (void)saveJobAssetWithPlaceholderKind:(int)arg1;
- (void)executeDaemonOperationSaveAssetJobType;
- (int)placeHolderKindFromAssetMetadataType:(id)arg1;
- (BOOL)isProcessingThumbnail;
- (void)runDaemonSide;
- (void)run;
- (int)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;

@end

