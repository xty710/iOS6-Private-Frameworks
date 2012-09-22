/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WDRubyProperties : NSObject
{
    unsigned int mOriginal:1;
    CDStruct_1d177db0 *mOriginalProperties;
}

- (void)clearPhoneticGuideLanguage;
- (BOOL)isPhoneticGuideLanguageOverridden;
@property(nonatomic) int phoneticGuideLanguage;
- (void)clearDistanceBetween;
- (BOOL)isDistanceBetweenOverridden;
@property(nonatomic) unsigned short distanceBetween;
- (void)clearBaseFontSize;
- (BOOL)isBaseFontSizeOverridden;
@property(nonatomic) unsigned short baseFontSize;
- (void)clearPhoneticGuideFontSize;
- (BOOL)isPhoneticGuideFontSizeOverridden;
@property(nonatomic) unsigned short phoneticGuideFontSize;
- (void)clearAlignment;
- (BOOL)isAlignmentOverridden;
@property(nonatomic) int alignment;
- (BOOL)isAnythingOverridden;
- (void)dealloc;
- (id)init;
- (BOOL)isAnythingOverriddenIn:(CDStruct_1d177db0 *)arg1;

@end

