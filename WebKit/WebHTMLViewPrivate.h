/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, WAKView, WebDataSource, WebEvent, WebPluginController;

@interface WebHTMLViewPrivate : NSObject
{
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    BOOL drawingIntoLayer;
    WebEvent *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint lastScrollPosition;
    BOOL inScrollPositionChanged;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    NSArray *pageRects;
    NSMutableDictionary *highlighters;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;
- (id).cxx_construct;
- (void)clear;
- (void)finalize;
- (void)dealloc;

@end

