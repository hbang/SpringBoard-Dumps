/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

__attribute__((visibility("hidden")))
@interface SBUIStarkAnimationSlideDownApp : SBUIStarkScreenAnimationController {
	UIView *_viewToAnimate;
	UIView *_activatingContextHostView;
	UIView *_deactivatingContextHostView;
	UIView *_deactivatingDimmingView;
	SBAlert *_alertImpersonator;
}
- (id)initWithActivatingApp:(id)activatingApp alertImpersonator:(id)impersonator deactivatingApp:(id)app starkScreenController:(id)controller;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)dealloc;
@end

