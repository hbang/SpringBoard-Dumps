/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSTransactionObserver.h"


@protocol SBUIAnimationControllerObserver <BSTransactionObserver>
@optional
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)animationControllerDidRevealApplication:(id)animationController;
@end

