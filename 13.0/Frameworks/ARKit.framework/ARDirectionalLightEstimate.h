//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARLightEstimate.h>

#import <ARKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying>
{
    CDStruct_9c26ff66 _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    double _timestamp;
    double _confidenceRating;
    MISSING_TYPE *_primaryLightDirection;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double confidenceRating; // @synthesize confidenceRating=_confidenceRating;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double primaryLightIntensity; // @synthesize primaryLightIntensity=_primaryLightIntensity;
@property(readonly, nonatomic) MISSING_TYPE *primaryLightDirection; // @synthesize primaryLightDirection=_primaryLightDirection;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)lightEstimateByApplyingRotation:(CDStruct_8e0628e6)arg1;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(CDStruct_9c26ff66)arg1 ambientIntensity:(double)arg2 temperature:(double)arg3;

@end

