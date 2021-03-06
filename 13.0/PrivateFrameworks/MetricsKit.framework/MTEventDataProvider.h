//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSDictionary;
@protocol MTEventDataProviderDelegate;

@interface MTEventDataProvider : MTObject
{
    id <MTEventDataProviderDelegate> _delegate;
    NSDictionary *_knownFieldMethods;
}

@property(retain, nonatomic) NSDictionary *knownFieldMethods; // @synthesize knownFieldMethods=_knownFieldMethods;
@property(nonatomic) __weak id <MTEventDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (SEL)knownFieldAccessorForFieldName:(id)arg1;
- (id)processMetricsData:(id)arg1 performanceData:(id)arg2;
- (id)knownFields;
- (id)knownFieldMethodsForKnownFields:(id)arg1;

@end

