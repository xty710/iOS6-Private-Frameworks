/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

@class NSMutableArray, UIView<RemoteUITableFooter>, UIView<RemoteUITableHeader>;

@interface RUITableViewSection : RUIElement
{
    NSMutableArray *_rows;
    UIView<RemoteUITableHeader> *_header;
    UIView<RemoteUITableFooter> *_footer;
    id _delegate;
    UIView<RemoteUITableFooter> *_footerView;
}

@property(retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView<RemoteUITableHeader> *headerView; // @synthesize headerView=_header;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
- (void)dealloc;
- (void)populatePostbackDictionary:(id)arg1;
- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)remoteUILinkFooterActivatedLink:(id)arg1;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

