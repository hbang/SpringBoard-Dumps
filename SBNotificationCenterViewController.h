/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSizeObservingViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinViewControllerDelegate.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBBulletinActionHandler.h"

@class SBBulletinObserverViewController, SBChevronView, SBModeViewController, SBNotificationCenterSeparatorView, _UIBackdropView, UIView, UIStatusBar;
@protocol SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerHostDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterViewController : XXUnknownSuperclass <SBBulletinViewControllerDelegate, SBSizeObservingViewDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler> {
	id<SBNotificationCenterViewControllerDelegate> _delegate;
	UIView *_clippingView;
	UIView *_containerView;
	UIView *_contentView;
	UIView *_backgroundView;
	UIView *_coveredContentContainer;
	SBNotificationCenterSeparatorView *_bottomSeparator;
	SBModeViewController *_modeController;
	SBBulletinObserverViewController *_todayViewController;
	SBBulletinObserverViewController *_allModeViewController;
	SBBulletinObserverViewController *_missedModeViewController;
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
}
@property(readonly, assign, nonatomic) _UIBackdropView *backdropView;
@property(assign, nonatomic) BOOL blursBackground;
@property(assign, nonatomic) UIEdgeInsets clippingInsets;
@property(readonly, assign, nonatomic) CGRect contentFrame;
@property(assign, nonatomic) float contentViewAlpha;
@property(retain, nonatomic) UIView *coveredContentSnapshot;
@property(assign, nonatomic) id<SBNotificationCenterViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) SBChevronView *grabberView;
@property(assign, nonatomic, getter=isGrabberViewEnabled) BOOL grabberViewEnabled;
@property(assign, nonatomic) BOOL showsBackground;
@property(assign, nonatomic, getter=isSuppressingNotificationUpdates) BOOL suppressesNotificationUpdates;
@property(assign, nonatomic) id<SBWidgetViewControllerHostDelegate> widgetDelegate;
+ (id)_localizableTitleForBulletinViewControllerOfClass:(Class)aClass;
+ (id)grayControlInteractionTintColor;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_allModeViewControllerCreateIfNecessary:(BOOL)necessary;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (void)_configureGrabberForSoloMode:(BOOL)soloMode;
- (void)_configureModeControllerView;
- (void)_configureView;
- (CGRect)_containerFrame;
- (CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
- (CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (void)_loadBottomSeparator;
- (void)_loadClippingView;
- (void)_loadContainerView;
- (void)_loadContentView;
- (void)_loadContentViewControllersForCurrentState;
- (void)_loadGrabberContentView;
- (void)_loadStatusBar;
- (id)_missedModeViewControllerCreateIfNecessary:(BOOL)necessary;
- (id)_newBackgroundView;
- (id)_newBulletinObserverViewControllerOfClass:(Class)aClass;
- (id)_newGrabberView;
- (void)_register:(BOOL)aRegister grabberView:(id)view withHideBlock:(id)hideBlock;
- (void)_reloadAllWidgets;
- (void)_setContainerFrame:(CGRect)frame;
- (void)_setViewHitTestAsOpaque:(BOOL)opaque;
- (id)_todayViewControllerCreateIfNecessary:(BOOL)necessary;
- (void)_updateContrastSettingsForBottomSeparator;
- (void)_updateContrastSettingsForGrabberView;
- (void)_validateBackgroundViewIfNecessary;
- (void)dealloc;
- (void)disableGrabberLock;
- (void)dismissGrabberView;
- (BOOL)handleActionForBulletin:(id)bulletin;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (BOOL)isGrabberLocked;
- (void)loadView;
- (CGRect)positionContentForTouchAtLocation:(CGPoint)location;
- (void)presentGrabberView;
- (void)registerSharedGrabberView:(id)view withHideBlock:(id)hideBlock;
- (CGRect)revealRectForBulletin:(id)bulletin;
- (void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta;
- (void)sizeObservingView:(id)view didChangeSize:(CGSize)size;
- (id)unregisterSharedGrabberView;
- (void)updateForChangeInMessagePrivacy;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

