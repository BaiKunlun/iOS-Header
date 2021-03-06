//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView
{
    NSMutableAttributedString *_widgetAttributedString;
    UIColor *_legibilityTextColor;
}

+ (id)widgetAttributionIDsInOrder;
+ (void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIColor *legibilityTextColor; // @synthesize legibilityTextColor=_legibilityTextColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureAttributedString;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (id)initWithWidgetAttributedString:(id)arg1;

@end

