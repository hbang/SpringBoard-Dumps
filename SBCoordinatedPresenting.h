/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBCoordinatedPresenting <NSObject>
@optional
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@required
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@optional
@property(readonly, assign, nonatomic) NSSet *gestures;
@required
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@optional
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@required
- (void)abortAnimatedTransition;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
@optional
- (void)cancelGestureRecognizer:(id)recognizer;
@required
- (void)endTransitionWithVelocity:(CGPoint)velocity completion:(id)completion;
- (BOOL)isPresentingControllerTransitioning;
@optional
- (void)reenableGestureRecognizer:(id)recognizer;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)gesture;
@required
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
@end

