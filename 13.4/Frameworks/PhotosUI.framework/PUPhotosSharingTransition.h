//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUModalTransition.h>

@class PUPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController;
@protocol PUPhotosSharingTransitionDelegate, PUPhotosSharingTransitionViewController;

@interface PUPhotosSharingTransition : PUModalTransition
{
    UIViewController<PUPhotosSharingTransitionViewController> *_sharingTransitionViewController;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    id <PUPhotosSharingTransitionDelegate> _delegate;
    UICollectionViewLayout *__transitionLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(nonatomic) __weak id <PUPhotosSharingTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController; // @synthesize sharingTransitionViewController=_sharingTransitionViewController;
- (void)animateDismissTransition;
- (void)animatePresentTransition;

@end

