//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding>
{
    NSMutableArray *_attachmentIdentifiers;
    _Bool _bodyIsHTML;
    NSString *_name;
    NSString *_body;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *attachmentIdentifiers; // @synthesize attachmentIdentifiers=_attachmentIdentifiers;
@property(nonatomic) _Bool bodyIsHTML; // @synthesize bodyIsHTML=_bodyIsHTML;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)addAttachmentIdentifier:(id)arg1;
- (id)initWithName:(id)arg1;

@end

