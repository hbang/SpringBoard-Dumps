/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinViewController.h"
#import "SBNotificationCenterWidgetHost.h"

@protocol SBWidgetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBWidgetHandlingBulletinViewController : SBBulletinViewController <SBNotificationCenterWidgetHost> {
	NSMutableDictionary *_identifiersToWidgets;
	id _owedWillAppearBlock;
	NSMutableDictionary *_outstandingWidgetUpdateRequests;
	id _cancelTouchesForHitWidgetAssertion;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
}
@property(readonly, assign, nonatomic) NSArray *allEnabledWidgetIDs;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *visibleWidgetIDs;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_cancelTouchesForHitWidgetIfNecessary;
- (void)_captureSnapshot:(BOOL)snapshot andInsert:(BOOL)insert disconnectingRemoteViewController:(BOOL)controller forceDisconnection:(BOOL)disconnection forWidget:(id)widget completion:(id)completion;
- (void)_captureSnapshot:(BOOL)snapshot forWidget:(id)widget withCompletion:(id)completion;
- (id)_completionHandlerForUpdateRequestForWidget:(id)widget;
- (void)_disconnectRemoteViewController:(BOOL)controller forWidget:(id)widget withCompletion:(id)completion;
- (void)_insertRemoteViewForWidget:(id)widget completion:(id)completion;
- (void)_insertRemoteViewsForWidgetsWithIDs:(id)ids animated:(BOOL)animated;
- (void)_insertSnapshot:(BOOL)snapshot forWidget:(id)widget withCompletion:(id)completion;
- (void)_insertSnapshotsForWidgetsWithIDs:(id)ids animated:(BOOL)animated;
- (void)_invokeBlockWithAllVisibleWidgets:(id)allVisibleWidgets;
- (void)_noteOutstandingUpdateRequestForWidget:(id)widget;
- (void)_registerUpdateRequestCompletionHandler:(id)handler forWidget:(id)widget;
- (void)_updateWidgetViewState;
- (BOOL)_widgetHasOutstandingUpdateRequest:(id)request;
- (void)addChildBulletinIfPossible:(id)possible;
- (void)dealloc;
- (void)invalidateSectionAndRowViewHeights:(id)heights;
- (void)makeVisibleWidgetInSection:(id)section andConnect:(BOOL)connect animated:(BOOL)animated completion:(id)completion;
- (void)removeChildBulletinIfPossible:(id)possible;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScrollToTop:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (void)widgetViewController:(id)controller beginAppearanceTransitionIfNecessary:(BOOL)necessary animated:(BOOL)animated;
- (void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)necessary;
@end

