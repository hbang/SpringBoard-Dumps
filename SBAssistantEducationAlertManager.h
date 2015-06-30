/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantEducationAlertManager : XXUnknownSuperclass {
	int _syncFinishedToken;
	id _unlockHandler;
	NSTimer *_unlockTimer;
	BOOL _userHasBeenEducated;
	BOOL _waitingOnUserDataSync;
	BOOL _assistantSupported;
	BOOL _dictationSupported;
	BOOL _assistantHasBeenActivated;
	NSString *_syncDidFinishLanguage;
	NSMutableSet *_newlyAvailableLanguages;
	int _type;
	NSString *_language;
	SBAssistantEducationAlertItem *_item;
}
+ (id)sharedInstance;
- (id)init;
- (void)_afSyncDidFinish;
- (void)_assistantActivationChanged:(id)changed;
- (BOOL)_availableForCurrentLanguage;
- (BOOL)_availableForLanguage:(id)language;
- (void)_calculateTypeAndLanguage;
- (void)_clearUnlockTimer;
- (id)_currentAssistantLanguage;
- (void)_invalidate;
- (void)_languageActivated:(id)activated;
- (void)_setEducated;
- (BOOL)_shouldAcceptNewLanguage:(id)language;
- (BOOL)_shouldShowReadyForLanguageCode:(id)languageCode;
- (void)_showEducationAlert;
- (void)_startUnlockTimer;
- (void)_unlockTimerFired:(id)fired;
- (void)_waitForUnlockToDisplayAlert;
- (void)dealloc;
- (void)educationAlertWasDeactivated:(id)deactivated;
@end

