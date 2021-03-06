//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCategoryInformation, GEOPDCategoryLookupParameters, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDCategoryInformation *_categoryInfo;
    GEOPDCategoryLookupParameters *_categoryLookupParam;
}

@property(retain, nonatomic) GEOPDCategoryInformation *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(retain, nonatomic) GEOPDCategoryLookupParameters *categoryLookupParam; // @synthesize categoryLookupParam=_categoryLookupParam;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCategoryInfo;
@property(readonly, nonatomic) _Bool hasCategoryLookupParam;

@end

