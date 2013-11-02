/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class SBUIController, NSTimer, NSTimeZone, NSDictionary, NSString, SBAwayModel, NSMutableArray, SBSleepProofTimer, SBSlidingAlertDisplay, NSMutableDictionary, SBAwayView, SBAlertItem;

@interface SBAwayController : SBAlert {
	SBUIController *_uiController;
	SBAwayModel *_model;
	SBAwayView *_awayView;
	NSTimer *_dimTimer;
	unsigned _isLocked : 1;
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _isSyncing : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _wasLockedOrMakingEmergencyCallBeforeSync : 1;
	unsigned _wasDeviceLockedBeforeSync : 1;
	unsigned _showOverheatUI : 1;
	NSDictionary *_nowPlayingInfo;
	SBSlidingAlertDisplay *_deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone *_lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	NSTimer *_deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString *_devicePasscode;
	NSMutableArray *_pendingAlertItems;
	SBAlertItem *_currentAlertItem;
	NSMutableDictionary *_awayViewPluginControllers;
	SBSleepProofTimer *_smsSoundWakeTimers[2];
}
+ (void)registerForAlerts;
+ (id)sharedAwayController;
- (id)initWithUIController:(id)uicontroller;
- (void)_clearBlockedState;
- (void)_finishedUnlockAttemptWithStatus:(BOOL)status;
- (int)_getGracePeriod;
- (void)_markLockTime;
- (void)_pendAlertItem:(id)item;
- (void)_releaseAwayView;
- (void)_sendLockStateChangedNotification;
- (void)_smsSoundWakeTimerFired:(id)fired;
- (void)_undimScreen;
- (void)_unlockWithSound:(BOOL)sound;
- (void)_updateDeviceLockedState;
- (void)activate;
- (BOOL)activateAlertItem:(id)item;
- (void)activationChanged:(id)changed;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (CGRect)alertWindowRect;
- (void)allowIdleSleep;
- (BOOL)allowsDoubleHeightStatusBar:(BOOL)bar;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)applicationRequestedDeviceUnlock;
- (BOOL)attemptDeviceUnlockWithPassword:(id)password alertDisplay:(id)display;
- (BOOL)attemptSnoozeRingingAlertItem;
- (void)attemptUnlock;
- (id)awayModel;
- (BOOL)awayPluginControllerShouldAnimateOthersResumption;
- (id)awayView;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)cancelDimTimer;
- (void)cancelScheduledSMSSounds;
- (void)cleansePendingQueueOfAwayItems;
- (void)clearDeviceLockedTimer;
- (id)currentAlertItem;
- (void)deactivate;
- (void)deactivateAlertItem:(id)item;
- (void)dealloc;
- (id)devicePasscode;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingOut;
- (void)dimScreen:(BOOL)screen;
- (id)dimTimer;
- (void)dimTimerFired;
- (void)disableLockScreenBundleWithName:(id)name;
- (void)disablePluginContainerNotification:(id)notification;
- (void)emergencyCallWasDisplayed;
- (void)emergencyCallWasRemoved;
- (void)enableLockScreenBundleWithName:(id)name;
- (float)finalAlpha;
- (void)finishedDimmingScreen;
- (void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
- (void)frontLockedAnimationFinished;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleRequestedAlbumArt:(id)art;
- (void)hideMediaControls;
- (id)highestPriorityAwayPluginController;
- (BOOL)isAttemptingUnlock;
- (BOOL)isAwayPluginViewVisible;
- (BOOL)isBlocked;
- (BOOL)isCurrentAlertItemRinging;
- (BOOL)isDeviceLockedOrBlocked;
- (BOOL)isDimmed;
- (BOOL)isLocked;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isPasswordProtected;
- (BOOL)isPermanentlyBlocked:(double *)blocked;
- (BOOL)isShowingMediaControls;
- (BOOL)isSyncing;
- (void)loadPasscode;
- (void)lock;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)makeEmergencyCall;
- (BOOL)moveAlertItemToAwayView:(id)awayView;
- (void)noteResetRestoreStateChanged;
- (void)noteSyncStateChanged;
- (void)orderOut;
- (void)pendOrDeactivateCurrentAlertItem;
- (id)pendingAlertItems;
- (void)playLockSound;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)seconds;
- (void)printLockLog;
- (void)reactivatePendingAlertItems;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
- (void)resetAwayItems;
- (void)restartDimTimer:(float)timer;
- (void)setDeviceLocked:(BOOL)locked;
- (void)setShowOverheatUI:(BOOL)ui;
- (BOOL)shouldAnimateOtherDisplaysResumption;
- (BOOL)shouldAnimateOtherDisplaysSuspension;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)showOverheatUI;
- (void)smsMessageReceived;
- (void)snoozeOrStopRingingAlertItem;
- (int)statusBarMode;
- (void)stopRingingAlertItem;
- (BOOL)toggleMediaControls;
- (void)toggleShowsIMEIandICCID:(id)iccid;
- (void)undimScreen;
- (BOOL)undimsDisplay;
- (void)unlockWithSound:(BOOL)sound;
- (void)unlockWithSound:(BOOL)sound alertDisplay:(id)display;
- (void)updateClockFormat;
- (void)updateInCallUI;
- (void)updateNowPlayingInfo:(id)info;
- (void)userEventOccurred;
- (BOOL)wantsToHandleAlert:(id)handleAlert;
@end

