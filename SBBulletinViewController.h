/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBBulletinViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinViewController : XXUnknownSuperclass {
	id<SBBulletinViewControllerDelegate> _delegate;
	NSMutableArray *_orderedSections;
	NSMutableDictionary *_sectionIDsToBulletins;
	NSMutableSet *_pendingReusableViewIDs;
	BOOL _tableViewNeedsReload;
	id _owedWillAppearBlock;
	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned decidesHighlight : 1;
		unsigned interestedInSelection : 1;
	} _bulletinViewControllerDelegateFlags;
}
@property(assign, nonatomic) id<SBBulletinViewControllerDelegate> delegate;
@property(assign, nonatomic) CGRect tableViewFrame;
+ (id)reusableViewIdentifierForInfo:(id)info;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_addChildWidgetBulletinIfPossible:(id)possible;
- (BOOL)_insertBulletin:(id)bulletin atIndex:(unsigned)index inSection:(id)section;
- (BOOL)_insertSection:(id)section atIndex:(unsigned)index;
- (void)_invokeBlockWithAllVisibleWidgets:(id)allVisibleWidgets;
- (BOOL)_moveBulletin:(id)bulletin fromSection:(id)section toIndex:(unsigned)index inSection:(id)section4;
- (BOOL)_moveSection:(id)section toIndex:(unsigned)index;
- (void)_performInsertionOperation:(id)operation;
- (void)_performMoveOperation:(id)operation;
- (void)_performRemovalOperation:(id)operation;
- (void)_performReplacementOperation:(id)operation;
- (void)_registerOrQueueNewReusableViewIdentifierForInfo:(id)info;
- (void)_reloadOrInvalidateTableViewData;
- (void)_reloadTableViewDataIfNecessary;
- (BOOL)_removeBulletin:(id)bulletin fromSection:(id)section;
- (void)_removeChildWidgetBulletinIfPossible:(id)possible;
- (BOOL)_removeSection:(id)section;
- (BOOL)_replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section;
- (BOOL)_replaceWithSection:(id)section section:(id)section2;
- (void)_updateEnhancedContrastSettings:(id)settings;
- (id)_viewIfLoaded;
- (void)addBulletin:(id)bulletin inSection:(id)section;
- (void)dealloc;
- (id)indexPathForBulletin:(id)bulletin inSection:(id)section;
- (void)insertBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section;
- (void)insertSection:(id)section beforeSection:(id)section2;
- (void)invalidateCachedLayoutData;
- (void)invalidateSectionAndRowViewHeights;
- (void)moveBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
- (void)moveSection:(id)section beforeSection:(id)section2;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)reloadBulletins:(id)bulletins inSection:(id)section;
- (void)reloadSections:(id)sections;
- (void)removeBulletin:(id)bulletin inSection:(id)section;
- (void)removeSection:(id)section;
- (void)replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section;
- (void)replaceWithSection:(id)section section:(id)section2;
- (void)setTableViewNeedsReload;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (id)viewForBulletin:(id)bulletin inSection:(id)section;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (BOOL)widgetViewController:(id)controller beginAppearanceTransitionIfNecessary:(BOOL)necessary animated:(BOOL)animated;
- (BOOL)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)necessary;
@end

