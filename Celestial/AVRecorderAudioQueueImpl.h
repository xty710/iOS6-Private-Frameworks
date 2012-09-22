/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVRecorderImpl-Protocol.h"

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl>
{
    BOOL _isActive;
    BOOL _isRecording;
    BOOL _isWriting;
    NSMutableDictionary *_attributes;
    unsigned long _fileType;
    unsigned long _audioCodec;
    long long _maxPCMFramesToRecord;
    BOOL _haveRecordedMaxPCMFrames;
    struct AudioStreamBasicDescription _recordingFormat;
    struct OpaqueAudioFileID *_audioFile;
    struct OpaqueAudioQueue *_audioQueue;
    unsigned long _numDeviceChannels;
    struct AudioQueueLevelMeterState *_audioLevels;
    struct AudioQueueLevelMeterState *_audioLevelsDB;
    unsigned long _totalBytesRecorded;
    unsigned long _totalPacketsRecorded;
    unsigned long _totalFramesRecorded;
    struct AudioQueueBuffer *_buffers[3];
    char _bufferUsed[3];
}

- (void)haveABuffer:(struct AudioQueueBuffer *)arg1 withTimeStamp:(const struct AudioTimeStamp *)arg2 andNumPackets:(unsigned long)arg3 andPacketDescs:(const struct AudioStreamPacketDescription *)arg4;
- (void)copyEncoderCookieToFile;
- (BOOL)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2 useDB:(BOOL)arg3;
- (unsigned int)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (BOOL)isRecording;
- (void)stop;
- (BOOL)start;
- (BOOL)autoFocusAtPoint:(struct CGPoint)arg1;
- (BOOL)takePhoto;
- (BOOL)isActive;
- (void)deactivate;
- (BOOL)activate:(id *)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

