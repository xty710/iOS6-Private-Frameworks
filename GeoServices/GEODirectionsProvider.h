/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEODirectionsProvider : NSObject
{
    BOOL _isLoading;
    int _requestType;
    id _finishedHandler;
    id _errorHandler;
}

+ (unsigned short)providerID;
@property(copy, nonatomic) id errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(int)arg1;
- (void)providerReceivedResponse:(id)arg1;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)requestCompleted;
- (void)dealloc;

@end

