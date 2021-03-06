//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDNotificationPolicy-Protocol.h>

@class NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDHeartRhythmNotificationPolicy : NSObject <WDNotificationPolicy>
{
    WDProfile *_profile;
}

@property(readonly, nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_handleURL:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

