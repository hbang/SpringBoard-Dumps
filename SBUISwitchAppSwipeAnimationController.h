/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController {
	BSUIAnimationFactory *_animationFactory;
	id<SBDosidoAnimator> _currentAnimator;
	unsigned _currentDirection;
	SBSceneLayoutAnimationWrapperView *_startingView;
	SBSceneLayoutAnimationWrapperView *_targetView;
	SBWorkspaceApplicationTransitionContext *_startingTransitionContext;
	SBWorkspaceApplicationTransitionContext *_targetTransitionContext;
	SBWorkspaceApplicationTransitionContext *_endingTransitionContext;
}
@property(readonly, assign, nonatomic) unsigned currentDirection;
@property(readonly, retain, nonatomic) SBWorkspaceApplicationTransitionContext *endingTransitionContext;
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (id)_animationFactory;
- (void)_animator:(id)animator finishedAnimating:(BOOL)animating;
- (void)_cleanupAnimation;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)_newAnimationWrapperViewForLayoutState:(id)layoutState roleMask:(unsigned)mask displayMode:(int)mode;
- (id)_newDosidoAnimatorForDirection:(unsigned)direction;
- (id)_newStretchTransformerForDirection:(unsigned)direction;
- (void)_startAnimatingInDirection:(unsigned)direction;
- (void)_startAnimation;
- (void)dealloc;
- (void)enableSteppingWithAnimationSettings:(id)animationSettings;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (BOOL)isStepped;
- (void)setStepPercentage:(float)percentage;
- (void)startAnimatingInDirection:(unsigned)direction withContext:(id)context;
- (float)stepPercentage;
@end
