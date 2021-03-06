//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingView : UIView
{
    double _elementSpacing;
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *textLabel;
@property(retain, nonatomic) UIImage *ratingStarsImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

