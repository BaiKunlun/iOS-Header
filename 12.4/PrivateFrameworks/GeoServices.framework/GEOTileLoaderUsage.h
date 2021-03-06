//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderUsage : NSObject
{
    NSObject<OS_dispatch_queue> *_usageIsolation;
    NSMutableDictionary *_usageDictionary;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (void)finishedUsageForTileWithKey:(const struct _GEOTileKey *)arg1 withUserInfo:(id)arg2 reason:(unsigned char)arg3;
- (void)removeUsageForTileKey:(const struct _GEOTileKey *)arg1;
- (void)decodedTileWithKey:(const struct _GEOTileKey *)arg1 withStartTime:(double)arg2 andTileSize:(unsigned long long)arg3;
- (void)startUsageTileWithKey:(const struct _GEOTileKey *)arg1;
- (id)init;

@end

