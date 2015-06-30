/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBMiniAlertController : XXUnknownSuperclass {
	SBApplication *_displayShowingAnAlert;
	unsigned _sbMiniAlertVisible : 1;
	UIView *_hiddenAlertWindow;
}
+ (id)sharedInstance;
- (id)init;
- (void)_hideMiniAlertsForApp:(id)app;
- (void)_setAlertVisibleNotifyState:(BOOL)state;
- (void)_setDisplayShowingAnAlert:(id)alert;
- (BOOL)canShowAlerts;
- (void)deactivateAlertItemsForDisplay:(id)display;
- (void)dealloc;
- (void)displayDidDismissMiniAlert:(id)display;
- (id)displayShowingAnAlert;
- (void)displayWillDismissMiniAlert:(id)display;
- (void)displayWillShowMiniAlert:(id)display;
- (void)hideApplicationMiniAlerts;
- (BOOL)miniAlertVisible;
- (void)noteMiniAlertStateChanged;
- (void)showApplicationMiniAlertsIfNeeded;
@end

