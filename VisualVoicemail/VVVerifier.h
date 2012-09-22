/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface VVVerifier : NSObject
{
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
}

+ (id)sharedVerifier;
- (id)humanReadableConfigurationDictionary:(id *)arg1;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (id)configurationDictionary;
- (id)readableError;
- (id)keyDescriptions;
- (BOOL)valueForCheckpointKey:(id)arg1 exists:(char *)arg2;
- (void)storeValue:(BOOL)arg1 forCheckpointKey:(id)arg2;
- (void)_saveCheckpointDictionary;
- (void)_checkpointDictionaryChanged;
- (id)_checkpointDictionary;
- (id)_checkpointDictionaryFilePath;
- (void)dealloc;

@end

