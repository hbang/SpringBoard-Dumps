/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBPhoneAlertItem : SBAlertItem {
	NSString *_bodyText;
	NSString *_title;
}
- (id)initWithTitle:(id)title bodyText:(id)text;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
@end

