/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SBAlertView.h"
#import "_UIGlintyStringViewDelegate.h"
#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"

@class SBLockScreenBounceAnimator, SBWallpaperEffectView, SBLockOverlayStylePropertiesFactory, NSMutableSet, SBFLockScreenDateView, UIView, _UIGlintyStringView, NSMutableArray, SBDisableAppStatusBarAlphaChangesAssertion, UIScrollView, SBLockScreenScrollView, NSSet, _UILegibilitySettings, SBSlideToUnlockFailureRecognizer, SBChevronView, SBLockScreenBatteryChargingView, SBLockScreenTimerView, SBSlideUpAppGrabberView, _UIBackdropView, UIColor, NSCountedSet, NSString, SBFakeStatusBarView;
@protocol _SBFVibrantView, SBUIPasscodeLockView, SBLegibility, SBLockScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenView : SBAlertView <UIScrollViewDelegate, _UIGlintyStringViewDelegate, _UISettingsKeyObserver, SBCoordinatedPresenting, SBPresentingDelegate> {
	SBLockOverlayStylePropertiesFactory *_contentUnderlayOverride;
	NSMutableSet *_contentUnderlayRequesters;
	NSMutableArray *_contentOverlays;
	UIView *_passcodeOverlayView;
	_UIBackdropView *_wallpaperBlurView;
	UIView *_foregroundView;
	SBLockScreenScrollView *_foregroundScrollView;
	UIView *_foregroundLockView;
	UIView *_foregroundLockUnderlayView;
	UIView *_foregroundLockContentView;
	UIView *_foregroundLockContentOverlaysView;
	UIView *_foregroundLockHUDView;
	SBFLockScreenDateView *_dateView;
	UIView<SBLegibility> *_statusTextView;
	SBLockScreenTimerView *_timerView;
	_UIGlintyStringView<_SBFVibrantView> *_slideToUnlockView;
	UIView *_slideToUnlockParentSpringView;
	UIView *_slideToUnlockSpringView;
	BOOL _isShakingSlideToUnlockText;
	BOOL _isAnimatingSlideToUnlockText;
	BOOL _isUpdatingSlideToUnlockTextAnimated;
	NSCountedSet *_slideToUnlockWhiteModeRequesters;
	SBWallpaperEffectView *_slideToUnlockBackgroundView;
	SBWallpaperEffectView *_topGrabberBackgroundView;
	SBWallpaperEffectView *_bottomGrabberBackgroundView;
	SBWallpaperEffectView *_cameraGrabberBackgroundView;
	SBWallpaperEffectView *_bottomLeftGrabberBackgroundView;
	SBChevronView<_SBFVibrantView> *_topGrabberView;
	SBChevronView<_SBFVibrantView> *_bottomGrabberView;
	SBSlideUpAppGrabberView<_SBFVibrantView, SBLegibility> *_cameraGrabberView;
	SBSlideUpAppGrabberView<_SBFVibrantView, SBLegibility> *_bottomLeftGrabberView;
	UIView<SBUIPasscodeLockView> *_passcodeView;
	UIView *_passcodeOverscrollBackgroundView;
	SBLockScreenBatteryChargingView *_batteryChargingView;
	UIView *_modalAlertView;
	UIView *_notificationView;
	UIView *_emergencyCallView;
	UIView *_mediaControlsContainerView;
	UIView *_mediaControlsView;
	UIView *_pluginView;
	UIView *_pluginBackgroundView;
	unsigned _pluginPresentationStyle;
	NSMutableSet *_foregroundHiddenRequesters;
	NSMutableSet *_foregroundLockContentHiddenRequesters;
	NSMutableSet *_foregroundLockContentOverlaysHiddenRequesters;
	NSMutableSet *_foregroundLockHUDHiddenRequesters;
	NSMutableSet *_slideToUnlockHiddenRequesters;
	NSMutableSet *_modalAlertHiddenRequesters;
	NSMutableSet *_notificationsHiddenRequesters;
	NSMutableSet *_passcodeHiddenRequesters;
	NSMutableSet *_topGrabberHiddenRequesters;
	NSMutableSet *_bottomGrabberHiddenRequesters;
	NSMutableSet *_cameraGrabberHiddenRequesters;
	NSMutableSet *_bottomLeftGrabberHiddenRequesters;
	NSMutableSet *_statusTextHiddenRequesters;
	NSMutableSet *_mediaControlsHiddenRequesters;
	NSMutableSet *_pluginHiddenRequesters;
	NSMutableSet *_scrollingDisabledRequesters;
	NSMutableSet *_scrollViewInteractionDisabledRequesters;
	float _foregroundTranslationY;
	SBLockScreenBounceAnimator *_bounceAnimator;
	NSMutableArray *_scrollCompletionBlocks;
	int _currentPage;
	CGPoint _startingContentOffset;
	BOOL _scrolling;
	float _notificationViewVerticalOffset;
	BOOL _setGrabberOrigins;
	float _topGrabberOriginalOriginY;
	float _bottomGrabberOriginalOriginY;
	float _currentBlurRadius;
	SBLockOverlayStylePropertiesFactory *_defaultUnderlayPropertiesFactory;
	UIView *_whiteUnderlayView;
	SBFakeStatusBarView *_fakePasscodeStatusBarView;
	SBFakeStatusBarView *_fakeLockStatusBarView;
	SBFakeStatusBarView *_fakeStatusBarWithTimeView;
	SBDisableAppStatusBarAlphaChangesAssertion *_statusBarAssertion;
	SBSlideToUnlockFailureRecognizer *_slideToUnlockFailureRecognizer;
	int _slideToUnlockFailureGestureToken;
	BOOL _slideToUnlockFailureRecognizerNeedsRemoval;
	BOOL _showingEmergencyCall;
	id<SBPresentingDelegate> _presentingDelegate;
	BOOL _statusBarLegibilityEnabled;
	BOOL _legibilitySettingsOverrideVibrancy;
	id<SBLockScreenViewDelegate> _delegate;
	_UILegibilitySettings *_legibilitySettings;
	UIColor *_effectivePasscodeTintColor;
	float _effectivePasscodeTintAlpha;
}
@property(retain, nonatomic) SBLockScreenBatteryChargingView *batteryChargingView;
@property(retain, nonatomic) SBChevronView *bottomGrabberView;
@property(retain, nonatomic) SBSlideUpAppGrabberView<_SBFVibrantView> *bottomLeftGrabberView;
@property(retain, nonatomic) SBSlideUpAppGrabberView<_SBFVibrantView> *cameraGrabberView;
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(retain, nonatomic) SBFLockScreenDateView *dateView;
@property(readonly, copy) NSString *debugDescription;
@property(assign) id<SBLockScreenViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic, getter=_effectivePasscodeTintAlpha, setter=_setEffectivePasscodeTintAlpha:) float effectivePasscodeTintAlpha;
@property(retain, nonatomic, getter=_effectivePasscodeTintColor, setter=_setEffectivePasscodeTintColor:) UIColor *effectivePasscodeTintColor;
@property(readonly, assign, nonatomic) UIView *foregroundView;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) BOOL isShakingSlideToUnlockText;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) BOOL legibilitySettingsOverrideVibrancy;
@property(retain, nonatomic) UIView *mediaControlsView;
@property(retain, nonatomic) UIView *modalAlertView;
@property(retain, nonatomic) UIView *notificationView;
@property(retain, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView;
@property(retain, nonatomic) UIView *pluginBackgroundView;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic) UIScrollView *scrollView;
@property(assign, nonatomic) BOOL statusBarLegibilityEnabled;
@property(retain, nonatomic) UIView<SBLegibility> *statusTextView;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@property(retain, nonatomic) SBLockScreenTimerView *timerView;
@property(retain, nonatomic) SBChevronView *topGrabberView;
- (id)initWithFrame:(CGRect)frame;
- (void)_addBounceAnimator;
- (void)_addGrabberViews;
- (void)_addLockContentOverlay:(id)overlay;
- (void)_addLockContentUnderlayWithRequester:(id)requester;
- (void)_addOrRemoveFakeStatusBars;
- (void)_addViews;
- (void)_adjustTextBlurForPercentScrolled:(float)percentScrolled;
- (void)_adjustTopAndBottomGrabbersForPercentScrolled:(float)percentScrolled;
- (id)_averageWallpaperColorForFrame:(CGRect)frame;
- (void)_beginCrossfadingFakeStatusBars;
- (float)_bottomGrabberYOriginForPercentScrolled:(float)percentScrolled;
- (id)_debugDescription;
- (id)_defaultSlideToUnlockText;
- (BOOL)_disallowScrollingInTouchedView:(id)touchedView;
- (id)_effectiveStatusBarColor;
- (int)_effectiveStatusBarLegibilityStyle;
- (void)_endCrossfadingFakeStatusBars;
- (void)_evaluateOverlaysForChange;
- (BOOL)_hasLockContentUnderlayRequesterOtherThanRequester:(id)requester;
- (BOOL)_isPluginBelowForegroundScrollView;
- (BOOL)_isScrollOffsetOnPage;
- (BOOL)_isValidPage:(unsigned)page;
- (void)_layoutBottomLeftGrabberView;
- (void)_layoutCameraGrabberView;
- (void)_layoutChargingView;
- (void)_layoutDateView;
- (void)_layoutEmergencyCallView;
- (void)_layoutFakeStatusBars;
- (void)_layoutForegroundView;
- (void)_layoutGrabberView:(id)view atTop:(BOOL)top;
- (void)_layoutGrabberView:(id)view atTop:(BOOL)top percentScrolled:(float)scrolled;
- (void)_layoutLockContentView;
- (void)_layoutLockHUDView;
- (void)_layoutLockView;
- (void)_layoutMediaControlsView;
- (void)_layoutModalAlertView;
- (void)_layoutNotificationView;
- (void)_layoutOverlayViews;
- (void)_layoutPasscodeView;
- (void)_layoutPluginView;
- (void)_layoutScrollView;
- (void)_layoutSlideToUnlockView;
- (void)_layoutStatusTextView;
- (void)_layoutTimerView;
- (void)_layoutWallpaperBlurView;
- (id)_legibilityPrototypeSettings;
- (BOOL)_lockContentOverlaysShouldBeHidden;
- (float)_mediaControlsHeight;
- (float)_mediaControlsY;
- (BOOL)_needsRealBlur;
- (id)_newScrollView;
- (void)_noteAppearing;
- (void)_noteWillDisappear;
- (id)_overlayStylePropertiesFromPropertiesFactory:(id)propertiesFactory;
- (void)_passcodePropertiesChanged;
- (float)_percentScrolled;
- (float)_percentScrolledForOffset:(float)offset;
- (void)_preventScrollingOnGrabberView:(id)view;
- (void)_removeLockContentOverlay:(id)overlay;
- (void)_removeLockContentUnderlayWithRequester:(id)requester;
- (void)_scrollBy:(float)by;
- (id)_scrollViewInteractionDisabledRequesters;
- (void)_scrollingDidFinish;
- (void)_setAllowPasscodeCharacterUndoOnTouchesCancelled:(BOOL)cancelled;
- (void)_setCurrentBlurRadius:(float)radius;
- (void)_setCurrentPage:(int)page;
- (void)_setEnableTemporaryPasscodeButtonHysteresis:(BOOL)hysteresis;
- (void)_setLockContentUnderlayPropertiesFactoryOverride:(id)override;
- (void)_setScrollingEnabled:(BOOL)enabled;
- (void)_shakeSlideToUnlockAnimationEnded;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (BOOL)_shouldCrossfadeStatusBars;
- (BOOL)_shouldCrossfadeStatusBarsForLegibility;
- (BOOL)_shouldUseVibrancy;
- (void)_showFakeWallpaperBlurWithAlpha:(float)alpha withFactory:(id)factory;
- (void)_slideToUnlockFailureGestureRecognizerChanged;
- (void)_startAnimatingSlideToUnlockDelayFinished;
- (void)_startAnimatingSlideToUnlockWithDelay:(double)delay;
- (float)_topGrabberYOriginForPercentScrolled:(float)percentScrolled;
- (void)_updateBlurAndPasscodeView:(id)view forPercentScrolled:(float)percentScrolled;
- (void)_updateBottomGrabberBackground;
- (void)_updateCornerGrabberBackground;
- (void)_updateCornerGrabberLegibilityIfNecessary;
- (void)_updateCornerGrabberView:(id *)view withNewView:(id)newView;
- (void)_updateDateViewLegibility;
- (void)_updateFakeStatusBarsForPercentScrolled:(float)percentScrolled;
- (void)_updateGrabbersLegibilityIfNecessary;
- (void)_updateLegibility;
- (void)_updateOverlaysForScroll:(float)scroll passcodeView:(id)view;
- (void)_updateSlideToUnlockBackground;
- (void)_updateSlideToUnlockBlurVisibility;
- (void)_updateStatusBarLegibility;
- (void)_updateStatusTextLegibility;
- (void)_updateTimerLegibility;
- (void)_updateTopGrabberBackground;
- (void)_updateVibrantView:(id)view screenRect:(CGRect)rect backgroundView:(id)view3;
- (void)_updateVibrantViewBackgrounds;
- (float)_wallpaperContrastForFrame:(CGRect)frame;
- (void)abortAnimatedForegroundSlide;
- (void)abortAnimatedTransition;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)cancelGestureRecognizer:(id)recognizer;
- (int)currentPage;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
- (float)foregroundTranslationY;
- (void)glintyAnimationDidStart;
- (void)glintyAnimationDidStop;
- (void)glintyFadeInAnimationDidStop;
- (void)glintyFadeOutAnimationDidStop;
- (BOOL)hasTransparentUnderlay;
- (void)invalidateGrabberOrigins;
- (BOOL)isBottomGrabberHidden;
- (BOOL)isBottomLeftGrabberHidden;
- (BOOL)isCameraGrabberHidden;
- (BOOL)isCurrentPageTransparent;
- (BOOL)isPresentingControllerTransitioning;
- (BOOL)isTopGrabberHidden;
- (void)layoutSubviews;
- (BOOL)mediaControlsHidden;
- (BOOL)modalAlertViewHidden;
- (BOOL)notificationsViewHidden;
- (BOOL)pluginViewHidden;
- (BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)presentingController:(id)controller willHandleGesture:(id)gesture;
- (void)presentingControllerDidFinishPresentation:(id)presentingController;
- (void)reenableGestureRecognizer:(id)recognizer;
- (void)resetContentOffsetToCurrentPage;
- (void)scrollToPage:(int)page animated:(BOOL)animated;
- (void)scrollToPage:(int)page animated:(BOOL)animated completion:(id)completion;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)setBottomGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setBottomLeftGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setCameraGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setCustomSlideToUnlockLanguage:(id)unlockLanguage;
- (void)setCustomSlideToUnlockText:(id)unlockText animated:(BOOL)animated;
- (void)setEmergencyCallViewController:(id)controller withDuration:(double)duration completion:(id)completion;
- (void)setForegroundHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockContentHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockContentOverlaysHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockHUDHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setMediaControlsContainerAlpha:(float)alpha;
- (void)setMediaControlsHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setModalAlertHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setNotificationViewOffset:(float)offset withAnimationDuration:(double)animationDuration;
- (void)setNotificationsHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setPasscodeHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setPluginView:(id)view presentationStyle:(unsigned)style notificationBehavior:(unsigned)behavior;
- (void)setPluginViewHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setScrollViewInteractionDisabled:(BOOL)disabled forRequester:(id)requester;
- (void)setScrollingDisabled:(BOOL)disabled forRequester:(id)requester;
- (void)setSlideToUnlockBlurHidden:(BOOL)unlockBlurHidden forRequester:(id)requester;
- (void)setSlideToUnlockHidden:(BOOL)unlockHidden forRequester:(id)requester;
- (void)setStatusTextHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setTopBottomGrabbersHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setTopGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setUsesCustomSlideToUnlockDisplayForWhiteBackground:(BOOL)whiteBackground forRequester:(id)requester;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)shakeSlideToUnlockTextWithCustomText:(id)customText;
- (void)slideForegroundVerticallyBy:(float)by;
- (void)slideUpGestureDidBegin;
- (void)slideUpGestureDidCleanup;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (void)willMoveToWindow:(id)window;
@end

