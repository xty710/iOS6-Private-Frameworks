/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AceContext-Protocol.h"

@class NSMutableDictionary;

@interface BasicAceContext : NSObject <AceContext>
{
    NSMutableDictionary *_groupMap;
    NSMutableDictionary *_objectMap;
}

- (id)aceObjectWithDictionary:(id)arg1;
- (Class)classWithClassName:(id)arg1 group:(id)arg2;
- (void)addClass:(Class)arg1 forCommand:(id)arg2 inGroup:(id)arg3;
- (void)addAcronym:(id)arg1 forGroup:(id)arg2;
- (void)dealloc;
- (id)init;

@end

