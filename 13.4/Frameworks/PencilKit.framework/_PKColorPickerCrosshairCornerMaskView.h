//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _PKColorPickerCrosshairCornerMaskView : UIView
{
    _Bool _excludeCorner;
    unsigned long long _cornerPosition;
}

+ (Class)layerClass;
@property(nonatomic) _Bool excludeCorner; // @synthesize excludeCorner=_excludeCorner;
@property(nonatomic) unsigned long long cornerPosition; // @synthesize cornerPosition=_cornerPosition;
- (id)maskPath;
- (id)_shapeLayer;
- (void)_setFillColor:(id)arg1;
- (void)_setPath:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

