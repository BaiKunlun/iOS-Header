//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoWeatherComplicationsCompanion/CLKFullColorImageView-Protocol.h>

@class NSArray, NSString, UIStackView;
@protocol CLKMonochromeFilterProvider, NWMDataFormatter;

@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView>
{
    id <CLKMonochromeFilterProvider> _filterProvider;
    NSArray *_hourlyForecastViews;
    UIStackView *_horizontalStackView;
}

+ (unsigned long long)maximumHourlyConditionCount;
- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(retain, nonatomic) NSArray *hourlyForecastViews; // @synthesize hourlyForecastViews=_hourlyForecastViews;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property(readonly, nonatomic) id <NWMDataFormatter> dataFormatter;
@property(readonly, nonatomic) Class hourlyForecastViewClass;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)resumeLiveFullColorImageView;
- (void)pauseLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)_applyConstraints;
- (void)_addHourlyForecastViewsToStackView:(id)arg1;
- (void)processHourlyForecastedConditions:(id)arg1 forTimeZone:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

