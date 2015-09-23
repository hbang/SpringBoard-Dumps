/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIMainScreenAnimationController : SBUIAnimationController {
}
@property(readonly, retain, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (void)__startAnimation;
- (void)_begin;
- (void)_cleanupAnimation;
- (void)_dismissBannerAnimated:(BOOL)animated;
- (id)_getTransitionWindow;
- (id)_primaryAppOrAnyAppFromSet:(id)set;
- (void)_removeWallpaperAnimationPriorityWithFactory:(id)factory;
- (BOOL)_shouldDismissBanner;
- (id)activatingApp;
- (id)deactivatingApp;
@end

