//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol DOCKStackExpandedDataSource <NSObject>
@property(readonly, nonatomic) const char *messageTracerStackType;
- (id)expandedStackValueForKey:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (id)expandedStackValueForKey:(NSString *)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(NSDictionary *)arg3 maximumViewableItems:(unsigned long long)arg4;
- (unsigned long long)numberOfExpandedStackItems;

@optional
- (void)invalidateExpandedStackCache;
@end

