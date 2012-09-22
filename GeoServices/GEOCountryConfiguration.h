/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject
{
    NSString *_countryCode;
    NSDictionary *_oldProvidersInfo;
    NSString *_oldCountryCode;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
}

+ (id)sharedConfiguration;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)countryDefaultForKey:(id)arg1;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_useCountryCodeProvider:(id)arg1;
- (void)_checkCountryProviders;
- (void)_registerNetworkDefaults;
- (void)_checkCountryCode;
- (void)updateProvidersForCurrentCountry;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;

@end

