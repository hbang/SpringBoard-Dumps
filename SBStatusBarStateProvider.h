/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBStatusBarStateProvider : XXUnknownSuperclass <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {
	SBStatusBarStateAggregator *_stateAggregator;
	NSHashTable *_stateObservers;
	XXStruct_gly1hD _aggregatorData;
	int _aggregatorActions;
	XXStruct_gly1hD _lastPost;
	unsigned _coalescentBlockDepth;
	BOOL _itemNeedsPost[26];
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
	NSHashTable *_stylesWithDetailUpdates;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)_composePostActionsFromAggregatorActions:(int *)aggregatorActions;
- (void)_composePostDataFromAggregatorData:(XXStruct_gly1hD *)aggregatorData;
- (void)_didChangeDoubleHeightStatusStringForStyle:(int)style;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_gly1hD *)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_gly1hD *)aggregatorData;
- (void)addStatusBarStateObserver:(id)observer;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (void)endCoalescentBlock;
- (void)getStatusBarData:(XXStruct_gly1hD *)data;
- (void)removeStatusBarStateObserver:(id)observer;
- (void)statusBarStateAggregator:(id)aggregator didUpdateNonItemData:(const XXStruct_gly1hD *)data;
- (void)statusBarStateAggregator:(id)aggregator didVisitItem:(int)item withUpdates:(BOOL)updates toData:(const XXStruct_gly1hD *)data;
- (void)statusBarStateAggregatorDidFinishPost:(id)statusBarStateAggregator withData:(const XXStruct_gly1hD *)data actions:(int)actions;
- (void)statusBarStateAggregatorDidStartPost:(id)statusBarStateAggregator;
- (void)updateStatusBarItem:(int)item;
@end

