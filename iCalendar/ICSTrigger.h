/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
{
}

- (BOOL)isDurationBased;
- (id)initWithDuration:(id)arg1;
- (id)initWithDate:(id)arg1;
- (void)fixAlarmTrigger;
- (void)setDuration:(id)arg1;
- (void)setDate:(id)arg1;

@end

