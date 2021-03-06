//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBItemRepresentationDataTransferDelegate;

@interface PBItemRepresentation : NSObject
{
    CDUnknownBlockType _loader;
    _Bool _isDataAvailableImmediately;
    NSString *_typeIdentifier;
    unsigned long long _preferredRepresentation;
    long long _visibility;
    id <PBItemRepresentationDataTransferDelegate> _dataTransferDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PBItemRepresentationDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property(nonatomic) _Bool isDataAvailableImmediately; // @synthesize isDataAvailableImmediately=_isDataAvailableImmediately;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic) unsigned long long preferredRepresentation; // @synthesize preferredRepresentation=_preferredRepresentation;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (id)v2_loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadFileCopyWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)v2_setLoader:(CDUnknownBlockType)arg1;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1;
- (id)v2_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (id)performProgressTrackingWithLoaderBlock:(CDUnknownBlockType)arg1 onCancelCallback:(CDUnknownBlockType)arg2;
- (id)copyWithDoNothingLoaderBlock;
- (id)initWithNSItemRepresentation:(id)arg1;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;

@end

