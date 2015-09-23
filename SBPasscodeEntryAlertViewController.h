/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIPasscodeLockViewDelegate.h"
#import "SBAlert.h"
#import "SpringBoard-Structs.h"
#import "SBWorkspaceAlertAnimationProviding.h"

@protocol SBPasscodeEntryAlertViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate, SBWorkspaceAlertAnimationProviding> {
	id<SBPasscodeEntryAlertViewControllerDelegate> _delegate;
	BOOL _attemptingUnlock;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBPasscodeEntryAlertViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (BOOL)_attemptUnlock:(id)unlock;
- (void)_authenticationCancelled;
- (void)_authenticationFailure:(id)failure fromMesa:(BOOL)mesa;
- (void)_authenticationSuccess:(id)success fromMesa:(BOOL)mesa;
- (void)_configurePasscodeView:(id)view;
- (void)_passcodeLockViewPasscodeEntered:(id)entered viaMesa:(BOOL)mesa;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)dealloc;
- (BOOL)hasTranslucentBackground;
- (BOOL)managesOwnStatusBarAtActivation;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
- (void)setVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
- (unsigned)supportedInterfaceOrientations;
@end

