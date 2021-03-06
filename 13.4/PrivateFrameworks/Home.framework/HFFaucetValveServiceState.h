//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFServiceState.h>

@interface HFFaucetValveServiceState : HFServiceState
{
    unsigned long long _type;
}

+ (unsigned long long)_typeForSystemActiveState:(_Bool)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4;
+ (id)optionalCharacteristicTypes;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isTransitioning;
- (long long)priority;
- (long long)primaryState;
- (id)stateTypeIdentifier;
- (id)initWithBatchReadResponse:(id)arg1;

@end

