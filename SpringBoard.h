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
	GSEventRef _headsetDownEvent;
	SBDimmingWindow *_simulatedBlankingWindow;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenshotWasTaken : 1;
	unsigned _disableAutoDimming : 1;
	unsigned _nextLockUpLocks : 1;
	unsigned _poweringDown : 1;
	unsigned _autoDimmed : 1;
	unsigned _autoDimmedToBlack : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _nowPlayingAppIsPlaying : 1;
	int _UIOrientation;
	NSURL *_menuDoubleTapURL;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	double _sampleSystemStartTime;
	NSDictionary *_startAppsCPUTimes;
	CFDictionaryRef _registeredSimpleRemoteAppToPriority;
	SBApplication *_registeredSimpleRemoteApp;
	SBApplication *_nowPlayingApp;
	NSString *_originatingOpenURLDisplayId;
	NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
	NSNumberFormatter *_decimalFormatter;
	NSNumberFormatter *_percentFormatter;
}
+ (BOOL)registerForSystemEvents;
+ (BOOL)rendersLocally;
- (void)ALSPrefsChanged:(id)changed;
- (int)UIOrientation;
- (double)_accessibilityActivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (void *)_accessibilityEventTapCallback;
- (id)_accessibilityRunningApplications;
- (void)_accessibilitySetEventTapCallback:(void *)callback;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;
- (void)_beginThermalJetsamCPUSampling;
- (id)_createAppsCPUTimesDictionary;
- (void)_createLogFile;
- (void)_fireLockButtonBearTrap;
- (int)_frontMostAppOrientation;
- (void)_handleMenuButtonEvent;
- (void)_initLockButtonBearTrap;
- (void)_killThermallyActiveApplication;
- (void)_menuButtonWasHeld;
- (void)_midnightPassed;
- (void)_performDelayedHeadsetAction;
- (unsigned)_portForEvent:(GSEventRef)event;
- (void)_powerDownNow;
- (void)_rebootNow;
- (void)_relaunchSpringBoardNow;
- (void)_sendGSEventToSimpleRemoteRegisteredApp:(GSEventRef)simpleRemoteRegisteredApp;
- (void)_setDeferredHeadsetButtonDownEvent:(GSEventRef)event;
- (void)_setLockButtonBearTrap;
- (void)_setLockButtonTimer:(id)timer;
- (void)_setMenuButtonTimer:(id)timer;
- (void)_significantTimeChange;
- (void)_tearDownNow;
- (void)_testPhoneAlerts;
- (void)_unsetLockButtonBearTrap;
- (void)_updateRegisteredSimpleRemoteApp;
- (void)accessoryAvailabilityChanged:(GSEventRef)changed;
- (void)accessoryEvent:(GSEventRef)event;
- (void)accessoryKeyStateChanged:(GSEventRef)changed;
- (int)alertOrientation;
- (BOOL)allowMenuDoubleTap;
- (void)animateBacklightToFactor:(float)factor duration:(double)duration didFinishTarget:(id)target selector:(SEL)selector;
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;
- (void)appleIconViewRemoved;
- (void)applicationDidFinishLaunching:(id)application;
- (void)applicationDidOrderOutContext:(unsigned)application;
- (void)applicationExited:(GSEventRef)exited;
- (void)applicationOpenURL:(id)url;
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only;
- (void)applicationSuspend:(GSEventRef)suspend;
- (void)applicationSuspended:(GSEventRef)suspended;
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;
- (void)applicationWillOrderInContext:(unsigned)application windowLevel:(float)level windowOutput:(int)output;
- (void)autoLock;
- (void)autoLockPrefsChanged;
- (void)batteryStatusDidChange:(id)batteryStatus;
- (BOOL)canShowAlerts;
- (BOOL)canShowLockScreenHUDControls;
- (BOOL)canShowNowPlayingHUD;
- (void)cancelTurnOffBacklightAfterDelay;
- (void)checkForExpiredPasscode;
- (void)clearIdleTimer;
- (void)clearMenuButtonTimer;
- (void)clockFormatChanged;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)didDismissMiniAlert;
- (void)didIdle;
- (void)didReceiveMemoryWarning;
- (void)dim;
- (void)dimToBlack;
- (void)extendButtonTimersForWake;
- (void)finishedDimmingScreenToBlack;
- (id)formattedDecimalStringForNumber:(id)number;
- (id)formattedPercentStringForNumber:(id)number;
- (void)frontDisplayDidChange;
- (BOOL)handleEvent:(GSEventRef)event;
- (void)handleMenuDoubleTap;
- (void)handleOutOfLineDataRequest:(GSEventRef)lineDataRequest;
- (void)handleOutOfLineDataResponse:(id)lineDataResponse requestID:(unsigned)anId;
- (void)headsetButtonDown:(GSEventRef)down;
- (void)headsetButtonUp:(GSEventRef)up;
- (void)hideSimulatedScreenBlank;
- (BOOL)iapIsInExtendedMode;
- (BOOL)isLocked;
- (BOOL)isMusicPlayerInNowPlayingView;
- (BOOL)isMusicPlayerPlaying;
- (BOOL)isNowPlayingAppPlaying;
- (void)loadDebuggingAndDemoPrefs;
- (void)lockAfterCall;
- (void)lockButtonDown:(GSEventRef)down;
- (void)lockButtonUp:(GSEventRef)up;
- (void)lockButtonWasHeld;
- (void)lockDevice:(GSEventRef)device;
- (void)menuButtonDown:(GSEventRef)down;
- (void)menuButtonUp:(GSEventRef)up;
- (double)nextIdleTimeDuration;
- (double)nextLockTimeDuration;
- (void)noteSubstantialTransitionOccured;
- (void)noteUIOrientationChanged:(int)changed display:(id)display;
- (id)nowPlayingApp;
- (id)parentalControlsDisabledApplications;
- (void)pinPolicyChanged;
- (void)powerDown;
- (void)powerDownCanceled:(id)canceled;
- (void)powerDownRequested:(id)requested;
- (void)quitTopApplication:(GSEventRef)application;
- (void)reboot;
- (void)relaunchSpringBoard;
- (void)resetIdleDuration:(double)duration;
- (void)resetIdleTimer;
- (void)resetIdleTimerAndUndim:(BOOL)undim;
- (void)respondToCurrentThermalCondition;
- (void)ringerChanged:(int)changed;
- (void)runFieldTestScript;
- (void)sendSimpleRemoteActionToRegisteredApp:(int)registeredApp;
- (void)sendSimpleRemoteActionToRegisteredApp:(int)registeredApp preferNowPlaying:(BOOL)playing;
- (void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;
- (void)setBacklightFactor:(float)factor;
- (void)setBacklightLevel:(float)level;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setNowPlayingInfo:(id)info forApplication:(id)application;
- (void)setProximitySensorEnabled:(int)enabled;
- (void)setSimpleRemoteRoutingPriority:(unsigned)priority forApplication:(id)application;
- (void)setZoomTouchEnabled:(BOOL)enabled;
- (void)setupMidnightTimer;
- (BOOL)shouldDimToBlackInsteadOfLock;
- (BOOL)shouldRunFieldTestScript;
- (void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
- (void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason;
- (void)showSimulatedScreenBlank;
- (void)showThermalAlertIfNecessary;
- (void)showWiFiAlert;
- (void)showWiFiEnterpriseTrustAlert:(id)alert;
- (void)significantTimeChange;
- (unsigned)simpleRemoteRoutingPriorityForApplication:(id)application;
- (void)simulateInCallStatusBar;
- (void)smsPrefsChanged;
- (id)springBoardPluginsDirectory;
- (void)systemWillSleep;
- (void)tearDown;
- (void)timeZoneChanged;
- (void)turnOffBacklight;
- (void)turnOffBacklightAfterDelay;
- (void)undim;
- (void)updateAirPortForDisplay:(id)display;
- (void)updateCapabilitiesAndIconVisibility;
- (void)updateMenuDoubleTapSettings;
- (void)updatePowerlog;
- (void)updateProximitySettings;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
- (void)userDefaultsDidChange:(id)userDefaults;
- (void)userEventOccurred:(id)occurred;
- (void)volumeChanged:(GSEventRef)changed;
- (void)wifiManager:(id)manager scanCompleted:(id)completed;
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;
- (void)willDisplayMiniAlert:(int *)alert;
- (void)wipeDeviceNow;
- (void)writeLogFile;
@end

@interface SpringBoard (ScriptingAdditions)
- (id)setNextVoiceRecognitionAudioInputPaths:(id)paths;
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

