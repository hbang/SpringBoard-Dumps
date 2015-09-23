/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainWorkspaceTransaction.h"
#import "SBUIAnimationControllerObserver.h"


__attribute__((visibility("hidden")))
@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
	NSArray *_topApplications;
	SBWorkspaceAlert *_activatingAlert;
	SBUIAnimationController *_animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	FBDisplayLayoutTransition *_layoutTransition;
	BOOL _deferAlertActivationForAnimationCompletion;
}
@property(copy, nonatomic) id alertActivationBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_activateAlert;
- (void)_begin;
- (void)_didComplete;
- (BOOL)_isFromMainSwitcher;
- (void)_updateSceneLayout;
- (void)_willBegin;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
@end

