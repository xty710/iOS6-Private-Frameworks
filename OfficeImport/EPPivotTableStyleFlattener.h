/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EPStyleFlattener.h>

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener
{
    EDPivotTable *mPivotTable;
    int mFirstHeaderRow;
    int mFirstDataRow;
    int mFirstDataColumn;
    unsigned int mRowFieldsCount;
    unsigned int mColumnFieldsCount;
    unsigned int mPageFieldsCount;
}

- (void)clearCache;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (_Bool)isObjectSupported:(id)arg1;
- (void)addSubtotalColumnLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addSubtotalRowLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addColumnSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addRowSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (unsigned int)constrainLevel:(unsigned int)arg1;
- (int)stripeOffset:(int)arg1 row:(_Bool)arg2;

@end

