//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/VKTrackableAnnotationPresentation-Protocol.h>

@class GEORouteMatch;
@protocol VKRouteMatchedAnnotationPresentationObserver;

@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property(retain, nonatomic) GEORouteMatch *routeMatch;
- (void)removePresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
- (void)addPresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
@end

