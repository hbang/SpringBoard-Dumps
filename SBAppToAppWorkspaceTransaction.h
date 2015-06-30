/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBToAppWorkspaceTransaction.h"
#import "SBUIAnimationControllerDelegate.h"


__attribute__((visibility("hidden")))
@interface SBAppToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication *_fromApp;
	SBUIAnimationController *_animationController;
	BKSApplicationActivationAssertion *_suspendingAppAssertion;
	BOOL _deactivateAlertsAfterLaunch;
	BOOL _shouldLaunchPNGLess;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
	BOOL _deactivatingAppFromAppToAppGesture;
}
@property(retain, nonatomic) SBApplication *fromApp;
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager exitedApp:(id)app;
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to;
- (void)_beginAnimation;
- (BOOL)_canBeInterrupted;
- (void)_commit;
- (void)_endAnimation;
- (void)_handleAppDidNotChange;
- (void)_interruptWithReason:(int)reason;
- (void)_kickOffActivation;
- (id)_setupAnimationFrom:(id)from to:(id)to;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (void)_transactionComplete;
- (void)animationController:(id)controller didCommitAnimation:(BOOL)animation withDuration:(double)duration afterDelay:(double)delay;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidDeactivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end

