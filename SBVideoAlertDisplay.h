/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBVideoAlertDisplay : SBSlidingAlertDisplay <ABPredicateDelegate> {
	TPBottomBar *newBottomBar;
	NSString *_contactDisplayName;
	BOOL _answered;
	unsigned _isAccepting;
	BOOL _wasToldToStopRinging;
	BOOL _isStandardRinging;
	BOOL _isCallWaitingRinging;
	BOOL _pendingRing;
}
+ (id)newBottomBarForInstance:(id)instance;
+ (id)newBottomLockBarForDisplay:(id)display;
+ (id)newTopBarForInstance:(id)instance;
- (id)initWithSize:(CGSize)size;
- (void)_acceptAnimationDidStop;
- (void)_ringIfNecessary;
- (BOOL)_shouldAutoAnswerConference;
- (void)accept;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)checkForStatusChange;
- (id)contactDisplayName;
- (void)dealloc;
- (void)decline;
- (void)dismiss;
- (void)dismissWithAnimations;
- (void)endWhileConnecting;
- (void)finishedAnimatingIn;
- (void)handleVolumeEvent:(GSEventRef)event;
- (void)inviterCanceledConference;
- (void)lockBarUnlocked:(id)unlocked;
- (BOOL)predicateShouldContinue:(id)predicate;
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;
- (void)ringOrVibrate;
- (void)ringerChanged;
- (void)setAlert:(id)alert;
- (void)setContactDisplayName:(id)name;
- (void)setupMissedVC;
- (BOOL)shouldRingOrVibrate;
- (BOOL)showsDesktopImage;
- (void)stopRingingOrVibrating;
- (void)updateImageFromPerson:(void *)person;
- (void)updateRingtone;
- (BOOL)wasToldToStopRinging;
@end

