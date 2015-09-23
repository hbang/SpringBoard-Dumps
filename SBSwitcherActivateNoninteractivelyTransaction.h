/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainWorkspaceTransaction.h"
#import "SBUIAnimationControllerObserver.h"


__attribute__((visibility("hidden")))
@interface SBSwitcherActivateNoninteractivelyTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBUIAnimationController *_animationController;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_begin;
- (void)_beginAnimation;
- (void)_lockOrientation;
- (void)_releaseOrientationLock;
- (void)_setupAnimation;
- (void)_willComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
@end

