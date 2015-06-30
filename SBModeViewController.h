/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBBulletinActionHandler;

__attribute__((visibility("hidden")))
@interface SBModeViewController : XXUnknownSuperclass <SBSizeObservingViewDelegate, _UISettingsKeyPathObserver> {
	id<SBBulletinActionHandler> _delegate;
	SBBulletinObserverViewController *_selectedViewController;
	SBBulletinObserverViewController *_deselectedViewController;
	UIScrollView *_contentView;
	UIView *_headerView;
	SBModeControlManager *_modeControl;
	UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;
	UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
	SBNotificationCenterSeparatorView *_separator;
	struct {
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
		unsigned shouldLoadAllChildViews : 1;
	} _modeViewControllerFlags;
}
@property(assign, nonatomic) id<SBBulletinActionHandler> delegate;
@property(retain, nonatomic) SBBulletinObserverViewController *deselectedViewController;
@property(assign, nonatomic, getter=isRequestHandlingEnabled) BOOL requestHandlingEnabled;
@property(assign, nonatomic) UIViewController *selectedViewController;
@property(retain, nonatomic) NSArray *viewControllers;
+ (id)_buttonTitleFont;
- (BOOL)_addBulletinObserverViewController:(id)controller;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (BOOL)_contentOffset:(CGPoint *)offset forChildViewController:(id)childViewController;
- (float)_headerViewHeightForMode:(int)mode;
- (void)_invalidateContentLayout;
- (void)_invalidateSegmentLayout;
- (BOOL)_isChildViewControllerViewLoadedInContentView:(id)contentView;
- (BOOL)_isRequestHandlingEnabled;
- (void)_layoutContentIfNecessary;
- (void)_layoutHeaderViewIfNecessary;
- (void)_layoutSegmentsIfNecessary;
- (void)_loadContentView;
- (void)_loadHeaderView;
- (CGRect)_modeControlFrameWithHeaderBounds:(CGRect)headerBounds forMode:(int)mode;
- (id)_newSwipeGestureRecognizerWithDirection:(unsigned)direction;
- (void)_setContentViewContentOffset:(CGPoint)offset animated:(BOOL)animated;
- (void)_setSelectedBulletinObserverViewController:(id)controller animated:(BOOL)animated;
- (void)_setSelectedSegmentIndex:(int)index;
- (id)_viewIfLoaded;
- (void)addViewController:(id)controller;
- (void)dealloc;
- (BOOL)handleActionForBulletin:(id)bulletin;
- (void)handleModeChange:(id)change;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (int)layoutMode;
- (void)loadView;
- (CGRect)rectForBulletin:(id)bulletin;
- (void)removeViewController:(id)controller;
- (void)setSelectedViewController:(id)controller animated:(BOOL)animated;
- (void)setWidgetDelegate:(id)delegate;
- (void)settings:(id)settings changedValueForKeyPath:(id)keyPath;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)sizeObservingView:(id)view didChangeSize:(CGSize)size;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (id)widgetDelegate;
@end

