/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBLockdownManager : NSObject {
	int _state;
	BOOL _settingUpActivationState;
	BOOL _isBricked;
	BOOL _isInternalInstall;
	BOOL _hasShownWaitingAlertThisSession;
	BOOL _hasShownMismatchedSIM;
	SBDismissOnlyAlertItem *_activatingAlertItem;
}
+ (id)sharedInstance;
- (id)init;
- (void)_activationFailed;
- (BOOL)_hasEverRegistered;
- (BOOL)_isRegisteredToNetwork;
- (void)_postAlertsIfNeeded;
- (void)_resetActivationState;
- (void)_serviceAvailabilityChanged:(id)changed;
- (void)_setCurrentAlertItem:(id)item;
- (void)_setHasEverRegistered:(BOOL)registered;
- (void)_setupActivationState;
- (BOOL)_shouldShowTelephonyAlerts;
- (BOOL)brickedDevice;
- (void)dealloc;
- (BOOL)isInternalInstall;
- (int)lockdownState;
@end

