/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAutoRotatingWindow.h"

@class UIImageView;

@interface CKEffectsWindow : UIAutoRotatingWindow
{
    UIImageView *shadowImageView;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView;
- (void)didAddSubview:(id)arg1;
@property(nonatomic, getter=isShadowHidden) BOOL shadowHidden; // @dynamic shadowHidden;
- (BOOL)shadowHidden;
- (id)init;
- (void)dealloc;

@end

