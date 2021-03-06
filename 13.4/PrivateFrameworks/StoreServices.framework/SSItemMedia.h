//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SSItemMedia : NSObject
{
    long long _duration;
    long long _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    _Bool _protected;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic, getter=isProtectedMedia) _Bool protectedMedia; // @synthesize protectedMedia=_protected;
@property(copy, nonatomic) NSString *mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, nonatomic) long long mediaFileSize; // @synthesize mediaFileSize=_mediaFileSize;
@property(readonly, nonatomic) long long fullDurationInMilliseconds; // @synthesize fullDurationInMilliseconds=_fullDuration;
@property(readonly, nonatomic) long long durationInMilliseconds; // @synthesize durationInMilliseconds=_duration;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)init;

@end

