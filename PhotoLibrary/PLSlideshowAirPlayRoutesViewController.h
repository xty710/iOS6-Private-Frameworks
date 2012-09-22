/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_containerView;
    UITableView *_table;
    NSArray *_airPlayServices;
    unsigned int _selectedServiceIndex;
}

@property(nonatomic) unsigned int selectedServiceIndex; // @synthesize selectedServiceIndex=_selectedServiceIndex;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)dealloc;
- (void)loadView;
- (id)initWithAirPlayServices:(id)arg1 selectedServiceIndex:(unsigned int)arg2;

@end

