/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAlertItemsController : XXUnknownSuperclass {
	NSMutableArray *_lockedAlertItems;
	NSMutableArray *_unlockedAlertItems;
	NSMutableArray *_pendingAlertItems;
	NSTimer *_autoDismissTimer;
	CPDistributedNotificationCenter *_notificationCenter;
	unsigned _notificationClientCount;
	BOOL _systemShuttingDown;
	BOOL _forceAlertsToPend;
}
+ (id)sharedInstance;
- (id)init;
- (void)_notificationClientEnded:(id)ended;
- (void)_notificationClientStarted:(id)started;
- (void)activateAlertItem:(id)item;
- (id)alertItemOfClass:(Class)aClass;
- (id)alertItemsOfClass:(Class)aClass;
- (void)autoDismissAlertItem:(id)item;
- (BOOL)canDeactivateAlertForMenuClick;
- (void)convertAnimatingUnlockedAlertsToLockedAlerts;
- (BOOL)deactivateAlertForMenuClickWithAnimation:(BOOL)animation;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateAlertItem:(id)item reason:(int)reason;
- (void)deactivateAlertItem:(id)item reason:(int)reason animated:(BOOL)animated;
- (void)deactivateAlertItemsForAlertActivation;
- (id)deactivateAlertItemsForLock;
- (void)deactivateAlertItemsOfClass:(Class)aClass;
- (void)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason;
- (void)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason animated:(BOOL)animated;
- (void)deactivateVisibleAlertItemOfClass:(Class)aClass reason:(int)reason;
- (void)dealloc;
- (BOOL)dontLockOverAlertItems;
- (void)forceAlertsToPendAndMoveActiveAlertsToPendingWithAnimation:(BOOL)animation;
- (BOOL)hasAlertOfClass:(Class)aClass;
- (BOOL)hasAlerts;
- (BOOL)hasVisibleAlert;
- (void)noteSystemShuttingDown;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)notifySystemOfAlertItemActivation:(id)alertItemActivation;
- (void)resetAutoDismissTimer;
- (void)setForceAlertsToPend:(BOOL)pend;
- (id)visibleAlertItem;
@end

