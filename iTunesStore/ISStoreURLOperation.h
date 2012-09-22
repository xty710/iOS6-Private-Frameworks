/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStore/ISURLOperation.h>

@class NSNumber;

@interface ISStoreURLOperation : ISURLOperation
{
    NSNumber *_authenticatedDSID;
    BOOL _canSendGUIDParameter;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    BOOL _shouldSendXTokenHeader;
    BOOL _urlKnownToBeTrusted;
    BOOL _useUserSpecificURLBag;
}

+ (id)_restrictionsHeaderValue;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withBagContext:(id)arg2 accountIdentifier:(id)arg3;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (void)handleITunesStoreResponseHeaders:(id)arg1 withAccountIdentifier:(id)arg2;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
@property BOOL useUserSpecificURLBag; // @synthesize useUserSpecificURLBag=_useUserSpecificURLBag;
@property BOOL urlKnownToBeTrusted; // @synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted;
@property BOOL needsURLBag; // @synthesize needsURLBag=_needsURLBag;
@property BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
- (id)_urlFromURLBagForRequestProperties:(id)arg1 inBagContext:(id)arg2;
- (void)_runURLOperation;
- (BOOL)_isErrorTokenError:(id)arg1;
- (id)_copyURLBagContext;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (BOOL)_authenticateReturningError:(id *)arg1 promptAlways:(BOOL)arg2;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (id)_account;
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;
- (void)run;
- (id)newRequestWithURL:(id)arg1;
- (void)handleResponse:(id)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;
- (id)_copyAuthenticationContext;
- (id)authenticatedAccountDSID;
@property BOOL shouldSendXTokenHeader;
@property BOOL canSendGUIDParameter;
- (void)dealloc;
- (id)init;

// Remaining properties
@property id <ISStoreURLOperationDelegate> delegate; // @dynamic delegate;

@end

