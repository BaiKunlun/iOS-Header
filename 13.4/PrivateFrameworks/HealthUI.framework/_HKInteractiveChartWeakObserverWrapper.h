//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject
{
    id <HKInteractiveChartViewObserver> _observer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HKInteractiveChartViewObserver> observer; // @synthesize observer=_observer;
- (id)initWithObserver:(id)arg1;

@end

