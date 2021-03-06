//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTDefaultsManager, RTLearnedLocationStore;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider>
{
    RTLearnedLocationStore *_learnedLocationStore;
    RTDefaultsManager *_defaultsManager;
    unsigned long long _removeSourceMask;
}

@property(nonatomic) unsigned long long removeSourceMask; // @synthesize removeSourceMask=_removeSourceMask;
@property(retain, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property(retain, nonatomic) RTLearnedLocationStore *learnedLocationStore; // @synthesize learnedLocationStore=_learnedLocationStore;
- (void).cxx_destruct;
- (id)mapItemsWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

