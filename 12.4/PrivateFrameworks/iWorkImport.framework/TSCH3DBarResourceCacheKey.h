//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DBarResourceCacheKey : NSObject
{
    struct BarExtrusionSetting mSetting;
}

+ (id)keyWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;
- (id).cxx_construct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

@end

