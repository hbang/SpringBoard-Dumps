/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAlertManagerObserver.h"


__attribute__((visibility("hidden")))
@interface SBAlertWallpaperTunnelManager : XXUnknownSuperclass <SBAlertManagerObserver> {
	SBAlertManager *_alertManager;
	NSMapTable *_hiderToHideeMap;
	NSMutableSet *_hiddenAlerts;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (void)registerAlertManager:(id)manager forScreen:(id)screen;
+ (id)sharedInstance;
- (id)init;
- (void)_adjustHiddenAlerts;
- (void)_hideAlert:(id)alert;
- (void)_hideAlerts:(id)alerts onBehalfOfAlert:(id)alert;
- (void)_setAlertManager:(id)manager;
- (void)_showAlert:(id)alert;
- (void)_stopHidingAlertsForAlert:(id)alert;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)dealloc;
- (id)dumpTunnelState;
- (void)popTunnelToWallpaperForAlert:(id)alert;
- (void)pushTunnelToWallpaperForAlert:(id)alert;
@end

