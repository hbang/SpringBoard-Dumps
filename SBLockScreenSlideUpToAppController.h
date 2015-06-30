/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBLockScreenSlideUpToAppControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenSlideUpToAppController : XXUnknownSuperclass <SBPresentingDelegate, SBUIPasscodeLockViewDelegate, SBCoordinatedPresenting> {
	BOOL _isInScreenOffMode;
	UIView *_slidingStatusBarView;
	SBLockScreenView *_lockScreenView;
	BOOL _currentlySliding;
	SBLockScreenBounceAnimator *_bounceAnimator;
	_UIDynamicValueAnimation *_dynamicAnimation;
	id<SBPresentingDelegate> _presentingDelegate;
	SBBounceSettings *_bounceSettings;
	SBApplication *_targetApp;
	LSBestAppSuggestion *_targetAppInfo;
	BOOL _targetAppIsSiri;
	NSURL *_targetURL;
	UIImage *_grabberImage;
	BBObserver *_bulletinObserver;
	BOOL _attemptingUnlock;
	BOOL _showingPasscodeView;
	BOOL _dismissingPasscodeView;
	BOOL _defaultImagesNeedUpdateUponPasscodeExit;
	NSMutableArray *_deferredAppUpdateBlocks;
	BOOL _executingDeferredAppUpdateBlocks;
	BOOL _waitingToDeactivateForActivityLaunch;
	UIView *_clippingView;
	UIView *_appPortraitDefaultImageView;
	UIView *_appLandscapeDefaultImageView;
	UIView *_appBackgroundView;
	SBWallpaperEffectView *_fakeBlurBackgroundView;
	SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
	UIView *_passcodeOverscrollView;
	UIView *_appContextHostView;
	BOOL _disableGracePeriodForCamera;
	SBPasscodeLockDisableAssertion *_disableGracePeriodForCameraAssertion;
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
- (void)_cleanupBackgroundLaunchAndContextHostingNonsense;
- (void)_cleanupFromDismissal;
- (void)_commonGestureCleanup;
- (void)_deviceBlockedStateChanged:(id)changed;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_finishSlideDownWithCompletion:(id)completion;
- (float)_foregroundTranslationForLocation:(CGPoint)location;
- (void)_handleAppLaunchedUnderLockScreenWithResult:(int)result;
- (id)_lockScreenViewFakeStatusBar;
- (id)_newBounceAnimatorWithGrabberView:(id)grabberView;
- (id)_newDynamicAnimationForTargetValue:(double)targetValue withInitialVelocity:(double)initialVelocity;
- (id)_newGrabberView;
- (void)_passcodeLockStateChanged;
- (void)_reloadAppDefaultImages;
- (void)_setupBounceAnimatorAndGrabberView;
- (void)abortAnimatedTransition;
- (void)abortDynamicAnimationForScreenOff;
- (void)activate;
- (void)activateTargetApp;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
- (id)bounceAnimator;
- (void)cancelGestureRecognizer:(id)recognizer;
- (void)cleanupFromGesture;
- (id)customSlideToUnlockText;
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
- (void)prepareForSlideUpAnimation;
- (void)presentTargetAppAnimated:(BOOL)animated;
- (BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)presentingController:(id)controller willHandleGesture:(id)gesture;
- (void)presentingControllerDidFinishPresentation:(id)presentingController;
- (void)reenableGestureRecognizer:(id)recognizer;
- (void)setDisableGracePeriodForCamera:(BOOL)camera;
- (void)setGrabberOnLockScreen:(id)screen;
- (void)setGrabberViewImage:(id)image;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setLockScreenView:(id)view force:(BOOL)force;
- (void)setTargetApp:(id)app withLSInfo:(id)lsinfo;
- (void)setTargetURL:(id)url;
- (void)translateSlidingViewByY:(float)y;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)gesture;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (BOOL)wantsToShowCustomSlideToUnlockText;
- (BOOL)wantsToShowStatusBar;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

