//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsSection : NSObject
{
    NSArray *_items;
    CDUnknownBlockType _titleProvider;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType titleProvider; // @synthesize titleProvider=_titleProvider;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

@end

