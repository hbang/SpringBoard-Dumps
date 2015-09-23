/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainWorkspaceTransaction.h"
#import "SBUIAnimationControllerObserver.h"


__attribute__((visibility("hidden")))
@interface SBAlertToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBWorkspaceAlert *_activatingAlert;
	SBWorkspaceAlert *_deactivatingAlert;
	BOOL _activation;
	SBUIAnimationController *_animation;
	BOOL _animatingAlertDeactivation;
	FBDisplayLayoutTransition *_layoutTransition;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_alertAnimationComplete:(id)complete;
- (void)_begin;
- (void)_cleanUpAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_didComplete;
- (void)_doAlertTransition;
- (BOOL)_isFromMainSwitcher;
- (void)_updateSceneLayout;
- (void)_willBegin;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
@end

