/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIAnimationAlertToPhoneBase : SBUIMainScreenAnimationController {
	SBWindow *_transitionWindow;
	SBAlert *_deactivatingAlert;
	UIView<SBWindowContextAppearance> *_viewToAnimate;
	BOOL _reallyFinishedAnimating;
}
@property(retain, nonatomic, getter=_viewToAnimate, setter=_setViewToAnimate:) UIView *viewToAnimate;
- (id)initWithAlert:(id)alert activatingApp:(id)app;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (id)_deactivatingAlert;
- (id)_getTransitionWindow;
- (BOOL)_isApplicationLaunchFinished;
- (void)_maybeReportAnimationFinished;
- (void)_noteAnimationDidFinish;
- (void)_prepareAnimation;
- (void)_reallyFinishedAnimating;
- (void)_setHidden:(BOOL)hidden;
- (BOOL)_shouldAnimateWallpaper;
- (void)dealloc;
@end

