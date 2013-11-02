/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPushStoreObserver.h"
#import "BBRemoteDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, BBDataProviderProxy, NSString, BBSectionInfo, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RLNDataProvider : XXUnknownSuperclass <SBPushStoreObserver, BBRemoteDataProvider> {
	NSString *_sectionID;
	NSMutableSet *_publisherBulletinIDs;
	BBSectionInfo *_defaultSectionInfo;
	NSString *_displayName;
	unsigned _pushSettings;
	BBDataProviderProxy *_proxy;
	NSObject<OS_dispatch_queue> *_queue;
}
@property(retain, nonatomic) BBDataProviderProxy *proxy;
- (id)initWithSectionID:(id)sectionID displayName:(id)name queue:(id)queue;
- (id)_allBulletinsWithLimit:(unsigned)limit;
- (id)_bulletinForNotification:(id)notification;
- (void)_cleanupMigrationFromBrightonWithLastClearedDate:(id)lastClearedDate;
- (BOOL)_isPushDataProvider;
- (id)_latestBulletinInSet:(id)set;
- (id)_publisherBulletinIDForNotification:(id)notification;
- (void)_saveUpdatedSectionInfo;
- (id)_sortKey;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned)limit lastClearedInfo:(id)info;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dealloc;
- (id)defaultSectionInfo;
- (void)invalidate;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)pushStoreClearedNotifications;
- (void)pushStoreNotificationsDidChange;
- (void)pushStoreUpdatedPushSettings;
- (void)pushStoreUserAcceptedDelivery;
- (void)pushStoreUserDeclinedDelivery;
- (void)rebuildDefaultSectionInfoForPushSettings:(unsigned)pushSettings;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
- (BOOL)syncsBulletinDismissal;
@end

