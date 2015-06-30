/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBLockScreenViewDelegate, _SBFVibrantView, SBUIPasscodeLockView, SBLegibility;

__attribute__((visibility("hidden")))
@interface SBLockScreenView : SBAlertView <UIScrollViewDelegate, SBFGlintyStringViewDelegate, _UISettingsKeyObserver> {
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
	UIView<SBLegibility> *_legalView;
	SBLockScreenTimerView *_timerView;
	SBFGlintyStringView<_SBFVibrantView> *_slideToUnlockView;
	UIView *_slideToUnlockParentSpringView;
	UIView *_slideToUnlockSpringView;
	_UILegibilityLabel *_slideToUnlockLegibilityLabel;
	BOOL _isShakingSlideToUnlockText;
	SBWallpaperEffectView *_slideToUnlockBackgroundView;
	SBWallpaperEffectView *_topGrabberBackgroundView;
	SBWallpaperEffectView *_bottomGrabberBackgroundView;
	SBWallpaperEffectView *_cameraGrabberBackgroundView;
	SBChevronView<_SBFVibrantView> *_topGrabberView;
	SBChevronView<_SBFVibrantView> *_bottomGrabberView;
	UIView<_SBFVibrantView, SBLegibility> *_cameraGrabberView;
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
	NSMutableSet *_legalTextHiddenRequesters;
	NSMutableSet *_mediaControlsHiddenRequesters;
	NSMutableSet *_pluginHiddenRequesters;
	NSMutableSet *_scrollingDisabledRequesters;
	float _foregroundTranslationY;
	SBLockScreenBounceAnimator *_bounceAnimator;
	NSMutableArray *_scrollCompletionBlocks;
	int _currentPage;
	CGPoint _staringContentOffset;
	BOOL _scrolling;
	BOOL _setGrabberOrigins;
	float _topGrabberOriginalOriginY;
	float _bottomGrabberOriginalOriginY;
	float _currentBlurRadius;
	SBLockOverlayStylePropertiesFactory *_defaultUnderlayPropertiesFactory;
	UIView *_whiteUnderlayView;
	SBFakeStatusBarView *_fakePasscodeStatusBarView;
	SBFakeStatusBarView *_fakeLockStatusBarView;
	SBDisableAppStatusBarAlphaChangesAssertion *_statusBarAssertion;
	SBSlideToUnlockFailureRecognizer *_slideToUnlockFailureRecognizer;
	int _slideToUnlockFailureGestureToken;
	BOOL _slideToUnlockFailureRecognizerNeedsRemoval;
	BOOL _statusBarLegibilityEnabled;
	id<SBLockScreenViewDelegate> _delegate;
	_UILegibilitySettings *_legibilitySettings;
}
@property(retain, nonatomic) SBLockScreenBatteryChargingView *batteryChargingView;
@property(retain, nonatomic) SBChevronView *bottomGrabberView;
@property(retain, nonatomic) UIView<_SBFVibrantView> *cameraGrabberView;
@property(retain, nonatomic) SBFLockScreenDateView *dateView;
@property(assign) id<SBLockScreenViewDelegate> delegate;
@property(readonly, assign, nonatomic) UIView *foregroundView;
@property(readonly, assign, nonatomic) BOOL isShakingSlideToUnlockText;
@property(retain, nonatomic) UIView<SBLegibility> *legalView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(retain, nonatomic) UIView *mediaControlsView;
@property(retain, nonatomic) UIView *modalAlertView;
@property(retain, nonatomic) UIView *notificationView;
@property(retain, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView;
@property(retain, nonatomic) UIView *pluginBackgroundView;
@property(readonly, assign, nonatomic) UIScrollView *scrollView;
@property(assign, nonatomic) BOOL statusBarLegibilityEnabled;
@property(retain, nonatomic) SBLockScreenTimerView *timerView;
@property(retain, nonatomic) SBChevronView *topGrabberView;
- (id)initWithFrame:(CGRect)frame;
- (void)_addBounceAnimator;
- (void)_addGrabberViews;
- (void)_addLockContentOverlay:(id)overlay;
- (void)_addLockContentUnderlayWithRequester:(id)requester;
- (void)_addOrRemoveFakeStatusBars;
- (void)_addViews;
- (void)_adjustTopAndBottomGrabbersForPercentScrolled:(float)percentScrolled;
- (id)_averageWallpaperColorForFrame:(CGRect)frame;
- (void)_beginCrossfadingFakeStatusBars;
- (float)_bottomGrabberYOriginForPercentScrolled:(float)percentScrolled;
- (id)_defaultSlideToUnlockText;
- (id)_effectiveStatusBarColor;
- (int)_effectiveStatusBarLegibilityStyle;
- (void)_endCrossfadingFakeStatusBars;
- (void)_evaluateOverlaysForChange;
- (BOOL)_hasLockContentUnderlayRequester:(id)requester;
- (BOOL)_isPluginBelowForegroundScrollView;
- (BOOL)_isValidPage:(unsigned)page;
- (void)_layoutCameraGrabberView;
- (void)_layoutChargingView;
- (void)_layoutDateView;
- (void)_layoutEmergencyCallView;
- (void)_layoutFakeStatusBars;
- (void)_layoutForegroundView;
- (void)_layoutGrabberView:(id)view atTop:(BOOL)top;
- (void)_layoutGrabberView:(id)view atTop:(BOOL)top percentScrolled:(float)scrolled;
- (void)_layoutLegalView;
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
- (void)_layoutTimerView;
- (void)_layoutWallpaperBlurView;
- (id)_legibilityPrototypeSettings;
- (BOOL)_lockContentOverlaysShouldBeHidden;
- (float)_mediaControlsHeight;
- (float)_mediaControlsY;
- (BOOL)_needsRealBlur;
- (id)_newScrollView;
- (void)_noteAppearing;
- (id)_overlayStylePropertiesFromPropertiesFactory:(id)propertiesFactory;
- (void)_passcodePropertiesChanged;
- (float)_percentScrolled;
- (float)_percentScrolledForOffset:(float)offset;
- (void)_preventScrollingOnGrabberView:(id)view;
- (void)_removeLockContentOverlay:(id)overlay;
- (void)_removeLockContentUnderlayWithRequester:(id)requester;
- (void)_resetSlideToUnlockLegibilityLabel;
- (void)_scrollBy:(float)by;
- (void)_scrollingDidFinish;
- (void)_setAllowPasscodeCharacterUndoOnTouchesCancelled:(BOOL)cancelled;
- (void)_setCurrentBlurRadius:(float)radius;
- (void)_setCurrentPage:(int)page;
- (void)_setEnableTemporaryPasscodeButtonHysteresis:(BOOL)hysteresis;
- (void)_setLockContentUnderlayPropertiesFactoryOverride:(id)override;
- (void)_setScrollingEnabled:(BOOL)enabled;
- (void)_shakeSlideToUnlockAnimationEnded;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_showFakeWallpaperBlurWithAlpha:(float)alpha;
- (void)_slideToUnlockFailureGestureRecognizerChanged;
- (float)_topGrabberYOriginForPercentScrolled:(float)percentScrolled;
- (void)_updateBottomGrabberBackground;
- (void)_updateCameraGrabberBackground;
- (void)_updateCameraGrabberLegibilityIfNecessary;
- (void)_updateDateViewLegibility;
- (void)_updateFakeStatusBarsForPercentScrolled:(float)percentScrolled;
- (void)_updateGrabbersLegibilityIfNecessary;
- (void)_updateLegalLegibility;
- (void)_updateLegibility;
- (void)_updateOverlaysForScroll:(float)scroll;
- (void)_updateSlideToUnlockBackground;
- (void)_updateStatusBarLegibility;
- (void)_updateTimerLegibility;
- (void)_updateTopGrabberBackground;
- (void)_updateVibrantView:(id)view screenRect:(CGRect)rect backgroundView:(id)view3;
- (void)_updateVibrantViewBackgrounds;
- (void)_updateVibrantViewLegibility;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (int)currentPage;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow;
- (void)glintyAnimationDidStart;
- (void)glintyAnimationDidStop;
- (BOOL)hasTransparentUnderlay;
- (void)invalidateGrabberOrigins;
- (BOOL)isBottomGrabberHidden;
- (BOOL)isCurrentPageTransparent;
- (BOOL)isTopGrabberHidden;
- (void)layoutSubviews;
- (BOOL)mediaControlsHidden;
- (BOOL)pluginViewHidden;
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
- (void)setCameraGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setCustomSlideToUnlockDisplayForBuddyMode:(BOOL)buddyMode;
- (void)setCustomSlideToUnlockLanguage:(id)unlockLanguage;
- (void)setCustomSlideToUnlockText:(id)unlockText;
- (void)setEmergencyCallView:(id)view withDuration:(double)duration completion:(id)completion;
- (void)setForegroundHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLegalTextHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockContentHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockContentOverlaysHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setLockHUDHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setMediaControlsContainerAlpha:(float)alpha;
- (void)setMediaControlsHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setModalAlertHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setNotificationsHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setPasscodeHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setPluginView:(id)view presentationStyle:(unsigned)style notificationBehavior:(unsigned)behavior;
- (void)setPluginViewHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setScrollingDisabled:(BOOL)disabled forRequester:(id)requester;
- (void)setSlideToUnlockHidden:(BOOL)unlockHidden forRequester:(id)requester;
- (void)setTopBottomGrabbersHidden:(BOOL)hidden forRequester:(id)requester;
- (void)setTopGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)shakeSlideToUnlockTextWithCustomText:(id)customText;
- (void)slideForegroundVerticallyBy:(float)by;
- (void)startAnimating;
- (void)stopAnimating;
- (void)willMoveToWindow:(id)window;
@end

