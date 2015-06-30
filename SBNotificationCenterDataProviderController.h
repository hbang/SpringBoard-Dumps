/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"


__attribute__((visibility("hidden")))
@interface SBNotificationCenterDataProviderController : XXUnknownSuperclass <BBObserverDelegate> {
	NSMutableDictionary *_identifiersToDataProviders;
	NSMutableDictionary *_identifiersToDataProviderProxies;
	NSMutableDictionary *_identifiersToWidgetExtensions;
	NSArray *_defaultEnabledWeeAppIDs;
	BOOL _isCoalescingForSectionSort;
	NSMutableSet *_serviceIDsOnProbation;
	id _plugInDiscoveryToken;
	BBObserver *_bbObserver;
	BOOL _isPublishing;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken;
@property(readonly, assign) Class superclass;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
- (id)init;
- (void)_beginContinuousPlugInDiscovery;
- (void)_coalesceAndSortChronologicalSections;
- (id)_copyDefaultEnabledWidgetIDs;
- (void)_endContinuousPlugInDiscovery;
- (id)_lazyDefaultEnabledWeeAppIDs;
- (id)_lazyIdentifiersToWidgetExtensions;
- (void)_noteAvailableWidgetExtensions:(id)extensions;
- (void)_postNotificationForNewWidgets:(int)newWidgets;
- (BOOL)_publishSectionInfo:(id)info withExtension:(id)extension;
- (BOOL)_publishWidgetSection:(id)section withExtension:(id)extension defaultEnabledWeeAppIDs:(id)ids;
- (void)_removeDataProviderForServiceWithIdentifier:(id)identifier completion:(id)completion;
- (id)_sectionForWidgetExtension:(id)widgetExtension withSectionID:(id)sectionID forCategory:(int)category;
- (id)_sectionWithIdentifier:(id)identifier forCategory:(int)category;
- (void)_setShowsInNotificationCenter:(BOOL)notificationCenter andUpdateExtensionOptInState:(BOOL)state forDataProviderWithIdentifier:(id)identifier completion:(id)completion;
- (void)_setupBBObserverIfNecessary;
- (BOOL)_shouldPublishWidgetExtension:(id)extension;
- (void)_updatePublishedWidgetExtensions:(id)extensions;
- (id)_widgetExtensionsDiscoveryAttributes;
- (void)beginPublishingIfNecessary;
- (void)buddyCompleted:(id)completed;
- (void)dealloc;
- (id)extensionForSectionIdentifier:(id)sectionIdentifier;
- (void)noteServiceWithIdentifierDidCloseViewServiceConnection:(id)noteServiceWithIdentifier;
- (void)noteServiceWithIdentifierDidOpenViewServiceConnection:(id)noteServiceWithIdentifier;
- (void)observer:(id)observer updateSectionInfo:(id)info inCategory:(int)category;
- (id)publishedExtensionIdentifiers;
- (void)setShowsInNotificationCenter:(BOOL)notificationCenter forDataProviderWithIdentifier:(id)identifier completion:(id)completion;
- (BOOL)shouldWidgetsPurgeArchivedSnapshots;
- (void)sortChronologicalSectionsWithCompletion:(id)completion;
- (void)updatePublishedWidgetExtensions;
@end

