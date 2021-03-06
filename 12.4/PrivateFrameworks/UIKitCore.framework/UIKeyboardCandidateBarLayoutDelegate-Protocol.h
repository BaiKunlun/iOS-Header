//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol UIKeyboardCandidateBarLayoutDelegate <UICollectionViewDelegate>
- (struct CGSize)sizeOfDummyItemForCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;

@optional
- (void)candidateBarLayoutDidFinishPreparingLayout;
- (double)leftMarginForCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;
@end

