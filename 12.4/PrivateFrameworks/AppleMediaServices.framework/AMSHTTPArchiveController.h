//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSHTTPArchiveController : NSObject
{
}

+ (void)_updateMaxBufferSize;
+ (_Bool)_disabled;
+ (void)_writeHTTPArchivesToDiskCompressed:(_Bool)arg1;
+ (void)addHTTPArchive:(id)arg1;
+ (void)setRemoveDisabled:(_Bool)arg1;
+ (void)setMaxBufferSizeOverride:(id)arg1;
+ (id)maxBufferSizeOverride;
+ (_Bool)isRemoveDisabled;
+ (id)buffer;
+ (void)initialize;

@end

