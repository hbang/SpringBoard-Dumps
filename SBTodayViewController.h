/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinObserverViewController.h"
#import "SBWidgetHandling.h"


__attribute__((visibility("hidden")))
@interface SBTodayViewController : SBBulletinObserverViewController <SBWidgetHandling> {
	NSMutableDictionary *_sectionIDsToOrderedBulletins;
	NSArray *_todaySnippetBulletinOrder;
	NSArray *_tomorrowSnippetBulletinOrder;
	SBBBSectionInfo *_todaySectionInfo;
	SBBBSectionInfo *_tomorrowSectionInfo;
	id _pendingVisibleWidgetCompletion;
	CGSize _cachedContentSize;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *visibleWidgetIDs;
+ (float)_todayWidgetAndTomorrowSectionHeaderViewHeightForLayoutMode:(int)layoutMode;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_bulletinOrderStringForBulletinInfo:(id)bulletinInfo;
- (void)_enableWidgetsPassingTest:(id)test completion:(id)completion;
- (int)_nextSequenceNumber;
- (void)_refreshWidget:(id)widget launchStats:(id)stats completion:(id)completion;
- (void)_sortBulletinsForSectionWithIdentifier:(id)identifier referencingOrder:(id)order;
- (id)_todaySnippetBulletinOrder;
- (id)_tomorrowSnippetBulletinOrder;
- (void)_updateTableFooter;
- (void)_updateTableHeader:(BOOL)header;
- (id)_widgetHandlingBulletinViewController;
- (int)activeLayoutModeForWidget:(id)widget;
- (int)bulletinViewController:(id)controller insertionAnimationForBulletin:(id)bulletin inSection:(id)section;
- (UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
- (BOOL)canRemoveViewOnDismissal:(id)dismissal;
- (void)commitInsertionOfBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section forFeed:(unsigned)feed;
- (void)commitInsertionOfSection:(id)section beforeSection:(id)section2;
- (void)commitReloadOfSections:(id)sections;
- (void)commitRemovalOfBulletin:(id)bulletin fromSection:(id)section;
- (void)commitRemovalOfSection:(id)section;
- (void)commitReplacementWithBulletin:(id)bulletin ofBulletin:(id)bulletin2 inSection:(id)section;
- (void)contentAvailabilityDidChangeForWidget:(id)contentAvailability;
- (CGSize)contentSize;
- (void)dealloc;
- (void)enableAllWidgets:(id)widgets;
- (void)forceUpdateTableHeader;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (id)infoForBulletin:(id)bulletin inSection:(id)section forFeed:(unsigned)feed;
- (id)infoForBulletinSection:(id)bulletinSection;
- (id)infoForWidgetSection:(id)widgetSection;
- (void)insertAppropriateViewWithContent;
- (void)invalidateContentLayout;
- (void)makeVisibleWidgetWithIdentifier:(id)identifier animated:(BOOL)animated completion:(id)completion;
- (void)setWidgetDelegate:(id)delegate;
- (BOOL)shouldRequestWidgetRemoteViewControllers;
- (id)todayTableFooterView;
- (id)todayTableHeaderView;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)updateTableHeaderIfNecessary;
- (void)updateWidgetsWithIdentifiers:(id)identifiers launchStats:(id)stats completion:(id)completion;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (id)widgetForSection:(id)section;
- (BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)widget;
- (id)widgetWithIdentifier:(id)identifier;
- (void)widgetsEditButtonTapped:(id)tapped;
@end

