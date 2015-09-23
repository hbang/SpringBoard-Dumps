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
	XXStruct_bjgjSD _aggregatorData;
	int _aggregatorActions;
	XXStruct_bjgjSD _lastPost;
	unsigned _coalescentBlockDepth;
	BOOL _itemNeedsPost[27];
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
- (void)_composePostDataFromAggregatorData:(XXStruct_bjgjSD *)aggregatorData;
- (void)_didChangeDoubleHeightStatusStringForStyle:(int)style;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_bjgjSD *)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_bjgjSD *)aggregatorData;
- (void)addStatusBarStateObserver:(id)observer;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (void)endCoalescentBlock;
- (void)getStatusBarData:(XXStruct_bjgjSD *)data;
- (void)removeStatusBarStateObserver:(id)observer;
- (void)statusBarStateAggregator:(id)aggregator didUpdateNonItemData:(const XXStruct_bjgjSD *)data;
- (void)statusBarStateAggregator:(id)aggregator didVisitItem:(int)item withUpdates:(BOOL)updates toData:(const XXStruct_bjgjSD *)data;
- (void)statusBarStateAggregatorDidFinishPost:(id)statusBarStateAggregator withData:(const XXStruct_bjgjSD *)data actions:(int)actions;
- (void)statusBarStateAggregatorDidStartPost:(id)statusBarStateAggregator;
- (void)updateStatusBarItem:(int)item;
@end

