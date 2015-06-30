/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBStatusBarStateProvider : XXUnknownSuperclass <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {
	SBStatusBarStateAggregator *_stateAggregator;
	NSHashTable *_stateObservers;
	XXStruct_8iXKhD _aggregatorData;
	int _aggregatorActions;
	XXStruct_8iXKhD _lastPost;
	unsigned _coalescentBlockDepth;
	BOOL _itemNeedsPost[25];
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
}
- (id)init;
- (void)_composePostActionsFromAggregatorActions:(int *)aggregatorActions;
- (void)_composePostDataFromAggregatorData:(XXStruct_8iXKhD *)aggregatorData;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_8iXKhD *)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_8iXKhD *)aggregatorData;
- (void)addStatusBarStateObserver:(id)observer;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (void)endCoalescentBlock;
- (void)getStatusBarData:(XXStruct_8iXKhD *)data;
- (void)removeStatusBarStateObserver:(id)observer;
- (void)statusBarStateAggregator:(id)aggregator didUpdateNonItemData:(const XXStruct_8iXKhD *)data;
- (void)statusBarStateAggregator:(id)aggregator didVisitItem:(int)item withUpdates:(BOOL)updates toData:(const XXStruct_8iXKhD *)data;
- (void)statusBarStateAggregatorDidFinishPost:(id)statusBarStateAggregator withData:(const XXStruct_8iXKhD *)data actions:(int)actions;
- (void)statusBarStateAggregatorDidStartPost:(id)statusBarStateAggregator;
- (void)updateStatusBarItem:(int)item;
@end

