/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWallpaperObserver.h"
#import "SBLockScreenViewControllerBase.h"
#import "SBLockScreenViewDelegate.h"
#import "SBLockScreenTimerViewControllerDelegate.h"
#import "SBLockScreenNotificationListDelegate.h"
#import "SBUIPasscodeLockViewDelegate_Internal.h"
#import "SBLockScreenBatteryChargingViewControllerDelegate.h"
#import "SBLockScreenInfoOverlayDelegate.h"
#import "SBLockScreenPluginControllerDelegate.h"
#import "SBLockScreenSlideUpToAppControllerDelegate.h"


__attribute__((visibility("hidden")))
@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenPluginControllerDelegate, SBLockScreenSlideUpToAppControllerDelegate> {
	BOOL _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController *_blockedController;
	SBLockScreenDateViewController *_dateViewController;
	SBLockScreenStatusTextViewController *_statusTextViewController;
	SBLockScreenTimerViewController *_timerViewController;
	SBLockScreenNotificationListController *_notificationController;
	SBLockScreenSlideUpToAppController *_cameraController;
	SBLockScreenSlideUpToAppController *_bottomLeftAppController;
	MPUSystemMediaControlsViewController *_mediaControlsViewController;
	BOOL _ignoreFirstMediaToggle;
	SBLockScreenModalAlertViewController *_modalAlertController;
	SBLockScreenBatteryChargingViewController *_chargingViewController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _slideToUnlockTextShouldUpdateWithAnimation;
	BOOL _ignoreStatusBarUpdatesForBottomCornerController;
	BOOL _forcePasscodeWhileInCall;
	BOOL _isHidingPasscodeWhileInCall;
	BOOL _nextUnlockShouldReturnToCall;
	SBLockScreenPluginController *_pluginController;
	SBLockScreenNowPlayingPluginController *_nowPlayingController;
	SBLockScreenBuddyViewController *_buddyController;
	SBLockOverlayContext *_buddyOverlayContext;
	NSMutableArray *_prioritizedOverlays;
	SBLockOverlayContext *_fullScreenOverlayContext;
	SBLockOverlayContext *_blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController *_fullscreenBulletinController;
	SBLockOverlayContext *_fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController *_infoOverlayController;
	SBLockOverlayContext *_infoOverlayContext;
	SBLockScreenTemperatureWarningViewController *_thermalWarningController;
	SBLockOverlayContext *_thermalWarningContext;
	SBLockScreenResetRestoreViewController *_resetRestoreViewController;
	SBLockOverlayContext *_resetRestoreOverlayContext;
	SBLockScreenPasscodeOverlayViewController *_passcodeOverlayViewController;
	SBLockOverlayContext *_passcodeOverlayContext;
	SBLockScreenEmergencyCallViewController *_emergencyCallController;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
	SBLockScreenActionContext *_bioLockScreenActionContext;
	BOOL _disabledMesaForPhoneCall;
	SBLockScreenActionContext *_slideUpControllerActionContext;
	SBLockScreenHintManager *_hintManager;
	SBDisableAppStatusBarUserInteractionChangesAssertion *_statusBarUserInteractionAssertion;
	BOOL _hasAuthenticatedForNotificationAction;
}
@property(retain, nonatomic, setter=_setBioLockScreenActionContext:) SBLockScreenActionContext *_bioLockScreenActionContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) BOOL hasAuthenticatedForNotificationAction;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) SBLockScreenPluginController *pluginController;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (BOOL)__shouldHidePasscodeForActiveCall;
- (void)__transitionOverlayAnimated:(BOOL)animated from:(id)from to:(id)to completion:(id)completion;
- (void)_addBatteryChargingViewAndShowBattery:(BOOL)battery;
- (void)_addBottomLeftGrabberIfNecessaryForAutoUnlock:(BOOL)autoUnlock;
- (void)_addCameraGrabberIfNecessary;
- (void)_addDateView;
- (void)_addFullscreenBulletinViewWithItem:(id)item;
- (void)_addInfoOverlayViewWithTitle:(id)title;
- (void)_addMediaControls;
- (void)_addModalAlertView;
- (void)_addNotificationView;
- (void)_addOrRemoveBlockedViewIfNecessary:(BOOL)necessary;
- (void)_addOrRemoveBuddyBackgroundIfNecessary;
- (void)_addOrRemoveResetRestoreViewIfNecessary:(BOOL)necessary;
- (void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)necessary;
- (void)_addPasscodeOverlayWithCompletion:(id)completion;
- (void)_addRemoveOrChangePasscodeViewIfNecessary;
- (void)_addStatusTextView;
- (void)_addTimerView;
- (void)_addTimerViewIfNecessary;
- (void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)emergencyDialerActive;
- (void)_adjustLockScreenWallpaperAlphaForPercentScrolled:(float)percentScrolled scrollViewTracking:(BOOL)tracking;
- (void)_beginTimedPasscodeHysteresis;
- (void)_buddyDidFinish:(id)_buddy;
- (void)_callCountChanged:(id)changed;
- (void)_callInfoChanged:(id)changed;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)animationDuration;
- (id)_currentTextForResetOrRestoreState;
- (void)_destroyEmergencyDialerAnimated:(BOOL)animated;
- (BOOL)_disableIdleTimer:(BOOL)timer;
- (void)_dismissFullscreenBulletinAlertAnimated:(BOOL)animated;
- (void)_dismissNotificationCenterToRevealPasscode;
- (id)_effectiveCustomSlideToUnlockText;
- (id)_effectiveLegibilitySettings;
- (id)_effectiveLockScreenActionContext;
- (float)_effectiveOpacityForVisibleDateView;
- (float)_effectiveVisibleStatusBarAlpha;
- (void)_endTimedPasscodeHysteresis;
- (void)_evaluateLockUIForActiveCalls;
- (void)_fadeViewsForChargingViewVisible:(BOOL)chargingViewVisible;
- (BOOL)_forcesPortraitOrientation;
- (void)_handleBacklightFadeEnded;
- (void)_handleBacklightLevelChanged:(id)changed;
- (void)_handleDisplayTurnedOff;
- (void)_handleDisplayTurnedOn:(id)on;
- (void)_handleDisplayWillUndim;
- (void)_handlePasscodeLockStateChanged;
- (void)_handlePasscodePolicyChanged;
- (void)_handleSuggestedAppChanged:(id)changed;
- (BOOL)_isFadeInAnimationInProgress;
- (id)_lockScreenViewCreatingIfNecessary;
- (void)_mediaControlsDidHideOrShow:(id)_mediaControls;
- (void)_notificationCenterDidPresent:(id)_notificationCenter;
- (void)_notificationCenterWillPresent:(id)_notificationCenter;
- (id)_notificationController;
- (id)_notificationListLegibilitySettings;
- (id)_overlayLegibilitySettings;
- (void)_passcodeStateChanged;
- (id)_pluginLegibilitySettings;
- (void)_postPasscodeLockNotification:(int)notification;
- (void)_powerStatusChanged:(id)changed;
- (void)_releaseLockScreenView;
- (void)_removeActivePluginView;
- (void)_removeAllOverlays;
- (void)_removeBatteryChargingView;
- (void)_removeBlockedView:(BOOL)view;
- (void)_removeBuddyBackground;
- (void)_removeDateView;
- (void)_removeFullscreenBulletinViewAnimated:(BOOL)animated;
- (void)_removeInfoOverlayViewAnimated:(BOOL)animated;
- (void)_removeMediaControls;
- (void)_removeModalAlertView;
- (void)_removeNotificationView;
- (void)_removePasscodeOverlayWithCompletion:(id)completion;
- (void)_removeRestoreView:(BOOL)view;
- (void)_removeStatusTextView;
- (void)_removeThermalTrapView:(BOOL)view;
- (void)_removeTimerView;
- (void)_resetActivePlugin;
- (void)_setHintManagerEnabledIfPossible:(BOOL)possible;
- (void)_setHintManagerEnabledIfPossible:(BOOL)possible removingLockScreenView:(BOOL)view;
- (void)_setMediaControlsVisible:(BOOL)visible;
- (void)_setNowPlayingControllerEnabled:(BOOL)enabled;
- (void)_setStatusBarUserInteractionEnabledForTopGrabber:(BOOL)topGrabber;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (BOOL)_shouldShowChargingText;
- (BOOL)_shouldShowDate;
- (void)_startFadeInAnimationForBatteryView:(BOOL)batteryView;
- (void)_toggleMediaControls;
- (void)_togglePasscodeEmergencyCallButtonIfNecessary;
- (void)_unsupportedChargingAccessoryStateChanged:(id)changed;
- (void)_updateBatteryChargingViewAnimated:(BOOL)animated;
- (void)_updateDateTimerStatusBarAndLockSlider;
- (void)_updateGrabbersForIdentityManagerAuthentication;
- (void)_updateGrabbersForScreenOffMode;
- (void)_updateLegibility;
- (void)_updateMediaControlsForScreenMode;
- (id)_wallpaperLegibilitySettings;
- (BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (void)activate;
- (BOOL)activateAlertItem:(id)item animated:(BOOL)animated;
- (void)activateCameraAnimated:(BOOL)animated;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (id)activeLockScreenPluginController;
- (void)addCoordinatedPresentingController:(id)controller;
- (void)addGrabberView:(id)view toLockScreenView:(id)lockScreenView forController:(id)controller;
- (void)addOverlay:(id)overlay transitionIfNecessary:(BOOL)necessary animated:(BOOL)animated completion:(id)completion;
- (void)adjustLockScreenContentByOffset:(float)offset forPluginController:(id)pluginController withAnimationDuration:(double)animationDuration;
- (void)adjustWallpaperForVerticalScrollPercentage:(float)verticalScrollPercentage;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (id)allPendingAlertItems;
- (BOOL)allowAnimatedDismissalForLockScreenPlugin;
- (BOOL)allowSystemGestureAtLocation:(CGPoint)location;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)attemptToUnlockUIFromNotification;
- (void)authenticateForNotificationActionWithCompletion:(id)completion;
- (void)bannerEnablementChanged;
- (void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
- (BOOL)canHandleAlerts;
- (void)chargingViewControllerFadedOutContent:(id)content;
- (void)cleanupAlertItemsForDeactivation;
- (BOOL)controllerShouldInvertVerticalPadding:(id)controller;
- (BOOL)controllerShouldUseAdditionalTopPadding:(id)controller;
- (id)currentAlertItem;
- (id)currentLockScreenActionContext;
- (void)deactivate;
- (void)deactivateAlertItem:(id)item animated:(BOOL)animated;
- (void)deactivateCardItem:(id)item;
- (void)dealloc;
- (CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
- (void)dismissFullscreenBulletinAlertWithItem:(id)item;
- (void)displayDidDisappear;
- (id)effectiveCustomSlideToUnlockText;
- (void)emergencyDialerExitedWithError:(id)error;
- (void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
- (void)exitEmergencyDialerAnimated:(BOOL)animated;
- (void)finishUIUnlockFromSource:(int)source;
- (id)grabberViewInLockScreenView:(id)lockScreenView forController:(id)controller;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handlePhoneAppExitedIfNecessary;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasSuperModalAlertItems;
- (BOOL)hasTranslucentBackground;
- (float)hintDisplacementForController:(id)controller;
- (unsigned)hintEdgeForController:(id)controller;
- (void)infoOverlayWantsDismissal;
- (int)interfaceOrientationForActivation;
- (BOOL)isAllowingWallpaperBlurUpdates;
- (BOOL)isAnotherSlideUpControllerBlockingController:(id)controller;
- (BOOL)isBounceEnabledForPresentingController:(id)presentingController locationInWindow:(CGPoint)window;
- (BOOL)isHidingPasscodeViewDuringCall;
- (BOOL)isInScreenOffMode;
- (BOOL)isLockScreenPluginViewVisible;
- (BOOL)isLockScreenVisible;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isPasscodeLockVisible;
- (BOOL)isPresentationEnabledForPresentingController:(id)presentingController locationInWindow:(CGPoint)window;
- (BOOL)isShowingMediaControls;
- (BOOL)isShowingOverheatUI;
- (BOOL)isSystemGesturePermittedForPresentingController:(id)presentingController;
- (void)launchEmergencyDialer;
- (id)legibilitySettings;
- (void)loadView;
- (id)lockScreenBottomLeftAppController;
- (BOOL)lockScreenBulletinControllerIsActive;
- (id)lockScreenCameraController;
- (id)lockScreenHintManager;
- (BOOL)lockScreenIsShowingBulletins;
- (id)lockScreenScrollView;
- (id)lockScreenView;
- (void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
- (void)lockScreenView:(id)view didScrollToPage:(int)page;
- (void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
- (BOOL)lockScreenViewIsCurrentlyBeingDisplayed;
- (BOOL)lockScreenViewPhonePluginIsActive;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
- (void)modifyFullscreenBulletinAlertWithItem:(id)item;
- (void)noteDeviceBlockedStatusUpdated;
- (void)noteExitingLostMode;
- (void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)noteNextUnlock;
- (void)noteResetRestoreStateUpdated;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)notificationListBecomingVisible:(BOOL)visible;
- (void)overlay:(id)overlay wantsStyleChange:(unsigned)change;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)pressed;
- (void)passcodeLockViewKeypadKeyDown:(id)down;
- (void)passcodeLockViewKeypadKeyUp:(id)up;
- (void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
- (void)passcodeViewDidBecomeActive:(BOOL)passcodeView forController:(id)controller;
- (void)pluginController:(id)controller activePluginDidChange:(id)activePlugin;
- (void)prepareForExternalUIUnlock;
- (void)prepareForMesaUnlockWithCompletion:(id)completion;
- (void)prepareForSlideUpAppLaunchAnimated:(BOOL)slideUpAppLaunchAnimated;
- (void)prepareForUIUnlock;
- (void)prepareToEnterLostMode;
- (void)presentFullscreenBulletinAlertWithItem:(id)item;
- (int)presentingControllerIdentifierForController:(id)controller;
- (void)removeCoordinatedPresentingController:(id)controller;
- (void)removeOverlay;
- (void)removeOverlay:(id)overlay transitionIfNecessary:(BOOL)necessary animated:(BOOL)animated completion:(id)completion;
- (void)setForcesPasscodeViewDuringCall:(BOOL)call;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setInScreenOffMode:(BOOL)screenOffMode forAutoUnlock:(BOOL)autoUnlock;
- (void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
- (void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
- (void)setShowingMediaControls:(BOOL)controls;
- (void)setUnlockActionContext:(id)context;
- (void)shakeSlideToUnlockTextWithCustomText:(id)customText;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)shouldPendAlertItemsWhileActive;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideToUnlockTextImmediately;
- (BOOL)showsSpringBoardStatusBar;
- (void)startLockScreenFadeInAnimationForSource:(int)source;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (unsigned)supportedInterfaceOrientations;
- (BOOL)suppressesBanners;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (void)timerControllerDidStartTimer:(id)timerController;
- (void)timerControllerDidStopTimer:(id)timerController;
- (void)updateCardItem:(id)item;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)awayViewPlugin;
- (void)updateLegibility;
- (void)updateSlideToUnlockTextForController:(id)controller;
- (id)viewControllerToUseAsParent;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
- (BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
- (BOOL)wantsSupportedInterfaceOrientationsIgnoredDuringDeactivation;
- (BOOL)wantsToHandleAlert:(id)handleAlert;
- (BOOL)wantsToShowStatusBarTime;
- (BOOL)wasAutoUnlocked;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willBeginDeactivationForTransitionToApps:(id)apps animated:(BOOL)animated;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

