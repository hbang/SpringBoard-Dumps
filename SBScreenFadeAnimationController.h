/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBLockScreenView, UIWindow, SBFLockScreenDateView, SBFadeAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBScreenFadeAnimationController : XXUnknownSuperclass {
	UIWindow *_fadeWindow;
	UIView *_overlayView;
	SBFLockScreenDateView *_dateView;
	float _originalDateLeftEdge;
	float _originalDateBottomEdge;
	float _finalTimeAlpha;
	float _finalDateAlpha;
	float _finalStatusBarAlpha;
	SBLockScreenView *_lockScreenView;
	BOOL _preparingToAnimateFadeIn;
	BOOL _animatingForFadeIn;
	BOOL _animatingForFadeOut;
	int _animationToken;
	id _fadeInCompletionBlock;
	id _fadeOutCompletionBlock;
	BOOL _animatingDateTime;
	BOOL _animatingWallpaper;
	BOOL _animatingOverlay;
	BOOL _animatingContent;
	SBFadeAnimationSettings *_settings;
}
+ (id)sharedInstance;
- (id)init;
- (void)_adjustViewsForCurrentOrientation;
- (void)_assistantVisibilityChanged;
- (void)_cleanupAnimationWhenInterruptingFadeIn:(BOOL)anIn;
- (void)_createFadeWindowForFadeIn:(BOOL)anIn;
- (void)_handleAnimationCompletionIfNecessaryForFadeIn:(BOOL)anIn;
- (void)_invertColorsChanged;
- (void)_mediaControlsDidShow;
- (void)_runCompletionHandlerForFadeIn:(BOOL)anIn;
- (void)_setRelevantLockScreenViewsHidden:(BOOL)hidden;
- (void)_startFadeAnimationsForFadeIn:(BOOL)anIn;
- (void)_startFadeInIfNecessary;
- (void)_uiLockStateChanged:(id)changed;
- (void)abortAnimatedDateFrameChange;
- (void)dealloc;
- (double)fadeInAnimationDuration;
- (double)fadeOutAnimationDuration;
- (void)fadeOutWithCompletion:(id)completion;
- (void)hideDate;
- (BOOL)isFadeInAnimationInProgress;
- (BOOL)isFadeOutAnimationInProgress;
- (void)prepareToFadeInWithTimeAlpha:(float)timeAlpha dateAlpha:(float)alpha statusBarAlpha:(float)alpha3 lockScreenView:(id)view existingDateView:(id)view5 completion:(id)completion;
- (void)setDateViewAlpha:(float)alpha;
- (void)setLegibilitySettings:(id)settings;
- (void)setTextColor:(id)color;
- (void)updateDateFrameHorizontalOffset:(float)offset verticalOffset:(float)offset2;
@end

