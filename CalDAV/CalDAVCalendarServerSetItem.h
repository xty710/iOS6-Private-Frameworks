/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@interface CalDAVCalendarServerSetItem : CoreDAVItem
{
    CoreDAVItem *_href;
    CoreDAVItem *_commonName;
    CoreDAVItem *_summary;
    CoreDAVItem *_accessLevel;
}

@property(readonly) CoreDAVItem *accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly) CoreDAVItem *summary; // @synthesize summary=_summary;
@property(readonly) CoreDAVItem *commonName; // @synthesize commonName=_commonName;
@property(readonly) CoreDAVItem *href; // @synthesize href=_href;

@end

