//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGTaggedCharacterRange : NSObject
{
    unsigned long long _annotationType;
    NSArray *_tags;
    NSString *_text;
    struct _NSRange _range;
}

+ (id)flattenTaggedCharacterRanges:(id)arg1 usingWhitelist:(id)arg2 replaceOOVWithToken:(id)arg3;
+ (id)mergeTaggedCharacterRanges:(id)arg1 usingBaseTaggedCharacterRanges:(id)arg2 extraTags:(id)arg3 tagOverrides:(id)arg4 alignWithGroundTruth:(id)arg5;
+ (id)mergeTagsFromTaggedCharacterRanges:(id)arg1 withTaggedCharacterRanges:(id)arg2;
+ (id)enrichAndFilterTaggedCharacterRanges:(id)arg1 usingMapping:(id)arg2 withAnnotationType:(unsigned long long)arg3;
+ (id)annotationTypeUniqueIdentifier:(unsigned long long)arg1;
+ (unsigned long long)annotationTypeFromString:(id)arg1;
+ (id)describeAnnotationType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned long long annotationType; // @synthesize annotationType=_annotationType;
- (void).cxx_destruct;
- (id)description;
- (id)annotationTypeUniqueIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqualToTaggedCharacterRange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)dictRepresentation;
- (id)initWithDict:(id)arg1;
- (id)initWithAnnotationType:(unsigned long long)arg1 tags:(id)arg2 range:(struct _NSRange)arg3 text:(id)arg4;
- (id)init;

@end

