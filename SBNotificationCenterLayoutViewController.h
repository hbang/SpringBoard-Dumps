/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBNotificationCenterWidgetHost.h"
#import "NCWidgetDataSourceObserver.h"
#import "SBTodayViewSettingsViewControllerDelegate.h"
#import "SBWidgetHandlingNCColumnViewControllerDelegate.h"
#import "SBModeViewControllerDelegate.h"
#import "SBTodayViewControllerDelegate.h"
#import "NCSnippetDataSourceObserver.h"
#import "SBBulletinActionHandler.h"

@protocol OS_dispatch_queue, SBWidgetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterLayoutViewController : XXUnknownSuperclass <SBBulletinActionHandler, NCSnippetDataSourceObserver, NCWidgetDataSourceObserver, SBWidgetHandlingNCColumnViewControllerDelegate, SBTodayViewControllerDelegate, SBModeViewControllerDelegate, SBNotificationCenterWidgetHost, SBTodayViewSettingsViewControllerDelegate> {
	SBTodayViewController *_todayViewController;
	SBWidgetHandlingNCColumnViewController *_widgetsViewController;
	int _supportedNotificationCenterLayoutModes;
	int _lastPresentedNotificationCenterLayoutMode;
	NSMutableDictionary *_archive;
	NSObject<OS_dispatch_queue> *_archiveWriteQueue;
	NSObject<OS_dispatch_queue> *_newWidgetsCountPostQueue;
	NSMutableSet *_defaultEnabledIDs;
	NSMutableDictionary *_identifiersToSnippetDataSources;
	NSMutableDictionary *_identifiersToWidgetDataSources;
	NSMutableDictionary *_identifiersToDatums;
	NSMutableDictionary *_dataSourceIdentifiersToDatumIdentifiers;
	NSMutableDictionary *_identifiersToDisabledInterfaceItems;
	NSMutableDictionary *_groupNamesToPendingOrderedInterfaceItems;
	SBSnippetSectionInfo *_todaySectionInfo;
	SBSnippetSectionInfo *_tomorrowSectionInfo;
	NSMutableDictionary *_identifiersToChildSections;
	SBNotificationSeparatorView *_topSeparatorView;
	BOOL _presentingEditView;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
	id<SBBulletinActionHandler> _bulletinActionHandler;
	SBNotificationsViewController *_notificationsViewController;
	SBModeViewController *_modeViewController;
}
@property(assign, nonatomic) id<SBBulletinActionHandler> bulletinActionHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBModeViewController *modeViewController;
@property(readonly, retain, nonatomic) SBNotificationsViewController *notificationsViewController;
@property(readonly, assign) Class superclass;
@property(readonly, copy, nonatomic) NSSet *visibleContentViewControllers;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
@property(readonly, copy, nonatomic) NSSet *widgetHandlingViewControllers;
- (id)initForNotificationCenterLayoutMode:(int)notificationCenterLayoutMode;
- (BOOL)_areNotificationsViewControllersAvailable;
- (BOOL)_areWidgetViewControllersAvailable;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (void)_batteryDevicesDidChange:(id)_batteryDevices;
- (void)_beginObservingDataSourcesIfNecessary;
- (void)_calculateAndPostNewWidgetsCount;
- (id)_childDelegateForGroup:(id)group;
- (void)_dataSourcesDidChange:(id)_dataSources withExistingCollection:(id)existingCollection addObserverBlock:(id)block removeObserverBlock:(id)block4;
- (id)_defaultGroupForInterfaceItemWithIdentifier:(id)identifier;
- (id)_groupKeyForWidgetHandlingNCColumnViewController:(id)widgetHandlingNCColumnViewController;
- (int)_insertionIndexForBatteryWidgetInIdentifiers:(id)identifiers;
- (BOOL)_isDeviceMoreThanUILocked;
- (BOOL)_isElementWithIdentifierEnabled:(id)identifierEnabled;
- (BOOL)_isElementWithIdentifierKnown:(id)identifierKnown;
- (BOOL)_isParentElementEnabledForElementWithID:(id)anId;
- (void)_layoutModeViewController;
- (void)_layoutTodayViewControllerIfNecessary;
- (void)_loadContentViewControllers;
- (id)_localizableTitleForColumnViewController:(id)columnViewController;
- (BOOL)_managesTwoColumns;
- (BOOL)_needsLayoutAfterLoadingContentViewControllers;
- (int)_notificationCenterLayoutModeForCurrentState;
- (id)_notificationsViewControllerCreateIfNecessary:(BOOL)necessary;
- (id)_parentSectionInfoForSnippetCategory:(int)snippetCategory;
- (void)_publishBatteryWidget;
- (void)_registerDefaultEnabledWidgetIdentifiers:(id)identifiers;
- (void)_repopulateWidgetHandlingViewController:(id)controller;
- (BOOL)_setEnabled:(BOOL)enabled forElementWithIdentifier:(id)identifier;
- (void)_setUpColumnViewController:(id)controller;
- (void)_setUpWidgetHandlingNCColumnViewController:(id)controller;
- (BOOL)_shouldLayoutInTwoColumnsInActiveLayoutMode;
- (BOOL)_shouldLayoutInTwoColumnsInLayoutMode:(int)layoutMode;
- (BOOL)_shouldPublishBatteryWidget;
- (BOOL)_shouldPublishWidgetDatum:(id)datum;
- (void)_snippetDataSourcesDidChange:(id)_snippetDataSources;
- (id)_snippetSectionInfoForElementWithIdentifier:(id)identifier;
- (id)_targetViewControllerForWidgetDatum:(id)widgetDatum;
- (id)_todayViewControllerCreateIfNecessary:(BOOL)necessary;
- (void)_widgetDataSourcesDidChange:(id)_widgetDataSources;
- (id)_widgetHandlingViewControllerForGroup:(id)group;
- (id)_widgetsViewControllerCreateIfNecessary:(BOOL)necessary;
- (void)buddyCompleted:(id)completed;
- (id)childSectionIdentifiersForTodayViewController:(id)todayViewController;
- (UIEdgeInsets)contentInsetsForModeViewController:(id)modeViewController;
- (void)dealloc;
- (id)disabledInterfaceItemsForTodayViewSettingsViewController:(id)todayViewSettingsViewController;
- (id)groupsForTodayViewSettingsViewController:(id)todayViewSettingsViewController;
- (BOOL)handleAction:(id)action forBulletin:(id)bulletin withCompletion:(id)completion;
- (int)layoutMode;
- (int)layoutModeForTodayViewSettingsViewController:(id)todayViewSettingsViewController;
- (id)orderedInterfaceItemIdentifiersForWidgetHandlingNCColumnViewController:(id)widgetHandlingNCColumnViewController;
- (id)presentationContextDefininingViewControllerForTodayViewController:(id)todayViewController;
- (void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta useAAGView:(BOOL)view;
- (void)snippetDataSource:(id)source removeDatum:(id)datum;
- (void)snippetDataSource:(id)source replaceWithDatum:(id)datum;
- (id)todaySectionInfoForTodayViewController:(id)todayViewController;
- (id)todayViewController:(id)controller childSectionInfoForIdentifier:(id)identifier;
- (id)todayViewController:(id)controller snippetsForChildSectionWithIdentifier:(id)identifier;
- (void)todayViewController:(id)controller visibleContentIsClipping:(BOOL)clipping;
- (void)todayViewSettingsViewController:(id)controller acknowledgeInterfaceItems:(id)items;
- (BOOL)todayViewSettingsViewController:(id)controller canReorderInterfaceItem:(id)item;
- (id)todayViewSettingsViewController:(id)controller defaultGroupForInterfaceItem:(id)interfaceItem;
- (void)todayViewSettingsViewController:(id)controller didReorderInterfaceItems:(id)items inGroup:(id)group;
- (id)todayViewSettingsViewController:(id)controller displayNameForGroup:(id)group;
- (id)todayViewSettingsViewController:(id)controller interfaceItemsForGroup:(id)group;
- (BOOL)todayViewSettingsViewController:(id)controller isInterfaceItemWithIdentifierEnabled:(id)identifierEnabled;
- (BOOL)todayViewSettingsViewController:(id)controller isInterfaceItemWithIdentifierNew:(id)identifierNew;
- (BOOL)todayViewSettingsViewController:(id)controller setEnabled:(BOOL)enabled forInterfaceItems:(id)interfaceItems;
- (void)todayViewSettingsViewControllerWillDismiss:(id)todayViewSettingsViewController;
- (void)todayViewSettingsViewControllerWillPresent:(id)todayViewSettingsViewController;
- (id)tomorrowSectionInfoForTodayViewController:(id)todayViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (void)widgetDataSource:(id)source removeDatum:(id)datum;
- (void)widgetDataSource:(id)source replaceWithDatum:(id)datum;
- (void)widgetHandlingNCColumnViewController:(id)controller requestsEnablingForDebuggingWidgetsWithIdentifiers:(id)identifiers;
- (BOOL)widgetHandlingNCColumnViewControllerShouldRequestWidgetRemoteViewControllers:(id)widgetHandlingNCColumnViewController;
- (void)widgetHandlingNCColumnViewControllerVisibleContentDidChange:(id)widgetHandlingNCColumnViewControllerVisibleContent;
- (id)widgetHandlingViewControllerForWidgetWithIdentifier:(id)identifier;
@end

