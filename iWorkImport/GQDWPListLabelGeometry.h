/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable>
{
    float mScale;
    float mBaselineOffset;
    BOOL mScaleWithText;
    int mLabelAlignment;
}

+ (const struct StateSpec *)stateForReading;
- (int)labelAlignment;
- (BOOL)scaleWithText;
- (float)baselineOffset;
- (float)scale;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

