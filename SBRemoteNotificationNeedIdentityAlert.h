/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBRemoteNotificationNeedIdentityAlert : SBAlertItem {
	SBApplication *_app;
}
- (id)initWithApplication:(id)application;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnAlertActivation;
- (BOOL)dismissOnLock;
@end
