//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPDrawableAttachment;

__attribute__((visibility("hidden")))
@interface TSWPCharIndexPlacementIndex : NSObject
{
    int _placementIndex;
    unsigned long long _charIndex;
    TSWPDrawableAttachment *_drawableAttachment;
}

@property(retain, nonatomic) TSWPDrawableAttachment *drawableAttachment; // @synthesize drawableAttachment=_drawableAttachment;
@property(nonatomic) int placementIndex; // @synthesize placementIndex=_placementIndex;
@property(nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 placmentIndex:(int)arg2 drawableAttachment:(id)arg3;

@end

