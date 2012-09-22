/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class IUMediaTableCellContentView, IUTableCellConfiguration, MPDownloadProgressIndicator, MPMediaDownloadObserver, UIButton;

@interface IUMediaTableCell : UITableViewCell
{
    UIButton *_downloadButton;
    MPMediaDownloadObserver *_downloadObserver;
    MPDownloadProgressIndicator *_downloadProgressIndicator;
    SEL _mediaCellAccessoryAction;
    id _mediaCellTarget;
    IUMediaTableCellContentView *_mediaContentView;
    int _mediaDisclosureStyle;
    int _mediaEditingDisclosureStyle;
    int _visibleSelectionStyle;
    UIButton *_otgPlusButton;
    UIButton *_purchaseActionButton;
}

@property(nonatomic) id mediaCellTarget; // @synthesize mediaCellTarget=_mediaCellTarget;
@property(nonatomic) int mediaEditingDisclosureStyle; // @synthesize mediaEditingDisclosureStyle=_mediaEditingDisclosureStyle;
@property(nonatomic) int mediaDisclosureStyle; // @synthesize mediaDisclosureStyle=_mediaDisclosureStyle;
@property(nonatomic) SEL mediaCellAccessoryAction; // @synthesize mediaCellAccessoryAction=_mediaCellAccessoryAction;
- (void)_updateProgressIndicator;
- (id)_purchaseActionConfiguration;
- (id)_otgPlusButton;
- (void)_drawBackgroundInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (id)_contentString;
- (void)_clearPurchaseActionConfigurationButton;
@property(nonatomic) BOOL hideArtwork;
@property(readonly, nonatomic) struct CGRect artworkFrame;
- (void)setDrawInAlternateStyle:(BOOL)arg1 forceRedraw:(BOOL)arg2;
@property(nonatomic) BOOL drawInAlternateStyle;
@property(nonatomic) BOOL useSubviewLayout;
@property(nonatomic) BOOL transparentSelectionHighlightStyle;
@property(nonatomic) BOOL drawAsDisabled;
- (void)setSelectionStyle:(int)arg1;
- (void)setConfigurationNeedsDisplay;
@property(retain, nonatomic) IUTableCellConfiguration *configuration;
- (void)_purchasableMediaDidChangeNotification:(id)arg1;
- (void)_purchaseButtonPressed:(id)arg1;
- (void)_downloadButtonAction:(id)arg1;
- (void)_cancelDownloadAction:(id)arg1;
- (void)_updateHighlightColors;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryView:(id)arg1 reloadConfiguration:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)_updateMediaContentViewFrame;
- (void)drawRect:(struct CGRect)arg1;
- (void)_fixupDebugBackgroundColors;
- (void)_didCreateContentView;
- (id)scriptingInfoWithChildren;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

