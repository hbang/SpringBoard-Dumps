/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController {
	SBAppSliderController *_sliderController;
	UIView *_appContextHostView;
	SBAppSwitcherPageView *_animatingPageView;
	BOOL _finishedSwitcherAnimation;
	BOOL _finishedCrossfadingToHostView;
}
- (id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
- (id)_animationProgressDependency;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_crossfadeApp;
- (void)_evaluateDependenciesForCrossfadeStart;
- (void)_noteCrossfadeDidFinish;
- (void)_noteSwitcherAnimationFinished;
- (void)_prepareAnimation;
- (void)_reportAnimationFinishedIfNecessary;
- (void)_startAnimation;
- (void)dealloc;
@end

