/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBLockScreenViewControllerDelegate.h"
#import "SBAlertObserver.h"
#import "SBUIBiometricEventMonitorDelegate.h"
#import "SBUIBiometricEventObserver.h"
#import "PKPaymentServiceDelegate.h"
#import "SBPassKitPrearmTriggerDelegate.h"
#import "SBPasscodeEntryAlertViewControllerDelegate.h"


__attribute__((visibility("hidden")))
@interface SBLockScreenManager : XXUnknownSuperclass <SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate, PKPaymentServiceDelegate, SBPassKitPrearmTriggerDelegate, SBPasscodeEntryAlertViewControllerDelegate, SBAlertObserver> {
	SBLockScreenViewControllerBase *_lockScreenViewController;
	BOOL _isUILocked;
	BOOL _isWaitingToLockUI;
	BOOL _appRequestedPasscodeEntry;
	BOOL _uiHasBeenLockedOnce;
	BOOL _uiUnlocking;
	SBPasscodeEntryAlertViewController *_passcodeEntryController;
	SBPasscodeLockDisableAssertion *_disablePasscodeLockWhileUIUnlockedAssertion;
	NSMutableSet *_disableLockScreenIfPossibleAssertions;
	NSHashTable *_disableUnlockAssertions;
	BOOL _isInLostMode;
	unsigned _failedMesaUnlockAttempts;
	BOOL _bioAuthenticatedWhileMenuButtonDown;
	NSMutableSet *_bioUnlockingDisabledRequesters;
	SBPassKitPrearmTrigger *_prearmTrigger;
	BOOL _presentingPassKitInterface;
	PKPaymentService *_paymentService;
	BOOL _didMatchBeforeTriggerTimeout;
}
@property(assign, nonatomic, getter=isUIUnlocking) BOOL UIUnlocking;
@property(readonly, assign) BOOL bioAuthenticatedWhileMenuButtonDown;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) BOOL isUILocked;
@property(readonly, assign) BOOL isWaitingToLockUI;
@property(readonly, assign, nonatomic) SBLockScreenViewControllerBase *lockScreenViewController;
@property(readonly, assign) BOOL shouldHandlePocketStateChanges;
@property(readonly, assign) Class superclass;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)needed;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_activateLockScreenAnimated:(BOOL)animated automatically:(BOOL)automatically inScreenOffMode:(BOOL)screenOffMode dimInAnimation:(BOOL)animation dismissNotificationCenter:(BOOL)center;
- (void)_addDisableUnlockAssertion:(id)assertion;
- (BOOL)_attemptUnlockWithPasscode:(id)passcode finishUIUnlock:(BOOL)unlock;
- (void)_bioAuthenticated:(id)authenticated;
- (void)_deviceBlockedChanged:(id)changed;
- (void)_deviceLockedChanged:(id)changed;
- (void)_finishUIUnlockFromSource:(int)source withOptions:(id)options;
- (void)_frontmostDisplayChanged:(id)changed;
- (void)_handleExternalUIUnlock:(id)unlock;
- (void)_handlePassKitDismissal;
- (void)_lockFeaturesForRemoteLock:(BOOL)remoteLock;
- (void)_lockScreenDimmed:(id)dimmed;
- (void)_lockUI;
- (id)_newLockScreenController;
- (void)_postLockCompletedNotification:(BOOL)notification;
- (void)_relockUIForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
- (void)_removeDisableUnlockAssertion:(id)assertion;
- (void)_resetOrRestoreStateChanged:(id)changed;
- (void)_sendUILockStateChangedNotification;
- (void)_setUILocked:(BOOL)locked;
- (BOOL)_shouldAutoUnlockFromUnlockSource:(int)unlockSource;
- (BOOL)_shouldLockAfterEndingFaceTimeCall;
- (BOOL)_shouldLockAfterEndingTelephonyCall;
- (void)activateLostModeForRemoteLock:(BOOL)remoteLock;
- (void)activationChanged:(id)changed;
- (void)addLockScreenDisableAssertion:(id)assertion;
- (void)alertDidDeactivate:(id)alert;
- (void)applicationRequestedDeviceUnlock;
- (void)applicationRequestedDeviceUnlockWithCompletion:(id)completion;
- (BOOL)attemptUnlockWithPasscode:(id)passcode;
- (void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
- (BOOL)biometricEventMonitorShouldRelockAfterBioUnlock:(id)biometricEventMonitor;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(id)contactlessInterface fromSource:(int)source;
- (void)enableLostModePlugin;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)remoteRequest;
- (BOOL)handleKeyHIDEvent:(IOHIDEventRef)event;
- (BOOL)hasUIEverBeenLocked;
- (BOOL)isInLostMode;
- (BOOL)isLockScreenDisabledForAssertion;
- (void)lockUIFromSource:(int)source withOptions:(id)options;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (BOOL)passcodeEntryAlertViewController:(id)controller authenticatePasscode:(id)passcode;
- (void)paymentServiceReceivedInterruption;
- (void)remoteLock:(BOOL)lock;
- (void)removeLockScreenDisableAssertion:(id)assertion;
- (void)setBioUnlockingDisabled:(BOOL)disabled forRequester:(id)requester;
- (BOOL)shouldLockUIAfterEndingCall;
- (void)startUIUnlockFromSource:(int)source withOptions:(id)options;
- (void)triggerDidFire:(id)trigger;
- (void)triggerDidTimeoutForDoubleTap:(id)trigger;
- (void)triggerDidTimeoutForFingerOn:(id)trigger;
- (void)unlockUIFromSource:(int)source withOptions:(id)options;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
@end

