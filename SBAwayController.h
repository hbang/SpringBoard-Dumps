/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue, SBDeviceLockViewOwner;

__attribute__((visibility("hidden")))
@interface SBAwayController : SBAlert <SBSlidingAlertDisplayDelegate, SBShowcaseControllerOwner> {
	SBUIController *_uiController;
	SBShowcaseController *_showcaseController;
	SBAwayView *_awayView;
	unsigned _isActive : 1;
	unsigned _isLocked : 1;
	unsigned _isUnlocking : 1;
	unsigned _isActivatingBacklightForUnlock : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _showOverheatUI : 1;
	unsigned _performingAutoUnlock : 1;
	unsigned _validPhotoCountCheck : 1;
	unsigned _showcaseAnimating : 1;
	unsigned _hasBeenLockedOnce : 1;
	unsigned _isInLostMode : 1;
	unsigned _animatingDeactivation : 1;
	int _unlockSource;
	NSDictionary *_nowPlayingInfo;
	SBApplication *_nowPlayingApp;
	id<SBDeviceLockViewOwner> _deviceUnlockDisplay;
	BOOL _chargingViewHasFadedOut;
	NSMutableArray *_pendingAlertItems;
	NSMutableArray *_pendingSuperModalAlertItems;
	SBAlertItem *_currentAlertItem;
	SBAwayBulletinListController *_savedBulletinController;
	NSMutableDictionary *_awayViewPluginControllers;
	NSString *_alwaysFullscreenAwayPluginName;
	NSMutableArray *_lockScreenBundlesToDisableAfterUnlock;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	BOOL _animatingCameraIn;
	_UIDynamicValueAnimation *_dynamicCameraAnimation;
	BOOL _cancelCameraAnimation;
	PLCameraPageController *_cameraViewController;
	UIImageView *_cameraDefaultImageView;
	UIView *_cameraBackgroundView;
	UIView *_cameraContainerView;
	UIView *_cameraSlidingContainerView;
	UIView *_cameraFakeStatusBar;
	UIView *_cameraShadowView;
	BOOL _dimTimerDisabledForCamera;
	NSDate *_lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	SBDeviceLockDisableAssertion *_disableGracePeriodForCameraAssertion;
	SBDeviceLockDisableAssertion *_disableDeviceLockWhileUnlockedAssertion;
	NSObject<OS_dispatch_queue> *_prewarmQueue;
	int _gracePeriodWhenLocked;
	BOOL _keepBulletinsUnreadOnUnlock;
	NSString *_currentTestName;
	BOOL _sbFinishedLaunching;
}
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
@property(retain, nonatomic) NSString *currentTestName;
@property(readonly, assign) BOOL hasEverBeenLocked;
@property(retain, nonatomic) SBShowcaseController *showcaseController;
+ (void)registerForAlerts;
+ (id)sharedAwayController;
+ (id)sharedAwayControllerIfExists;
- (id)initWithUIController:(id)uicontroller;
- (void)_activateCameraAfterCall;
- (BOOL)_activateShowcase:(id)showcase revealMode:(int)mode;
- (void)_adjustViewHierarchyForShowcase:(id)showcase revealAmount:(float)amount;
- (void)_attemptUnlockWithSound:(BOOL)sound unlockSource:(int)source isAutoUnlock:(BOOL)unlock lockOwner:(id)owner bypassPinLock:(BOOL)lock;
- (void)_awayInCallControllerDidToggleShowingInCallInfo:(id)_awayInCallController;
- (void)_awayViewFinishedAnimatingOut:(id)anOut;
- (void)_batteryStatusChanged;
- (void)_blockingViewHit:(id)hit;
- (void)_cancelCameraPrewarm;
- (void)_cleanupFromCameraPanGesture;
- (void)_cleanupFromCameraPanGestureAndCancelPrewarm:(BOOL)cameraPanGestureAndCancelPrewarm;
- (void)_cleanupFromCanceledCameraDismissGesture;
- (void)_createCameraViewControllerWithNewSessionID;
- (void)_createCameraViewControllerWithNewSessionID:(BOOL)newSessionID andStartPreview:(BOOL)preview;
- (void)_createCameraViewControllerWithOldSessionID;
- (void)_deviceBlockedChanged:(id)changed;
- (void)_deviceLockedChanged:(id)changed;
- (void)_dimTimerFired;
- (void)_disablePluginControllersForLock;
- (void)_disablePluginControllersForUnlock;
- (void)_dismissShowcase;
- (void)_dismissShowcaseImmediately;
- (void)_finishDismissShowcase;
- (void)_finishUnlockWithSound:(BOOL)sound unlockSource:(int)source isAutoUnlock:(BOOL)unlock;
- (void)_finishedUnlockAttemptWithStatus:(BOOL)status;
- (void)_handleCameraPanGestureEndedWithVelocity:(float)velocity;
- (void)_idleTimerDisabledReasonsChanged:(id)changed;
- (void)_irisOpened;
- (BOOL)_isAccessoryActive;
- (void)_lockFeaturesForRemoteLock:(BOOL)remoteLock;
- (id)_newDynamicAnimationForCameraStart:(BOOL)cameraStart targetValue:(double)value withInitialVelocity:(double)initialVelocity;
- (void)_nowPlayingAppChanged:(id)changed;
- (void)_nowPlayingStateChanged:(id)changed;
- (void)_pendAlertItem:(id)item;
- (void)_photoLibraryChanged;
- (void)_prewarmCamera;
- (void)_reactivateSuperModalAlertsIfNecessary;
- (void)_releaseAwayView;
- (void)_removeCameraPreviewViews;
- (void)_restartDimTimer:(float)timer mode:(int)mode;
- (void)_restoreWindowOrientationAndDelegate;
- (void)_sendLockStateChangedNotification;
- (void)_sendToDeviceLockOwnerAnimateToEmergencyCall;
- (void)_sendToDeviceLockOwnerDeviceUnlockFailed;
- (void)_sendToDeviceLockOwnerDeviceUnlockSucceeded;
- (BOOL)_sendToDeviceLockOwnerIsDisplayingErrorStatus;
- (void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock;
- (void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock animated:(BOOL)animated;
- (BOOL)_sendToDeviceLockOwnerShouldUseTransparentStatusBar;
- (void)_setCameraAsWindowDelegate;
- (void)_setupCameraSlideDownAnimation;
- (void)_setupCameraSlideUpAnimation;
- (void)_tearDownCameraPreview;
- (void)_translateSlidingViewByY:(float)y;
- (double)_undimInterval;
- (void)_unlockWithSound:(BOOL)sound unlockSource:(int)source isAutoUnlock:(BOOL)unlock bypassPinLock:(BOOL)lock;
- (void)activate;
- (BOOL)activateAlertItem:(id)item;
- (void)activateCamera;
- (void)activateCameraWithNewSessionID:(BOOL)newSessionID afterCall:(BOOL)call;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (void)activateLostModeForRemoteLock:(BOOL)remoteLock;
- (id)activationBlockWithAnimation:(int)animation;
- (void)activationChanged:(id)changed;
- (id)activeAwayPluginController;
- (id)activeOrPendingBulletinController;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (CGRect)alertWindowRect;
- (id)allPendingAlertItems;
- (BOOL)allowDismissCameraSystemGesture;
- (void)allowIdleSleep;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)animateDeactivation;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)applicationRequestedDeviceUnlock;
- (void)assumeShowcaseOwnership:(id)ownership;
- (BOOL)attemptDeviceUnlockWithPassword:(id)password lockViewOwner:(id)owner;
- (void)attemptUnlock;
- (void)attemptUnlockFromSource:(int)source;
- (BOOL)awayBulletinControllerIsActive;
- (BOOL)awayPluginControllerShouldAnimateOthersResumption;
- (id)awayView;
- (id)awayViewFakeStatusBar;
- (id)awayViewSnapshot;
- (BOOL)cameraIsActive;
- (BOOL)cameraIsInPreviewMode;
- (BOOL)cameraIsVisible;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)cancelDimTimer;
- (void)cancelReturnToCameraAfterCall;
- (void)cleanupFromPhoneCallIfNeeded;
- (void)cleanupRunningGestureIfNeeded;
- (void)cleanupUIForAssistantPopoverDismissalAnimated:(BOOL)assistantPopoverDismissalAnimated;
- (id)currentAlertItem;
- (BOOL)currentlyAnimatingDeactivation;
- (void)deactivate;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateCardItem:(id)item;
- (CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
- (id)dequeueAllPendingSuperModalAlertItems;
- (BOOL)deviceHasPhotos;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingOut;
- (void)dimScreen:(BOOL)screen;
- (void)disableLockScreenBundleWithName:(id)name;
- (void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
- (void)disablePluginContainerNotification:(id)notification;
- (void)dismissCameraAnimated:(BOOL)animated;
- (int)effectiveStatusBarStyle;
- (void)emergencyCallWasDisplayed;
- (void)emergencyCallWasRemoved;
- (void)enableAlwaysFullscreenAwayPlugin;
- (void)enableLockScreenBundleWithName:(id)name;
- (void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
- (void)exitLostModeIfNecessary;
- (BOOL)expectsFaceContact;
- (float)finalAlpha;
- (void)finishedDimmingScreen;
- (void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
- (void)frontLocked:(BOOL)locked withAnimation:(int)animation automatically:(BOOL)automatically disableLockSound:(BOOL)sound;
- (void)frontLockedAnimationFinished;
- (void)handleCameraPanGesture:(id)gesture;
- (void)handleCameraTapGesture:(id)gesture;
- (void)handleDismissCameraSystemGesture:(id)gesture;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleKeyEvent:(GSEventRef)event;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleRequestedAlbumArt:(id)art;
- (BOOL)handleSlideshowHardwareButton;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)hasPhotosDevicesAttached;
- (BOOL)hasSuperModalAlertItems;
- (void)hideMediaControls;
- (id)highestPriorityAwayPluginController;
- (double)idleDimDuration;
- (id)interfaceControllingAwayPluginController;
- (int)interfaceOrientationForActivation;
- (BOOL)isActivatingBacklightForUnlock;
- (BOOL)isActivatingWhileDimmed;
- (BOOL)isAlwaysFullscreenAwayPluginEnabled;
- (BOOL)isAwayPluginViewVisible;
- (BOOL)isDimmed;
- (BOOL)isInLostMode;
- (BOOL)isLocked;
- (BOOL)isLockedAndInactive;
- (BOOL)isLockedAndUndimmed;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isShowingMediaControls;
- (void)lock;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)makeEmergencyCall;
- (id)nameOfPluginController:(id)pluginController;
- (void)noteAlertSheetWasReplaced:(id)replaced withAlertSheet:(id)alertSheet;
- (void)noteResetRestoreStateChanged;
- (void)noteStartingPhoneCallWhileLocked;
- (void)orderOut;
- (void)pendOrDeactivateCurrentAlertItem;
- (BOOL)performingAutoUnlock;
- (void)playLockSound;
- (void)pluginFullscreenNotification:(id)notification;
- (void)pluginVisiblityStateChanged:(id)changed;
- (void)prepareToReturnToCameraFromCall;
- (void)prepareUIForAssistantPopoverWithCompletion:(id)completion;
- (BOOL)presentShowcaseViewController:(id)controller revealMode:(int)mode completion:(id)completion;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)seconds;
- (void)printLockLog;
- (void)reactivatePendingAlertItems:(BOOL)items;
- (void)reactivatePendingAlertItemsWithBulletinController:(id)bulletinController forUnlock:(BOOL)unlock;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
- (void)remoteLock:(BOOL)lock;
- (void)removeAwayViewFakeStatusBar;
- (void)removeFromView;
- (void)restartDimTimer;
- (void)restartDimTimer:(float)timer;
- (id)restoreFromSavedBulletinController;
- (void)runUnlockTest:(id)test options:(id)options;
- (void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void *)context;
- (void)setAlwaysFullscreenAwayPluginName:(id)name;
- (void)setDisableGracePeriodForCamera:(BOOL)camera;
- (void)setLocked:(BOOL)locked;
- (void)setShowOverheatUI:(BOOL)ui;
- (BOOL)shouldAnimateOtherDisplaysResumption;
- (BOOL)shouldAnimateOtherDisplaysSuspension;
- (BOOL)shouldPendAlertItemsWhileActive;
- (BOOL)shouldReturnToCameraAfterCall;
- (BOOL)shouldShowInCallUI;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideshowButton;
- (BOOL)showOverheatUI;
- (void)showTestBulletin;
- (void)showcase:(id)showcase didTransferOwnershipToOwner:(id)owner;
- (void)showcase:(id)showcase updateRevealMode:(int)mode withBlock:(id)block;
- (void)showcaseWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
- (float)showcaseWindowLevel:(id)level;
- (BOOL)showsSpringBoardStatusBar;
- (void)slidingAlertViewDeactivationAnimationCompleted:(id)completed;
- (void)slidingAlertViewDeactivationAnimationStart:(id)start;
- (void)startLockSliderAnimations;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (void)stopLockSliderAnimations;
- (void)takePicture;
- (void)tearDownCameraUIImmediately;
- (BOOL)toggleMediaControls;
- (void)toggleShowsIMEIandICCID:(id)iccid;
- (void)undimScreen;
- (void)undimScreen:(BOOL)screen;
- (BOOL)undimsDisplay;
- (void)unlockAlwaysFullscreenAwayView;
- (void)unlockWithSound:(BOOL)sound;
- (void)unlockWithSound:(BOOL)sound bypassPinLock:(BOOL)lock;
- (void)unlockWithSound:(BOOL)sound unlockSource:(int)source;
- (void)updateAwayViewNowPlayingInfo;
- (void)updateCardItem:(id)item;
- (void)updateInCallUI;
- (void)updateInterfaceIfNecessary;
- (void)updateLockSlider;
- (void)updateNowPlayingInfo:(id)info app:(id)app;
- (void)updateOrientationForUndim;
- (void)updateUIForAssistantPopoverRotationToOrientation:(int)orientation withDuration:(double)duration;
- (void)userEventOccurred;
- (void)userEventPresenceTimerExpired;
- (void)userEventsDidIdle;
- (BOOL)wantsToHandleAlert:(id)handleAlert;
- (BOOL)willAllowOtherLockBarsToUnlock;
- (void)willAnimateToggleDeviceLockWithStyle:(int)style toVisibility:(BOOL)visibility withDuration:(double)duration;
@end

