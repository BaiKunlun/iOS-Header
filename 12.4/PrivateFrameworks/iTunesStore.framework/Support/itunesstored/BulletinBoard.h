//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBDataProviderConnection, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BulletinBoard : NSObject
{
    BBDataProviderConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sectionsByIdentifier;
    NSLock *_sectionsLock;
}

+ (_Bool)shouldAllowSectionIdentifier:(id)arg1;
+ (id)sanitizedSectionIdentifier:(id)arg1;
+ (id)bulletinBoard;
- (void).cxx_destruct;
- (void)cleanupSectionWithIdentifier:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

