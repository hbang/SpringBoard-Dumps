/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIStarkAnimationZoomUpApp : SBUIStarkScreenAnimationController {
	SBAlert *_alertImpersonator;
	UIView *_viewToAnimate;
	UIView *_contextHostView;
	BOOL _requiresHostView;
	BOOL _activateBeforeHosting;
}
- (id)initWithActivatingApp:(id)activatingApp starkScreenController:(id)controller;
- (id)initWithActivatingApp:(id)activatingApp withAlertImpersonator:(id)alertImpersonator starkScreenController:(id)controller;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;
- (void)dealloc;
@end

