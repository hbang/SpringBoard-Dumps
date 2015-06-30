/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <StoreServices/_kSSNotificationApplicationInstalled.h>
#import "SpringBoard-Structs.h"
#import "SBPowerDownControllerDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "UIApplicationDelegate.h"

@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SpringBoard : _kSSNotificationApplicationInstalled <SBPowerDownControllerDelegate, MCProfileConnectionObserver, UIApplicationDelegate> {
	SBUIController *_uiController;
	NSTimer *_menuButtonTimer;
	NSTimer *_lockButtonTimer;
	double _headsetButtonDownTime;
	IOHIDEventRef _headsetDownEvent;
	int _headsetClickCount;
	int _ringerSwitchState;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _dontLockOnNextLockUp : 1;
	unsigned _poweringDown : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _isSeekingInMedia : 1;
	int _statusBarOrientationOverride;
	int _mediaSeekDirection;
	unsigned _springBoardRequestsAccelerometerEvents;
	int _activeInterfaceOrientation;
	NSMutableSet *_activeInterfaceOrientationObservers;
	NSMutableArray *_activeInterfaceOrientationOverrideStack;
	BOOL _wantsOrientationEvents;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
	BOOL _proximityEventsEnabled;
	BOOL _smartCoverClosed;
	BOOL _keybagRefetchTransactionIsActive;
	BOOL _menuButtonDown;
	NSSet *_restrictionDisabledApplications;
	SBApplication *_nowPlayingApp;
	SBApplication *_menuButtonInterceptApp;
	BOOL _menuButtonInterceptAppEnabledForever;
	NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
	NSMutableArray *_appsRegisteredForVolumeEvents;
	NSNumberFormatter *_decimalFormatter;
	NSNumberFormatter *_percentFormatter;
	NSTimer *_midnightTimer;
	NSDate *_midnightFireDate;
	opaque_pthread_t *_backgroundMIGServerThread;
	opaque_pthread_t *_iconGenerationMIGServerThread;
	NSObject<OS_dispatch_source> *_memoryPressureSource;
	unsigned _memoryPressureStatus;
	NSMutableArray *_blocksAwaitingAvailableMemory;
	BBDataProviderConnection *_bulletinBoardConnection;
	NSObject<OS_dispatch_queue> *_bulletinBoardQueue;
	SBCardItemsController *_cardItemsController;
	CFBooleanRef _hasCameraCapability;
	CFBooleanRef _hasCameraRestriction;
	CFBooleanRef _shouldDelaySleepForHeadsetClick;
	NSHashTable *_volumePressBandits;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldAbsoluteStartTime;
	NSMutableArray *_menuButtonUpBlocks;
	BOOL _didPlayLockSound;
	NSHashTable *_disableActiveOrientationChangeAssertions;
	BOOL _typingActive;
}
@property(readonly, assign, nonatomic) BBDataProviderConnection *bulletinBoardConnection;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *bulletinBoardQueue;
@property(assign, nonatomic, getter=isTypingActive) BOOL typingActive;
@property(retain, nonatomic) UIWindow *window;
+ (void)migrateSystemLocalNotifications;
+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;
- (id)init;
- (BOOL)_URLIsHandledBySpringBoard:(id)board;
- (BOOL)__handleHIDEvent:(IOHIDEventRef)event;
- (double)_accessibilityActivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (id)_accessibilityFrontMostApplication;
- (id)_accessibilityRunningApplications;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)accessibility;
- (BOOL)_accessibilityShouldAllowAppLaunch;
- (BOOL)_accessibilityShouldAllowIconLaunch;
- (BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
- (id)_accessibilityTopDisplay;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_alertSheetStackChanged;
- (BOOL)_alertWindowShouldRotate;
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;
- (void)_applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating additionalActivationFlags:(id)flags activationHandler:(id)handler;
- (void)_cameraPreviewStarted;
- (void)_caseLatchWantsToAttemptLock;
- (void)_clearPreheatedLockAudio;
- (int)_currentNonFlatDeviceOrientation;
- (void)_effectiveSettingsDidChange;
- (void)_enqueueWorkspaceEvent:(id)event withName:(id)name ifSatisfiesCondition:(id)condition cancelingEventsWithNames:(id)names;
- (int)_frontMostAppOrientation;
- (void)_giveUpOnMenuDoubleTap;
- (void)_handleHIDEvent:(IOHIDEventRef)event;
- (void)_handleMenuButtonEvent;
- (BOOL)_handlePhysicalButtonEvent:(id)event;
- (BOOL)_hasVolumeBandits;
- (void)_headsetButtonDown:(IOHIDEventRef)down;
- (void)_headsetButtonUp:(IOHIDEventRef)up;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)notification;
- (void)_imagesMounted;
- (BOOL)_isDim;
- (id)_keyWindowForScreen:(id)screen;
- (void)_keyboardAvailabilityChanged;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)attemptUnlock;
- (void)_launchMusicPlayerSuspendedAndStartMusic;
- (void)_localeChanged;
- (void)_lockButtonDownFromSource:(int)source;
- (void)_lockButtonUpFromSource:(int)source;
- (void)_lockdownActivationChanged:(id)changed;
- (void)_logMenuButtonHoldTime;
- (void)_logReliabilityInfoForEvent:(IOHIDEventRef)event;
- (void)_menuButtonDown:(IOHIDEventRef)down;
- (void)_menuButtonUp:(IOHIDEventRef)up;
- (void)_menuButtonWasHeld;
- (double)_menuHoldTime;
- (void)_midnightPassed;
- (void)_nowPlayingAppDidChangeNotification:(id)_nowPlayingApp;
- (void)_openURLCore:(id)core display:(id)display animating:(BOOL)animating sender:(id)sender additionalActivationFlags:(id)flags activationHandler:(id)handler;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;
- (void)_performDeferredLaunchWork;
- (void)_performDelayedHeadsetClickTimeout;
- (void)_powerDownCancel:(id)cancel withCompletion:(id)completion;
- (void)_powerDownNow;
- (void)_proximityChanged:(id)changed;
- (void)_rebootNow;
- (void)_relaunchSpringBoardNow;
- (void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)reason;
- (BOOL)_requestPermissionToOpenURL:(id)openURL withApplication:(id)application sender:(id)sender;
- (void)_retryLaunchTestWithOptions:(id)options;
- (void)_revealSpotlight;
- (void)_ringerChanged:(IOHIDEventRef)changed;
- (void)_rotateView:(id)view toOrientation:(int)orientation;
- (void)_runAppSliderBringupTest;
- (void)_runAppSliderDismissTest;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runDisplayAlertTest:(id)test;
- (void)_runNotificationCenterBringupTest;
- (void)_runNotificationCenterDismissTest;
- (void)_runScrollAppSliderTest:(id)test;
- (void)_runScrollIconListTest;
- (void)_runScrollNotificationCenterTest:(id)test;
- (void)_runUnlockTest;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (void)_setAmbiguousControlCenterActivationMargin:(float)margin;
- (void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)event;
- (void)_setLockButtonTimer:(id)timer;
- (void)_setMenuButtonTimer:(id)timer;
- (void)_setStatusBarShowsProgress:(BOOL)progress;
- (id)_settingLanguageStringForNewLanguage;
- (BOOL)_shouldSwallowGSEvent:(GSEventRef)event;
- (BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)event;
- (void)_significantTimeChange;
- (void)_smartCoverDidClose:(IOHIDEventRef)_smartCover;
- (void)_smartCoverDidOpen:(IOHIDEventRef)_smartCover;
- (void)_startBulletinBoardServer;
- (void)_startSeekWithDirection:(id)direction;
- (BOOL)_statusBarOrientationFollowsWindow:(id)window;
- (void)_tearDownNow;
- (void)_testPhoneAlerts;
- (void)_unscatterWillBegin:(id)_unscatter;
- (void)_updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing triggeredbyRouteWillChangeToReceiverNotification:(BOOL)triggeredbyRoute;
- (void)_updateRingerState:(int)state withVisuals:(BOOL)visuals updatePreferenceRegister:(BOOL)aRegister;
- (BOOL)_volumeChanged:(IOHIDEventRef)changed;
- (void)_widgetHostingDefaultsDidChange;
- (void)_workspaceTransactionCompleted:(id)completed;
- (void)accessoryKeyStateChanged:(GSEventRef)changed;
- (int)activeInterfaceOrientation;
- (int)activeInterfaceOrientationWithoutConsideringAlerts;
- (void)addActiveOrientationObserver:(id)observer;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
- (void)addVolumePressBandit:(id)bandit;
- (int)alertInterfaceOrientation;
- (BOOL)allowCaseLatchLockAndUnlock;
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;
- (void)appleIconViewRemoved;
- (BOOL)applicationCanOpenURL:(id)url publicURLsOnly:(BOOL)only;
- (void)applicationDidFinishLaunching:(id)application;
- (void)applicationDidOrderOutContext:(id)application screen:(id)screen;
- (void)applicationExited:(GSEventRef)exited;
- (void)applicationOpenURL:(id)url;
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only;
- (void)applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating needsPermission:(BOOL)permission additionalActivationFlags:(id)flags activationHandler:(id)handler;
- (void)applicationSuspend:(GSEventRef)suspend;
- (void)applicationSuspended:(GSEventRef)suspended;
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;
- (void)applicationWillOrderInContext:(id)application windowLevel:(float)level screen:(id)screen;
- (id)appsRegisteredForVolumeEvents;
- (void)batteryStatusDidChange:(id)batteryStatus;
- (BOOL)canOpenURL:(id)url;
- (BOOL)canShowAlerts;
- (BOOL)canShowLockScreenCameraGrabber;
- (BOOL)canShowLockScreenHUDControls;
- (void)cancelMenuButtonRequests;
- (BOOL)caseIsEnabledAndLatched;
- (void)clearLaunchedAfterLanguageRestart;
- (void)clearMenuButtonTimer;
- (int)currentHomescreenStatusBarStyle;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)didDismissActionSheet;
- (void)didDismissMiniAlert;
- (void)didReceiveMemoryWarning;
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;
- (void)endLaunchTest;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (void)extendButtonTimersForWake;
- (void)finishedTest:(id)test extraResults:(id)results;
- (id)formattedDecimalStringForNumber:(id)number;
- (id)formattedPercentStringForNumber:(id)number;
- (void)frontDisplayDidChange:(id)frontDisplay;
- (BOOL)handleDoubleHeightStatusBarTap:(int)tap;
- (void)handleKeyHIDEvent:(IOHIDEventRef)event;
- (void)handleMenuDoubleTap;
- (void)handleOpenURL:(id)url fromApplication:(id)application;
- (void)handleSignal:(int)signal;
- (void)headsetAvailabilityChanged:(GSEventRef)changed;
- (void)headsetButtonDown:(GSEventRef)down;
- (void)headsetButtonUp:(GSEventRef)up;
- (void)hideSpringBoardStatusBar;
- (BOOL)iapIsInExtendedMode;
- (int)interfaceOrientationForCurrentDeviceOrientation;
- (BOOL)isCameraApp;
- (BOOL)isDisplayIdentifierRestrictionDisabled:(id)disabled;
- (BOOL)isLocked;
- (BOOL)isMenuDoubleTapAllowed;
- (BOOL)isMusicPlayerInNowPlayingView;
- (BOOL)isNowPlayingAppPlaying;
- (BOOL)isPoweringDown;
- (BOOL)isSpringBoardStatusBarHidden;
- (void)languageChanged;
- (BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;
- (void)launchMusicPlayerSuspended;
- (BOOL)launchedAfterLanguageRestart;
- (void)loadDebuggingAndDemoPrefs;
- (void)localeChanged;
- (void)lockAfterCall;
- (void)lockButtonDown:(GSEventRef)down;
- (void)lockButtonUp:(GSEventRef)up;
- (void)lockButtonWasHeld;
- (void)lockDevice:(GSEventRef)device;
- (BOOL)lockScreenCameraSupported;
- (void)mediaKeyDown:(GSEventRef)down;
- (void)mediaKeyUp:(GSEventRef)up;
- (void)menuButtonDown:(GSEventRef)down;
- (id)menuButtonInterceptApp;
- (BOOL)menuButtonInterceptAppEnabledForever;
- (void)menuButtonUp:(GSEventRef)up;
- (void)monitorForPurpleServerTermination;
- (void)noteAlertView:(id)view willChangeInterfaceOrientation:(int)orientation duration:(double)duration;
- (void)noteBacklightControllerUndimming:(id)undimming;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)noteCaseHardwarePresent;
- (void)noteInterfaceOrientationChanged:(int)changed;
- (void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration;
- (void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays;
- (void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays force:(BOOL)force;
- (void)noteInterfaceOrientationChanged:(int)changed force:(BOOL)force;
- (void)noteKeybagRefetchTransactionIsActive:(BOOL)active;
- (void)noteSubstantialTransitionOccured;
- (id)nowPlayingApp;
- (BOOL)openURL:(id)url;
- (void)performWhenMenuButtonIsUpUsingBlock:(id)block;
- (void)pinPolicyChanged;
- (void)popTransientActiveInterfaceOrientationForReason:(id)reason;
- (void)powerDown;
- (void)powerDownCanceled:(id)canceled;
- (void)powerDownRequested:(id)requested;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
- (BOOL)proximityEventsEnabled;
- (void)pushTransientActiveInterfaceOrientation:(int)orientation forReason:(id)reason;
- (void)quitTopApplication:(GSEventRef)application;
- (void)reboot;
- (void)relaunchSpringBoard;
- (BOOL)relaunchingForSetupLanguageChange;
- (void)removeActiveOrientationObserver:(id)observer;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
- (void)removeVolumePressBandit:(id)bandit;
- (void)reportStatusBarOrientationAs:(int)as;
- (void)requestDeviceUnlock;
- (void)resetIdleTimerAndUndim;
- (BOOL)restartedForLanguageChangeWhileUnlocked;
- (void)ringerChanged:(int)changed;
- (void)runFieldTestScript;
- (void)runRotationTest:(int)test;
- (BOOL)runTest:(id)test options:(id)options;
- (void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;
- (void)setAppRegisteredForVolumeEvents:(id)volumeEvents isActive:(BOOL)active;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setIdleTimerDisabled:(BOOL)disabled;
- (void)setMenuButtonInterceptApp:(id)app forever:(BOOL)forever;
- (void)setNextAssistantRecognitionStrings:(id)strings;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)paths;
- (void)setNowPlayingInfo:(id)info forApplication:(id)application;
- (void)setProximityEventsEnabled:(BOOL)enabled;
- (void)setSuspensionAnimationDelay:(double)delay;
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;
- (void)setWantsOrientationEvents:(BOOL)events;
- (void)setWantsVolumeButtonEvents:(BOOL)events;
- (void)setupMidnightTimer;
- (BOOL)shouldHostWidgetsRemotely;
- (BOOL)shouldRunFieldTestScript;
- (void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
- (void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason forMMS:(BOOL)mms;
- (void)showSpringBoardStatusBar;
- (void)significantTimeChange;
- (id)simpleRemoteDestinationApp;
- (BOOL)smartCoverIsClosed;
- (void)startLaunchTestNamed:(id)named options:(id)options;
- (void)startResumeTestNamed:(id)named options:(id)options;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (int)statusBarOrientation;
- (void)tearDown;
- (BOOL)underMemoryPressure;
- (void)updateMirroredDisplayOrientation;
- (void)updateNativeOrientation;
- (void)updateNativeOrientationAndMirroredDisplays:(BOOL)displays;
- (void)updateOrientationAndAccelerometerSettings;
- (void)updateProximitySettings;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)receiverNotification;
- (void)updateStackshotSettings;
- (void)userDefaultsDidChange:(id)userDefaults;
- (void)volumeChanged:(GSEventRef)changed;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (double)windowRotationDuration;
- (void)wipeDeviceNow;
@end

