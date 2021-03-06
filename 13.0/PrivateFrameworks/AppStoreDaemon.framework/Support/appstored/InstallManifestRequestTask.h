//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RequestTask.h"

@class ASDInstallManifestRequestOptions;

@interface InstallManifestRequestTask : RequestTask
{
}

- (_Bool)_runAgentOperation:(id)arg1 returningError:(id *)arg2;
- (id)_newJobWithActivity:(id)arg1 forManifestType:(long long)arg2 clientID:(id)arg3;
- (void)_createPlaceholderForManifest:(long long)arg1 bundleID:(id)arg2 download:(id)arg3 transaction:(id)arg4;
- (void)main;

// Remaining properties
@property(readonly, nonatomic) ASDInstallManifestRequestOptions *options; // @dynamic options;

@end

