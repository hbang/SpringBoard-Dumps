/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBTetherController : XXUnknownSuperclass {
	int _tetherState;
	unsigned _demoCardConnection;
	int _lastOrientationCode;
	BOOL _orientationNotificationsDisabled;
}
@property(assign, nonatomic, getter=isOrientationNotificationDisabled) BOOL orientationNotificationDisabled;
+ (id)sharedInstance;
- (id)init;
- (unsigned)_demoCardConnection;
- (void)_handleDemoModeChanged;
- (void)_postDisplayPortNotificationCode:(int)code;
- (BOOL)_reverseTetheringActive;
- (BOOL)_serviceExists:(CFStringRef)exists;
- (void)_setTetherState:(int)state;
- (void)dealloc;
- (BOOL)isTethered;
- (void)noteInterfaceOrientationChanged;
- (void)setDitheringEnabled:(int)enabled;
- (void)updatePreferencesIfNeeded;
- (BOOL)usesDisplayPortTethering;
@end

