//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class IOSurface, NSMutableDictionary;

@protocol PLAssetsdResourceWriteOnlyServiceProtocol <NSObject>
- (void)saveAssetWithDataAndPorts:(NSMutableDictionary *)arg1 imageSurface:(IOSurface *)arg2 previewImageSurface:(IOSurface *)arg3 reply:(void (^)(_Bool, NSDictionary *, _Bool, _Bool, NSError *))arg4;
@end

