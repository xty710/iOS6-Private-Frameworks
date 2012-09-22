/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSPortDelegate-Protocol.h"

@class NSThread;

@interface AOSContext : NSObject <NSPortDelegate>
{
    struct AOSAccount *_account;
    struct AOSTransactionC *_transaction;
    void *_callback;
    NSThread *_callbackThread;
    id _info;
}

+ (id)contextWithAccount:(struct AOSAccount *)arg1 andTransaction:(struct AOSTransactionC *)arg2;
- (void)_performCallback;
- (id)_callbackThread;
- (BOOL)scheduleCallback;
- (id)info;
- (void)setInfo:(id)arg1;
- (struct AOSTransactionC *)transaction;
- (void)setTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSAccount *)account;
- (void)setAccount:(struct AOSAccount *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

