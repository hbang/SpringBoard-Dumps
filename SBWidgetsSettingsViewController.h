/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"


__attribute__((visibility("hidden")))
@interface SBWidgetsSettingsViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	SBWidgetsSettingsTableViewController *_tableViewController;
	BBSettingsGateway *_bbSettings;
	NSMutableArray *_chronologicalSections;
	NSMutableArray *_enabledWidgets;
	NSMutableArray *_disabledWidgets;
	BBSectionInfo *_todaySection;
	BBSectionInfo *_tomorrowSection;
	BBSectionInfo *_coreRoutineSection;
	BOOL _coreRoutineIsAvailable;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_disableWidgetAtIndexPath:(id)indexPath inTableView:(id)tableView;
- (void)_dismissWidgetsSettingsAnimated:(BOOL)animated;
- (void)_dismissWidgetsSettingsWithAnimation;
- (void)_dismissWidgetsSettingsWithoutAnimation;
- (void)_enableWidgetAtIndexPath:(id)indexPath inTableView:(id)tableView;
- (unsigned)_indexForInsertingSection:(id)insertingSection intoArray:(id)array;
- (int)_indexOfFirstEnabledWidget;
- (int)_indexOfLastEnabledWidget;
- (BOOL)_isFixedSnippetsSection:(id)section;
- (void)_loadWidgetsSections;
- (id)_newBackgroundView;
- (void)_saveWidgetsSections;
- (void)_saveWidgetsState;
- (id)_sectionInfoArrayForIndexPath:(id)indexPath;
- (id)_sectionInfoForIndexPath:(id)indexPath;
- (BOOL)_setSectionInfo:(id)info enabled:(BOOL)enabled;
- (BOOL)_updateCoreRoutineAvailability;
- (void)dealloc;
- (int)numberOfSectionsInTableView:(id)tableView;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndReorderingRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(int)section;
- (BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
- (id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view titleForHeaderInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)viewDidLoad;
@end

