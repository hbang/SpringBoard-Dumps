/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBUSSDAlert : SBAlert {
	unsigned _receivedString : 1;
	unsigned _dismissOnActivate : 1;
	NSTimer *_delayedDismissTimer;
}
+ (void)_daemonRestart:(id)restart;
+ (void)_newSIM:(id)sim;
+ (id)errorStringForCode:(unsigned)code;
+ (void)registerForAlerts;
+ (void)registerForSettingsAlerts;
+ (void)test;
- (void)USSDStringAvailable:(id)available allowsResponse:(BOOL)response;
- (void)_delayedDismiss;
- (BOOL)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (BOOL)allowsResponse;
- (BOOL)deactivate;
- (void)dealloc;
- (BOOL)receivedString;
- (void)setDismissOnActivate:(BOOL)activate;
@end

