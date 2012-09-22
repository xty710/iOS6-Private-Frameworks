/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIBezierPath, UIImage;

@interface MSPieImageView : UIView
{
    UIImage *_backgroundImage;
    UIBezierPath *_clipPath;
    UIImage *_foregroundImage;
    float _pieFraction;
    float _pieRadius;
}

@property(nonatomic) float pieRadius; // @synthesize pieRadius=_pieRadius;
@property(nonatomic) float pieFraction; // @synthesize pieFraction=_pieFraction;
@property(retain, nonatomic) UIImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)_reloadClipPath;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

