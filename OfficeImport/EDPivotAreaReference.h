/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;
    _Bool mRelative;
    _Bool mSelected;
    unsigned int mFieldId;
    unsigned int mCount;
}

+ (id)pivotAreaReference;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)count;
- (void)setFieldId:(unsigned int)arg1;
- (unsigned int)fieldId;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (void)setRelative:(_Bool)arg1;
- (_Bool)relative;
- (void)setByPosition:(_Bool)arg1;
- (_Bool)byPosition;
- (id)init;

@end

