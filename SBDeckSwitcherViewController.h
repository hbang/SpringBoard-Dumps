/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBDeckSwitcherItemContainerDelegate.h"
#import "SBDeckSwitcherPageViewProviderDelegate.h"
#import "SBSwitcherAppSuggestionViewControllerDelegate.h"
#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherContentViewControlling.h"

@protocol SBMainAppSwitcherContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBDeckSwitcherViewController : XXUnknownSuperclass <SBDeckSwitcherItemContainerDelegate, SBDeckSwitcherPageViewProviderDelegate, SBAppViewHostRequester, UIScrollViewDelegate, _UISettingsKeyObserver, SBSwitcherAppSuggestionViewControllerDelegate, SBMainAppSwitcherContentViewControlling> {
	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	_UILegibilitySettings *_legibilitySettings;
	NSMutableArray *_displayItems;
	SBDisplayItem *_returnToDisplayItem;
	SBDisplayItem *_returnToSideDisplayItem;
	SBDisplayItem *_initialDisplayItem;
	SBMainDisplayLayoutState *_initialLayoutState;
	SBAppSwitcherScrollView *_scrollView;
	UIView *_backgroundDarkeningView;
	NSMutableDictionary *_visibleItemContainers;
	NSRange _visibleItemRange;
	CGPoint _scrollViewLastContentOffset;
	BOOL _scrollViewLastScrolledForward;
	SBSwitcherAppSuggestionViewController *_appSuggestionViewController;
	SBDeckSwitcherPageViewProvider *_pageViewProvider;
	UIEdgeInsets _transitionParameters;
	BOOL _transitionInProgress;
	BOOL _transitionPresenting;
	BOOL _transitionInteractive;
	BOOL _transitionDidFinishDismissing;
	BOOL _didSendViewPresentingDismissing;
	SBWorkspaceTransitionRequest *_transitionRequest;
	BOOL _shouldHideTitlesAndIconsForInteraction;
	float _initialTitleAndIconOpacityTransitionProgress;
	SBAppView *_hideSideAppView;
	NSMutableArray *_blocksToPerformWhenScrollingEnds;
	NSMutableDictionary *_insertionRemovalStatus;
	BOOL _configuredScrollviewForThisPresentation;
	SBAppSwitcherSettings *_settings;
	BOOL _isScrolling;
	int _grabbedDraggingIndex;
	float _scrollingAdjustmentForIndexChange;
	BOOL _invalidated;
	BOOL _isWallpaperConfigured;
}
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *displayItems;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, assign) Class superclass;
+ (float)snapshotScale;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (float)_adjustedCentroidForIndex:(int)index locationX:(float)x;
- (void)_animateWallpaperDismissal;
- (void)_animateWallpaperPresentationForTransitionRequest:(id)transitionRequest;
- (void)_applyPrototypeSettingsToConstants;
- (void)_applyStyleToItemContainer:(id)itemContainer;
- (void)_applyStyleToItemContainer:(id)itemContainer forceRealBlur:(BOOL)blur;
- (void)_applyStyleToVisibleItemContainers;
- (void)_applyVisibleMarginToItemContainer:(id)itemContainer;
- (void)_beginInsertionOrRemovalOfDisplayItem:(id)displayItem direction:(unsigned)direction style:(unsigned)style progress:(float)progress;
- (float)_blurForIndex:(unsigned)index;
- (float)_blurForIndex:(unsigned)index scrollProgress:(double)progress;
- (void)_cancelScrolling;
- (float)_contentSizeDeltaForItemDeletion;
- (CGSize)_contentSizeForPageViewOfDisplayItem:(id)displayItem;
- (double)_depthForIndex:(unsigned)index displayItemsCount:(unsigned)count scrollProgress:(double)progress ignoringKillOffset:(BOOL)offset;
- (double)_desiredXOriginForQuantizedTopPage;
- (BOOL)_displayItemWantsToBeKeptInViewHierarchy:(id)viewHierarchy;
- (float)_effectiveIndexForIndex:(unsigned)index;
- (float)_effectiveInsertionRemovalSlideInProgressForIndex:(unsigned)index;
- (void)_endInsertionOrRemovalOfDisplayItem:(id)displayItem;
- (void)_ensureCardSubviewOrdering;
- (CGRect)_frameForIndex:(unsigned)index;
- (CGRect)_frameForIndex:(unsigned)index displayItemsCount:(unsigned)count transitionParameters:(UIEdgeInsets)parameters scrollProgress:(double)progress ignoringScrollOffsetAndKillingAdjustments:(BOOL)adjustments;
- (void)_getIndiciesAndDirectionToPreserveScrollPositionWhenInsertingAtIndex:(unsigned)index prior:(unsigned *)prior subsequent:(unsigned *)subsequent direction:(unsigned *)direction animated:(BOOL)animated;
- (void)_getItemToKeepStill:(id *)keepStill andDirection:(unsigned *)direction whenRemovingItem:(id)item;
- (void)_hideSideAppForPresentation;
- (unsigned)_indexForPresentationOrDismissalIsPresenting:(BOOL)presentationOrDismissalIsPresenting;
- (id)_insertingOrRemovingDisplayItems;
- (id)_insertionRemovalSlideAnimation;
- (XXStruct_4Kv2bB)_insertionRemovalStatusForDisplayItem:(id)displayItem;
- (BOOL)_isAboveTransitioningItemDuringPresentation:(id)presentation;
- (BOOL)_isAboveTransitioningItemDuringPresentationAndWillEndUpOffscreen:(id)_isAboveTransitioningItemDuringPresentationAnd;
- (BOOL)_isItemVisible:(id)visible;
- (id)_itemContainerForDisplayItem:(id)displayItem;
- (float)_killGestureHysteresis;
- (void)_layoutDisplayItem:(id)item;
- (double)_normalizedScrollProgress;
- (float)_opacityForIndex:(unsigned)index;
- (float)_opacityForIndex:(unsigned)index scrollProgress:(double)progress;
- (id)_reduceMotionAnimationFactory;
- (void)_revealSideAppForDismissalWithTransitionRequest:(id)transitionRequest;
- (double)_scaleForPresentedProgress:(float)presentedProgress;
- (double)_scaleForTransformForIndex:(unsigned)index progressPresented:(float)presented scrollProgress:(double)progress;
- (CGRect)_scaleTransformedFrameForIndex:(unsigned)index;
- (CGRect)_scaleTransformedFrameForIndex:(unsigned)index withUntransformedFrame:(CGRect)untransformedFrame;
- (double)_scrollProgressForIndex:(unsigned)index displayItemsCount:(unsigned)count depth:(double)depth ignoringKillOffset:(BOOL)offset;
- (double)_scrollProgressForIndex:(unsigned)index displayItemsCount:(unsigned)count progressPresented:(float)presented frameOrigin:(float)origin ignoringScrollOffset:(BOOL)offset;
- (CGPoint)_scrollView:(id)view adjustedCentroidForCentroid:(CGPoint)centroid;
- (CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned)displayItemCount;
- (BOOL)_scrollViewThinksItsScrolling;
- (void)_sendViewDismissingToPageViewsForTransitionRequest:(id)transitionRequest;
- (void)_sendViewPresentingToPageViewsForTransitionRequest:(id)transitionRequest;
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated completion:(id)completion;
- (CGSize)_sizeForPageViewOfDisplayItem:(id)displayItem progressPresented:(float)presented;
- (float)_titleAndIconOpacityForIndex:(unsigned)index;
- (float)_titleAndIconOpacityForIndex:(unsigned)index withInitialTransitionProgress:(float)initialTransitionProgress forTransitionProgress:(float)transitionProgress;
- (float)_titleOpacityForIndex:(unsigned)index;
- (float)_titleOpacityForIndex:(unsigned)index scrollProgress:(double)progress;
- (int)_topIndexForLocationInScrollView:(CGPoint)scrollView;
- (id)_topVisibleItem;
- (CGAffineTransform)_transformForIndex:(unsigned)index;
- (CGAffineTransform)_transformForIndex:(unsigned)index progressPresented:(float)presented scrollProgress:(double)progress;
- (void)_unhostSideApp;
- (void)_updateContentSizePreservingScrollPositionOfDisplayItem:(id)displayItem acrossMutation:(id)mutation;
- (void)_updateContentSizePreservingScrollPositionOfPriorIndex:(unsigned)priorIndex subsequentIndex:(unsigned *)index acrossMutation:(id)mutation;
- (void)_updateProgressOfInsertingOrRemovingDisplayItem:(id)insertingOrRemovingDisplayItem progress:(float)progress;
- (void)_updateScrollViewContentOffsetToCenterIndex:(unsigned)centerIndex animated:(BOOL)animated completion:(id)completion;
- (void)_updateScrollViewFrameAndContentSize;
- (void)_updateVisibleItems;
- (void)animateDismissalToDisplayItem:(id)displayItem forTransitionRequest:(id)transitionRequest withCompletion:(id)completion;
- (void)animatePresentationForTransitionRequest:(id)transitionRequest withCompletion:(id)completion;
- (id)appViewRequesterIdentifier:(id)identifier;
- (int)appViewRequesterPriority:(id)priority;
- (BOOL)canSelectDisplayItemOfContainer:(id)container numberOfTaps:(int)taps;
- (id)containerViewControllerForPageViewFromProvider:(id)provider;
- (CGSize)contentSizeForDisplayItem:(id)displayItem fromProvider:(id)provider;
- (void)dealloc;
- (void)endInteractionWithCommitment:(BOOL)commitment;
- (void)endTransitionWithSuccess:(BOOL)success completion:(id)completion;
- (CGRect)frameForPageViewOfContainer:(id)container fullyPresented:(BOOL)presented;
- (id)initialDisplayItemForPageViewFromProvider:(id)provider;
- (id)initialLayoutStateForPageViewFromProvider:(id)provider;
- (void)insertDisplayItem:(id)item atIndex:(unsigned)index updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)invalidate;
- (BOOL)isDisplayItemOfContainerRemovable:(id)containerRemovable;
- (void)killDisplayItemOfContainer:(id)container withVelocity:(float)velocity;
- (float)minimumVerticalTranslationForKillingOfContainer:(id)container;
- (id)nextDisplayItem;
- (id)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(id)provider;
- (int)orientationForPageViewFromProvider:(id)provider;
- (int)orientationForSuggestionViewController:(id)suggestionViewController;
- (id)pageForDisplayItem:(id)displayItem;
- (void)removeDisplayItem:(id)item updateScrollPosition:(BOOL)position forReason:(int)reason completion:(id)completion;
- (void)replaceDisplayItem:(id)item withDisplayItem:(id)displayItem completion:(id)completion;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewKillingProgressUpdated:(float)updated ofContainer:(id)container;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)selectedDisplayItemOfContainer:(id)container;
- (void)setScrolling:(BOOL)scrolling;
- (void)setTransitionParameters:(UIEdgeInsets)parameters;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (BOOL)shouldShowIconAndLabelOfContainer:(id)container;
- (CGSize)sizeForDisplayItem:(id)displayItem fromProvider:(id)provider;
- (void)startInteractiveTransition:(BOOL)transition presenting:(BOOL)presenting withRequest:(id)request;
- (void)suggestionViewController:(id)controller activatedSuggestion:(id)suggestion;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

