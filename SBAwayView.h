/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"
#import "SBAwayDateViewDelegate.h"

@protocol SBAwayHeaderPluginView;

__attribute__((visibility("hidden")))
@interface SBAwayView : SBSlidingAlertDisplay <SBAwayDateViewDelegate> {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	BOOL _lockBarCurrentlyTracking;
	UIView *_headerContainerView;
	SBAwayDateView *_dateHeaderView;
	UIView<SBAwayHeaderPluginView> *_pluginHeaderView;
	UIView *_animatingFromHeaderView;
	SBAwayChargingView *_chargingView;
	SBThermalLockoutView *_thermalLockoutView;
	SBAlertImageView *_firewireWarningView;
	SBAwayViewPluginController *_awayPluginController;
	BOOL _awayPluginControllerReceivedViewWillDisappear;
	BOOL _awayPluginControllerReceivedViewDidDisappear;
	SBAwaySwipeGestureRecognizer *_gestureRecognizer;
	SBAwayBuddyBackgroundView *_buddyBackgroundView;
	SBAwayBulletinListController *_bulletinController;
	NSTimer *_mediaControlsTimer;
	NSTimer *_fullscreenTimer;
	NSTimer *_chargingViewTimer;
	NSDictionary *_nowPlayingInfo;
	BOOL _isPlaying;
	NSMutableDictionary *_currentPluginFadeAnimationContext;
	NSTimer *_blockedStatusUpdateTimer;
	UIAlertView *_alertSheet;
	int _alertSheetPosition;
	SBAwayInCallController *_inCallController;
	SBAwayLockBar *_lockBar;
	TPBottomSingleButtonBar *_cancelSyncBar;
	UIButton *_infoButton;
	UIView *_legalTextView;
	UIWindow *_previousWindow;
}
@property(retain, nonatomic) UIView *animatingFromHeaderView;
+ (id)bottomBarForInstance:(id)instance;
+ (id)lockLabels:(BOOL)labels fontSize:(float *)size;
- (id)initWithFrame:(CGRect)frame;
- (void)_addHeaderView;
- (void)_adjustForDoubleHighStatusBar:(BOOL)doubleHighStatusBar;
- (void)_chargingViewTimerFired;
- (void)_clearBlockedStatusUpdateTimer;
- (id)_currentTitleForHeaderView;
- (void)_didFadeChargingView;
- (void)_finalizeAndClearPluginAnimationContext;
- (void)_fixupFirstResponder;
- (void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;
- (void)_fullscreenTimerFired;
- (void)_handleKeyEvent:(GSEventRef)event;
- (void)_hideChargingViewAndClearTimer;
- (void)_hideMediaControls;
- (void)_initializeLegalTextOverlay;
- (BOOL)_isShowingDateHeaderView;
- (BOOL)_isShowingPluginHeaderView;
- (void)_layoutLegalTextOverlay:(int)overlay;
- (void)_networkTetheringStateChanged:(id)changed;
- (void)_performTransitionFromPluginController:(id)pluginController toPluginController:(id)pluginController2;
- (void)_placeBulletinViewInHierarchy;
- (void)_pluginAnimationDidStop:(id)_pluginAnimation finished:(id)finished context:(void *)context;
- (void)_positionBulletinViewForOrientation:(int)orientation;
- (void)_postLockCompletedNotification;
- (void)_recenterAlertSheet;
- (void)_removeHeaderView;
- (void)_setAwayViewGesturesEnabled:(BOOL)enabled;
- (void)_setMiddleSubviewsAlpha:(float)alpha;
- (void)_setPluginController:(id)controller;
- (BOOL)_shouldAlwaysHideBulletinView;
- (id)_topBarLCDControlsImage;
- (void)_updateBlockedStatus;
- (void)_updateBlockedStatusLabel;
- (void)_updateLockBarLabelByClearingFirst:(BOOL)first;
- (void)_updateTopBarShadowAlpha;
- (void)addBuddyBackgroundView;
- (void)addFirewireWarningView;
- (void)alertDisplayWillBecomeVisible;
- (void)animateToHidingDeviceLockFinished;
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
- (void)animateToShowingDeviceLockFinished;
- (void)awayDateViewDidChangeTitle:(id)awayDateView;
- (id)buddyBackgroundView;
- (id)bulletinController;
- (BOOL)canBecomeFirstResponder;
- (void)cancelFullscreenTimer;
- (id)chargingView;
- (void)clearChargingViewTimer;
- (void)clearMediaControlsTimer;
- (id)currentAwayPluginController;
- (id)dateHeaderView;
- (void)dealloc;
- (void)deviceUnlockCanceled;
- (void)deviceUnlockFailed;
- (void)didMoveToWindow;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)dimmed;
- (void)dismiss;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
- (float)durationForOthersActivation;
- (void)enableOrDisableNowPlayingPlugin;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (BOOL)handleMenuButtonTap;
- (BOOL)hasNowPlayingInfo;
- (void)hideBulletinView;
- (void)hideChargingView;
- (void)hideMediaControls;
- (void)hideSyncingBottomBar:(BOOL)bar;
- (id)inCallController;
- (BOOL)isAlwaysFullscreen;
- (BOOL)isAnimating;
- (BOOL)isFullscreen;
- (BOOL)isMediaControlsShowingOverlays;
- (BOOL)isPlaying;
- (BOOL)isShowingMediaControls;
- (BOOL)isShowingWallpaper;
- (BOOL)isSupportedInterfaceOrientation:(int)orientation;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)lockBar:(id)bar textAlphaChangedForKnobDrag:(float)knobDrag;
- (BOOL)lockBarIsTracking;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
- (void)noteAssistantDidHide;
- (void)noteAssistantWillAppear;
- (void)noteLocked:(BOOL)locked;
- (void)performAdditionalDismissAnimations;
- (void)postLockCompletedNotification:(BOOL)notification;
- (void)removeAlertSheet;
- (void)removeBlockedStatus;
- (void)removeBuddyBackgroundView;
- (void)removeFirewireWarningView;
- (BOOL)replaceAlertSheet:(id)sheet withAlertSheet:(id)alertSheet;
- (void)resetForDeactivation;
- (void)resetLockBar;
- (void)restartFullscreenTimer;
- (void)restartFullscreenTimerIfNecessary;
- (void)restartMediaControlsTimer;
- (void)restartMediaControlsTimerIfNecessary;
- (void)setAlwaysFullscreen:(BOOL)fullscreen;
- (void)setBottomLockBar:(id)bar;
- (void)setDimmed:(BOOL)dimmed;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
- (void)setIgnoreFullScreenUpdates:(BOOL)updates;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setPlaying:(BOOL)playing;
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
- (void)setThermalLockoutUIVisible:(BOOL)visible;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldAnimateIn;
- (BOOL)shouldShowBlockedRedStatus;
- (BOOL)shouldShowBottomBar;
- (BOOL)shouldShowChargingView;
- (BOOL)shouldShowInCallInfo;
- (void)showAlertSheet:(id)sheet;
- (void)showBlockedStatus;
- (void)showBulletinView;
- (void)showChargingView;
- (void)showMediaControls;
- (void)showSyncingBottomBar:(BOOL)bar;
- (void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
- (CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
- (void)startAnimations;
- (void)startChargingViewTimer;
- (void)stopAnimations;
- (void)toggleMediaControls;
- (void)updateChargingView;
- (void)updateInCallInfo;
- (void)updateInterface;
- (void)updateLockBarLabel;
- (void)updateNowPlayingInfo:(id)info;
- (void)updateTopBarBackground;
- (void)updateUIForResetState:(int)resetState;
- (void)updateUIForRestorationState:(int)restorationState;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willMoveToWindow:(id)window;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)windowGestureWasCompleted:(id)completed;
@end

