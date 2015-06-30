/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBToAppWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBAlertToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert *_alert;
	SBPasscodeLockDisableAssertion *_siriUnlockAssertion;
	SBUIAnimationController *_animation;
	BOOL _preventAlertDeactivationForAnimation;
	BOOL _preventAlertDeactivationForAnimationLegacy;
	BOOL _animatedAppActivation;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingFromAssistant;
	BOOL _fadeAssistant;
}
@property(readonly, assign, nonatomic) SBAlert *alert;
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager alert:(id)alert toApplication:(id)application activationHandler:(id)handler;
- (void)_alertAnimationComplete:(id)complete;
- (void)_commit;
- (void)_deactivateAlertIfNecessary;
- (void)_endAnimation;
- (void)_handleFailure;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidDeactivate:(id)selfAlert;
- (BOOL)selfAlertWillDeactivate:(id)selfAlert;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)shouldDismissSwitcher;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
@end

