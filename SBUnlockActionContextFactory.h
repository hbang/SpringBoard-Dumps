/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBUnlockActionContextFactory : XXUnknownSuperclass {
}
+ (id)sharedInstance;
- (id)unlockActionContextForAlertItem:(id)alertItem;
- (id)unlockActionContextForBulletin:(id)bulletin withOrigin:(int)origin pluginActionsAllowed:(BOOL)allowed;
- (id)unlockActionContextForCardItem:(id)cardItem;
- (id)unlockActionContextForSnoozedAlarmItem:(id)snoozedAlarmItem;
- (id)unlockActionContextForWidgetRequest:(id)widgetRequest;
@end

