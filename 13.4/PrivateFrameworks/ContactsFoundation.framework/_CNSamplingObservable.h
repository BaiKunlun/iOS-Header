//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable;

@interface _CNSamplingObservable : CNObservable
{
    id <CNObservable> _observable;
    id <CNObservable> _sampler;
    id _sample;
    id <CNCancelable> _timer;
}

- (void).cxx_destruct;
@property(retain) id <CNCancelable> timer; // @synthesize timer=_timer;
@property(retain) id sample; // @synthesize sample=_sample;
@property(readonly, nonatomic) id <CNObservable> sampler; // @synthesize sampler=_sampler;
@property(readonly, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (void)sendSampleToObserver:(id)arg1;
- (void)receiveResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;

@end

