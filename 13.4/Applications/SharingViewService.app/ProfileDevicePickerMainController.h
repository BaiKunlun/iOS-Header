//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class NSMutableDictionary, NSObject, SFDeviceDiscovery, SFSystemSession, UIAlertController;
@protocol OS_dispatch_source;

@interface ProfileDevicePickerMainController : SVSBaseMainController
{
    UIAlertController *_alertController;
    SFDeviceDiscovery *_deviceDiscovery;
    NSMutableDictionary *_devices;
    _Bool _dismissed;
    NSObject<OS_dispatch_source> *_installTimeoutTimer;
    unsigned int _pickerFlags;
    SFSystemSession *_systemSession;
}

- (void).cxx_destruct;
- (void)_pickerAlertCanceled;
- (void)_pickerAlertShowSuccess;
- (void)_pickerAlertShowError:(id)arg1;
- (void)_pickerAlertShowNoDevices;
- (void)_pickerAlertHandlePickedDevice:(id)arg1;
- (void)_pickerAlertShow;
- (void)_discoveryTimeout;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryStop;
- (void)_discoveryStart;
- (void)handleButtonActions:(id)arg1;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

