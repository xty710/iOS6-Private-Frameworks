/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReaderOutputServer/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey
{
    NSString *_keyString;
    unsigned int _modifiers;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setModifiers:(unsigned int)arg1;
- (unsigned int)modifiers;
- (void)setKeyString:(id)arg1;
- (id)keyString;
- (void)dealloc;

@end

