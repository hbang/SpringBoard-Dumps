/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIAnimationForAlertAnimationProvider : SBUIMainScreenAnimationController {
	id<SBWorkspaceAlertAnimationProviding> _alert;
	BOOL _visible;
}
- (id)initWithTransitionContextProvider:(id)transitionContextProvider alert:(id)alert visible:(BOOL)visible;
- (void)_startAnimation;
- (void)dealloc;
@end
