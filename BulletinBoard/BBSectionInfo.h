/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_sectionID;
    NSString *_subsectionID;
    unsigned int _sectionType;
    BOOL _showsInNotificationCenter;
    unsigned int _suppressedSettings;
    unsigned int _pushSettings;
    unsigned int _alertType;
    unsigned int _notificationCenterLimit;
    BOOL _showsInLockScreen;
    BOOL _showsOnBluetoothDevices;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    NSData *_iconData;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    BOOL _suppressFromSettings;
    BOOL _displaysCriticalBulletins;
    int _subsectionPriority;
    BOOL _hideWeeApp;
    unsigned int _version;
    BOOL _showsMessagePreview;
}

+ (id)defaultSectionInfoForType:(unsigned int)arg1;
+ (BOOL)defaultStateForSetting:(unsigned int)arg1 inSectionType:(unsigned int)arg2;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *dataProviderIDs; // @synthesize dataProviderIDs=_dataProviderIDs;
@property(copy, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) BOOL hideWeeApp; // @synthesize hideWeeApp=_hideWeeApp;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(nonatomic) BBSectionInfo *parentSection; // @synthesize parentSection=_parentSection;
@property(copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property(nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle; // @synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) unsigned int pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(nonatomic) BOOL showsOnBluetoothDevices; // @synthesize showsOnBluetoothDevices=_showsOnBluetoothDevices;
@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(nonatomic) BOOL showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property(nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) unsigned int sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned int bulletinCount;
@property(nonatomic) BOOL enabled;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (void)_addSubsection:(id)arg1;
- (id)description;
- (id)_pushSettingsDescription;
- (void)_configureWithDefaultsForSectionType:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (id)effectiveSectionInfo;

@end

