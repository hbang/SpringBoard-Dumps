/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceTransitionLayoutDelegate> {
	id<SBSwitchAppSwipeTransactionDelegate> _delegate;
	SBUISwitchAppSwipeAnimationController *_animationController;
	SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
	id _layoutCompletion;
	id _layoutContinuation;
	NSTimer *_delayedAppLaunchTimer;
	BOOL _trackingGesture;
	BOOL _endLayoutTransition;
	BOOL _completingAnimation;
	float _basePercentage;
	SBWorkspaceApplicationTransitionContext *_originalTransitionContext;
	SBWorkspaceApplicationTransitionContext *_startingTransitionContext;
	SBWorkspaceApplicationTransitionContext *_nextTransitionContext;
	SBWorkspaceApplicationTransitionContext *_previousTransitionContext;
	SBWorkspaceApplicationTransitionContext *_endingTransitionContext;
	SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBSwitchAppSwipeTransactionDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) SBWorkspaceApplicationTransitionContext *endingTransitionContext;
@property(readonly, assign, nonatomic, getter=isFinishedAnimating) BOOL finishedAnimating;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBWorkspaceApplicationTransitionContext *nextTransitionContext;
@property(retain, nonatomic) SBWorkspaceApplicationTransitionContext *previousTransitionContext;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic, getter=isTrackingGesture) BOOL trackingGesture;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (id)initWithTransitionRequest:(id)transitionRequest originalTransitionContext:(id)context;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_cancelPendingAppLaunch;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (void)_continueLayoutTransitionToCompletion:(BOOL)completion startAutoPiP:(BOOL)p updateScenes:(BOOL)scenes;
- (void)_continueLayoutTransitionWithContext:(id)context toCompletion:(BOOL)completion startAutoPiP:(BOOL)p updateScenes:(BOOL)scenes;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_finishWithCompletionType:(int)completionType;
- (void)_gestureCancelled;
- (void)_gestureChanged:(float)changed;
- (void)_gestureEndedWithCompletionType:(int)completionType;
- (void)_pendingAppLaunchTimerFired;
- (void)_schedulePendingAppLaunch;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)layoutStateForTransitionContext:(id)transitionContext;
- (id)originalLayoutStateForTransitionContext:(id)transitionContext;
- (void)startTrackingGesture:(id)gesture;
- (void)systemGestureStateChanged:(id)changed;
- (void)transaction:(id)transaction didEndLayoutTransitionWithContinuation:(id)continuation;
- (void)transaction:(id)transaction performTransitionWithCompletion:(id)completion;
- (void)transactionWillBeginLayoutTransition:(id)transaction;
- (CGRect)transitionContext:(id)context referenceFrameForEntity:(id)entity;
@end
