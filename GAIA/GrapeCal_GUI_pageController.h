/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "iGaiaGrapeSystemUi-Protocol.h"

@interface GrapeCal_GUI_pageController : NSObject <iGaiaGrapeSystemUi>
{
    id <iGaiaProject> proj;
}

+ (id)sharedInstance;
- (void)addContentsToMainLayer:(id)arg1;
- (void)showModuleInMainView:(id)arg1;
- (void)SetProject:(id)arg1;
- (id)init;

@end

