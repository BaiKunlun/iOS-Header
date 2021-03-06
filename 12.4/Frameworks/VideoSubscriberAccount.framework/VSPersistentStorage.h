//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSAccountChannelsCenter, VSAccountStore, VSPrivacyFacade, VSPrivacyVoucherLockbox;

@interface VSPersistentStorage : NSObject
{
    VSAccountStore *_accountStore;
    VSAccountChannelsCenter *_channelsCenter;
    VSPrivacyVoucherLockbox *_voucherLockbox;
    VSPrivacyFacade *_privacyFacade;
}

+ (id)defaultStorageDirectoryURL;
@property(readonly, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(readonly, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox; // @synthesize voucherLockbox=_voucherLockbox;
@property(readonly, nonatomic) VSAccountChannelsCenter *channelsCenter; // @synthesize channelsCenter=_channelsCenter;
@property(readonly, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountStoreClass:(Class)arg1;
- (id)initWithAccountStoreClass:(Class)arg1 channelsCenterClass:(Class)arg2;

@end

