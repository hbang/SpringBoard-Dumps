/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinBusyClient.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBUIBannerTargetImplementation.h"
#import "SBAssistantObserver.h"
#import "SBAlertObserver.h"
#import "SBBannerContextViewControllerDelegate.h"
#import "SBBannerGestureHandlerDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBBulletinWindowClient.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBannerController : XXUnknownSuperclass <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContextViewControllerDelegate, SBBannerGestureHandlerDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	NSHashTable *_sources;
	NSMutableArray *_pendingBannerContextsNeedingRepop;
	SBAlert *_topAlert;
	UIImage *_bannerViewBackgroundImage;
	SBBannerContainerViewController *_bannerViewController;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	int _activeGestureType;
	SBBannerGestureHandler *_activeGestureHandler;
	int _overdueDismissReason;
	id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	id _assistantRevealCompletionBlock;
	id _assistantDismissCompletionBlock;
	NSMapTable *_bannerContextToViewControllerCache;
	SBLockScreenActionContext *_lockScreenActionContext;
}
@property(readonly, assign, nonatomic) void *bannerTargetIdentifier;
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) SBAlert *topAlert;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_addBannerGestureRecognizersToView:(id)view;
- (id)_bannerContext;
- (id)_bannerItem;
- (id)_bannerView;
- (id)_bannerViewBackgroundImage;
- (BOOL)_canDequeueIgnoringStickyBanner:(BOOL)banner;
- (void)_cancelBannerDismissTimers;
- (void)_dequeueAfterDelayIfPossible;
- (BOOL)_dequeueBannerIfPossible;
- (BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner existingDismissReason:(int)reason;
- (id)_dequeueNextBannerContext;
- (void)_dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
- (void)_dismissIntervalElapsed;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_handleBannerPanGesture:(id)gesture;
- (void)_handleGestureState:(int)state location:(CGPoint)location displacement:(float)displacement velocity:(float)velocity;
- (BOOL)_isItemShowable:(id)showable fromSource:(id)source;
- (void)_lockStateChanged:(id)changed;
- (id)_newBannerContextViewController;
- (id)_newBannerViewForContext:(id)context;
- (id)_newGestureHandlerForType:(int)type;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)sourceNeedingRepop;
- (void)_performHideTransitionWithContext:(id)context animated:(BOOL)animated reason:(int)reason completion:(id)completion;
- (void)_performReplaceTransitionWithContext:(id)context reason:(int)reason completion:(id)completion;
- (void)_performRevealTransitionWithContext:(id)context animated:(BOOL)animated completion:(id)completion;
- (void)_performTransition:(int)transition withAnimation:(BOOL)animation context:(id)context reason:(int)reason completion:(id)completion;
- (void)_playSoundForContext:(id)context;
- (void)_presentBannerForContext:(id)context reason:(int)reason;
- (void)_removeActiveGestureHandler;
- (void)_removePendingContextsForSourceNeedingRepop:(id)sourceNeedingRepop;
- (void)_replaceIntervalElapsed;
- (void)_screenUndimmmed:(id)undimmmed;
- (void)_setBannerSticky:(BOOL)sticky;
- (void)_setBannerViewControllerForContext:(id)context;
- (void)_setLockScreenContentHidden:(BOOL)hidden;
- (void)_setOverdueCompletionBlock:(id)block;
- (void)_setupBannerDismissTimers;
- (BOOL)_shouldPendStickyBannerContext:(id)context withReason:(int)reason;
- (void)_soundDidFinishPlayingForBannerContext:(id)_sound;
- (void)_stopCurrentSound;
- (void)_tryToDismissWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
- (void)_updateBannerSuppressionState;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)possible withDelay:(BOOL)delay;
- (void)_updateGestureHandlerWithState:(int)state type:(int)type;
- (void)alertBannerSuppressionChanged:(id)changed;
- (void)assistant:(id)assistant viewDidAppear:(int)view;
- (void)assistant:(id)assistant viewDidDisappear:(int)view;
- (void)assistant:(id)assistant viewWillAppear:(int)view;
- (void)assistant:(id)assistant viewWillDisappear:(int)view;
- (void)bannerViewController:(id)controller willSelectActionWithContext:(id)context;
- (void)bannerViewControllerDidPullDown:(id)bannerViewController;
- (void)bannerViewControllerDidReceiveRaiseGesture:(id)bannerViewController;
- (void)bannerViewControllerDidRequestDismissal:(id)bannerViewController;
- (void)bannerViewControllerDidRequestSticky:(id)bannerViewController;
- (void)bannerViewControllerDidSelectAction:(id)bannerViewController;
- (void)bannerViewControllerDidShrinkForKeyboard:(id)bannerViewController;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
- (void)bulletinWindowStoppedBeingBusy;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
- (void)cacheBannerForContext:(id)context withCompletion:(id)completion;
- (id)currentBannerContextForSource:(id)source;
- (float)currentBannerHeight;
- (void)dealloc;
- (void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason;
- (void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy;
- (void)dismissCurrentBannerContextForSource:(id)source;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)handleSystemDismissGestureWithState:(int)state position:(CGPoint)position velocity:(float)velocity;
- (void)handler:(id)handler pulledBannerByDisplacement:(float)displacement;
- (void)invalidateLockScreenActionContext;
- (BOOL)isShowingBanner;
- (BOOL)isShowingModalBanner;
- (BOOL)isShowingModalBannerWithKeyboard;
- (BOOL)isTrackingDismissGesture;
- (void)modallyPresentBannerWithContext:(id)context;
- (void)registerSource:(id)source;
- (void)removeCachedBannerForContext:(id)context;
- (void)setBannerAlpha:(float)alpha;
- (void)signalSource:(id)source;
- (void)unregisterSource:(id)source;
@end

