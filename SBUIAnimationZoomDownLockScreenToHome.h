/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownAppToHome.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome {
	SBLockScreenViewController *_lockScreenViewController;
	SBLockToAppStatusBarAnimator *_statusBarAnimator;
	SBIconAnimator *_iconAnimator;
}
- (id)initWithLockScreenViewController:(id)lockScreenViewController;
- (void)_prepareAnimation;
- (BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
- (void)animateZoomWithCompletion:(id)completion;
- (void)cleanupZoom;
- (void)dealloc;
- (void)prepareZoom;
@end

