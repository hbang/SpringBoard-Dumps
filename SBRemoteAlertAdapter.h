/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {
	_SBRemoteAlertHostViewController *_remoteAlertHostViewController;
	NSString *_impersonatedApplicationBundleID;
	BOOL _activated;
	BOOL _dismissWithHomeButton;
	BOOL _userRequestedHomeButtonDismissal;
	int _desiredButtonEvents;
	BOOL _wantsWallpaperTunnel;
	BOOL _hasTranslucentBackground;
	int _requestedBackgroundStyle;
	BOOL _allowsAlertStacking;
	int _dismissalAnimationStyle;
	BOOL _disableFadeInAnimation;
	NSMutableSet *_idleTimerDisabledReasons;
	double _requestedAutoLockTime;
	BOOL _hasCustomStatusBarStyle;
	int _customStatusBarStyle;
	int _desiredStatusBarStyleOverrides;
	BOOL _wantsToShowStatusBar;
	BOOL _dismissOnUILock;
	int _desiredLaunchingInterfaceOrientation;
	BOOL _dontCancelStatusBarStyleOverrides;
	id _lockUIAndDismissActions;
	id _clientActivationHandler;
	id _clientDeactivationHandler;
	BOOL _beingPresentedObscured;
}
@property(assign, nonatomic, getter=isBeingPresentedObscured) BOOL beingPresentedObscured;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) BOOL disablesFadeInAnimation;
@property(readonly, assign, nonatomic) BOOL dismissOnUILock;
@property(readonly, assign, nonatomic) int dismissalAnimationStyle;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int requestedBackgroundStyle;
@property(readonly, assign, nonatomic) NSString *serviceBundleIdentifier;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) BOOL userRequestedHomeButtonDismissal;
@property(readonly, assign, nonatomic) BOOL wantsWallpaperTunnel;
+ (void)requestRemoteViewService:(id)service options:(id)options completion:(id)completion;
- (id)initWithViewController:(id)viewController;
- (void)_cleanupIdleTimerDisabledReasons;
- (id)_impersonatesApplicationWithBundleID;
- (id)_initWithRemoteAlertHostViewController:(id)remoteAlertHostViewController;
- (void)_setCustomStatusBarStyle:(int)style;
- (void)_setDismissWithHomeButton:(BOOL)homeButton;
- (void)_setDismissalAnimationStyle:(int)style;
- (void)_setHasTranslucentBackground:(BOOL)background;
- (void)_setImpersonatedApplicationBundleID:(id)anId;
- (void)_setLaunchingInterfaceOrientation:(int)orientation;
- (void)_setShouldDisableFadeInAnimation:(BOOL)_set;
- (void)_setWantsWallpaperTunnel:(BOOL)tunnel immediately:(BOOL)immediately;
- (void)activate;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (double)autoLockTime;
- (void)deactivate;
- (void)dealloc;
- (void)handleDoubleHeightStatusBarTap;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (int)interfaceOrientationForActivation;
- (BOOL)isRemote;
- (BOOL)matchesAnyInCallService;
- (BOOL)matchesInCallUIService;
- (BOOL)matchesRemoteAlertService:(id)service options:(id)options;
- (void)noteActivatedForCustomReason:(id)customReason;
- (void)noteShouldStopDisablingStatusBarOverrides;
- (void)remoteAlertDidTerminateWithError:(id)remoteAlert;
- (void)remoteAlertWantsMenuButtonDismissal:(BOOL)dismissal;
- (void)remoteAlertWantsToAllowAlertStacking:(BOOL)allowAlertStacking;
- (void)remoteAlertWantsToAllowBanners:(BOOL)allowBanners;
- (void)remoteAlertWantsToDisableFadeInAnimation:(BOOL)animation;
- (void)remoteAlertWantsToDismissOnUILock:(BOOL)dismissOnUILock;
- (void)remoteAlertWantsToLockUIAndDismiss;
- (void)remoteAlertWantsToSetAutoLockDuration:(double)setAutoLockDuration;
- (void)remoteAlertWantsToSetBackgroundStyle:(int)setBackgroundStyle withDuration:(double)duration;
- (void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)setDesiredStatusBarStyleOverrides;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(BOOL)setIdleTimerDisabled forReason:(id)reason;
- (void)remoteAlertWantsToSetStatusBarHidden:(BOOL)setStatusBarHidden withDuration:(double)duration;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)updateAllowedHardwareButtonEvents;
- (void)remoteAlertWantsWallpaperTunnelActive:(BOOL)active;
- (void)remoteAlertWantstoSetDismissalAnimationStyle:(int)style;
- (void)remoteAlertWantstoSetSupportedInterfaceOrientationOverride:(unsigned)override;
- (void)setActivationHandler:(id)handler deactivationHandler:(id)handler2;
- (void)setLockUIAndDismissActions:(id)actions;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)showsSpringBoardStatusBar;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

