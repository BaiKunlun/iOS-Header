//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AWAttentionAwarenessConfiguration;

@protocol AWRemoteClient
- (void)pingWithReply:(void (^)(_Bool))arg1;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)resetAttentionLostTimerWithReply:(void (^)(NSError *))arg1;
- (void)getLastEvent:(void (^)(AWAttentionEvent *))arg1;
- (void)setClientConfig:(AWAttentionAwarenessConfiguration *)arg1 shouldReset:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)invalidate;
@end

