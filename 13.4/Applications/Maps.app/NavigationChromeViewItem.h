//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsChromeViewItem.h"

@class UIViewController;
@protocol StackedChromeModeController;

__attribute__((visibility("hidden")))
@interface NavigationChromeViewItem : MapsChromeViewItem
{
    _Bool _showNavigationBar;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic, getter=showsNavigationBar) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) id <StackedChromeModeController> mode; // @dynamic mode;
- (id)init;

@end

