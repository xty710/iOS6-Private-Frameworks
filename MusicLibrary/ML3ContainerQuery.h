/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Query.h>

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery : ML3Query
{
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
}

@property(readonly) ML3Container *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (unsigned int)countOfEntities;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg1;
- (BOOL)hasEntities;
@property(readonly) NSArray *limitedPersistentIDs;
- (id)selectLimitingSQL;
@property(readonly) BOOL requiresSmartLimiting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;

@end

