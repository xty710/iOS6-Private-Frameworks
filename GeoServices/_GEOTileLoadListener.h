/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList, GEOTileUsageInfo, NSError, NSLock;

@interface _GEOTileLoadListener : NSObject
{
    id _progress;
    id _finished;
    id _error;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_networkLoadList;
    GEOTileKeyList *_satisfiedList;
    struct __CFRunLoop *_runloop;
    BOOL _finishWhenDecoded;
    int _tilesDecoding;
    NSError *_finishError;
    NSLock *_callbacksLock;
    BOOL _checkDiskAllowed;
    BOOL _preload;
    GEOTileUsageInfo *_usageInfo;
}

@property(nonatomic, getter=isPreload) BOOL preload; // @synthesize preload=_preload;
@property(nonatomic) BOOL checkDiskAllowed; // @synthesize checkDiskAllowed=_checkDiskAllowed;
@property(retain, nonatomic) GEOTileKeyList *satisfiedList; // @synthesize satisfiedList=_satisfiedList;
@property(retain, nonatomic) GEOTileKeyList *networkLoadList; // @synthesize networkLoadList=_networkLoadList;
@property(retain, nonatomic) GEOTileKeyList *originalList; // @synthesize originalList=_originalList;
@property(copy, nonatomic) id error; // @synthesize error=_error;
@property(copy, nonatomic) id finished; // @synthesize finished=_finished;
@property(copy, nonatomic) id progress; // @synthesize progress=_progress;
- (void)unlockCallbacks;
- (void)lockCallbacks;
- (void)finishDecodingAndSendError:(id)arg1;
- (void)finishWhenDecoded;
- (void)endDecode;
- (void)_tryFinish;
- (void)beginDecode;
- (struct __CFRunLoop *)runloop;
- (void)addSatisfiedKey:(const struct _GEOTileKey *)arg1 fromDisk:(BOOL)arg2 dataLength:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

@end

