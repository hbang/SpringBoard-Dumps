/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSTimer, NSMutableArray;

@interface SBAlertItemsController : NSObject {
	NSMutableArray *_lockedAlertItems;
	NSMutableArray *_unlockedAlertItems;
	NSTimer *_autoDismissTimer;
}
+ (id)sharedInstance;
- (id)init;
- (void)activateAlertItem:(id)item;
- (id)alertItemOfClass:(Class)aClass;
- (void)autoDismissAlertItem:(id)item;
- (void)convertAnimatingUnlockedAlertsToLockedAlerts;
- (BOOL)deactivateAlertForMenuClick;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateAlertItem:(id)item reason:(int)reason;
- (void)deactivateAlertItemsForAlertActivation;
- (id)deactivateAlertItemsForLock;
- (void)deactivateAlertItemsOfClass:(Class)aClass;
- (void)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason;
- (void)deactivateAlertItemsUsingSelector:(SEL)selector reason:(int)reason;
- (void)deactivateAllAlertItems;
- (void)dealloc;
- (BOOL)dontLockOverAlertItems;
- (BOOL)isShowingAlert:(id)alert;
- (BOOL)isShowingAlertOfClass:(Class)aClass;
- (BOOL)isShowingAlerts;
- (void)resetAutoDismissTimer;
- (id)visibleAlertItem;
@end

