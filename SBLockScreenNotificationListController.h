/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBMotionGestureObserver.h"
#import "BBObserverDelegate.h"
#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBLockScreenActionHandler.h"
#import "SBLockScreenNotificationViewDelegate.h"
#import "SBLockScreenNotificationModel.h"
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "SBLockScreenNotificationBannerItemDelegate.h"
#import "CMPocketStateDelegate.h"
#import "SBVolumePressBandit.h"

@protocol SBLockScreenNotificationListDelegate, SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationListController : XXUnknownSuperclass <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, BBObserverDelegate, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate, SBPresentingDelegate, CMPocketStateDelegate, SBCoordinatedPresenting, SBMotionGestureObserver> {
	SBLockScreenNotificationListView *_notificationView;
	id<SBLockScreenNotificationListDelegate> _delegate;
	BBObserver *_observer;
	NSMutableArray *_listItems;
	NSMutableArray *_realertTimers;
	BSSerializedRequestQueue *_bulletinRequestQueue;
	BOOL _quietModeEnabled;
	BOOL _turnOnScreenForOutOfPocketEvent;
	id _deferredModelUpdateBlock;
	BOOL _hasDeferredUpdateToClearListItems;
	SBLockScreenActionContext *_actionContext;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableArray *_listItemsBannerQueue;
	SBAwayViewPluginController *_activePlugin;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	int _messagePrivacyRevealState;
	id<SBPresentingDelegate> _presentingDelegate;
	SBLockScreenBounceAnimator *_bounceAnimator;
	SBLockScreenNotificationCell *_hintingCell;
	CGPoint _hintingCellOriginalOffset;
	CMPocketStateManager *_pocketStateManager;
	NSString *_powerAssertionName;
	unsigned _powerAssertionID;
	BOOL _hasAnyContent;
}
@property(retain, nonatomic) SBAwayViewPluginController *activePlugin;
@property(readonly, assign, nonatomic) NSSet *conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBLockScreenNotificationListDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(assign, nonatomic) BOOL hasAnyContent;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic) BOOL quietModeEnabled;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@property(readonly, assign, nonatomic, getter=isUsingBanners) BOOL usingBanners;
+ (id)underlayPropertiesFactory;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_activateOrUpdateCardItem:(id)item animated:(BOOL)animated;
- (void)_addBounceAnimator;
- (void)_addItem:(id)item forBulletin:(id)bulletin playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (id)_coalescableListItemForNewBulletin:(id)newBulletin;
- (void)_createPowerAssertion;
- (void)_disablePocketDetection;
- (void)_dismissBulletinsForActionContext:(id)actionContext;
- (void)_enablePocketDetection;
- (id)_firstBulletin;
- (BOOL)_firstBulletinHasRaiseAction;
- (id)_firstItemWantingFullscreenPresentation;
- (void)_handleClockNotificationUpdate:(id)update;
- (void)_hardwareButtonPressed:(id)pressed;
- (BOOL)_isPocketDetectionEnabled;
- (void)_killRealerts:(id)realerts;
- (id)_listItemContainingBulletinID:(id)anId;
- (id)_listItemContainingCardItem:(id)item;
- (id)_listItemContainingSystemAlert:(id)alert;
- (id)_newItemForBulletin:(id)bulletin shouldPlayLightsAndSirens:(BOOL)sirens;
- (void)_playSoundForBulletinIfPossible:(id)bulletinIfPossible;
- (void)_presentFullscreenBulletinAlertIfNeeded;
- (void)_realertTimerFired:(id)fired;
- (void)_releasePowerAssertion;
- (void)_reloadVolumePressBanditPreference;
- (void)_removeCachedBannerForBulletinID:(id)bulletinID;
- (void)_scheduleRealerts:(id)realerts;
- (void)_scheduledClockLocalNotificationsDidChange:(id)_scheduledClockLocalNotifications;
- (void)_setDeferredModelUpdateBlock:(id)block;
- (BOOL)_shouldAddBannerItem:(id)item;
- (BOOL)_shouldCacheBannerForBulletin:(id)bulletin;
- (BOOL)_shouldDeterminePocketState;
- (void)_shouldTurnOnScreenForItem:(id)item withResult:(id)result;
- (void)_showTestBulletin;
- (void)_sortItemList:(id)list;
- (void)_turnOnScreen;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)pocketEventBeforeTimeInterval;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (void)_updateModelAndViewForAdditionOfItem:(id)item;
- (void)_updateModelAndViewForModificationOfItem:(id)item;
- (void)_updateModelAndViewForRemovalOfItem:(id)item;
- (void)_updateModelAndViewForReplacingItem:(id)replacingItem withNewItem:(id)newItem;
- (void)_updateModelForRemovalOfItem:(id)item updateView:(BOOL)view;
- (void)_updateMotionGestureObservation;
- (void)abortAnimatedTransition;
- (BOOL)activateAlertItem:(id)item animated:(BOOL)animated;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (void)bannerItemWasTapped:(id)tapped;
- (void)bannerTargetManager:(id)manager didAddTarget:(id)target;
- (void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation presentationBegunHandler:(id)handler;
- (void)cancelGestureRecognizer:(id)recognizer;
- (id)cellAtTouchLocation:(CGPoint)touchLocation;
- (void)concealForChangeInMessagePrivacy;
- (unsigned)count;
- (void)deactivateAlertItem:(id)item animated:(BOOL)animated;
- (void)deactivateCardItem:(id)item;
- (void)dealloc;
- (id)dequeueNextBannerItemForTarget:(id)target;
- (void)didReceiveRaiseGesture;
- (void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
- (void)handleLockScreenActionWithContext:(id)context;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (BOOL)hasAlertItem:(id)item;
- (BOOL)hasMissedUnreadNotifications;
- (BOOL)isPresentingControllerTransitioning;
- (void)killBulletinSounds;
- (id)listItemAtIndexPath:(id)indexPath;
- (void)listView:(id)view cellDidBeginScrolling:(id)cell;
- (void)listView:(id)view cellDidEndScrolling:(id)cell;
- (void)listViewDidBeginScrolling:(id)listView;
- (void)listViewDidEndScrolling:(id)listView;
- (void)loadView;
- (id)lockScreenScrollView;
- (void)lockScreenViewDidEndScrollingOnPage:(int)lockScreenView;
- (id)newBannerViewForContext:(id)context;
- (void)noteListViewReadyForModelUpdate;
- (void)noteUnlockActionChanged:(id)changed;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
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
- (void)pocketStateManager:(id)manager didUpdateState:(int)state;
- (void)prepareForTeardown;
- (BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)presentingController:(id)controller willHandleGesture:(id)gesture;
- (void)presentingControllerDidFinishPresentation:(id)presentingController;
- (void)reenableGestureRecognizer:(id)recognizer;
- (BOOL)removeItemsForNotificationCenterPresentation;
- (BOOL)removeItemsForUnlock;
- (BOOL)removeLockScreenNotificationsPassingTest:(id)test;
- (void)revealForChangeInMessagePrivacy;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setIsOnscreen:(BOOL)onscreen;
- (BOOL)shouldBeginHintForGesture:(id)gesture;
- (BOOL)shouldPlaySoundForItem:(id)item;
- (BOOL)shouldTreatItemAsInert:(id)inert;
- (void)turnOnScreenIfNecessaryForItem:(id)item withCompletion:(id)completion;
- (void)updateCardItem:(id)item;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (void)viewWillAppear:(BOOL)view;
@end

