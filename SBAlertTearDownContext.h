/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAlertTearDownContext : NSObject {
	SBAlertWindow *_window;
	SBAlert *_alert;
}
@property(retain, nonatomic) SBAlert *alertToTearDown;
@property(retain, nonatomic) SBAlertWindow *windowToTearDown;
- (void)dealloc;
@end

