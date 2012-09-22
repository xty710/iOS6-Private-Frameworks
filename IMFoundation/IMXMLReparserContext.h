/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject
{
    NSString *_inContent;
    NSString *_outContent;
    NSArray *_attributesToPreserve;
    NSDictionary *_attributesToMerge;
    NSError *_error;
}

@property(readonly, nonatomic) NSDictionary *attributesToMerge; // @synthesize attributesToMerge=_attributesToMerge;
@property(readonly, nonatomic) NSArray *attributesToPreserve; // @synthesize attributesToPreserve=_attributesToPreserve;
@property(readonly, nonatomic) NSString *outContent; // @synthesize outContent=_outContent;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly) NSString *_inContent; // @synthesize _inContent;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;

@end

