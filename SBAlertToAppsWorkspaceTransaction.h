/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBToAppsWorkspaceTransaction.h"
#import "SBUIAnimationControllerObserver.h"
#import "SBAlertManagerObserver.h"


__attribute__((visibility("hidden")))
@interface SBAlertToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBUIAnimationControllerObserver, SBAlertManagerObserver> {
	SBAlert *_alert;
	SBPasscodeLockDisableAssertion *_siriUnlockAssertion;
	NSString *_ignoreOcclusionsReasonForActivatingApps;
	SBUIAnimationController *_animation;
	BOOL _preventAlertDeactivationForAnimation;
	BOOL _preventAlertDeactivationForAnimationLegacy;
	BOOL _animateActivation;
	BOOL _goingToAppSwitcher;
	BOOL _animatedAppActivation;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingFromAssistant;
	BOOL _fadeAssistant;
	BOOL _updateStatusBarForLockTeardown;
}
@property(readonly, assign, nonatomic) SBAlert *alert;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithAlertManager:(id)alertManager alert:(id)alert activationRequest:(id)request withResult:(id)result;
- (void)_activateApplications:(BOOL)applications;
- (void)_alertAnimationComplete:(id)complete;
- (void)_begin;
- (void)_beginAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_didComplete;
- (void)_doLegacyAlertAnimationWatchingThatNobodyWantsToSupportAnymoreInThisTransactionTodayPleaseGetRidOfMeSometimePlease;
- (void)_endAnimation;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)failed;
- (BOOL)_isAlertLockScreen;
- (BOOL)_isWaitingOnAnySceneDidCommitUpdateMilestone;
- (void)_setupAnimation;
- (void)_setupAnimationToApplications;
- (void)_setupAnimationToSpringBoard;
- (BOOL)_shouldAnimateTransition;
- (void)_synchronizeWithSceneUpdates;
- (void)_willAddChildTransaction:(id)transaction;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)animationControllerDidRevealApplication:(id)animationController;
- (void)dealloc;
- (BOOL)shouldDismissSwitcher;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
@end

