//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DOCConcreteLocation, FPItem, UIViewController;

@protocol _TtP5Files34DOCBrowserContainedActionReporting_
- (void)beginLoadingAdditionalParents:(void (^)(_Bool))arg1;
- (_Bool)canLoadAdditionalParents;
- (void)didFinishGatheringItemsAndThumbnailsWithSender:(UIViewController *)arg1;
- (void)didTapLocationOf:(FPItem *)arg1;
- (void)didCommitPreviewOf:(FPItem *)arg1;
- (void)didSelectLocation:(DOCConcreteLocation *)arg1 atParentLocation:(DOCConcreteLocation *)arg2;
- (void)didSelectItem:(FPItem *)arg1 atParentLocation:(DOCConcreteLocation *)arg2 wasAlreadySelected:(_Bool)arg3 onlyRevealIfColumn:(_Bool)arg4;
@end

