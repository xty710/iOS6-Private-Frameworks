/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WebDocumentText-Protocol.h"

@protocol WebDocumentSelection <WebDocumentText>
- (id)selectionView;
- (struct CGRect)selectionImageRect;
- (struct CGImage *)selectionImageForcingBlackText:(BOOL)arg1;
- (struct CGRect)selectionRect;
- (id)selectionTextRects;
@end

