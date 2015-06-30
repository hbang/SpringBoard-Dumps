/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinAlertHandler.h"
#import "SBBulletinBusyClient.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"


__attribute__((visibility("hidden")))
@interface SBBulletinModalController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient> {
	BBObserver *_observer;
	BOOL _deviceIsLocked;
	NSMutableArray *_incomingBulletinEventQueue;
	NSMutableDictionary *_handlersBySectionID;
	NSMapTable *_handlersByBulletinID;
	NSMapTable *_alertsByBulletinID;
	BOOL _quietModeEnabled;
}
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_dequeuePendedEventsIfPossible;
- (void)_executeOrPendEventBlock:(id)block forBulletin:(id)bulletin;
- (void)_syncDismissalForBulletin:(id)bulletin;
- (id)attachmentImageForBulletin:(id)bulletin;
- (BOOL)bindBulletin:(id)bulletin forRegistry:(id)registry;
- (void)bulletinWindowStoppedBeingBusy;
- (void)destroyingAlert:(id)alert withBulletin:(id)bulletin;
- (void)handleEvent:(int)event withBulletin:(id)bulletin forRegistry:(id)registry;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
- (void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
@end

