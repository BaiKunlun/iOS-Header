//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    _Bool _builtInMicrophoneStereoAudioCaptureEnabled;
    int _builtInMicrophonePosition;
}

@property(nonatomic) int builtInMicrophonePosition; // @synthesize builtInMicrophonePosition=_builtInMicrophonePosition;
@property(nonatomic) _Bool builtInMicrophoneStereoAudioCaptureEnabled; // @synthesize builtInMicrophoneStereoAudioCaptureEnabled=_builtInMicrophoneStereoAudioCaptureEnabled;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

