/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageConsumer-Protocol.h"
#import "QueryProgressMonitor-Protocol.h"

@class NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *messages;
}

- (BOOL)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;
- (id)messages;
- (void)dealloc;
- (id)init;

@end

