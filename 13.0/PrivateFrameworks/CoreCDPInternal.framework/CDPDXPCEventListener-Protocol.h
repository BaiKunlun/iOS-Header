//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPDXPCEventListener <NSObject>

@optional
- (void)eventReceived:(const char *)arg1 eventInfo:(NSDictionary *)arg2;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
@end

