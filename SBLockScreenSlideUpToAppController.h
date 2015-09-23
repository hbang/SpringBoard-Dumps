/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "BSTransactionObserver.h"

@protocol SBLockScreenSlideUpToAppControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenSlideUpToAppController : XXUnknownSuperclass <SBPresentingDelegate, SBUIPasscodeLockViewDelegate, BSTransactionObserver, SBCoordinatedPresenting> {
	BOOL _isInScreenOffMode;
	UIView *_slidingStatusBarView;
	SBLockScreenView *_lockScreenView;
	BOOL _currentlySliding;
	SBLockScreenBounceAnimator *_bounceAnimator;
	_UIDynamicValueAnimation *_dynamicAnimation;
	id<SBPresentingDelegate> _presentingDelegate;
	SBBounceSettings *_bounceSettings;
	SBApplication *_targetApp;
	SBBestAppSuggestion *_targetAppInfo;
	BOOL _targetAppIsSiri;
	BOOL _targetAppIsInCallService;
	BOOL _deactivatingForInCallService;
	BOOL _appSuggestionWasInvoked;
	NSURL *_targetURL;
	UIImage *_grabberImage;
	SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
	BBObserver *_bulletinObserver;
	BOOL _attemptingUnlock;
	BOOL _showingPasscodeView;
	BOOL _dismissingPasscodeView;
	BOOL _defaultImagesNeedUpdateUponPasscodeExit;
	NSMutableArray *_deferredAppUpdateBlocks;
	BOOL _executingDeferredAppUpdateBlocks;
	BOOL _waitingToDeactivateForActivityLaunch;
	id _preUIUnlockActions;
	SBPasscodeLockDisableAssertion *_passcodeDisableAssertionForContinuityUnlock;
	UIView *_clippingView;
	UIView *_appDefaultImageView;
	UIView *_appBackgroundView;
	SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
	UIView *_passcodeOverscrollView;
	SBLockScreenSlideUpToAppWorkspaceTransaction *_slideUpTransaction;
	BOOL _disablingOcclusionsForTargetApp;
	BOOL _launchingAppFromNonOccludedState;
	id<SBLockScreenSlideUpToAppControllerDelegate> _delegate;
	BOOL _didAbortBounce;
	SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAssertion;
	float _boundaryTranslationInY;
}
@property(assign, nonatomic) float boundaryTranslationInY;
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBLockScreenSlideUpToAppControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) BOOL didAbortBounce;
@property(retain, nonatomic) SBDisableAppStatusBarAlphaChangesAssertion *disableStatusBarAssertion;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
- (id)init;
- (void)_activateApp:(id)app withAppInfo:(id)appInfo andURL:(id)url animated:(BOOL)animated;
- (void)_addOrRemovePasscodeViewIfNecessary;
- (void)_animateSlideDownWithVelocity:(CGPoint)velocity completion:(id)completion;
- (void)_animateSlideUpWithVelocity:(CGPoint)velocity completion:(id)completion;
- (void)_cleanupBackgroundLaunchNonsense;
- (void)_cleanupFromDismissal;
- (void)_clearAppDefaultImageAndRemoveFromSuperview:(BOOL)superview;
- (void)_commonGestureCleanup;
- (id)_createGrabberView;
- (void)_deviceBlockedStateChanged:(id)changed;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_finishSlideDownWithCompletion:(id)completion;
- (float)_foregroundTranslationForLocation:(CGPoint)location;
- (void)_handleAppLaunchedUnderLockScreenWithResult:(int)result;
- (id)_lockScreenViewFakeStatusBar;
- (id)_newBounceAnimatorWithGrabberView:(id)grabberView;
- (id)_newDynamicAnimationForTargetValue:(double)targetValue withInitialVelocity:(double)initialVelocity;
- (void)_passcodeLockStateChanged;
- (void)_setupBounceAnimatorAndGrabberView;
- (void)abortAnimatedTransition;
- (void)abortDynamicAnimationForScreenOff;
- (void)activate;
- (void)activateTargetApp;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation presentationBegunHandler:(id)handler;
- (id)bounceAnimator;
- (void)cancelGestureRecognizer:(id)recognizer;
- (void)deactivate;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
- (void)finalizeGesture;
- (BOOL)hasActiveUnlockActionContext;
- (void)hideSlidingStatusBar;
- (BOOL)isPresentingControllerTransitioning;
- (BOOL)isShowingPasscodeView;
- (id)lockScreenView;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
- (void)performGeneralCleanupForUserAction:(BOOL)userAction;
- (void)prepareForSlideUpAnimation;
- (void)presentTargetAppAnimated:(BOOL)animated;
- (BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)presentingController:(id)controller willHandleGesture:(id)gesture;
- (void)presentingControllerDidFinishPresentation:(id)presentingController;
- (void)reenableGestureRecognizer:(id)recognizer;
- (void)setGrabberOnLockScreen:(id)screen;
- (void)setGrabberViewImage:(id)image;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setLockScreenView:(id)view force:(BOOL)force;
- (void)setTargetApp:(id)app withAppSuggestion:(id)appSuggestion;
- (void)setTargetURL:(id)url;
- (void)transactionDidBegin:(id)transaction;
- (void)transactionDidComplete:(id)transaction;
- (void)translateSlidingViewByY:(float)y;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)gesture;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (BOOL)wantsToShowStatusBar;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

