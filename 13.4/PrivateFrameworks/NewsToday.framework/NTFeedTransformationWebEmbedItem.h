//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransformationItem-Protocol.h>

@class NSDate, NSString, NTPBFeedItem, NTPBTodaySectionConfigWebEmbed, SFSearchResult;
@protocol FCFeedTransformationItem;

@interface NTFeedTransformationWebEmbedItem : NSObject <NTFeedTransformationItem>
{
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // @synthesize webEmbed=_webEmbed;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
@property(readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property(readonly, nonatomic) _Bool needsFeedItemHeadlinesFetch;
@property(readonly, nonatomic) id <FCFeedTransformationItem> feedTransformationItem;
@property(readonly, nonatomic) unsigned long long preferredDynamicSlotAllocation;
@property(readonly, nonatomic) _Bool usesDynamicSlotAllocation;
@property(readonly, nonatomic, getter=isEligibleForLeadingCellAppearance) _Bool eligibleForLeadingCellAppearance;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult;
@property(readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property(readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) unsigned long long todayItemType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWebEmbed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

