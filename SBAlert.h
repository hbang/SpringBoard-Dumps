/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDisplayProtocol.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBAlert : XXUnknownSuperclass <SBDisplayProtocol> {
	id<SBAlertDelegate> _alertDelegate;
	SBAlertView *_display;
	NSMutableDictionary *_dictionary;
	BOOL _isWallpaperTunnelActive;
	BOOL _backgroundStyleIsSet;
	int _backgroundStyle;
	BOOL _isForcingBackgroundStyleUpdate;
	BOOL _suppressesBanners;
	SBActivationSettings *_activationSettings;
	SBDeactivationSettings *_deactivationSettings;
	SBStateSettings *_stateSettings;
	int _orientationChangedEventsEnabled;
	BOOL _requestedDismissal;
	UIScreen *_targetScreen;
	NSHashTable *_observers;
	SBAlertManager *_alertManager;
}
@property(retain, nonatomic) SBAlertManager *alertManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) BOOL suppressesBanners;
@property(readonly, assign, nonatomic) BOOL suppressesControlCenter;
@property(readonly, assign, nonatomic) BOOL suppressesNotificationCenter;
@property(readonly, assign, nonatomic) BOOL suppressesSiri;
@property(readonly, assign, nonatomic) UIViewController *viewControllerForSupportedInterfaceOrientations;
@property(readonly, assign, nonatomic) BOOL wantsSupportedInterfaceOrientationsIgnoredDuringDeactivation;
+ (void)registerForAlerts;
+ (void)test;
- (id)init;
- (id)_basicDescription;
- (id)_impersonatesApplicationWithBundleID;
- (BOOL)_isLockAlert;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_screen;
- (void)_setTargetScreen:(id)screen;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (void)activate;
- (void)addObserver:(id)observer;
- (id)alertDelegate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertViewIsReadyToDismiss:(id)dismiss;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)animateDeactivation;
- (void)applyActivationSettings:(id)settings;
- (void)applyDeactivationSettings:(id)settings;
- (void)applyStateSettings:(id)settings;
- (double)autoDimTime;
- (double)autoLockTime;
- (BOOL)boolForActivationSetting:(unsigned)activationSetting;
- (BOOL)boolForDeactivationSetting:(unsigned)deactivationSetting;
- (BOOL)boolForStateSetting:(unsigned)stateSetting;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearDisplay;
- (void)clearStateSettings;
- (id)copyDisplaySettings;
- (BOOL)currentlyAnimatingDeactivation;
- (int)customBackgroundStyle;
- (void)deactivate;
- (void)dealloc;
- (void)didFinishAnimatingIn;
- (void)didFinishAnimatingOut;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)dismissAlert;
- (id)display;
- (void)displayDidDisappear;
- (int)effectiveStatusBarStyle;
- (id)effectiveStatusBarStyleRequest;
- (id)effectiveViewController;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (float)finalAlpha;
- (int)flagForActivationSetting:(unsigned)activationSetting;
- (int)flagForDeactivationSetting:(unsigned)deactivationSetting;
- (int)flagForStateSetting:(unsigned)stateSetting;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleSlideshowHardwareButton;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (int)interfaceOrientationForActivation;
- (BOOL)isRemote;
- (BOOL)isWallpaperTunnelActive;
- (id)legibilitySettings;
- (void)loadView;
- (BOOL)managesOwnStatusBarAtActivation;
- (BOOL)matchesAnyInCallService;
- (BOOL)matchesInCallUIService;
- (BOOL)matchesRemoteAlertService:(id)service options:(id)options;
- (id)objectForActivationSetting:(unsigned)activationSetting;
- (id)objectForDeactivationSetting:(unsigned)deactivationSetting;
- (id)objectForKey:(id)key;
- (id)objectForStateSetting:(unsigned)stateSetting;
- (BOOL)orientationChangedEventsEnabled;
- (void)removeBackgroundStyleWithAnimationFactory:(id)animationFactory;
- (void)removeFromView;
- (void)removeObjectForKey:(id)key;
- (void)removeObserver:(id)observer;
- (void)setAlertDelegate:(id)delegate;
- (void)setBackgroundStyle:(int)style withAnimationFactory:(id)animationFactory;
- (void)setBackgroundStyle:(int)style withAnimationFactory:(id)animationFactory force:(BOOL)force;
- (void)setDisplay:(id)display;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
- (void)setFlag:(int)flag forActivationSetting:(unsigned)activationSetting;
- (void)setFlag:(int)flag forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setFlag:(int)flag forStateSetting:(unsigned)stateSetting;
- (void)setObject:(id)object forActivationSetting:(unsigned)activationSetting;
- (void)setObject:(id)object forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forStateSetting:(unsigned)stateSetting;
- (void)setOrientationChangedEventsEnabled:(BOOL)enabled;
- (void)setWallpaperTunnelActive:(BOOL)active;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)shouldPendAlertItemsWhileActive;
- (BOOL)showsSpringBoardStatusBar;
- (int)starkStatusBarStyle;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (id)statusBarStyleRequest;
- (BOOL)undimsDisplay;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (BOOL)wantsCustomBackgroundStyle;
- (BOOL)wantsCustomBackgroundStyleForAllWallpaperVariants;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willBeginDeactivationForTransitionToApps:(id)apps animated:(BOOL)animated;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

