/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBInCallAlertManager : XXUnknownSuperclass {
	SBRemoteAlertAdapter *_currentActiveInCallAlert;
	BOOL _endingCallForLockButtonPress;
}
@property(retain, nonatomic) SBRemoteAlertAdapter *currentActiveInCallAlert;
@property(assign, nonatomic, getter=isEndingCallForLockButtonPress) BOOL endingCallForLockButtonPress;
+ (id)sharedInstance;
- (id)init;
- (void)maybeLockUIAfterCallEnded;
- (void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)activityIdentifier fromAppSwitcher:(BOOL)appSwitcher;
- (void)reactivateAlertForLockButtonPress;
- (void)reactivateAlertFromLockScreenWithUIUnlock:(BOOL)uiunlock disableAnimatedTransition:(BOOL)transition;
- (void)reactivateAlertFromStatusBarTap;
@end

