/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "SBCoordinatedPresenting.h"
#import "SpringBoard-Structs.h"
#import "_UISettingsKeyObserver.h"
#import "SBBulletinWindowClient.h"
#import "SBReachabilityObserver.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "SBExtensionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWidgetViewControllerDelegate.h"

@class NSSet, SBWindow, FBUIApplicationResignActiveAssertion, SBChevronView, UIView, NSString, NSTimer, UILongPressGestureRecognizer, SBNotificationCenterViewController, SBLockScreenActionContext, SBNotificationCenterSettings;
@protocol SBPresentingDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterController : XXUnknownSuperclass <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBExtensionHandling, SBReachabilityObserver, SBCoordinatedPresenting> {
	SBNotificationCenterViewController *_viewController;
	UIView *_coveredContentSnapshot;
	SBChevronView *_borrowedGrabberView;
	id _borrowedGrabberWillPresentBlock;
	id _borrowedGrabberHideBlock;
	id _borrowedGrabberCompletionBlock;
	UILongPressGestureRecognizer *_grabberPressGesture;
	id _keyboardNotificationObserverToken;
	SBLockScreenActionContext *_lockScreenActionContext;
	int _transitionState;
	int _presentedState;
	SBNotificationCenterSettings *_settings;
	BOOL _grabberEnabled;
	BOOL _didCoalesceWidgetsConnections;
	NSTimer *_widgetConnectionsTimer;
	FBUIApplicationResignActiveAssertion *_resignActiveAssertion;
}
@property(readonly, assign, nonatomic, getter=isAvailableWhileLocked) BOOL availableWhileLocked;
@property(assign, nonatomic) BOOL blursBackground;
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(assign, nonatomic, getter=isGrabberEnabled) BOOL grabberEnabled;
@property(readonly, assign, nonatomic, getter=isGrabberVisible) BOOL grabberVisible;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) int layoutMode;
@property(readonly, assign, nonatomic) SBLockScreenActionContext *lockScreenActionContext;
@property(readonly, assign, nonatomic, getter=isNotificationsViewAvailableWhileLocked) BOOL notificationsViewAvailableWhileLocked;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic, getter=isPresentingWidgetContent) BOOL presentingWidgetContent;
@property(readonly, assign, nonatomic) SBNotificationCenterSettings *settings;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@property(readonly, assign, nonatomic) UIEdgeInsets todayContentEdgeInsets;
@property(readonly, assign, nonatomic) CGSize todayContentMaxSize;
@property(readonly, assign, nonatomic, getter=isTodayViewAvailableWhileLocked) BOOL todayViewAvailableWhileLocked;
@property(readonly, assign, nonatomic, getter=isTransitioning) BOOL transitioning;
@property(readonly, retain, nonatomic) SBNotificationCenterViewController *viewController;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, assign, nonatomic) SBWindow *window;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)newDynamicAnimationForShow:(BOOL)show targetValue:(double)value withInitialValue:(double)initialValue velocity:(double)velocity extraPull:(BOOL)pull;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (double)transitionAnimationDuration;
- (id)init;
- (void)_beginPresentationWithTouchLocation:(CGPoint)touchLocation setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4;
- (void)_cleanupAfterTransition:(BOOL)transition;
- (void)_didCoalesceWidgetsConnections:(id)connections;
- (void)_endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier animationPostlude:(id)postlude completion:(id)completion;
- (void)_handleActionContextRequiringAuthentication:(id)authentication;
- (void)_handleActionContextRequiringUIUnlock:(id)unlock;
- (BOOL)_handleActionOrRequestWithDefaultAction:(id)defaultAction lockedAction:(id)action;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)necessary;
- (void)_invalidateCoveredContentSnapshot;
- (BOOL)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(id)profileBlock counterpartBlock:(id)block;
- (BOOL)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)featureKeyAvailableWhileLocked isLockedDownByRestrictions:(BOOL *)restrictions;
- (void)_loadViewForWidget:(id)widget prelude:(id)prelude completion:(id)completion;
- (id)_lockScreenViewController;
- (void)_makeVisibleWidgetWithIdentifier:(id)identifier completion:(id)completion;
- (void)_present:(BOOL)present stepper:(id)stepper;
- (void)_present:(BOOL)present withStandardAnimation:(BOOL)standardAnimation stepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
- (void)_presentAnimated:(BOOL)animated setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4 animationPostlude:(id)postlude5 completion:(id)completion;
- (void)_removeCoveredContentSnapshot;
- (BOOL)_requiresAuthenticationForActionContext:(id)actionContext;
- (BOOL)_requiresUIUnlockForActionContext:(id)actionContext;
- (void)_setGrabberEnabled:(BOOL)enabled;
- (void)_setViewUserInteractionEnabled:(BOOL)enabled;
- (void)_setupForDismissal;
- (void)_setupForPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)_setupForViewPresentation;
- (BOOL)_shouldSelectViewControllerAtTouchLocation;
- (void)_updateCoveredContentSnapshot;
- (void)_updateForChangeInMessagePrivacy;
- (void)abortAnimatedTransition;
- (void)beginDismissalWithTouchLocation:(CGPoint)touchLocation;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
- (BOOL)canShowHideGrabberView;
- (void)cancelTransition;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)animated;
- (void)dismissAnimated:(BOOL)animated completion:(id)completion;
- (void)dismissAnimated:(BOOL)animated withStepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
- (void)dismissPresentedWidgetContentAnimated:(BOOL)animated;
- (BOOL)doesSectionWithIdentifierUpdateMessagePrivacyViaSectionParameters:(id)identifierUpdateMessagePrivacyViaSectionParameters;
- (void)enableAllWidgets:(id)widgets;
- (void)endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier completion:(id)completion;
- (void)endTransitionWithVelocity:(CGPoint)velocity completion:(id)completion;
- (void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
- (void)finishedScrollTest;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)handleAction:(id)action forBulletin:(id)bulletin withCompletion:(id)completion;
- (void)handleGrabberPress:(id)press;
- (BOOL)handleMenuButtonTap;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)hideGrabberAnimated:(BOOL)animated completion:(id)completion;
- (void)invalidateLockScreenActionContext;
- (BOOL)isPresentingControllerTransitioning;
- (void)launchExtensionWithBundleID:(id)bundleID options:(id)options completion:(id)completion;
- (void)prepareLayoutForPresentationFromBanner;
- (void)presentAnimated:(BOOL)animated;
- (void)presentAnimated:(BOOL)animated completion:(id)completion;
- (void)registerSharedGrabberView:(id)view withWillPresentBlock:(id)with hideBlock:(id)block andCompletion:(id)completion;
- (void)reloadAllWidgets;
- (void)remoteViewControllerDidConnectForWidget:(id)remoteViewController;
- (void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta useAAGView:(BOOL)view;
- (void)runWidgetLaunchTestWithWidgetWithIdentifier:(id)identifier prelude:(id)prelude completion:(id)completion;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (BOOL)shouldRequestWidgetRemoteViewControllers;
- (void)showGrabberAnimated:(BOOL)animated;
- (void)unregisterSharedGrabberView;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (void)widget:(id)widget requestsLaunchOfURL:(id)url;
- (void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (id)widgetViewControllerHostDelegate:(id)delegate;
@end

