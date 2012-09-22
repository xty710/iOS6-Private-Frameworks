/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUInputStream-Protocol.h"

@interface SFUFileInputStream : NSObject <SFUInputStream>
{
    int mFd;
    BOOL mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;

@end

