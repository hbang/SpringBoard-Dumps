/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBIconAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface SBIconAnimator : XXUnknownSuperclass {
	float _fraction;
	BOOL _startedAnimation;
	BOOL _startAnimationAfterRotationEnds;
	BOOL _windowIsRotating;
	BOOL _cleanedUp;
	NSMutableArray *_pendedAnimationContexts;
	SBFolderControllerAnimationContext *_animationContext;
	NSString *_instanceIdentifier;
	BOOL _invalidated;
	id<SBIconAnimatorDelegate> _delegate;
	SBIconAnimationSettings *_settings;
	SBFolderController *_folderController;
}
@property(readonly, assign, nonatomic) SBFolderControllerAnimationContext *animationContext;
@property(assign, nonatomic) id<SBIconAnimatorDelegate> delegate;
@property(readonly, assign, nonatomic) SBFolderController *folderController;
@property(assign, nonatomic) BOOL invalidated;
@property(readonly, assign, nonatomic) UIView *referenceView;
@property(retain, nonatomic) SBIconAnimationSettings *settings;
- (id)initWithFolderController:(id)folderController;
- (void)_allowRotationOnMainWindowIfNecessary:(BOOL)necessary;
- (void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
- (void)_animateToFractionFromContext:(id)context;
- (void)_animateToFractionFromPendingContexts;
- (id)_centralAnimationFactory;
- (void)_cleanupAnimation;
- (void)_invalidateCompletions;
- (BOOL)_isDelayedForRotation;
- (unsigned)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(float)fraction;
- (void)_windowFinishedRotating;
- (void)animateToFraction:(float)fraction afterDelay:(double)delay withCompletion:(id)completion;
- (id)centralAnimationFactory;
- (void)cleanup;
- (void)dealloc;
- (void)prepare;
- (void)setFraction:(float)fraction;
@end

