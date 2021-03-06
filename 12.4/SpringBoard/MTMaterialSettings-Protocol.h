//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTVibrantStylingProvider, NSDictionary;

@protocol MTMaterialSettings <NSObject>
+ (id)sharedMaterialSettings;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(nonatomic) double tintAlpha;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool usesLuminanceMap;
- (void)updateWithSettingsFromArchive:(NSDictionary *)arg1;
@end

