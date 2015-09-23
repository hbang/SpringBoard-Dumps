/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppsToAlert : SBUIMainScreenAnimationController {
	SBAlertManager *_alertManager;
	SBWorkspaceApplication *_primaryApp;
	SBWindowSelfHostWrapper *_appContextHostWrapper;
	SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
@end

