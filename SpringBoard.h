/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SpringBoard : UIApplication {
	SBUIController *_uiController;
	NSTimer *_menuButtonTimer;
	NSTimer *_lockButtonTimer;
	NSTimer *_idleTimer;
	NSTimer *_autoLockTimer;
	double _lastTimeIdleCausedDim;
	double _headsetButtonDownTime;
	SBDimmingWindow *_simulatedBlankingWindow;
	unsigned _delaySleepOnHeadsetClick : 1;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenshotWasTaken : 1;
	unsigned _disableAutoDimming : 1;
	unsigned _nextLockUpLocks : 1;
	unsigned _poweringDown : 1;
	unsigned _autoDimmed : 1;
	unsigned _autoDimmedToBlack : 1;
	unsigned _powerManagementEnabled : 1;
	unsigned _ipodIsPlaying : 1;
	int _UIOrientation;
	NSURL *_menuDoubleTapURL;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	NSString *_jetsamIncidentID;
	double _sampleSystemStartTime;
	CFDictionaryRef _startAppsCPUTimes;
}
+ (void)printWorkspaceLogs;
+ (void)printWorkspaceStacks;
- (void)ALSPrefsChanged:(id)changed;
- (int)UIOrientation;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_beginThermalJetsamCPUSampling;
- (BOOL)_canShowNowPlayingHUD;
- (CFDictionaryRef)_createAppsCPUTimesDictionary;
- (void)_createLogFile;
- (void)_fireLockButtonBearTrap;
- (int)_frontMostAppOrientation;
- (void)_handleHeadsetButtonClick:(GSEventRef)click;
- (void)_handleMenuButtonEvent;
- (void)_initLockButtonBearTrap;
- (void)_killSpringBoardInResponseToCriticalWarning;
- (void)_killThermallyActiveApplication;
- (void)_menuButtonWasHeld;
- (void)_midnightPassed;
- (unsigned)_portForEvent:(GSEventRef)event;
- (void)_powerDownNow;
- (void)_powerOn;
- (void)_rebootNow;
- (void)_receivedMemoryNotification;
- (void)_setLockButtonBearTrap;
- (void)_setLockButtonTimer:(id)timer;
- (void)_setMenuButtonTimer:(id)timer;
- (void)_tearDownNow;
- (void)_testPhoneAlerts;
- (void)_unsetLockButtonBearTrap;
- (void)_writeLogFile;
- (void)accessoryAvailabilityChanged:(GSEventRef)changed;
- (void)accessoryEvent:(GSEventRef)event;
- (void)accessoryKeyStateChanged:(GSEventRef)changed;
- (int)alertOrientation;
- (BOOL)allowMenuDoubleTap;
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;
- (void)appleIconViewRemoved;
- (void)applicationDidFinishLaunching:(id)application;
- (void)applicationExited:(GSEventRef)exited;
- (void)applicationOpenURL:(id)url asPanel:(BOOL)panel;
- (void)applicationOpenURL:(id)url asPanel:(BOOL)panel publicURLsOnly:(BOOL)only;
- (void)applicationStarted:(GSEventRef)started;
- (BOOL)applicationSupportsRemoteNotifications;
- (void)applicationSuspend:(GSEventRef)suspend;
- (void)applicationSuspended:(GSEventRef)suspended;
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;
- (void)autoLock;
- (void)autoLockPrefsChanged;
- (BOOL)canShowAlerts;
- (void)cancelTurnOffBacklightAfterDelay;
- (void)checkForExpiredPasscode;
- (void)checkMemoryStatus;
- (void)clearDeviceAllowsNowPlayingHUD;
- (void)clearIdleTimer;
- (void)clearJetsamIncidentID;
- (void)clearMenuButtonTimer;
- (void)clockFormatChanged;
- (void)demoPrefsChanged:(BOOL)changed;
- (BOOL)deviceAllowsNowPlayingHUD;
- (BOOL)deviceIsInNowPlaying;
- (void)didDismissMiniAlert;
- (void)didIdle;
- (void)dim;
- (void)dimToBlack;
- (void)frontDisplayDidChange:(id)frontDisplay;
- (void)goOffAndOnUSBBus;
- (BOOL)handleEvent:(GSEventRef)event;
- (void)handleMenuDoubleTap;
- (void)handleOutOfLineDataRequest:(GSEventRef)lineDataRequest;
- (void)handleOutOfLineDataResponse:(GSEventRef)lineDataResponse;
- (void)headsetButtonDown:(GSEventRef)down;
- (void)headsetButtonUp:(GSEventRef)up;
- (void)hideSimulatedScreenBlank;
- (BOOL)iapIsInExtendedMode;
- (BOOL)isLocked;
- (id)jetsamIncidentID;
- (void)loadEarlyPrefs;
- (void)lockAfterCall;
- (void)lockButtonDown:(GSEventRef)down;
- (void)lockButtonUp:(GSEventRef)up;
- (void)lockButtonWasHeld;
- (void)lockDevice:(GSEventRef)device;
- (void)menuButtonDown:(GSEventRef)down;
- (void)menuButtonUp:(GSEventRef)up;
- (BOOL)musicIsPlaying;
- (double)nextIdleTimeDuration;
- (double)nextLockTimeDuration;
- (void)noteSubstantialTransitionOccured;
- (void)noteUIOrientationChanged:(int)changed display:(id)display;
- (void)otherApplicationWillSuspend:(GSEventRef)otherApplication;
- (void)pinPolicyChanged;
- (void)powerDown;
- (void)powerDownCanceled:(id)canceled;
- (void)powerDownRequested:(id)requested;
- (BOOL)powerManagementIsEnabled;
- (void)quitTopApplication:(GSEventRef)application;
- (void)reboot;
- (BOOL)registerForSystemEvents;
- (void)relaunchSpringBoard;
- (BOOL)rendersLocally;
- (void)resetIdleDuration:(double)duration;
- (void)resetIdleTimer;
- (void)resetIdleTimerAndUndim:(BOOL)undim;
- (void)respondToCurrentThermalCondition;
- (void)ringerChanged:(int)changed;
- (void)runFieldTestScript;
- (void)setBacklightFactor:(int)factor;
- (void)setBacklightLevel:(float)level;
- (void)setJetsamIncidentID;
- (void)setNowPlayingInfo:(id)info;
- (void)setProximitySensorEnabled:(int)enabled;
- (void)setupMidnightTimer;
- (BOOL)shouldDimToBlackInsteadOfLock;
- (BOOL)shouldRunFieldTestScript;
- (void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
- (void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason;
- (void)showLowDiskSpaceAlert;
- (void)showSimulatedScreenBlank;
- (void)showThermalAlertIfNecessary;
- (void)showWiFiAlert;
- (void)showWiFiEnterpriseTrustAlert:(id)alert;
- (void)significantTimeChange;
- (void)statusBarEvent:(GSEventRef)event;
- (void)tearDown;
- (void)tripleFingerGestureTriggered;
- (void)turnOffBacklight;
- (void)turnOffBacklightAfterDelay;
- (void)undim;
- (void)updateAccelerometerSettings;
- (void)updateAirPortForDisplay:(id)display;
- (void)updateIconVisibility;
- (void)updateMenuDoubleTapSettings;
- (void)updateParentalControls;
- (void)updatePowerlogKillingProcess:(BOOL)process;
- (void)updateProximitySettings;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
- (void)updateTouchPointSettings;
- (void)userDefaultsDidChange:(id)userDefaults;
- (void)userEventOccurred:(id)occurred;
- (void)volumeChanged:(GSEventRef)changed;
- (void)wifiManager:(id)manager scanCompleted:(id)completed;
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;
- (void)willDisplayMiniAlert:(int *)alert;
@end

@interface SpringBoard (SBApplicationTesting)
- (void)_retryLaunchTestWithOptions:(id)options;
- (void)endLaunchTest;
- (void)finishedTest:(id)test extraResults:(id)results;
- (BOOL)runTest:(id)test options:(id)options;
- (void)startLaunchTestNamed:(id)named options:(id)options;
- (void)startResumeTestNamed:(id)named options:(id)options;
@end

@interface SpringBoard (AlertSheetAdditions)
- (void)_alertSheetStackChanged;
@end

