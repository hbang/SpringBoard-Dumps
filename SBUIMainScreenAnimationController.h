/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIMainScreenAnimationController : SBUIAnimationController {
	BOOL _needsToClearBulletinWindowOrientation;
}
- (id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
- (void)__startAnimation;
- (void)_cleanupAnimation;
- (void)_clearBulletinWindowOverrideOrientationIfNecessary;
- (void)_dismissBannerAnimated:(BOOL)animated;
- (id)_getTransitionWindow;
- (void)_noteAnimationDidCommit:(BOOL)_noteAnimation withDuration:(double)duration afterDelay:(double)delay;
- (void)_removeWallpaperAnimationPriorityWithFactory:(id)factory;
- (BOOL)_shouldDismissBanner;
- (void)beginAnimation;
- (void)dealloc;
@end

