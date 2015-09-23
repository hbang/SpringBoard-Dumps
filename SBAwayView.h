/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayView : SBSlidingAlertDisplay {
	BOOL _isDimmed;
	BOOL _deferAwayItemFetching;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	SBAwayChargingView *_chargingView;
	SBAwayDateView *_dateView;
	SBNowPlayingArtView *_albumArtView;
	SBAwayItemsView *_awayItemsView;
	SBActivationView *_activationView;
	SBAlertImageView *_firewireWarningView;
	SBAwayViewPluginController *_awayPluginController;
	SBAwaySwipeGestureRecognizer *_gestureRecognizer;
	NSTimer *_mediaControlsTimer;
	UIImage *_controlsLCDBG;
	UIImage *_priorLCDBG;
	NSDictionary *_nowPlayingInfo;
	UIImage *_nowPlayingArt;
	NSString *_lastTrackArtPath;
	NSTimer *_blockedStatusUpdateTimer;
	UIModalView *_alertSheet;
	SBAwayInCallController *_inCallController;
	TPBottomLockBar *_lockBar;
	TPBottomButtonBar *_cancelSyncBar;
	UIPushButton *_infoButton;
}
+ (id)createBottomBarForInstance:(id)instance;
+ (id)lockLabels:(BOOL)labels fontSize:(float *)size;
- (id)initWithFrame:(CGRect)frame;
- (void)_batteryStatusChanged:(id)changed;
- (void)_clearBlockedStatusUpdateTimer;
- (void)_hideMediaControls;
- (void)_positionAwayItemsView;
- (void)_postLockCompletedNotification;
- (void)_setAwayViewGesturesEnabled:(BOOL)enabled;
- (void)_setPluginControllerView:(id)view;
- (void)_updateBlockedStatus;
- (void)_updateBlockedStatusLabel;
- (void)_wirelessModemStateChanged:(id)changed;
- (void)addChargingView;
- (void)addDateView;
- (void)addFirewireWarningView;
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock;
- (void)awayDateViewDidChangeTitle:(id)awayDateView;
- (id)chargingView;
- (void)clearMediaControlsTimer;
- (id)currentAwayPluginController;
- (id)dateView;
- (void)dealloc;
- (BOOL)dimmed;
- (void)dismiss;
- (float)durationForOthersActivation;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)handleRequestedAlbumArt:(id)art;
- (BOOL)hasAwayItems;
- (void)hideAwayItems;
- (void)hideChargingView;
- (void)hideInfoButton;
- (void)hideMediaControls;
- (void)hideNowPlaying;
- (void)hideSyncingBottomBar:(BOOL)bar;
- (id)inCallController;
- (BOOL)isShowingMediaControls;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (id)nowPlayingArtView;
- (void)postLockCompletedNotification:(BOOL)notification;
- (void)removeAlertSheet;
- (void)removeBlockedStatus;
- (void)removeDateView;
- (void)removeFirewireWarningView;
- (void)removePluginController:(BOOL)controller;
- (void)restartMediaControlsTimer;
- (void)setBottomLockBar:(id)bar;
- (void)setDimmed:(BOOL)dimmed;
- (void)setDrawsBlackBackground:(BOOL)background;
- (void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldAnimateIn;
- (BOOL)shouldShowBlockedRedStatus;
- (BOOL)shouldShowInCallInfo;
- (void)showAlertSheet:(id)sheet;
- (void)showAwayItems;
- (void)showBlockedStatus;
- (void)showInfoButton;
- (void)showMediaControls;
- (void)showSyncingBottomBar:(BOOL)bar;
- (void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
- (void)startAnimations;
- (void)stopAnimations;
- (void)toggleMediaControls;
- (void)updateInCallInfo;
- (void)updateInterface;
- (void)updateLockBarLabel;
- (BOOL)updateNowPlayingArt:(BOOL)art;
- (void)updateNowPlayingInfo:(id)info;
- (void)updateUIForResetState:(int)resetState;
- (void)updateUIForRestorationState:(int)restorationState;
- (void)windowGestureWasCompleted:(id)completed;
@end

