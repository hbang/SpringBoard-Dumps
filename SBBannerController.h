/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBannerController : XXUnknownSuperclass <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	NSHashTable *_sources;
	NSMutableArray *_pendingBannerContextsNeedingRepop;
	SBAlert *_topAlert;
	UIImage *_bannerViewBackgroundImage;
	SBBannerContextView *_bannerView;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	int _activeDismissGestureType;
	int _overdueDismissReason;
	id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	id _assistantRevealCompletionBlock;
	id _assistantDismissCompletionBlock;
}
@property(readonly, assign, nonatomic) void *bannerTargetIdentifier;
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(retain, nonatomic) SBAlert *topAlert;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (CGRect)_bannerFrameForOrientation:(int)orientation;
- (id)_bannerViewBackgroundImage;
- (BOOL)_canDequeueIgnoringStickyBanner:(BOOL)banner;
- (void)_dequeueAfterDelayIfPossible;
- (BOOL)_dequeueBannerIfPossible;
- (BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner existingDismissReason:(int)reason;
- (id)_dequeueNextBannerContext;
- (void)_dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
- (void)_dismissIntervalElapsed;
- (void)_dismissOverdueOrDequeueIfPossible;
- (double)_durationForTransition:(int)transition;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_handleBannerPanGesture:(id)gesture;
- (void)_handleBannerTapGesture:(id)gesture;
- (void)_handleDismissGestureType:(int)type withState:(int)state displacement:(float)displacement velocity:(float)velocity;
- (BOOL)_isItemShowable:(id)showable fromSource:(id)source;
- (void)_lockStateChanged:(id)changed;
- (id)_newBannerViewForContext:(id)context;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)sourceNeedingRepop;
- (void)_performTransition:(int)transition withAnimation:(BOOL)animation context:(id)context reason:(int)reason completion:(id)completion;
- (void)_playSoundForContext:(id)context;
- (void)_presentBannerForContext:(id)context reason:(int)reason;
- (void)_removePendingContextsForSourceNeedingRepop:(id)sourceNeedingRepop;
- (void)_replaceIntervalElapsed;
- (void)_setOverdueCompletionBlock:(id)block;
- (BOOL)_shouldPendStickyBannerContext:(id)context withReason:(int)reason;
- (void)_soundDidFinishPlayingForBannerContext:(id)_sound;
- (void)_stopCurrentSound;
- (void)_tearDownViewWithReason:(int)reason;
- (void)_tryToDismissWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
- (void)_updateBannerSuppressionState;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)possible withDelay:(BOOL)delay;
- (void)_updateDismissGestureState:(SBBannerDismissGestureState *)state withDisplacement:(float)displacement velocity:(float)velocity;
- (void)alertBannerSuppressionChanged:(id)changed;
- (void)assistant:(id)assistant viewDidAppear:(int)view;
- (void)assistant:(id)assistant viewDidDisappear:(int)view;
- (void)assistant:(id)assistant viewWillAppear:(int)view;
- (void)assistant:(id)assistant viewWillDisappear:(int)view;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
- (void)bulletinWindowStoppedBeingBusy;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
- (id)currentBannerContextForSource:(id)source;
- (void)dealloc;
- (void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason;
- (void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy;
- (void)dismissCurrentBannerContextForSource:(id)source;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)handleSystemDismissGestureWithState:(int)state position:(CGPoint)position velocity:(float)velocity;
- (BOOL)isShowingBanner;
- (BOOL)isTrackingDismissGesture;
- (id)newBannerSnapshotViewRotatedForOrientation:(int)orientation;
- (void)registerSource:(id)source;
- (void)setBannerAlpha:(float)alpha;
- (void)signalSource:(id)source;
- (void)unregisterSource:(id)source;
@end

