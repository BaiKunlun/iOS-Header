//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController
{
}

+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (_Bool)supportsMenuInteraction;
+ (_Bool)supportsQuicklook;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;

@end

