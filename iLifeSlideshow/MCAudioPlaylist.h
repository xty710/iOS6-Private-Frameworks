/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class MCContainer, NSArray, NSMutableSet, NSSet;

@interface MCAudioPlaylist : MCObject
{
    NSMutableSet *mSongs;
    NSArray *mCachedOrderedSongs;
    float mVolume;
    double mFadeInDuration;
    double mFadeOutDuration;
    float mDuckLevel;
    double mDuckInDuration;
    double mDuckOutDuration;
    MCContainer *mContainer;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property MCContainer *container; // @synthesize container=mContainer;
@property(nonatomic) double duckOutDuration; // @synthesize duckOutDuration=mDuckOutDuration;
@property(nonatomic) double duckInDuration; // @synthesize duckInDuration=mDuckInDuration;
@property(nonatomic) float duckLevel; // @synthesize duckLevel=mDuckLevel;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=mFadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=mFadeInDuration;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(readonly) NSArray *orderedSongs;
- (void)moveSongsAtIndices:(id)arg1 toIndex:(unsigned int)arg2;
- (void)removeAllSongs;
- (void)removeSongsAtIndices:(id)arg1;
- (id)insertSongsForAssets:(id)arg1 atIndex:(unsigned int)arg2;
- (id)insertSongForAsset:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addSongsForAssets:(id)arg1;
- (id)addSongForAsset:(id)arg1;
- (id)songAtIndex:(unsigned int)arg1;
- (unsigned int)countOfSongs;
@property(readonly) NSSet *songs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end

