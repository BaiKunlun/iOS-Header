//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSProtobuf, NSData, NSDate, NSString;

@protocol SPTransportDelegate <NSObject>
- (_Bool)unlockedSinceBoot;

@optional
- (NSDate *)dateOfFirstUnlock;
- (void)didReceiveSecureData;
- (void)incomingProtobuf:(IDSProtobuf *)arg1;
- (void)logDataSent:(unsigned long long)arg1 application:(NSString *)arg2;
- (void)incomingData:(NSData *)arg1;
@end

