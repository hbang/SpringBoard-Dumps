/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"


@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {
	int _mode;
	int _unlockScreenType;
}
- (id)initWithPasscodeMode:(int)passcodeMode unlockScreenType:(int)type;
- (void)_setErrorString:(id)string;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dismiss;
- (void)returnKeyPressed:(id)pressed;
- (BOOL)shouldShowInLockScreen;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
@end

