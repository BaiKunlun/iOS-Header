//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying>
{
    ADUserTargetingProperties *_properties;
    _Bool _isBaseline;
    _Bool _isTest;
    struct {
        unsigned int isBaseline:1;
        unsigned int isTest:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool isBaseline; // @synthesize isBaseline=_isBaseline;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(retain, nonatomic) ADUserTargetingProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsBaseline;
@property(nonatomic) _Bool hasIsTest;
@property(readonly, nonatomic) _Bool hasProperties;

@end

