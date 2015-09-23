/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBSIMLockManager : XXUnknownSuperclass {
	BOOL _isBrickedDevice;
	int _status;
	SBSIMLockAlertItem *_currentAlert;
	SBSIMLockEntryAlert *_lockEntryAlert;
	NSString *_languageCode;
	BOOL _hasHadSIMWhileNotBricked;
	BOOL _wasActivated;
	BOOL _neededUIM;
}
+ (id)sharedInstance;
- (id)init;
- (int)_CTToSBSIMStatus:(CFStringRef)sbsimstatus;
- (void)_activationDidChange;
- (void)_externalSIMStatusChanged:(id)changed;
- (void)_handlePromptForUnlock;
- (void)_postponementDidChange;
- (void)_setupAppActivationStateDidChange:(id)_setupAppActivationState;
- (BOOL)_shouldSuppressAlert;
- (int)_statusFromCT;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_telephonyDidRestart;
- (void)_tryToUpdateStatus;
- (void)_updateSIMStatus:(CFStringRef)status withOptions:(CFDictionaryRef)options;
- (void)_updateToStatus:(int)status;
- (void)airplaneModeChanged;
- (void)alertItemDismissed:(id)dismissed;
- (void)attemptUnlock;
- (void)dealloc;
- (id)languageCode;
- (void)lockEntryAlertDismissed:(id)dismissed;
- (int)pinLockAttemptsRemaining;
- (int)pukLockAttemptsRemaining;
- (void)registerForAlerts;
- (void)repopAlert;
- (int)status;
@end

