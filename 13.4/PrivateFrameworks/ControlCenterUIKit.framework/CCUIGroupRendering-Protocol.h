//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/NSObject-Protocol.h>

@class CALayer, NSArray;

@protocol CCUIGroupRendering <NSObject>
@property(readonly, nonatomic) NSArray *punchOutRootLayers;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;

@optional
@property(readonly, nonatomic) CALayer *punchOutRootLayer;
@end

