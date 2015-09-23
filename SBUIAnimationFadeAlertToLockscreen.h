/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeAlertToLockscreen : SBUIMainScreenAnimationController {
	SBLockScreenViewController *_lockScreenViewController;
	SBWorkspaceAlert *_deactivatingAlert;
	SBAlertManager *_alertManager;
	SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
@end

