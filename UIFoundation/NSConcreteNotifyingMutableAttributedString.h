/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSConcreteMutableAttributedString.h"

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString
{
    id _delegate;
}

+ (Class)_mutableStringClass;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange)arg2 changeInLength:(int)arg3;
- (void)endEditing;
- (void)beginEditing;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

