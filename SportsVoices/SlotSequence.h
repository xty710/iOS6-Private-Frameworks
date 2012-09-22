/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsVoices/Slot.h>

@class NSMutableArray;

@interface SlotSequence : Slot
{
    NSMutableArray *_slots;
}

+ (id)slotSequenceWithArray:(id)arg1;
+ (id)emptySlotSequence;
@property(retain) NSMutableArray *slots; // @synthesize slots=_slots;
- (id)overlayedOn:(id)arg1;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)matches:(id)arg1;
- (BOOL)empty;
- (unsigned int)count;
- (id)rest;
- (id)slotSubsequenceFromIndex:(int)arg1;
- (id)subsequenceFromIndex:(int)arg1;
- (id)reversed;
- (id)occurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)first;
- (id)initWithArray:(id)arg1;
- (id)initFromPlist:(id)arg1;

@end

