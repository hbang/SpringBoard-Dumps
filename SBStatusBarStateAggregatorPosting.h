/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBStatusBarStateAggregatorPosting <NSObject>
- (void)statusBarStateAggregator:(id)aggregator didUpdateNonItemData:(const XXStruct_8iXKhD *)data;
- (void)statusBarStateAggregator:(id)aggregator didVisitItem:(int)item withUpdates:(BOOL)updates toData:(const XXStruct_8iXKhD *)data;
- (void)statusBarStateAggregatorDidFinishPost:(id)statusBarStateAggregator withData:(const XXStruct_8iXKhD *)data actions:(int)actions;
- (void)statusBarStateAggregatorDidStartPost:(id)statusBarStateAggregator;
@end

