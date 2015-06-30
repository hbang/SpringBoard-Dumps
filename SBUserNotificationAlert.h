/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBUserNotificationAlert : XXUnknownSuperclass {
	unsigned _replyPort;
	NSObject<OS_dispatch_source> *_portWatcher;
	NSObject<OS_dispatch_source> *_expirationTimer;
	BOOL _cleanedUp;
	int _token;
	int _timeout;
	unsigned long _requestFlags;
	NSString *_alertHeader;
	id _alertMessage;
	NSString *_alertMessageDelimiter;
	NSString *_defaultButtonTitle;
	NSString *_alternateButtonTitle;
	NSString *_otherButtonTitle;
	NSString *_soundPath;
	unsigned long _soundID;
	unsigned long _soundIDBehavior;
	NSDictionary *_vibrationPattern;
	NSDictionary *_avControllerAttributes;
	NSDictionary *_avItemAttributes;
	double _soundRepeatDuration;
	NSTimer *_soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldButtonDisplayDefaultButtonURLs;
	id _textFieldButtonImagePaths;
	id _textFieldTitles;
	id _textFieldValues;
	id _textFieldButtonDisplayTitles;
	id _textFieldButtonDisplayDefaultButtonTitles;
	int _currentTextFieldButtonDisplayIndex;
	double _creationTime;
	int _defaultButtonTag;
	int _unlockActionButtonTag;
	unsigned _replyFlags;
	int _defaultButtonIndex;
	int _alternateButtonIndex;
	int _otherButtonIndex;
	NSString *_defaultResponseLaunchBundleID;
	NSString *_remoteViewControllerClassName;
	NSString *_remoteServiceBundleIdentifier;
	_SBRemoteAlertContentHostViewController *_contentViewControllerForAlertController;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _displayActionButtonOnLockScreen : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _behavesSuperModally : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _forcesModalAlertAppearance : 1;
	unsigned _oneButtonPerLine : 1;
	unsigned _groupsTextFields : 1;
	unsigned _usesUndoStyle : 1;
	unsigned _dismissesOverlaysOnLockScreen : 1;
	unsigned _configuredLocked : 1;
	unsigned _configuredNeedsPasscode : 1;
	unsigned _defaultResponseAppLaunchWaitingForPasscode : 1;
	SBUISound *_sound;
	BKSProcessAssertion *_processAssertion;
	unsigned _dismissesAutomatically : 1;
}
@property(retain) NSString *alertHeader;
@property(retain) NSString *alertMessage;
@property(retain) NSString *alertMessageDelimiter;
@property(retain) NSString *alternateButtonTitle;
@property(retain) id autocapitalizationTypes;
@property(retain) id autocorrectionTypes;
@property(retain) NSDictionary *avControllerAttributes;
@property(retain) NSDictionary *avItemAttributes;
@property(retain) UIViewController *contentViewControllerForAlertController;
@property(retain) NSString *defaultButtonTitle;
@property(retain) NSString *defaultResponseLaunchBundleID;
@property(retain) id keyboardTypes;
@property(retain) NSString *otherButtonTitle;
@property(retain) NSString *remoteServiceBundleIdentifier;
@property(retain) NSString *remoteViewControllerClassName;
@property(assign) unsigned long soundID;
@property(assign) unsigned long soundIDBehavior;
@property(retain) NSString *soundPath;
@property(retain) id textFieldButtonDisplayDefaultButtonTitles;
@property(retain) id textFieldButtonDisplayDefaultButtonURLs;
@property(retain) id textFieldButtonDisplayTitles;
@property(retain) id textFieldButtonImagePaths;
@property(retain) id textFieldTitles;
@property(retain) id textFieldValues;
@property(retain) NSDictionary *vibrationPattern;
- (id)initWithMessage:(id)message replyPort:(unsigned)port requestFlags:(int)flags auditToken:(XXStruct_kUSYWB)token;
- (void)_cleanup;
- (BOOL)_dismissesOverlaysOnLockScreen;
- (BOOL)_needsDismissalWithClickedButtonIndex:(int)clickedButtonIndex;
- (id)_safeLocalizedValue:(id)value withBundle:(id)bundle;
- (void)_sendResponse:(int)response;
- (void)_setActivated:(BOOL)activated;
- (void)_setSheetDefaultButtonTitle:(id)title;
- (void)_textFieldButtonPressed:(id)pressed;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)alertView:(id)view shouldDismissForButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)behavesSuperModally;
- (void)cancel;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (void)didFailToActivate;
- (BOOL)dismissOnLock;
- (BOOL)dismissesAutomatically;
- (BOOL)displayActionButtonOnLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (void)noteVolumeOrLockPressed;
- (void)performUnlockAction;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;
- (id)sound;
- (int)token;
- (void)updateWithMessage:(id)message requestFlags:(int)flags;
- (void)willActivate;
- (void)willDeactivateForReason:(int)reason;
@end

