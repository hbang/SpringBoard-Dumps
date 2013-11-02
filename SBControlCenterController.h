/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBControlCenterViewControllerDelegate.h"

@class NSMutableSet, SBChevronView, NSHashTable, UIView, SBApplication, _UIBackdropView, SBControlCenterWindow, SBControlCenterRootView, SBControlCenterViewController;

__attribute__((visibility("hidden")))
@interface SBControlCenterController : XXUnknownSuperclass <SBControlCenterViewControllerDelegate> {
	SBControlCenterWindow *_window;
	SBControlCenterRootView *_rootView;
	SBControlCenterViewController *_viewController;
	UIView *_fullScreenGrabberContainer;
	_UIBackdropView *_fullScreenGrabberBackdrop;
	SBChevronView *_fullScreenChevron;
	NSMutableSet *_preventDismissalOnLockReasons;
	BOOL _uiLocked;
	NSHashTable *_observers;
	int _orientation;
	BOOL _animatingInitialPresentation;
	BOOL _gotFirstBackdropUpdate;
	BOOL _inGrabberOnlyMode;
	BOOL _presented;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	SBApplication *_coveredApplication;
}
@property(assign, nonatomic, getter=isUILocked) BOOL UILocked;
@property(retain, nonatomic) SBApplication *coveredApplication;
@property(assign, nonatomic, getter=isFullyRevealed) BOOL fullyRevealed;
@property(assign, nonatomic) BOOL inGrabberOnlyMode;
@property(assign, nonatomic, getter=isPresented) BOOL presented;
@property(assign, nonatomic, getter=isTransitioning) BOOL transitioning;
+ (id)_sharedInstanceCreatingIfNeeded:(BOOL)needed;
+ (void)notifyControlCenterControl:(id)control didActivate:(BOOL)activate;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (BOOL)_allowsShowTransition;
- (void)_beginPresentation;
- (float)_controlCenterHeightForTouchLocation:(CGPoint)touchLocation;
- (id)_createDynamicAnimationForShow:(BOOL)show currentValue:(double)value velocity:(double)velocity unitSize:(double)size;
- (void)_dismissOnLock;
- (void)_dismissWithDuration:(double)duration additionalAnimations:(id)animations completion:(id)completion;
- (void)_endPresentation;
- (void)_enumerateObservers:(id)observers;
- (void)_finishPresenting:(BOOL)presenting completion:(id)completion;
- (void)_lockStateChangedNotification:(id)notification;
- (void)_presentWithDuration:(double)duration completion:(id)completion;
- (void)_revealSlidingViewToHeight:(float)height;
- (void)_setNCGrabberHidden:(BOOL)hidden;
- (void)_uiRelockedNotification:(id)notification;
- (void)_updateGrabberVisibility;
- (void)_updateRevealPercentage:(float)percentage;
- (id)_window;
- (float)_yValueForClosed;
- (float)_yValueForOpen;
- (void)addObserver:(id)observer;
- (BOOL)allowHideTransition;
- (BOOL)allowShowTransition;
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
- (BOOL)handleMenuButtonTap;
- (void)hideGrabberAnimated:(BOOL)animated;
- (void)hideGrabberAnimated:(BOOL)animated completion:(id)completion;
- (BOOL)isAvailableWhileLocked;
- (BOOL)isGrabberVisible;
- (BOOL)isVisible;
- (void)loadView;
- (void)presentAnimated:(BOOL)animated;
- (void)presentAnimated:(BOOL)animated completion:(id)completion;
- (void)preventDismissalOnLock:(BOOL)lock forReason:(id)reason;
- (void)removeObserver:(id)observer;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)showGrabberAnimated:(BOOL)animated;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (BOOL)wantsFullScreenLayout;
@end

