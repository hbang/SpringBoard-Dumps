/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBUIAnimationControllerDelegate.h"

@class BKSApplicationActivationAssertion, SBUIAnimationController, SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication *_topApplication;
	BKSApplicationActivationAssertion *_topApplicationActivationAssertion;
	BOOL _topApplicationSuppressesSpringBoardStatusBar;
	SBAlert *_activatingAlert;
	SBUIAnimationController *_animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	BOOL _suspendWorkspace;
}
@property(copy, nonatomic) id alertActivationBlock;
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager alert:(id)alert overTopApplication:(id)application;
- (void)_commit;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfAlertWillActivate:(id)selfAlert overAlerts:(id)alerts;
@end

