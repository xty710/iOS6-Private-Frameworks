/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VKViewVolume : NSObject
{
    CDStruct_31142d93 _corners[8];
    CDStruct_e77eda21 _faces[6];
}

- (CDStruct_31142d93)lerpPoint:(float *)arg1;
- (BOOL)distanceClipsPoint:(CDStruct_31142d93)arg1;
- (BOOL)rejectsRect:(CDStruct_aca18c62)arg1;
- (void)updateWithFrustum:(CDStruct_17faa5b0)arg1 matrix:(const CDStruct_aa5aacbc *)arg2;
@property(readonly, nonatomic) CDStruct_e77eda21 farPlane;
@property(readonly, nonatomic) const CDStruct_e77eda21 *faces;
@property(readonly, nonatomic) const CDStruct_31142d93 *corners;

@end

