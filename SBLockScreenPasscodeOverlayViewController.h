/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIPasscodeLockViewDelegate.h"
#import "SBLockOverlayViewController.h"


__attribute__((visibility("hidden")))
@interface SBLockScreenPasscodeOverlayViewController : SBLockOverlayViewController <SBUIPasscodeLockViewDelegate> {
	SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
	BOOL _attemptingUnlock;
	id _completionBlock;
}
@property(copy, nonatomic) id completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)_newPasscodeView;
- (void)_passcodeLockViewPasscodeEntered:(id)entered viaMesa:(BOOL)mesa;
- (void)dealloc;
- (void)loadView;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
- (void)viewWillAppear:(BOOL)view;
@end

