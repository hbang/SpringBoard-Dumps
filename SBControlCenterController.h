/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCoordinatedPresenting.h"
#import "SpringBoard-Structs.h"
#import "SBControlCenterViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, FBUIApplicationResignActiveAssertion, SBWindow, NSMutableSet, SBChevronView, UIView, NSString, _UIBackdropView, _UIDynamicValueAnimation, SBControlCenterViewController, SBControlCenterRootView, UIDynamicAnimator, NSHashTable, UIImageView;
@protocol SBPresentingDelegate;

__attribute__((visibility("hidden")))
@interface SBControlCenterController : XXUnknownSuperclass <SBControlCenterViewControllerDelegate, SBCoordinatedPresenting> {
	SBWindow *_window;
	SBControlCenterRootView *_rootView;
	SBControlCenterViewController *_viewController;
	UIImageView *_coveredContentSnapshot;
	UIView *_fullScreenGrabberContainer;
	_UIBackdropView *_fullScreenGrabberBackdrop;
	SBChevronView *_fullScreenChevron;
	FBUIApplicationResignActiveAssertion *_resignActiveAssertion;
	NSMutableSet *_preventDismissalOnLockReasons;
	BOOL _uiLocked;
	NSHashTable *_observers;
	int _orientation;
	BOOL _animatingInitialPresentation;
	BOOL _gotFirstBackdropUpdate;
	BOOL _completingTransitionOpen;
	_UIDynamicValueAnimation *_bounceAnimation;
	UIDynamicAnimator *_animator;
	unsigned _animatorStopCount;
	CGRect _animatorStopFrame;
	BOOL _inGrabberOnlyMode;
	BOOL _presented;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	float _backgroundBrightness;
}
@property(assign, nonatomic, getter=isUILocked) BOOL UILocked;
@property(assign, nonatomic) float backgroundBrightness;
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic, getter=isFullyRevealed) BOOL fullyRevealed;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(assign, nonatomic) BOOL inGrabberOnlyMode;
@property(assign, nonatomic, getter=isPresented) BOOL presented;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@property(assign, nonatomic, getter=isTransitioning) BOOL transitioning;
+ (id)_sharedInstanceCreatingIfNeeded:(BOOL)needed;
+ (void)notifyControlCenterControl:(id)control didActivate:(BOOL)activate;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (BOOL)_allowShowTransitionSystemGesture;
- (void)_beginPresentation;
- (void)_cleanupAnimator;
- (void)_clearCoveredContentSnapshot;
- (float)_controlCenterHeightForTouchLocation:(CGPoint)touchLocation;
- (void)_dismissOnLock;
- (void)_dismissWithDuration:(double)duration additionalAnimations:(id)animations completion:(id)completion;
- (void)_endPresentation;
- (void)_enumerateObservers:(id)observers;
- (void)_finishPresenting:(BOOL)presenting completion:(id)completion;
- (void)_lockStateChangedNotification:(id)notification;
- (id)_newDynamicAnimationForShow:(BOOL)show currentValue:(double)value velocity:(double)velocity unitSize:(double)size;
- (void)_presentWithDuration:(double)duration completion:(id)completion;
- (void)_revealSlidingViewToHeight:(float)height;
- (void)_setLockHUDHidden:(BOOL)hidden;
- (void)_uiRelockedNotification:(id)notification;
- (void)_updateCoveredContentSnapshot;
- (void)_updateGrabberVisibility;
- (void)_updateRevealPercentage:(float)percentage;
- (float)_verticalPercentageMovedOnScreenForY:(float)y stopY:(float)y2;
- (id)_window;
- (float)_yValueForClosed;
- (float)_yValueForOpen;
- (void)abortAnimatedTransition;
- (void)addObserver:(id)observer;
- (BOOL)allowHideTransition;
- (BOOL)allowShowTransition;
- (BOOL)allowShowTransitionSystemGesture;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)beginTransitionWithTouchLocation:(CGPoint)touchLocation;
- (void)cancelTransition;
- (void)controlCenterViewController:(id)controller backdropViewDidUpdate:(id)backdropView;
- (BOOL)controlCenterViewController:(id)controller canHandleGestureRecognizer:(id)recognizer;
- (void)controlCenterViewController:(id)controller handlePan:(id)pan;
- (void)controlCenterViewController:(id)controller handleTap:(id)tap;
- (void)controlCenterViewControllerWantsDismissal:(id)dismissal;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)animated;
- (void)dismissAnimated:(BOOL)animated completion:(id)completion;
- (void)dismissAnimated:(BOOL)animated withAdditionalAnimations:(id)additionalAnimations completion:(id)completion;
- (void)endTransitionWithVelocity:(CGPoint)velocity completion:(id)completion;
- (void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
- (BOOL)handleMenuButtonTap;
- (void)hideGrabberAnimated:(BOOL)animated;
- (void)hideGrabberAnimated:(BOOL)animated completion:(id)completion;
- (BOOL)isAvailableWhileLocked;
- (BOOL)isGrabberVisible;
- (BOOL)isPresentingControllerTransitioning;
- (BOOL)isVisible;
- (void)loadView;
- (void)presentAnimated:(BOOL)animated;
- (void)presentAnimated:(BOOL)animated completion:(id)completion;
- (void)preventDismissalOnLock:(BOOL)lock forReason:(id)reason;
- (void)removeObserver:(id)observer;
- (void)resetControlAlpha;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)showGrabberAnimated:(BOOL)animated;
- (void)updateControlAlphaForBrightness:(float)brightness;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (BOOL)wantsFullScreenLayout;
@end

