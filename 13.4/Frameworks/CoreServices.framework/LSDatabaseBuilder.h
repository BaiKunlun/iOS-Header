//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSDatabaseBuilder : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void).cxx_destruct;
- (void)setSeedingComplete:(_Bool)arg1;
- (void)createAndSeedLocalDatabase:(_Bool *)arg1;
- (id)initWithIOQueue:(id)arg1;

@end

