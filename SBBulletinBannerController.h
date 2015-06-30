/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBBulletinBannerController : XXUnknownSuperclass <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit> {
	NSMutableArray *_bulletinQueue;
	BBObserver *_observer;
	NSMutableSet *_sectionIDsToPend;
	BOOL _quietModeEnabled;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableDictionary *_bulletinIdentifierToBannerContextCache;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (id)_bannerContextForBulletin:(id)bulletin;
- (void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)bulletinIDs;
- (unsigned)_indexOfQueuedBulletinID:(id)queuedBulletinID;
- (void)_queueBulletin:(id)bulletin;
- (void)_reloadVolumePressBanditPreference;
- (void)_removeBulletin:(id)bulletin;
- (void)_removeNextBulletinIfNecessary;
- (BOOL)_replaceBulletin:(id)bulletin;
- (void)_showTestBanner:(BOOL)banner;
- (void)_syncLockScreenDismissalsForSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins;
- (void)bannerTargetManager:(id)manager didAddTarget:(id)target;
- (void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
- (void)cacheBannerForBulletin:(id)bulletin completion:(id)completion;
- (void)dealloc;
- (id)dequeueNextBannerItemForTarget:(id)target;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)modallyPresentBannerForBulletin:(id)bulletin action:(id)action;
- (id)newBannerViewForContext:(id)context;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (void)observer:(id)observer updateSectionInfo:(id)info;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
- (id)peekNextBannerItemForTarget:(id)target;
- (void)removeAllCachedBanners;
- (void)removeCachedBannerForBulletinID:(id)bulletinID;
@end

