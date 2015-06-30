/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStatusBarStateAggregator : XXUnknownSuperclass {
	unsigned _coalescentBlockDepth;
	BOOL _hasPostedOnce;
	unsigned _itemPostState[25];
	BOOL _nonItemDataChanged;
	XXStruct_8iXKhD _data;
	int _actions;
	NSHashTable *_postObservers;
	BOOL _notifyingPostObservers;
	NSDateFormatter *_timeItemDateFormatter;
	NSTimer *_timeItemTimer;
	NSString *_timeItemTimeString;
	NSString *_operatorName;
	NSString *_serviceString;
	NSString *_serviceCrossfadeString;
	NSArray *_countryCodesShowingEmergencyOnlyStatus;
	BOOL _showsActivityIndicatorOnHomeScreen;
	int _activityIndicatorEverywhereCount;
	BOOL _showsActivityIndicatorForNewsstand;
	int _syncActivityIndicatorCount;
	NSString *_activityDisplayIdentifier;
	BOOL _showingNotChargingItem;
	NSString *_batteryDetailString;
	BOOL _alarmEnabled;
	BOOL _applyingAssistantStyle;
}
+ (int)_thermalColorForLevel:(int)level;
+ (id)sharedInstance;
- (id)init;
- (id)_displayStringForRegistrationStatus:(int)registrationStatus;
- (id)_displayStringForSIMStatus:(id)simstatus;
- (void)_noteAirplaneModeChanged;
- (void)_noteNotChargingStatusChanged;
- (void)_notifyItemChanged:(int)changed;
- (void)_notifyNonItemDataChanged;
- (void)_postItem:(int)item withState:(unsigned)state;
- (void)_registerForNotifications;
- (void)_requestActions:(int)actions;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (id)_sbCarrierNameForOperator:(id)anOperator;
- (BOOL)_setItem:(int)item enabled:(BOOL)enabled;
- (void)_setShowingNotChargingItem;
- (BOOL)_shouldShowEmergencyOnlyStatus;
- (BOOL)_shouldShowNotChargingItem;
- (BOOL)_simStatusMeansLocked:(id)locked;
- (void)_stopTimeItemTimer;
- (void)_updateActivityItem;
- (void)_updateAirplaneMode;
- (void)_updateAirplayItem;
- (void)_updateAlarmItem;
- (void)_updateAssistantItem;
- (void)_updateBatteryItems;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothItem;
- (void)_updateCallForwardingItem;
- (void)_updateDataNetworkItem;
- (void)_updateLocationItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateTTYItem;
- (void)_updateTetheringState;
- (void)_updateThermalColorItem;
- (void)_updateTimeItems;
- (void)_updateVPNItem;
- (void)addPostingObserver:(id)observer;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (void)endCoalescentBlock;
- (id)operatorName;
- (void)removePostingObserver:(id)observer;
- (void)sendStatusBarActions:(int)actions;
- (void)setAlarmEnabled:(BOOL)enabled;
- (void)setShowsActivityIndicatorEverywhere:(BOOL)everywhere;
- (void)setShowsActivityIndicatorForNewsstand:(BOOL)newsstand;
- (void)setShowsActivityIndicatorOnHomeScreen:(BOOL)screen;
- (void)setShowsSyncActivityIndicator:(BOOL)indicator;
- (void)updateStatusBarItem:(int)item;
@end

