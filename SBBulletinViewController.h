/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBBulletinViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinViewController : XXUnknownSuperclass <SBMotionGestureObserver> {
	id<SBBulletinViewControllerDelegate> _delegate;
	NSMutableArray *_orderedSections;
	NSMutableDictionary *_sectionIDsToBulletins;
	NSMutableDictionary *_reusableViewIDsToUnregisteredCellClassNames;
	NSMutableDictionary *_reusableViewIDsToUnregisteredHeaderClassNames;
	BOOL _tableViewNeedsReload;
	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned decidesHighlight : 1;
		unsigned interestedInSelection : 1;
	} _bulletinViewControllerDelegateFlags;
	SBNotificationRowActionFactory *_cellButtonFactory;
	BOOL _usesTableViewSeparators;
	BOOL _canDismissBulletins;
}
@property(assign, nonatomic) BOOL canDismissBulletins;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBBulletinViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) CGRect tableViewFrame;
@property(assign, nonatomic) BOOL usesTableViewSeparators;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_bulletinInfoAtIndexPath:(id)indexPath;
- (int)_bulletinSectionLocationAtIndexPath:(id)indexPath;
- (BOOL)_hasFirstBulletinInSectionWithRaiseAction;
- (BOOL)_insertBulletin:(id)bulletin atIndex:(unsigned)index inSection:(id)section dryRun:(BOOL)run;
- (BOOL)_insertSection:(id)section atIndex:(unsigned)index dryRun:(BOOL)run;
- (BOOL)_moveBulletin:(id)bulletin fromSection:(id)section toIndex:(unsigned)index inSection:(id)section4 dryRun:(BOOL)run;
- (BOOL)_moveSection:(id)section toIndex:(unsigned)index dryRun:(BOOL)run;
- (void)_performInsertionOperation:(id)operation;
- (void)_performMoveOperation:(id)operation;
- (void)_performRemovalOperation:(id)operation;
- (void)_performReplacementOperation:(id)operation;
- (void)_registerOrQueueCellClassForInfo:(id)info;
- (void)_registerOrQueueHeaderClassForInfo:(id)info;
- (void)_registerOrQueueReusableClass:(Class)aClass forIdentifier:(id)identifier registerBlock:(id)block queueBlock:(id)block4;
- (void)_registerOrQueueReusableViewClassForInfo:(id)info;
- (void)_reloadOrInvalidateTableViewData;
- (void)_reloadTableViewData;
- (BOOL)_removeBulletin:(id)bulletin fromSection:(id)section dryRun:(BOOL)run;
- (BOOL)_removeSection:(id)section dryRun:(BOOL)run;
- (BOOL)_replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section dryRun:(BOOL)run;
- (BOOL)_replaceWithSection:(id)section section:(id)section2 dryRun:(BOOL)run;
- (id)_representedBulletinAtIndexPath:(id)indexPath;
- (id)_sectionInfoAtIndexPath:(id)indexPath;
- (void)_selectAction:(id)action atIndexPath:(id)indexPath;
- (void)_updateEnhancedContrastSettings:(id)settings;
- (void)_updateMotionGestureObservation;
- (id)_viewIfLoaded;
- (void)addBulletin:(id)bulletin inSection:(id)section;
- (void)addChildBulletinIfPossible:(id)possible;
- (void)dealloc;
- (void)didReceiveRaiseGesture;
- (BOOL)hasContent;
- (unsigned)indexOfSection:(id)section;
- (id)indexPathForBulletin:(id)bulletin inSection:(id)section;
- (void)insertBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section;
- (void)insertSection:(id)section beforeSection:(id)section2;
- (void)invalidateCachedLayoutData;
- (void)invalidateSectionAndRowViewHeights:(id)heights;
- (void)moveBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
- (void)moveSection:(id)section beforeSection:(id)section2;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)reloadBulletins:(id)bulletins inSection:(id)section;
- (void)reloadSections:(id)sections;
- (void)reloadTableViewDataIfNecessary;
- (void)removeBulletin:(id)bulletin inSection:(id)section;
- (void)removeChildBulletinIfPossible:(id)possible;
- (void)removeSection:(id)section;
- (void)replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section;
- (void)replaceWithSection:(id)section section:(id)section2;
- (id)sectionAtIndex:(unsigned)index;
- (void)setTableViewNeedsReload;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view editActionsForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(int)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (void)tableView:(id)view willBeginSwipingRowAtIndexPath:(id)indexPath;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (id)viewForBulletin:(id)bulletin inSection:(id)section;
- (void)viewWillLayoutSubviews;
@end
