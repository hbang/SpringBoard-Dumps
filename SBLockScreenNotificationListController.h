/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBLockScreenNotificationListDelegate, SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationListController : XXUnknownSuperclass <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, BBObserverDelegate, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBUnlockActionHandler, SBLockScreenNotificationBannerItemDelegate> {
	SBLockScreenNotificationListView *_notificationView;
	id<SBLockScreenNotificationListDelegate> _delegate;
	BBObserver *_observer;
	NSMutableArray *_listItems;
	NSMutableArray *_realertTimers;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	SBUnlockActionContext *_actionContext;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableArray *_listItemsBannerQueue;
	BOOL _bannersEnabled;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	int _messagePrivacyRevealState;
	BOOL _hasAnyContent;
}
@property(assign, nonatomic, getter=isBannersEnabled) BOOL bannersEnabled;
@property(assign, nonatomic) id<SBLockScreenNotificationListDelegate> delegate;
@property(assign, nonatomic) BOOL hasAnyContent;
@property(assign, nonatomic) BOOL isHibernating;
@property(readonly, assign, nonatomic) BOOL quietModeEnabled;
@property(retain, nonatomic) SBUnlockActionContext *unlockActionContext;
+ (id)underlayPropertiesFactory;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_activateOrUpdateCardItem:(id)item animated:(BOOL)animated;
- (void)_hardwareButtonPressed:(id)pressed;
- (void)_killRealerts:(id)realerts;
- (id)_listItemContainingBulletinID:(id)anId;
- (id)_listItemContainingCardItem:(id)item;
- (id)_listItemContainingSystemAlert:(id)alert;
- (id)_listItemForNewBulletin:(id)newBulletin;
- (void)_playSoundForBulletinIfPossible:(id)bulletinIfPossible;
- (void)_realertTimerFired:(id)fired;
- (void)_reloadVolumePressBanditPreference;
- (void)_scheduleRealerts:(id)realerts;
- (BOOL)_shouldAddBannerItem:(id)item;
- (void)_showTestBulletin;
- (void)_sortListItems;
- (void)_updateModelAndViewForAdditionOfItem:(id)item;
- (void)_updateModelAndViewForModificationOfItem:(id)item;
- (void)_updateModelAndViewForRemovalOfItem:(id)item;
- (void)_updateModelAndViewForReplacingItem:(id)replacingItem withNewItem:(id)newItem;
- (void)_updateModelForRemovalOfItem:(id)item updateView:(BOOL)view;
- (BOOL)activateAlertItem:(id)item;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (void)bannerItemWasTapped:(id)tapped;
- (void)bannerTargetManager:(id)manager didAddTarget:(id)target;
- (void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
- (void)clearItemsForNotificationCenter;
- (void)concealForChangeInMessagePrivacy;
- (unsigned)count;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateCardItem:(id)item;
- (void)dealloc;
- (id)dequeueNextBannerItemForTarget:(id)target;
- (BOOL)dismissReadNotifications;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (BOOL)hasMissedUnreadNotifications;
- (id)listItemAtIndexPath:(id)indexPath;
- (void)loadView;
- (id)lockScreenScrollView;
- (void)lockScreenViewDidEndScrollingOnPage:(int)lockScreenView;
- (id)newBannerViewForContext:(id)context;
- (void)noteUnlockActionChanged:(id)changed;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
- (id)peekNextBannerItemForTarget:(id)target;
- (id)pendOrDeactivateAlertItems;
- (void)performSystemAlertUnlockActions;
- (void)prepareForTeardown;
- (void)revealForChangeInMessagePrivacy;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setIsOnscreen:(BOOL)onscreen;
- (BOOL)shouldPlaySoundForItem:(id)item;
- (BOOL)shouldTreatItemAsInert:(id)inert;
- (void)turnOnScreenIfNecessaryForItem:(id)item;
- (void)unlockUIWithActionContext:(id)actionContext;
- (void)updateCardItem:(id)item;
@end

