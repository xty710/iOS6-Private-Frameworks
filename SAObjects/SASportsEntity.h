/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SASportsLeague, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject
{
}

+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entity;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(retain, nonatomic) SAUIAppPunchOut *punchout;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SASportsLeague *league;
@property(copy, nonatomic) NSURL *image;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

