/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeAlertToSpringBoard : SBUIMainScreenAnimationController {
	SBAlert *_fromAlert;
	SBLockToAppStatusBarAnimator *_statusBarAnimator;
}
- (id)initFromAlert:(id)alert;
- (void)_startAnimation;
- (void)dealloc;
@end

