/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownApp.h"

@class SBIconZoomAnimator;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppToHome : SBUIAnimationZoomDownApp {
	SBIconZoomAnimator *_zoomAnimator;
}
- (BOOL)_shouldUpdateStatusBarOnContentRestore;
- (void)animateZoomWithCompletion:(id)completion;
- (void)cleanupZoom;
- (void)dealloc;
- (void)prepareZoom;
@end

