/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface _CPPowerAssertion : NSObject
{
    unsigned int _assertion;
    double _timeout;
    NSString *_identifier;
    NSArray *_stack;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)timedout;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

