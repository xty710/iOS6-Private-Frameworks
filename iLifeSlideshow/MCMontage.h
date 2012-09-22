/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCPlug, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MCMontage : NSObject
{
    NSDictionary *mImprintWhileLoading;
    NSMutableDictionary *mVideoAssetsForFilePaths;
    NSMutableDictionary *mVideoAssetsForObjectIDs;
    NSMutableDictionary *mAudioAssetsForFilePaths;
    NSMutableDictionary *mAudioAssetsForObjectIDs;
    NSMutableDictionary *mContainersForObjectIDs;
    NSRecursiveLock *mLock;
    MCPlug *mRootPlug;
    double mAudioFadeOutDuration;
    NSString *mBasePath;
    unsigned long long mUUIDSeed;
    NSArray *mLayouts;
}

@property(retain) NSArray *layouts; // @synthesize layouts=mLayouts;
@property(copy) NSString *basePath; // @synthesize basePath=mBasePath;
@property(nonatomic) double audioFadeOutDuration; // @synthesize audioFadeOutDuration=mAudioFadeOutDuration;
@property(readonly, nonatomic) MCPlug *rootPlug; // @synthesize rootPlug=mRootPlug;
- (void)forgetAboutContainer:(id)arg1;
- (void)registerContainer:(id)arg1;
- (id)containerForObjectID:(id)arg1;
- (id)audioAssets;
- (id)videoAssets;
- (id)assets;
- (id)audioAssetForObjectID:(id)arg1;
- (id)videoAssetForObjectID:(id)arg1;
- (id)assetForObjectID:(id)arg1;
- (id)audioAssetForFileAtPath:(id)arg1;
- (id)videoAssetForFileAtPath:(id)arg1;
- (id)createNavigatorContainer;
- (id)createEffectContainer;
- (id)createParallelizerContainer;
- (id)createSerializerContainer;
@property(readonly, nonatomic) unsigned long long uuidSeed; // @synthesize uuidSeed=mUUIDSeed;
- (void)unlock;
- (void)lock;
- (id)data;
- (id)imprint;
- (void)demolish;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initFromScratch;
- (id)init;

@end

