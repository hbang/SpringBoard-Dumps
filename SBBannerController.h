/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBBulletinWindowClient.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinBusyClient.h"
#import "SBUIBannerSourceManager.h"


__attribute__((visibility("hidden")))
@interface SBBannerController : XXUnknownSuperclass <SBUIBannerSourceManager, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	NSMutableSet *_sources;
	NSMutableArray *_pendingStickyBannerItems;
	SBBannerAndShadowView *_bannerAndShadowView;
	UIView *_snapshotViewForAssistantShrinkFromFull;
	UIView *_snapshotView;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _bannerPanGestureInProgress;
	float _showcaseHeight;
	id _animationContext;
	id _dismissOverdueContext;
}
@property(retain, nonatomic) SBBannerDismissOverdueContext *dismissOverdueContext;
@property(retain, nonatomic) UIView *snapshotViewForAssistantShrinkFromFull;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_adjustShadowAlphasForProgress:(float)progress;
- (id)_animationContext;
- (CGRect)_calculateFlipRectAndCreateSnapshotViewForBannerFrame:(CGRect)bannerFrame orientation:(int)orientation;
- (BOOL)_canDequeue;
- (BOOL)_canDequeueIgnoringStickyBanner:(BOOL)banner;
- (CGRect)_currentBannerFrameForOrientation:(int)orientation;
- (void)_dequeueAfterDelayIfPossible;
- (BOOL)_dequeueBannerIfPossible;
- (BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner;
- (BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner existingDismissReason:(int)reason;
- (id)_dequeueNextBannerItem;
- (void)_dismissIntervalElapsed;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_flipWithContext:(id)context;
- (void)_handleBannerPanGesture:(id)gesture;
- (void)_handleBannerTapGesture:(id)gesture;
- (BOOL)_isItemShowable:(id)showable;
- (id)_meshTransformForDegreesOfRotation:(float)rotation flipInsets:(UIEdgeInsets)insets orientation:(int)orientation topIsLive:(BOOL)live;
- (CGRect)_normalBannerFrameForOrientation:(int)orientation;
- (id)_pendingStickyBannerItemForSource:(id)source;
- (BOOL)_presentBannerForItem:(id)item existingDismissReason:(int)reason;
- (void)_presentBannerView:(id)view;
- (void)_presentBannerView:(id)view dismissReason:(int)reason;
- (float)_progressForBannerTranslation:(float)bannerTranslation maxTranslation:(float)translation;
- (void)_removePendingStickyItemsForSource:(id)source;
- (void)_removePerspective;
- (void)_replaceIntervalElapsed;
- (void)_sendDismissCallbacksIfNecessary:(int)necessary;
- (void)_setBannerTranslation:(float)translation progress:(float)progress;
- (void)_setUpPerspectiveForNormalFlipRect:(CGRect)normalFlipRect;
- (BOOL)_shouldPendStickyBannerItem:(id)item withReason:(int)reason;
- (void)_soundDidFinishPlayingForBannerItem:(id)_sound;
- (void)_stopCurrentSound;
- (void)_tearDownView;
- (void)_tearDownView:(BOOL)view reason:(int)reason;
- (void)_tryToDismissBannerWithAnimation:(int)animation;
- (void)_tryToDismissBannerWithAnimation:(int)animation dismissReason:(int)reason;
- (void)_tryToDismissBannerWithContext:(id)context;
- (void)_updateBannerSuppressionState;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)possible withDelay:(BOOL)delay;
- (void)adjustLayoutForShowcaseHeight:(float)showcaseHeight;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)assistantRevealModeDidChange:(id)assistantRevealMode;
- (void)assistantRevealModeWillChange:(id)assistantRevealMode;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation;
- (void)bulletinWindowStoppedBeingBusy;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow;
- (id)currentBannerItem;
- (id)currentBannerItemForSource:(id)source;
- (void)dealloc;
- (void)dismissBannerWithAnimation:(int)animation reason:(int)reason;
- (void)dismissBannerWithoutAnimationForReason:(int)reason;
- (void)dismissCurrentBannerItemForSource:(id)source;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)isShowingBanner;
- (id)newBannerSnapshotViewRotatedForOrientation:(int)orientation;
- (void)registerSource:(id)source;
- (void)setBannerAlpha:(float)alpha;
- (void)signalSource:(id)source;
- (void)unregisterSource:(id)source;
@end

