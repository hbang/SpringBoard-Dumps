/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController {
	BOOL _relaunchExpected;
	BOOL _awaitingKeybagRefetch;
	BOOL _appWasActivating;
	UIView *_staticAppView;
	UIView *_hostView;
}
@property(readonly, retain, nonatomic) SBApplication *app;
- (id)initWithApp:(id)app starkScreenController:(id)controller;
- (id)_animationProgressDependency;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_hideAppHostView;
- (void)_prepareAnimation;
- (void)_setupStartDependencies;
- (BOOL)_shouldDismissBanner;
- (void)_startAnimation;
- (BOOL)_willAnimate;
- (void)dealloc;
@end

