/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSPredicate, NSThread;

@interface LBQuery : NSObject
{
    NSMetadataQuery *_query;
    unsigned int _accumulatedItemCount;
    NSMutableArray *_changes;
    NSMutableDictionary *_toBeRemoved;
    NSMutableDictionary *_toBeReplaced;
    NSMutableDictionary *_toBeInserted;
    NSMutableIndexSet *_removalSet;
    NSMutableIndexSet *_replacementSet;
    NSMutableIndexSet *_insertionSet;
    _Bool _pendingChanges;
    _Bool _ubiquitousGatherComplete;
    int _queryState;
    int _previousQueryState;
    BOOL _synchronous;
    NSArray *_values;
    NSArray *_sortingAttributes;
    CDStruct_51932491 _batchingParameters;
    NSMutableArray *_results;
    NSMutableDictionary *_resultsDict;
    void *_create_result_fn;
    void *_create_result_context;
    void *_create_result_callbacks_equal;
    void *_create_result_callbacks_release;
    void *_create_value_fn;
    void *_create_value_context;
    void *_create_value_callbacks_equal;
    void *_create_value_callbacks_release;
    NSArray *_searchScopes;
    unsigned long _scopeOptions;
    void *_sort_fn;
    void *_sort_context;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __LBItemUpdateObserver *_observer;
    NSThread *_executeThread;
    _Bool _pendingNote;
    unsigned long _notifyInterval;
    int _disableCount;
    NSMutableDictionary *_created;
    NSPredicate *_predicate;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _stateLock;
}

- (void)postNote:(struct __CFString *)arg1;
- (void)processUpdates;
- (void)_processUpdates;
- (void)_processChanges;
- (void)_createChangeSets;
- (void)_didInsert:(id)arg1;
- (void)_didReplace:(id)arg1;
- (void)_didRemove:(id)arg1;
- (void)_willInsert:(id)arg1;
- (void)_willReplace:(id)arg1;
- (void)_willRemove:(id)arg1;
- (void)_didChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)_willChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)setSortComparator:(void *)arg1 withContext:(void *)arg2;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned long)arg2;
- (void)setCreateValueFunction:(void *)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_41c7518b *)arg3;
- (void)setCreateResultFunction:(void *)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_41c7518b *)arg3;
- (void)setBatchingParameters:(CDStruct_51932491)arg1;
- (id)predicate;
- (unsigned int)resultCount;
- (const void *)resultAtIndex:(int)arg1;
- (int)indexOfResult:(const void *)arg1;
- (unsigned int)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(int)arg2;
- (unsigned char)executeWithOptions:(unsigned long)arg1;
- (void)_runQuery;
- (void)startObserver;
- (void)_updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3;
- (void)updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3;
- (void)performBlock:(id)arg1;
- (void)runBlock:(id)arg1;
- (void)__updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3;
- (void)addChangeToURL:(id)arg1 withInfo:(id)arg2;
- (void)addCreatedURL:(id)arg1 withInfo:(id)arg2;
- (void)deleteURL:(id)arg1;
- (void)addItemWithURL:(id)arg1 usingInfo:(id)arg2;
- (void)_sendNote;
- (void)sendNote;
- (void)stop;
- (void)_stop;
- (void)enableUpdates;
- (void)_enableUpdates;
- (void)disableUpdates;
- (void)_disableUpdates;
- (id)valuesOfAttribute:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;

@end

