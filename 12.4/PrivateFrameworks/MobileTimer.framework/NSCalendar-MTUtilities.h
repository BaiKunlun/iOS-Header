//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MTUtilities)
+ (id)_dateForInitial:(id)arg1 repeated:(id)arg2 backwards:(_Bool)arg3;
+ (unsigned long long)_optionsForBackwards:(_Bool)arg1;
+ (id)mtGregorianCalendar;
- (_Bool)mtDateRequiresSingularTimeString:(id)arg1;
- (id)_mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(_Bool)arg4;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)_mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(_Bool)arg3;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;
- (id)mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;
@end

