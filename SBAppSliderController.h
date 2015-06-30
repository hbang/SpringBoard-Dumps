/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBAppSliderControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBAppSliderController : XXUnknownSuperclass <SBAppSliderIconControllerDelegate, SBAppSliderScrollingViewDelegate, _UISettingsKeyObserver, SBVolumePressBandit> {
	id<SBAppSliderControllerDelegate> _delegate;
	NSMutableArray *_appList;
	SBAppSwitcherServices *_switcherServices;
	NSMutableDictionary *_switcherServiceViewControllerMap;
	unsigned _appListAccessCount;
	SBAppSliderScrollingViewController *_pageController;
	SBAppSliderIconController *_iconController;
	UIView *_containerView;
	UIView *_contentView;
	UIView *_pageView;
	UIView *_iconView;
	UIView *_iconParallaxView;
	UIView *_iconParallaxCorrectionView;
	NSMutableSet *_hostedApplications;
	NSMutableDictionary *_appSnapshots;
	NSRange _lastVisibleRange;
	unsigned _startAnchorIndex;
	int _startingInterfaceOrientation;
	int _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	BOOL _deferredWorkComplete;
	unsigned _startingIndex;
	NSString *_startingDisplayIdentifier;
	NSDictionary *_startingViews;
	int _enterSide;
	SBAppSliderSettings *_settings;
	NSObject<OS_dispatch_queue> *_snapshotQueue;
	NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
	SBFakeStatusBarViewCache *_statusBarCache;
	CGAffineTransform _wallpaperTransform;
}
@property(readonly, assign, nonatomic) NSArray *applicationList;
@property(assign, nonatomic) id<SBAppSliderControllerDelegate> delegate;
@property(readonly, assign, nonatomic) SBAppSliderIconController *iconController;
@property(copy, nonatomic) NSString *startingDisplayIdentifier;
@property(retain, nonatomic) NSDictionary *startingViews;
@property(assign, nonatomic) CGAffineTransform wallpaperTransform;
+ (BOOL)_shouldUseSerialSnapshotQueue;
+ (BOOL)shouldProvideHomeSnapshotIfPossible;
+ (BOOL)shouldProvideSnapshotIfPossible;
- (id)init;
- (id)_animationSettingsForIconAlphaTransition;
- (void)_appActivationStateDidChange:(id)_appActivationState;
- (id)_beginAppListAccess;
- (void)_bringIconViewToFront;
- (void)_disableContextHostingForApp:(id)app;
- (id)_displayIDAtIndex:(unsigned)index;
- (void)_endAppListAccess;
- (float)_frameScaleValueForAnimation;
- (id)_generateCellViewForIndex:(unsigned)index;
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;
- (id)_iconListForAppList:(id)appList;
- (BOOL)_inMode:(int)mode;
- (BOOL)_isSnapshotDisplayIdentifier:(id)identifier;
- (void)_layout;
- (void)_layoutInOrientation:(int)orientation;
- (CGRect)_nominalPageViewFrame;
- (void)_noteLockScreenCameraDidShow;
- (void)_quitAppAtIndex:(unsigned)index;
- (void)_reverseAppList;
- (float)_scaleForFullscreenPageView;
- (void)_setInteractionEnabled:(BOOL)enabled;
- (float)_sliderThumbnailVerticalPositionOffset;
- (void)_snapshotChangedOnDisk:(id)disk;
- (id)_snapshotViewForDisplayIdentifier:(id)displayIdentifier;
- (void)_switcherServiceRemoved:(id)removed;
- (void)_temporarilyHostAppForQuitting:(id)quitting;
- (unsigned)_totalSnapshotsToKeepAround;
- (id)_transitionAnimationFactory;
- (void)_updateForAnimationFrame:(float)animationFrame withAnchor:(unsigned)anchor;
- (void)_updatePageViewScale:(float)scale;
- (void)_updatePageViewScale:(float)scale xTranslation:(float)translation;
- (void)_updateSnapshots;
- (id)_viewForService:(id)service;
- (int)_windowInterfaceOrientation;
- (BOOL)allowShowHide;
- (void)animateDismissalToDisplayIdentifier:(id)displayIdentifier withCompletion:(id)completion;
- (void)animatePresentationFromDisplayIdentifier:(id)displayIdentifier withViews:(id)views fromSide:(int)side withCompletion:(id)completion;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)forceDismissAnimated:(BOOL)animated;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (BOOL)isScrolling;
- (void)loadView;
- (id)pageController;
- (id)pageForDisplayIdentifier:(id)displayIdentifier;
- (BOOL)prefersStatusBarHidden;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (void)sliderIconScroller:(id)scroller activate:(id)activate;
- (void)sliderIconScroller:(id)scroller contentOffsetChanged:(float)changed;
- (unsigned)sliderIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float *)normalizedOffset andXVelocity:(float)velocity;
- (void)sliderIconScrollerBeganPanning:(id)panning;
- (void)sliderIconScrollerDidEndScrolling:(id)sliderIconScroller;
- (void)sliderScroller:(id)scroller contentOffsetChanged:(float)changed;
- (BOOL)sliderScroller:(id)scroller isIndexRemovable:(unsigned)removable;
- (void)sliderScroller:(id)scroller itemTapped:(unsigned)tapped;
- (BOOL)sliderScroller:(id)scroller itemWantsToBeKeptInViewHierarchy:(unsigned)viewHierarchy;
- (void)sliderScroller:(id)scroller itemWantsToBeRemoved:(unsigned)beRemoved;
- (id)sliderScroller:(id)scroller viewForIndex:(unsigned)index;
- (void)sliderScrollerBeganPanning:(id)panning;
- (void)sliderScrollerDidEndScrolling:(id)sliderScroller;
- (float)sliderScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
- (unsigned)sliderScrollerItemCount:(id)count;
- (CGSize)sliderScrollerItemSize:(id)size forOrientation:(int)orientation;
- (unsigned)supportedInterfaceOrientations;
- (void)switcherWasDismissed:(BOOL)dismissed;
- (void)switcherWasPresented:(BOOL)presented;
- (void)switcherWillBeDismissed:(BOOL)switcher;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

