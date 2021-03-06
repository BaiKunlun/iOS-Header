//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRTextFeature;

@interface CRFeatureRecognitionInfo : NSObject
{
    float _scale;
    CRTextFeature *_feature;
    struct CGRect _bounds;
    struct CGRect _rotatedROI;
}

+ (id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(struct CGRect)arg3 rotatedROI:(struct CGRect)arg4;
@property struct CGRect rotatedROI; // @synthesize rotatedROI=_rotatedROI;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property float scale; // @synthesize scale=_scale;
@property(retain) CRTextFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;

@end

