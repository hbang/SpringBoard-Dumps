/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {
	BOOL _overridePercent;
	BOOL _killActivity;
	BOOL _simulateInCallStatusBar;
	BOOL _itemIsDisabled[25];
	BOOL _itemWasDisabled[25];
	BOOL _timeEnabled;
	BOOL _timeCloaked;
	BOOL _allButBatteryCloaked;
	BOOL _telephonyAndBluetoothCloaked;
}
+ (id)sharedInstance;
- (id)init;
- (void)_composePostDataFromAggregatorData:(XXStruct_8iXKhD *)aggregatorData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_8iXKhD *)aggregatorData;
- (void)_toggleSimulatesInCallStatusBar;
- (void)_updateDisabledItems;
- (void)dealloc;
- (void)enableTime:(BOOL)time;
- (void)enableTime:(BOOL)time crossfade:(BOOL)crossfade crossfadeDuration:(double)duration;
- (BOOL)isTimeEnabled;
- (void)setAllItemsExceptBatteryCloaked:(BOOL)cloaked;
- (void)setTelephonyAndBluetoothItemsCloaked:(BOOL)cloaked;
- (void)setTimeCloaked:(BOOL)cloaked;
- (void)statusBarStateProvider:(id)provider didPostStatusBarData:(const XXStruct_8iXKhD *)data withActions:(int)actions;
@end

