/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIStatusBarStyleDelegate.h"
#import "FBWindowContextManagerObserver.h"
#import "SpringBoard-Structs.h"
#import "AVExternalDeviceDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "FBWindowContextManagerDelegate.h"
#import "SBAlertObserver.h"

@protocol SBStarkScreenControllerDelegate, SBDisplayProtocol;

__attribute__((visibility("hidden")))
@interface SBStarkScreenController : XXUnknownSuperclass <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver> {
	FBSDisplay *_fbsDisplay;
	UIScreen *_screen;
	unsigned _interactionAffordances;
	int _layoutJustification;
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
	SBStarkAnimationWindow *_animationWindow;
	FBScene *_nowPlayingScene;
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
	BOOL _externalDeviceScreenAvailable;
	SBWindow *_mainWindow;
}
@property(readonly, retain, nonatomic) SBAlertManager *alertManager;
@property(readonly, retain, nonatomic) SBWindow *animationWindow;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBStarkScreenControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id<SBDisplayProtocol> effectiveTopDisplay;
@property(readonly, retain, nonatomic) FBSDisplay *fbsDisplay;
@property(readonly, retain, nonatomic) UIWindow *focusWindow;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBStarkIconController *iconController;
@property(readonly, retain, nonatomic) SBWindow *iconWindow;
@property(readonly, assign, nonatomic) unsigned interactionAffordances;
@property(readonly, assign, nonatomic) int layoutJustification;
@property(readonly, retain, nonatomic) SBWindow *lockoutWindow;
@property(readonly, retain, nonatomic) SBWindow *mainWindow;
@property(readonly, retain, nonatomic) SBStarkNotificationViewController *notificationController;
@property(readonly, retain, nonatomic) UIScreen *screen;
@property(readonly, assign, nonatomic) int state;
@property(readonly, retain, nonatomic) SBStarkStatusBarViewController *statusBarController;
@property(readonly, assign) Class superclass;
+ (void)_launchNowPlaying;
- (id)init;
- (id)initWithScreen:(id)screen;
- (void)_alertSheetDismissed:(id)dismissed;
- (void)_alertSheetPresented:(id)presented;
- (BOOL)_allowInCallOverrideStyle;
- (BOOL)_allowNavigationOverrideStyle;
- (void)_createFakeIconOperationController;
- (CGRect)_defaultScreenFrameOffsetForStatusBar:(id)statusBar;
- (void)_didChangeFromState:(int)state;
- (void)_dismissSiriWithFactory:(id)factory animations:(id)animations completion:(id)completion;
- (void)_externalDeviceScreenBecameAvailable:(id)available;
- (void)_externalDeviceScreenBecameUnavailable:(id)unavailable;
- (void)_handleMenuEventAndTakeScreen:(BOOL)screen;
- (void)_hideWindowsForSetup:(BOOL)setup;
- (id)_newNowPlayingScene;
- (void)_noteInitializationCompleted;
- (void)_noteSetupCompleted;
- (void)_setSiriState:(int)state;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
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
- (id)alertManager:(id)manager newAlertWindowForScene:(id)scene;
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
- (void)iOSUIRequestedForApplicationURL:(id)applicationURL;
- (void)invalidate;
- (BOOL)isShowingNowPlaying;
- (void)notifyWhenNowPlayingIsActive:(id)active withTimeout:(double)timeout;
- (id)nowPlayingContextHostManager;
- (id)nowPlayingSnapshot;
- (BOOL)presentSiri:(BOOL)siri viewController:(id)controller;
- (void)removeObserver:(id)observer;
- (CGRect)sceneFrameForAlerts:(id)alerts;
- (float)sceneLevelForAlerts;
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
- (BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
- (void)windowContextManagerDidStopTrackingContexts:(id)windowContextManager;
- (void)windowContextManagerWillStartTrackingContexts:(id)windowContextManager;
@end

