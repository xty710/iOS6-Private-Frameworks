/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    BOOL summarized;
    BOOL recalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned int virtual_pages;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned int user_tag;
    unsigned int object_id;
    unsigned int nesting_depth;
    BOOL is_submap;
    unsigned int mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int pages_purgable_vol;
    unsigned int pages_purgable_non_vol;
    unsigned int pages_purgable_empty;
}

- (void)dealloc;
- (id)breakAtLength:(unsigned long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubmap;
- (id)type;
- (unsigned int)protection;
- (struct _VMURange)range;
- (id)description;
- (id)descriptionWithOptions:(unsigned int)arg1 maximumLength:(unsigned int)arg2;

@end

