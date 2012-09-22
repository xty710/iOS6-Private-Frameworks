/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQZEntryInputStream-Protocol.h"

@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    long long mEnd;
    unsigned long mCalculatedCrc;
    unsigned long mCheckCrc;
    id <GQZArchiveInputStream> mInput;
    char *mOutBuffer;
    unsigned long mOutBufferSize;
}

- (id).cxx_construct;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned int *)arg2;
- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 input:(id)arg5;

@end

