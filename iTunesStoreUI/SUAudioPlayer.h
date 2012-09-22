/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVPlayer, AVPlayerItem, NSMutableDictionary, NSURL, SUPlayerStatus;

@interface SUAudioPlayer : NSObject
{
    AVAsset *_asset;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (void)_setPlayerState:(int)arg1;
- (void)_postStatusChangeNotification;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_failWithError:(id)arg1;
- (void)_destroyPlayerItem;
- (void)_destroyPlayer;
- (void)_applyNowPlayingInfo;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)valueForNowPlayingKey:(id)arg1;
- (void)stop;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) SUPlayerStatus *playerStatus;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

