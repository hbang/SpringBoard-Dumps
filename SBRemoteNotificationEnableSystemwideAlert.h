/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBRemoteNotificationEnableSystemwideAlert : SBAlertItem {
	SBApplication *_app;
}
- (id)initWithApplication:(id)application;
- (void)_showNotificationsPrefs;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)shouldShowInLockScreen;
@end

