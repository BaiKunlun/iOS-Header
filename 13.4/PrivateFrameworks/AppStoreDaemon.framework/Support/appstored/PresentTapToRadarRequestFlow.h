//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PresentTapToRadarRequestFlow : NSObject
{
    NSString *_message;
    NSString *_title;
    CDUnknownBlockType _descriptionBlock;
}

+ (id)_dialogRequestWithTitle:(id)arg1 message:(id)arg2;
+ (id)_createTapToRadarURLWithTitle:(id)arg1 description:(id)arg2;
+ (_Bool)supportsRequestFlow;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
- (void)presentRequestUsingSystemDialog;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

