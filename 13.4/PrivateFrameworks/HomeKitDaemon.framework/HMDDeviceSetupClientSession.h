//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>
{
}

+ (id)logCategory;
+ (id)allowedClasses;
+ (_Bool)isSupported;
+ (long long)role;
- (_Bool)processSessionData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

