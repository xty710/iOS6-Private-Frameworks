/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADBlipEffect.h>

@interface OADLuminanceEffect : OADBlipEffect
{
    float mBrightness;
    float mContrast;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setContrast:(float)arg1;
- (float)contrast;
- (void)setBrightness:(float)arg1;
- (float)brightness;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

