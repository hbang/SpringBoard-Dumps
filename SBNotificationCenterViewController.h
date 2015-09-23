/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNCTableViewControllerDelegate.h"
#import "SBUISizeObservingViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBNotificationCenterWidgetHost.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBBulletinActionHandler.h"

@protocol SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterViewController : XXUnknownSuperclass <SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate, UIGestureRecognizerDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler, SBReachabilityObserver> {
	id<SBNotificationCenterViewControllerDelegate> _delegate;
	UIView *_clippingView;
	UIView *_containerView;
	UIView *_contentView;
	UIView *_backgroundView;
	UIView *_modeClippingView;
	SBNotificationSeparatorView *_bottomSeparator;
	SBNotificationCenterLayoutViewController *_layoutViewController;
	UIStatusBar *_statusBar;
	SBChevronView *_grabberView;
	UIView *_grabberContentView;
	UIView *_grabberBackgroundView;
	SBChevronView *_registeredGrabberView;
	CGRect _grabberContentViewFrameForRegisteredGrabber;
	id _registeredGrabberHideBlock;
	struct {
		unsigned blursBackground : 1;
		unsigned showsBackground : 1;
		unsigned isBackgroundValid : 1;
		unsigned isGrabberEnabled : 1;
		unsigned isGrabberLockEngaged : 1;
		unsigned viewHitTestsAsOpaque : 1;
		unsigned isViewHitTestingValid : 1;
	} _notificationCenterViewControllerFlags;
	BOOL _showingForReachability;
	CGPoint _preReachabilityOrigin;
	CGPoint _reachabilityOrigin;
	BOOL _preReachabilityGrabberHidden;
	CGRect _preReachabilityGrabberFrame;
	CGPoint _preReachabilitySeparatorOrigin;
	CGPoint _reachabilitySeparatorOrigin;
	UIGestureRecognizer *_tapToCancelReachabilityGestureRecognizer;
}
@property(readonly, retain, nonatomic) _UIBackdropView *backdropView;
@property(assign, nonatomic) BOOL blursBackground;
@property(assign, nonatomic) UIEdgeInsets clippingInsets;
@property(readonly, assign, nonatomic) CGRect contentFrame;
@property(assign, nonatomic) float contentViewAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBNotificationCenterViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) SBChevronView *grabberView;
@property(assign, nonatomic, getter=isGrabberViewEnabled) BOOL grabberViewEnabled;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int layoutMode;
@property(assign, nonatomic) BOOL showsBackground;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic, getter=isSuppressingNotificationUpdates) BOOL suppressesNotificationUpdates;
@property(readonly, assign, nonatomic) NSSet *visibleContentViewControllers;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
@property(readonly, assign, nonatomic) NSSet *widgetHandlingViewControllers;
+ (id)grayControlInteractionTintColor;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_animateForReachabilityActivatedWithHandler:(id)handler;
- (void)_animateForReachabilityDeactivatedWithHandler:(id)handler;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (void)_configureGrabberForSoloMode:(BOOL)soloMode;
- (void)_configureView;
- (CGRect)_containerFrame;
- (CGRect)_containerFrame:(BOOL)frame;
- (id)_grabberColor;
- (CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
- (CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (void)_loadBottomSeparator;
- (void)_loadClippingView;
- (void)_loadContainerView;
- (void)_loadContentView;
- (void)_loadGrabberContentView;
- (void)_loadLayoutViewControllerView;
- (void)_loadModeClippingView;
- (void)_loadStatusBar;
- (id)_newBackgroundView;
- (id)_newGrabberView;
- (void)_performReachabilityTransactionForActivate:(BOOL)activate immediately:(BOOL)immediately;
- (void)_registerGrabberView:(id)view withHideBlock:(id)hideBlock;
- (id)_relevanceDateColor;
- (void)_setContainerFrame:(CGRect)frame;
- (void)_setViewHitTestAsOpaque:(BOOL)opaque;
- (void)_updateContrastSettingsForBottomSeparator;
- (void)_updateContrastSettingsForGrabberView;
- (void)_validateBackgroundViewIfNecessary;
- (void)abortAnimatedPositionChange;
- (id)colorForElement:(int)element;
- (void)dealloc;
- (void)disableGrabberLock;
- (void)dismissGrabberView;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (CGRect)grabberContentRect;
- (BOOL)handleAction:(id)action forBulletin:(id)bulletin withCompletion:(id)completion;
- (void)handleCancelReachabilityGesture:(id)gesture;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (BOOL)isGrabberLocked;
- (void)loadView;
- (CGRect)positionContentForTouchAtLocation:(CGPoint)location;
- (int)preferredInterfaceOrientationForPresentation;
- (void)prepareLayoutForPresentationFromBanner;
- (void)presentGrabberView;
- (void)registerSharedGrabberView:(id)view withHideBlock:(id)hideBlock;
- (CGRect)revealRectForBulletin:(id)bulletin;
- (void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta useAAGView:(BOOL)view;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (void)sizeObservingView:(id)view didChangeSize:(CGSize)size;
- (id)unregisterSharedGrabberView;
- (void)updateForChangeInMessagePrivacy;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (id)widgetHandlingViewControllerForWidgetWithIdentifier:(id)identifier;
@end

