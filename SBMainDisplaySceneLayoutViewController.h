/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <BSTransactionObserver> {
	SBMainDisplaySceneLayoutGestureManager *_layoutGestureManager;
	UIView *_layoutOrientedAdornmentContainer;
	UIView *_breadcrumbClippingView;
	unsigned _disableSubviewReorderingCount;
	NSMutableArray *_recoilRequesters;
	FBUIApplicationSceneDeactivationAssertion *_overlayDeactivationAssertion;
	SBAppStatusBarSettingsAssertion *_hideSpringBoardStatusBarAssertion;
	NSString *_preventIconRotationReason;
	UIView *_capturedSnapshotView;
}
@property(readonly, retain, nonatomic) SBLayoutElementViewController *breadcrumbLayoutElementController;
@property(retain, nonatomic) UIView *capturedSnapshotView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBMainDisplayLayoutState *layoutState;
@property(readonly, assign, nonatomic) BOOL shouldReverseLayoutDirection;
@property(readonly, retain, nonatomic) SBLayoutElementViewController *sideLayoutElementController;
@property(readonly, assign) Class superclass;
+ (Class)_layoutStateClass;
- (id)initWithDisplay:(id)display;
- (void)_acquireOrReleaseHideSpringBoardStatusBarAssertionIfNecessary;
- (void)_acquireOrReleaseOrientationLockIfNecessary;
- (void)_addLayoutElementViewController:(id)controller forLayoutElement:(id)layoutElement entity:(id)entity;
- (id)_adornmentView;
- (void)_animateInLayoutElementViewInRole:(int)role withAnimationSettings:(id)animationSettings animationBlock:(id)block completion:(id)completion;
- (void)_animateLayoutElementViewController:(id)controller withAnimationSettings:(id)animationSettings precondition:(id)precondition animationBlock:(id)block completion:(id)completion;
- (void)_animateOutLayoutElementViewInRole:(int)role withAnimationSettings:(id)animationSettings animationBlock:(id)block completion:(id)completion;
- (id)_animationSettingsForPushAndPopWithDuration:(double)duration;
- (BOOL)_appViewShouldHandleBackgroundStyleForLayoutElement:(id)_appView;
- (void)_beginLayoutStateTransitionWithContext:(id)context;
- (BOOL)_canResizeToHalfScreen;
- (void)_checkSubviewOrdering;
- (float)_defaultWidthForSideApp;
- (int)_dimmingLevelForElement:(id)element inLayout:(id)layout;
- (void)_disableSubviewReordering;
- (float)_distanceFromEdgeForSideAppView;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithContext:(id)context;
- (void)_dropResignActiveAssertionForEndingLayoutStateTransition;
- (unsigned)_edgeToAlignLayoutFrameForRole:(int)role inLayoutState:(id)layoutState;
- (void)_fadeInLayoutElementViewInRole:(int)role withAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_fadeInSideAppWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_fadeOutLayoutElementViewInRole:(int)role withAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_fadeOutScenesForZoomDownWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_fadeOutSideAppWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_layoutAdornmentContainer;
- (void)_layoutElementViewController:(id)controller transitioningFromLayoutElement:(id)layoutElement toLayoutElement:(id)layoutElement3;
- (CGRect)_layoutFrameForSize:(CGSize)size withRole:(int)role inLayoutState:(id)layoutState;
- (CGSize)_layoutSizeForRole:(int)role withLayoutContext:(id)layoutContext;
- (float)_layoutWidthForLayoutRole:(int)layoutRole inLayoutState:(id)layoutState;
- (float)_layoutWidthForLayoutRole:(int)layoutRole withSideAppPresentationStyle:(int)sideAppPresentationStyle sideAppWidth:(int)width;
- (void)_makeSideAppControllerPrimaryWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (id)_newSideAppDynamicAnimationForTargetValue:(double)targetValue startValue:(double)value withInitialVelocity:(double)initialVelocity;
- (id)_newSidePullDynamicAnimationForTargetValue:(double)targetValue withStartValue:(double)startValue withInitialVelocity:(double)initialVelocity unitSize:(double)size;
- (id)_newSideSwitcherDynamicAnimationForPresenting:(BOOL)presenting;
- (id)_newSideSwitcherDynamicAnimationForTargetValue:(double)targetValue withStartValue:(double)startValue withInitialVelocity:(double)initialVelocity;
- (float)_normalizedHalfScreenAppLocation;
- (float)_normalizedNarrowAppLocation;
- (int)_overrideInterfaceOrientationMechanics;
- (void)_popSideAppControllerWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (BOOL)_presentationChangesSignificantlyOnTransitioningFromLayoutElement:(id)layoutElement toLayoutElement:(id)layoutElement2;
- (id)_primaryAppPopOffAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (id)_primaryAppSlideOverAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (void)_pushSideAppControllerForSwitcher:(id)switcher withAnimationSettings:(id)animationSettings fadeIn:(BOOL)anIn completion:(id)completion;
- (void)_pushSideAppOverlayController:(id)controller dimOtherViews:(BOOL)views withAnimationSettings:(id)animationSettings fadeIn:(BOOL)anIn completion:(id)completion;
- (void)_pushSideAppOverlayController:(id)controller withAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_recoilByHighestPriorityWithAnimationFactory:(id)animationFactory;
- (void)_recoilMainSceneLayout:(float)layout withAnimationFactory:(id)animationFactory;
- (void)_reenableSubviewReordering;
- (CGRect)_referenceFrameForLayoutElement:(id)layoutElement inLayoutState:(id)layoutState;
- (CGSize)_referenceSizeForEntity:(id)entity inLayoutState:(id)layoutState;
- (CGSize)_referenceSizeForLayoutElement:(id)layoutElement inLayoutState:(id)layoutState;
- (CGSize)_referenceSizeForRole:(int)role withLayoutContext:(id)layoutContext;
- (void)_resizeAppViewsWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (id)_resizeAppsAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (void)_rotateAppViewsWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (id)_rotateAppsAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (float)_separatorWidth;
- (BOOL)_shouldAdjustViewAffordancesAfterTransition:(id)transition;
- (BOOL)_shouldRepositionViewAfterTransition:(id)transition;
- (BOOL)_shouldRotateToLayoutOrientation:(int)layoutOrientation;
- (id)_sideAppDismissalAnimationControllerWithTransitionRequest:(id)transitionRequest animationSettings:(id)settings;
- (id)_sideAppMakePrimaryAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (id)_sideAppPopOffAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (id)_sideAppPresentationAnimationControllerWithTransitionRequest:(id)transitionRequest animationSettings:(id)settings;
- (id)_sideOverlaySlideInAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (id)_sideSwitcherDismissalAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (id)_sideSwitcherPresentationAnimationControllerWithTransitionRequest:(id)transitionRequest;
- (void)_slideInSideAppWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_slideOutScenesForZoomDownWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)_slideOutSideAppWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (CGAffineTransform)_slidingTransformForSideAppViewWithNewDistance:(float)newDistance;
- (void)_startClippingbreadcrumbLayoutElementController:(id)controller;
- (void)_stopClippingbreadcrumbLayoutElementController:(id)controller;
- (void)_stopSuppressingKeyboardForEndingLayoutStateTransition;
- (CGAffineTransform)_transformForHidingElementWithRole:(int)role frame:(CGRect)frame baseTransform:(CGAffineTransform)transform withLayoutState:(id)layoutState;
- (void)_transitionToOrFromSideSwitcherForPresenting:(BOOL)presenting completion:(id)completion;
- (void)_updateBackgroundViewForLayoutElementViewController:(id)layoutElementViewController forLayoutElement:(id)layoutElement;
- (void)_updateWallpaperStyle;
- (CGRect)_visibleLayoutFrameForElement:(id)element inLayoutState:(id)layoutState;
- (CGRect)_visibleReferenceFrameForElement:(id)element inLayoutState:(id)layoutState;
- (id)_zoomDownAnimationControllerWithTransitionRequest:(id)transitionRequest animationSettings:(id)settings;
- (id)adornmentViewForApplication:(id)application inLayoutRole:(int)layoutRole withLayoutContext:(id)layoutContext;
- (id)animationControllerForRotatingWithTransitionRequest:(id)transitionRequest;
- (id)animationControllerForTransitionRequest:(id)transitionRequest;
- (id)animationWrapperViewForLayoutState:(id)layoutState roleMask:(unsigned)mask interfaceOrientation:(int)orientation;
- (void)appViewControllerPreferredLayoutLevelDidChange:(id)appViewControllerPreferredLayoutLevel;
- (id)appViewForApplication:(id)application inLayoutRole:(int)layoutRole withLayoutContext:(id)layoutContext hostRequester:(id)requester;
- (id)composedAnimationControllerForDosidoWithTransitionRequest:(id)transitionRequest using:(id)aUsing;
- (id)composedAnimationControllerForZoomingDownWithTransitionRequest:(id)transitionRequest using:(id)aUsing;
- (id)composedAnimationControllerForZoomingUpWithTransitionRequest:(id)transitionRequest using:(id)aUsing;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)multilinePrefix;
- (BOOL)getLayoutSpaceAnchorEdge:(out unsigned *)edge forLayoutRole:(int)layoutRole orientation:(int)orientation;
- (BOOL)getReferenceSpaceAnchorEdge:(out unsigned *)edge forLayoutRole:(int)layoutRole orientation:(int)orientation;
- (void)handleDimmingViewTapForLayoutElementViewController:(id)layoutElementViewController;
- (BOOL)handleMenuButtonPress;
- (void)layoutElementViewController:(id)controller configureDisplayLayoutElement:(id)element;
- (unsigned)layoutSpaceAnchorEdgeForPrimaryLayoutRole;
- (unsigned)layoutSpaceAnchorEdgeForSideLayoutRole;
- (void)loadView;
- (float)normalizedSuspendPrimaryLocation;
- (float)normalizedSuspendSideLocation;
- (void)popLayoutElementViewControllerWithAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)popLayoutElementViewControllerWithCompletion:(id)completion;
- (void)pushLayoutElementViewController:(id)controller withAnimationSettings:(id)animationSettings completion:(id)completion;
- (void)pushLayoutElementViewController:(id)controller withCompletion:(id)completion;
- (CGRect)referenceBoundsForEntity:(id)entity inLayoutState:(id)layoutState;
- (CGRect)referenceBoundsForIdentifier:(id)identifier inLayoutState:(id)layoutState;
- (CGRect)referenceFrameForEntity:(id)entity inLayoutState:(id)layoutState;
- (CGRect)referenceFrameForIdentifier:(id)identifier inLayoutState:(id)layoutState;
- (unsigned)referenceSpaceAnchorEdgeForPrimaryLayoutRole;
- (unsigned)referenceSpaceAnchorEdgeForSideLayoutRole;
- (void)setRecoil:(BOOL)recoil amount:(float)amount forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (void)setRecoil:(BOOL)recoil forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (BOOL)shouldAllowSwipeInDimmingViewAtStartLocation:(CGPoint)startLocation forLayoutElementViewController:(id)layoutElementViewController;
- (BOOL)shouldPerformFullscreenAnimationForTransitionRequest:(id)transitionRequest;
- (id)sideSwitcherRevealGesture;
- (void)viewWillLayoutSubviews;
@end

