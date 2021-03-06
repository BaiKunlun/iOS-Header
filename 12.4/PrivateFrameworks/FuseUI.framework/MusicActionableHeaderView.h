//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUFontDescriptor, MusicImageAccessoryButton, NSString, UIColor;
@protocol MusicActionableHeaderViewDelegate;

@interface MusicActionableHeaderView : UIView
{
    MPUFontDescriptor *_headerFontDescriptor;
    MusicImageAccessoryButton *_imageAccessoryButton;
    _Bool _actionable;
    NSString *_headerTitle;
    UIColor *_headerTitleColor;
    id <MusicActionableHeaderViewDelegate> _delegate;
    CDStruct_4a0565dd _actionableHeaderMetrics;
}

+ (double)heightForTraitCollection:(id)arg1 withActionableHeaderMetrics:(CDStruct_4a0565dd)arg2;
+ (double)heightForTraitCollection:(id)arg1;
+ (CDStruct_4a0565dd)defaultActionableHeaderMetrics;
+ (CDStruct_4a0565dd)actionableHeaderMetricsForContainerViewController:(id)arg1;
@property(nonatomic) __weak id <MusicActionableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *headerTitleColor; // @synthesize headerTitleColor=_headerTitleColor;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic, getter=isActionable) _Bool actionable; // @synthesize actionable=_actionable;
@property(nonatomic) CDStruct_4a0565dd actionableHeaderMetrics; // @synthesize actionableHeaderMetrics=_actionableHeaderMetrics;
- (void).cxx_destruct;
- (void)_updateHeaderFontDescriptor;
- (void)_updateHeaderAttributedText;
- (void)_headerTitleColorDidChange;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

