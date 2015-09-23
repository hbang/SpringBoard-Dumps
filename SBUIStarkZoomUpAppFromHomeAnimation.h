/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {
	UIView *_viewToAnimate;
	SBIconAnimator *_iconAnimator;
	SBAlert *_alertImpersonator;
	BOOL _animationFinished;
	BOOL _fromAssistant;
}
- (id)initWithActivatingApp:(id)activatingApp alertImpersonator:(id)impersonator starkScreenController:(id)controller;
- (void)_animateZoomWithCompletion:(id)completion;
- (double)_animationDelay;
- (double)_animationDuration;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_cleanupHosting;
- (void)_noteDependencyDidInvalidate;
- (void)_noteZoomDidFinish;
- (void)_prepareAnimation;
- (void)_prepareZoom;
- (void)_startAnimation;
- (id)_viewToAnimate;
- (void)dealloc;
- (void)iconAnimatorWasInvalidated:(id)invalidated;
@end

