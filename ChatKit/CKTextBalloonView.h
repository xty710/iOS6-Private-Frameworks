/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/_CKTextBalloonView.h>

#import "CKTextInteractionDelegate-Protocol.h"

@interface CKTextBalloonView : _CKTextBalloonView <CKTextInteractionDelegate>
{
    int _textAlignment;
}

+ (id)textViewCache;
+ (id)textAlignmentCache;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
- (id)textViewForClass:(Class)arg1;
- (void)updateTextViewToClass:(Class)arg1;
- (void)updateTextView;
- (void)setAttributedText:(id)arg1;
- (void)dataDetectorActionDidFinish;
- (BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)contentInsets;
- (void)setTapEnabled:(BOOL)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)description;
- (void)dealloc;

@end

