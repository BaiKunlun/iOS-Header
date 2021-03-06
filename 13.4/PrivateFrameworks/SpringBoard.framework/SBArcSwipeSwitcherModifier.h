//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (void).cxx_destruct;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (_Bool)wantsResignActiveAssertion;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (id)layoutSettings;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (struct _NSRange)fullSizeSnapshotsRange;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end

