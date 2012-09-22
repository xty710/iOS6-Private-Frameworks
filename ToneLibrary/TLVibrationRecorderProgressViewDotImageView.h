/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@interface TLVibrationRecorderProgressViewDotImageView : UIImageView
{
    double _timeInterval;
    double _duration;
    double _previousPauseTimeInterval;
    double _previousPauseDuration;
}

@property(nonatomic) double previousPauseDuration; // @synthesize previousPauseDuration=_previousPauseDuration;
@property(nonatomic) double previousPauseTimeInterval; // @synthesize previousPauseTimeInterval=_previousPauseTimeInterval;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

