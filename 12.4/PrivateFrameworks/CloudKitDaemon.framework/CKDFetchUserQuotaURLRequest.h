//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaURLRequest : CKDURLRequest
{
    CDUnknownBlockType _quotaFetchedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType quotaFetchedBlock; // @synthesize quotaFetchedBlock=_quotaFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end

