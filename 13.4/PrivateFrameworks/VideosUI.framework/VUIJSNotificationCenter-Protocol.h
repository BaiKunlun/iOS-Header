//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol VUIJSNotificationCenter <JSExport>
- (void)setBadgeString:(NSString *)arg1;
- (void)setBadgeNumber:(NSNumber *)arg1;
- (void)post:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3:(NSDictionary *)arg4;
@end

