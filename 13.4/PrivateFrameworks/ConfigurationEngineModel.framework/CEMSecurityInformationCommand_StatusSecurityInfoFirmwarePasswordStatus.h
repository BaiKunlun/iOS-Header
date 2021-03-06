//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase
{
    NSNumber *_statusPasswordExists;
    NSNumber *_statusChangePending;
    NSNumber *_statusAllowOroms;
}

+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *statusAllowOroms; // @synthesize statusAllowOroms=_statusAllowOroms;
@property(copy, nonatomic) NSNumber *statusChangePending; // @synthesize statusChangePending=_statusChangePending;
@property(copy, nonatomic) NSNumber *statusPasswordExists; // @synthesize statusPasswordExists=_statusPasswordExists;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

