/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView, SBApplication;

__attribute__((visibility("hidden")))
@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController {
	BOOL _relaunchExpected;
	BOOL _awaitingKeybagRefetch;
	BOOL _appWasActivating;
	UIView *_staticAppView;
}
@property(readonly, assign, nonatomic) SBApplication *app;
- (id)initWithApp:(id)app;
- (BOOL)_animationShouldStart;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (void)_startAnimation;
- (BOOL)_willAnimate;
- (void)dealloc;
@end

