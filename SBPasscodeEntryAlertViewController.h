/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {
	BOOL _attemptingUnlock;
}
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)deactivate;
- (BOOL)hasTranslucentBackground;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
@end

