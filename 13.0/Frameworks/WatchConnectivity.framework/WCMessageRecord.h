//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject
{
    _Bool _expectsResponse;
    NSString *_identifier;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(retain) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end

