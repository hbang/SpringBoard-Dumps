/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "UIStatusBarStyleDelegate.h"

@protocol SBStarkScreenControllerDelegate, SBDisplayProtocol;

__attribute__((visibility("hidden")))
@interface SBStarkScreenController : XXUnknownSuperclass <SBAlertManagerDelegate, SBAlertManagerObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver> {
	UIScreen *_screen;
	SBCarDisplaySettings *_settings;
	id<SBStarkScreenControllerDelegate> _delegate;
	id<SBDisplayProtocol> _topDisplay;
	int _lockOutMode;
	NSTimer *_lockOutModeUpdateTimer;
	SBStarkLockOutViewController *_lockOutViewController;
	SBStarkLockOutWindow *_lockOutWindow;
	SBStarkDefaultHostingWindow *_defaultHostingWindow;
	SBStarkHomeController *_homeController;
	SBStarkNotificationWindow *_notificationWindow;
	SBStarkSiriWindow *_siriWindow;
	_UIBackdropView *_siriBackdropView;
	BOOL _showingSiri;
	SBAlertManager *_alertManager;
	id _starkScreenBorrowingToken;
	SBStarkScreenFocusController *_focusController;
	SBStarkFakeIconOperationController *_fakeIconOperationController;
	AVExternalDevice *_externalDevice;
}
@property(readonly, assign, nonatomic) SBAlertManager *alertManager;
@property(readonly, assign, nonatomic) UIWindow *animationWindow;
@property(assign, nonatomic) id<SBStarkScreenControllerDelegate> delegate;
@property(readonly, assign, nonatomic) UIWindow *mainWindow;
@property(readonly, assign, nonatomic) UIScreen *screen;
@property(readonly, assign, nonatomic) int state;
@property(retain, nonatomic) id<SBDisplayProtocol> topDisplay;
- (id)init;
- (id)initWithScreen:(id)screen;
- (void)_cancelInitialAppLaunchTimer;
- (void)_createFakeIconOperationController;
- (void)_dismissSiriWithDuration:(double)duration animations:(id)animations completion:(id)completion;
- (void)_launchInitialAppIfNecessary;
- (void)_setShowingSiri:(BOOL)siri;
- (BOOL)_shouldLaunchMapsAtConnect;
- (void)_showNowPlaying;
- (void)_startInitialAppLaunchTimer;
- (void)_takeScreenRequested:(id)requested;
- (void)_tearDownAndInvalidate:(BOOL)invalidate;
- (void)_updateLockOutMode;
- (void)_updateLockOutModeAfterDelay;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (id)alertManager:(id)manager newAlertWindowForLockAlerts:(BOOL)lockAlerts;
- (BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
- (void)alertManagerDidChangeTopAlert:(id)alertManager;
- (BOOL)allowInCallOverrideStyle;
- (BOOL)allowNavigationOverrideStyle;
- (void)dealloc;
- (void)dismissSiri:(BOOL)siri completion:(id)completion;
- (void)dismissSiriWithFade:(double)fade completion:(id)completion;
- (id)focusWindow;
- (void)handleLongBackPress;
- (void)handleUncompletedAppLaunch;
- (void)handleUnhandledBack;
- (void)invalidate;
- (void)presentSiri:(BOOL)siri viewController:(id)controller;
- (void)setTopDisplay:(id)display withAnimationFactory:(id)animationFactory;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
- (void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
- (void)updateStatusBarStateForDisplay:(id)display withAnimationFactory:(id)animationFactory;
@end
