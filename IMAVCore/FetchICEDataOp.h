/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMExtendedOperation.h>

@class IMAVChatParticipant, NSData, NetworkCheckOperation;

@interface FetchICEDataOp : IMExtendedOperation
{
    NetworkCheckOperation *_networkCheckOp;
    IMAVChatParticipant *_participant;
    NSData *_ICEData;
    unsigned int _shouldWaitForWifi:1;
    unsigned int _showNetworkOptions:1;
}

- (id)networkCheckOperation;
- (id)ICEData;
- (void)main;
- (void)createChildOperations;
- (void)dealloc;
- (id)initWithParticipant:(id)arg1 shouldWaitForWifi:(BOOL)arg2 shouldShowNetworkOptions:(BOOL)arg3;

@end

