/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkStartupAnimation.h"


__attribute__((visibility("hidden")))
@interface SBUIStarkStartupToLockoutAnimation : SBUIStarkStartupAnimation {
	NSMutableArray *_viewsToSlideUp;
	SBStarkLockOutView *_toLockoutView;
	unsigned _significantAnimationsRemaining;
}
- (id)initFromLockoutView:(id)lockoutView toLockoutView:(id)lockoutView2 starkScreenController:(id)controller;
- (void)_cleanupAnimation;
- (void)_finishViewForSlideUp:(id)slideUp;
- (void)_noteSignificantAnimationFinished;
- (void)_prepareAnimation;
- (void)_slideUpViewsWithSlideSettings:(id)slideSettings fadeSettings:(id)settings delayIncrement:(double)increment;
- (void)_startAnimation;
- (void)dealloc;
@end

