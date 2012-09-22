/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAlbumChangeNotification.h>

@class NSArray, PLPlace;

@interface PLPlaceChangeNotification : PLAlbumChangeNotification
{
    PLPlace *_fromPlace;
    PLPlace *_toPlace;
    NSArray *_changedObjects;
    PLAlbumChangeNotification *_backingNotifiation;
}

+ (id)notificationForFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (void)dealloc;
- (id)initWithFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (BOOL)titleDidChange;
- (id)album;
- (id)object;
- (id)init;

@end

