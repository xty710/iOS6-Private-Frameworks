/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "STAnimatableButtonSliceDelegate-Protocol.h"

@class STAnimatableButtonSlice, STShadowLabel, UIColor, UIImage;

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate>
{
    UIImage *_image;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    STShadowLabel *_titleLabel;
    STShadowLabel *_subtitleLabel;
    id _target;
    SEL _action;
    BOOL _isLandscape;
    BOOL _touchInside;
    BOOL _slicesNeedDisplay;
    UIColor *_shadowColor;
    float _shadowBlurRadius;
    struct UIEdgeInsets _hitRectEdgeInsets;
    STAnimatableButtonSlice *_leftSlice;
    STAnimatableButtonSlice *_middleSlice;
    STAnimatableButtonSlice *_rightSlice;
}

@property(nonatomic) struct UIEdgeInsets hitRectEdgeInsets; // @synthesize hitRectEdgeInsets=_hitRectEdgeInsets;
- (id)_buttonWellLandscapeImage;
- (id)_buttonWellImage;
- (void)setShadowColor:(id)arg1 blurRadius:(float)arg2;
- (void)setLandscape:(BOOL)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)drawImageForSlice;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

