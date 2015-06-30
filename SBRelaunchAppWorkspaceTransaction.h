/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBToAppWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBUIAnimationController *_animationController;
	BOOL _relaunchSuspended;
	BOOL _keepWorkspaceSuspended;
	BOOL _waitForReceiverChange;
}
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application;
- (void)_commit;
- (void)_endAnimation;
- (void)_handleAppRelaunch:(id)relaunch;
- (id)_setupAnimationForApp:(id)app;
- (void)_transactionComplete;
- (void)animationController:(id)controller didCommitAnimation:(BOOL)animation withDuration:(double)duration afterDelay:(double)delay;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationDidStartLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end

