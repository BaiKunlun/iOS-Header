//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSArray, UIColor;
@protocol HKInteractiveChartAnnotationViewDataSource;

@protocol HKLollipopDelegate <NSObject>
- (void)updateAnnotationDataSource:(id <HKInteractiveChartAnnotationViewDataSource>)arg1 pointContexts:(NSArray *)arg2;

@optional
- (double)lollipopExtensionWidth;
- (double)lollipopExtensionLength;
- (UIColor *)lollipopExtensionColor;
- (UIColor *)lollipopAnnotationColor;
- (UIColor *)lollipopFieldColor;
@end

