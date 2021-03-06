//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNContactsUserDefaults : NSObject
{
}

+ (void)flushSharedInstance;
+ (id)sharedDefaults;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)filteredGroupAndContainerIDs;
@property(nonatomic) _Bool shortNameFormatPrefersNicknames;
@property(nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property(nonatomic) long long shortNameFormat;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) long long sortOrder;
@property(nonatomic) long long displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (id)changeNotificationName;
- (id)init;

@end

