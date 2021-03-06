//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface PXArrayChangeDetails : NSObject
{
    _Bool _hasMoves;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movesToIndexes;
    const struct __CFArray *_movesFromIndexes;
    NSIndexSet *_changedIndexes;
}

+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out _Bool *)arg3;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out _Bool *)arg3;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange)arg1 toIndexRange:(struct _NSRange)arg2;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
@property(readonly, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property(readonly, nonatomic) const struct __CFArray *movesFromIndexes; // @synthesize movesFromIndexes=_movesFromIndexes;
@property(readonly, nonatomic) NSIndexSet *movesToIndexes; // @synthesize movesToIndexes=_movesToIndexes;
@property(readonly, nonatomic) _Bool hasMoves; // @synthesize hasMoves=_hasMoves;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(readonly, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)applyToIndexSet:(id)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasAnyChanges;
- (void)dealloc;
- (void)enumerateMovedIndexesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasIncrementalChanges;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray *)arg4 changedIndexes:(id)arg5;
- (id)init;

@end

