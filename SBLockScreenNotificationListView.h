/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationListView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	SBLockScreenNotificationTableView *_tableView;
	UIView *_tableHeaderView;
	UIView *_tableFooterView;
	UIView *_topPocketView;
	UIView *_bottomPocketView;
	UIView *_containerView;
	id<SBLockScreenNotificationViewDelegate> _delegate;
	id<SBLockScreenNotificationModel> _model;
	CADisplayLink *_displayLink;
	float _currentTextAlpha;
	double _fadeStartTimestamp;
	NSTimer *_oldTextDisabledTimer;
	unsigned _indexOfNewItem;
	BOOL _notificationCellIsScrollingToPasscode;
	float _notificationScrollDecelerationRatio;
	NSMutableDictionary *_heightForListItemCache;
	float _totalContentHeight;
	float _startingScrollOffset;
	float _lastDistanceScrolled;
	SBNotificationRowActionFactory *_cellButtonFactory;
	BOOL _updateCellsToVisibleOnPluginWillDisable;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBLockScreenNotificationViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBLockScreenNotificationModel> model;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) BOOL updateCellsToVisibleOnPluginWillDisable;
- (id)initWithFrame:(CGRect)frame;
- (id)_activeBulletinForIndexPath:(id)indexPath;
- (id)_alertItemForIndexPath:(id)indexPath;
- (void)_cellTextFadeTimerFired:(id)fired;
- (void)_clearTextDisabledTimer;
- (void)_clearTextFadeTimer;
- (void)_disableExistingContent;
- (BOOL)_disableIdleTimer:(BOOL)timer;
- (void)_enableIdleTimerAfterScroll;
- (void)_handleAction:(id)action forBulletin:(id)bulletin;
- (void)_pluginWillDisable:(id)_plugin;
- (id)_pocketLineColor;
- (void)_postludeForUpdateForRemoval:(BOOL)removal;
- (void)_resetAllFadeTimers;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (void)_scrollingEndedInScrollView:(id)scrollView;
- (void)_setContentForTableCell:(id)tableCell withItem:(id)item atIndexPath:(id)indexPath;
- (void)_setNonSelectedCellsToVisible:(BOOL)visible withSelectedCell:(id)selectedCell;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (void)_textDisabledTimerFired:(id)fired;
- (void)_updateBottomShadowVisibility;
- (void)_updateTotalContentHeight;
- (void)dealloc;
- (void)layoutSubviews;
- (void)lockScreenDidEndScrollingOnPage:(int)lockScreen;
- (void)prepareForRemoval;
- (void)scrollToTopOfListAnimated:(BOOL)listAnimated;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (CGRect)scrollableRegion;
- (id)scrollingGesture;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndSwipingRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view editActionsForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(int)section;
- (id)tableView:(id)view titleForHeaderInSection:(int)section;
- (void)tableView:(id)view willBeginSwipingRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)updateForAdditionOfItemAtIndex:(unsigned)index allowHighlightOnInsert:(BOOL)insert;
- (void)updateForModificationOfItemWithOldIndex:(unsigned)oldIndex andNewIndex:(unsigned)index;
- (void)updateForRemovalOfItemAtIndex:(unsigned)index removedItem:(id)item;
- (void)updateForRemovalOfItems;
- (id)visibleNotificationCells;
@end

