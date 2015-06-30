/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBStarkScreenControllerDelegate, SBDisplayProtocol;

__attribute__((visibility("hidden")))
@interface SBStarkScreenController : XXUnknownSuperclass <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate> {
	UIScreen *_screen;
	unsigned _interactionAffordances;
	SBCarDisplaySettings *_settings;
	id<SBStarkScreenControllerDelegate> _delegate;
	id<SBDisplayProtocol> _actualTopDisplay;
	id<SBDisplayProtocol> _effectiveTopDisplay;
	NSMutableOrderedSet *_alertSheets;
	NSMapTable *_alertSheetsToWindowMap;
	NSHashTable *_observers;
	int _screenState;
	int _lockOutMode;
	BOOL _delayUpdatingLockOutMode;
	SBStarkLockOutViewController *_lockOutViewController;
	SBStarkLockOutWindow *_lockOutWindow;
	SBStarkDefaultHostingWindow *_defaultHostingWindow;
	SBStarkNowPlayingController *_nowPlayingController;
	SBStarkNowPlayingWindow *_nowPlayingWindow;
	BOOL _showingNowPlaying;
	SBStarkIconController *_iconController;
	SBStarkIconWindow *_iconWindow;
	SBStarkStatusBarViewController *_statusBarViewController;
	SBStarkStatusBarWindow *_statusBarWindow;
	SBStarkNotificationWindow *_notificationWindow;
	SBAssistantWindow *_siriWindow;
	int _siriState;
	SBAlertManager *_alertManager;
	id _alertBorrowScreenToken;
	id _siriBorrowScreenToken;
	SBStarkScreenFocusController *_focusController;
	SBStarkFakeIconOperationController *_fakeIconOperationController;
	AVExternalDevice *_externalDevice;
	int _layoutJustification;
}
@property(readonly, assign, nonatomic) SBAlertManager *alertManager;
@property(readonly, assign, nonatomic) SBWindow *animationWindow;
@property(assign, nonatomic) id<SBStarkScreenControllerDelegate> delegate;
@property(retain, nonatomic) id<SBDisplayProtocol> effectiveTopDisplay;
@property(readonly, assign, nonatomic) UIWindow *focusWindow;
@property(readonly, assign, nonatomic) SBStarkIconController *iconController;
@property(readonly, assign, nonatomic) SBWindow *iconWindow;
@property(readonly, assign, nonatomic) int layoutJustification;
@property(readonly, assign, nonatomic) SBWindow *lockoutWindow;
@property(readonly, assign, nonatomic) SBWindow *mainWindow;
@property(readonly, assign, nonatomic) SBStarkNotificationViewController *notificationController;
@property(readonly, assign, nonatomic) UIScreen *screen;
@property(readonly, assign, nonatomic) int state;
@property(readonly, assign, nonatomic) SBStarkStatusBarViewController *statusBarController;
- (id)init;
- (id)initWithScreen:(id)screen;
- (void)_alertSheetDismissed:(id)dismissed;
- (void)_alertSheetPresented:(id)presented;
- (BOOL)_allowInCallOverrideStyle;
- (BOOL)_allowNavigationOverrideStyle;
- (void)_createFakeIconOperationController;
- (void)_didChangeFromState:(int)state;
- (void)_dismissSiriWithFactory:(id)factory animations:(id)animations completion:(id)completion;
- (void)_handleMenuEventAndTakeScreen:(BOOL)screen;
- (void)_hideWindowsForSetup:(BOOL)setup;
- (void)_noteInitializationCompleted;
- (void)_noteSetupCompleted;
- (void)_setSiriState:(int)state;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
- (void)_takeScreenRequested:(id)requested;
- (void)_tearDownAndInvalidate:(BOOL)invalidate;
- (void)_toggleNotificationSuspendedState;
- (void)_toggleNowPlayingVisible:(BOOL)visible;
- (void)_updateAlertSheetFocus;
- (void)_updateLockOutMode;
- (void)_viewController:(id)controller animateAppearanceWithContext:(id)context;
- (void)_viewController:(id)controller animateDisappearanceWithContext:(id)context;
- (void)_viewController:(id)controller willAnimateAppearanceWithContext:(id)context;
- (void)_viewController:(id)controller willAnimateDisappearanceWithContext:(id)context;
- (void)addObserver:(id)observer;
- (void)alertBannerSuppressionChanged:(id)changed;
- (void)alertManager:(id)manager didCreateAlertWindow:(id)window;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (id)alertManager:(id)manager newAlertWindowForLockAlerts:(BOOL)lockAlerts;
- (BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
- (void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)animationFactory;
- (void)dealloc;
- (void)dismissSiriWithAnimation:(int)animation factory:(id)factory completion:(id)completion;
- (void)handleACHomeUp;
- (void)handleLongBackPress;
- (void)handleUncompletedAppLaunch;
- (void)handleUnhandledBack;
- (void)invalidate;
- (BOOL)isShowingNowPlaying;
- (void)notifyWhenNowPlayingIsActive:(id)active withTimeout:(double)timeout;
- (id)nowPlayingContextHostManager;
- (id)nowPlayingSnapshot;
- (void)presentSiri:(BOOL)siri viewController:(id)controller;
- (void)removeObserver:(id)observer;
- (void)setEffectiveTopDisplay:(id)display actualTopDisplay:(id)display2 withAnimationFactory:(id)animationFactory;
- (void)setEffectiveTopDisplay:(id)display withAnimationFactory:(id)animationFactory;
- (void)setNowPlayingBundleID:(id)anId;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)siriRequestedWithAction:(int)action;
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
- (void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
- (void)updateStatusBarStateForDisplay:(id)display withAnimationFactory:(id)animationFactory;
@end

