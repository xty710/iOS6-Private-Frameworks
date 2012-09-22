/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSString;

@interface MPLayerInternal : NSObject
{
    double numberOfLoops;
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    float scale;
    double timeIn;
    double duration;
    double phaseInDuration;
    double phaseOutDuration;
    NSString *title;
    BOOL isTriggered;
    BOOL startsPaused;
    BOOL isAudioLayer;
    int audioPriority;
    double durationPadding;
    NSString *layerID;
    int zIndex;
    NSString *uuid;
    NSLock *containerLock;
    BOOL cleaningUp;
}

@property(nonatomic) BOOL cleaningUp; // @synthesize cleaningUp;
@property(retain, nonatomic) NSLock *containerLock; // @synthesize containerLock;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *layerID; // @synthesize layerID;
@property(nonatomic) double durationPadding; // @synthesize durationPadding;
@property(nonatomic) int audioPriority; // @synthesize audioPriority;
@property(nonatomic) BOOL isAudioLayer; // @synthesize isAudioLayer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int zIndex; // @synthesize zIndex;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) BOOL startsPaused; // @synthesize startsPaused;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) float scale; // @synthesize scale;
@property(nonatomic) float yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) float xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) float zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) float opacity; // @synthesize opacity;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops;
- (void)dealloc;

@end

