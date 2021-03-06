//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>
#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class GEOClientRankingModel, GEOMapItemIdentifier, GEOMapServiceTraits, GEORPSuggestionEntry, GEORPSuggestionList, GEOSortPriorityMapping, NSDictionary, NSString;

@protocol GEOMapServiceCompletionTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
- (_Bool)showAutocompleteClientSource;
- (_Bool)autocompleteTopSectionIsQuerySuggestions;
- (GEOSortPriorityMapping *)sortPriorityMapping;
- (GEOClientRankingModel *)clientRankingModel;
- (_Bool)shouldDisplayNoResults;
- (_Bool)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (_Bool)isRapEnabled;
- (void)applyToSuggestionEntry:(GEORPSuggestionEntry *)arg1 withAutocompleteSearchResultIdentifier:(GEOMapItemIdentifier *)arg2;
- (void)applyToSuggestionList:(GEORPSuggestionList *)arg1;
- (_Bool)matchesFragment:(NSString *)arg1;
- (void)cancel;
- (void)submitWithAutoCompletionHandler:(void (^)(id <GEOCompletion>, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

