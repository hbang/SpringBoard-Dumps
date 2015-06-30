/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWorkspace : XXUnknownSuperclass <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerObserver, SBStarkScreenControllerObserver, SBReachabilityObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver> {
	FBSceneManager *_sceneManager;
	SBAlertManager *_alertManager;
	BOOL _alertManagerIsDeactivatingAlert;
	BOOL _alertManagerIsActivatingLockAlert;
	SBScreenTimeTrackingController *_screenTimeTrackingController;
	SBWorkspaceTransaction *_currentTransaction;
	FBWorkspaceEventQueueLock *_eventQueueLock;
	NSTimer *_relaunchTimer;
	NSMutableArray *_applicationsToRelaunch;
	SBWindow *_reachabilityWindow;
	FBScene *_sceneForReachabilityApp;
	SBWindow *_reachabilityEffectWindow;
	BSWatchdog *_transactionWatchdog;
	NSMutableDictionary *_extensionHandlersByType;
	NSMutableSet *_foregroundAppPidsWhenDisplaySecureModeWasEnabled;
}
@property(readonly, assign, nonatomic) SBAlertManager *alertManager;
@property(readonly, assign, nonatomic) BOOL alertManagerIsActivatingLockAlert;
@property(retain, nonatomic) SBWorkspaceTransaction *currentTransaction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) NSSet *foregroundAppPidsWhenDisplaySecureModeWasEnabled;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) FBSceneManager *sceneManager;
@property(readonly, assign) Class superclass;
+ (id)debugDescription;
- (id)init;
- (id)_applicationForBundleIdentifier:(id)bundleIdentifier;
- (BOOL)_applicationProcessExited:(id)exited withContext:(id)context;
- (void)_deviceWillDisableDisplaySecureMode:(id)_device;
- (void)_deviceWillEnableDisplaySecureMode:(id)_device;
- (void)_disableReachabilityImmediately:(BOOL)immediately;
- (void)_exitReachabilityModeWithCompletion:(id)completion;
- (void)_handleBuddyLaunchFinished;
- (void)_handleInitialSpringBoardLaunch:(id)launch;
- (void)_handleOpenApplicationRequest:(id)request options:(id)options origin:(id)origin withResult:(id)result;
- (void)_handleOpenURLRequest:(id)request application:(id)application options:(id)options activationSettings:(id)settings origin:(id)origin withResult:(id)result;
- (BOOL)_handleSetupExited:(id)exited;
- (id)_handlerForExtensionPoint:(id)extensionPoint;
- (void)_invalidateRelaunchTimer;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_memoryPressureRelieved:(id)relieved;
- (void)_memoryPressureWarn:(id)warn;
- (void)_noteCurrentTransactionFailed:(const char *)failed;
- (void)_promptUnlockWithHandler:(id)handler;
- (void)_registerHandler:(id)handler forExtensionPoint:(id)extensionPoint;
- (void)_scheduleRelaunchTimerIfNecessary;
- (id)_selectTransactionForAppActivationToApp:(id)app canDeactivateAlerts:(BOOL)alerts withResult:(id)result;
- (id)_selectTransactionForAppActivationToApp:(id)app withResult:(id)result;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)appActivationUnderMainScreenLock forRelaunch:(BOOL)relaunch withResult:(id)result;
- (id)_selectTransactionForAppExited:(id)appExited;
- (id)_selectTransactionForAppRelaunch:(id)appRelaunch;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)app forceToBuddy:(BOOL)buddy withResult:(id)result;
- (id)_selectTransactionForReturningToTheLockScreenWithResult:(id)result;
- (void)_unregisterHandler:(id)handler forExtensionPoint:(id)extensionPoint;
- (void)_updateStatusBarTimeItemEnabled;
- (void)alertManager:(id)manager didActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager didChangeTopAlertFrom:(id)from toAlert:(id)alert;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager didRemoveAlert:(id)alert fromWindow:(id)window;
- (void)alertManager:(id)manager didTearDownAlertWindow:(id)window;
- (id)alertManager:(id)manager newAlertWindowForScene:(id)scene;
- (BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
- (void)alertManager:(id)manager topAlert:(id)alert requestsWallpaperStyleChangeWithAnimationFactory:(id)animationFactory;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
- (void)applicationProcessDebuggingStateDidChange:(id)applicationProcessDebuggingState;
- (void)applicationProcessDidExit:(id)applicationProcess withContext:(id)context;
- (void)applicationProcessDidLaunch:(id)applicationProcess;
- (void)applicationProcessWillLaunch:(id)applicationProcess;
- (void)dealloc;
- (void)handleCancelReachabilityRecognizer:(id)recognizer;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)handleRevealNotificationCenterGesture:(id)gesture;
- (void)process:(id)process stateDidChangeFromState:(id)state toState:(id)state3;
- (void)processDidExit:(id)process;
- (void)processManager:(id)manager didAddProcess:(id)process;
- (void)processManager:(id)manager didRemoveProcess:(id)process;
- (CGRect)sceneFrameForAlerts:(id)alerts;
- (float)sceneLevelForAlerts;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (void)starkScreenController:(id)controller didChangeStateFromState:(int)state;
- (void)starkScreenManagerDidChangeActiveController:(id)starkScreenManager;
- (void)starkScreenManagerWillChangeActiveController:(id)starkScreenManager;
- (void)systemService:(id)service canActivateApplication:(id)application withResult:(id)result;
- (void)systemService:(id)service handleActions:(id)actions origin:(id)origin withResult:(id)result;
- (void)systemService:(id)service handleOpenApplicationRequest:(id)request options:(id)options origin:(id)origin withResult:(id)result;
- (void)systemService:(id)service handleOpenURLRequest:(id)request application:(id)application options:(id)options origin:(id)origin withResult:(id)result;
- (void)systemServicePrepareForExit:(id)exit andRelaunch:(BOOL)relaunch;
- (void)systemServicePrepareForShutdown:(id)shutdown andReboot:(BOOL)reboot;
- (void)transactionDidComplete:(id)transaction;
- (void)updateInterruptedByCallSettingsFrom:(id)from to:(id)to;
- (void)watchdogFired:(id)fired;
- (void)watchdogStarted:(id)started;
@end
