/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_SBRemoteAlertHostViewControllerDelegate.h"
#import "SBAlertAdapter.h"


__attribute__((visibility("hidden")))
@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {
	_SBRemoteAlertHostViewController *_remoteAlertHostViewController;
	NSString *_impersonatedApplicationBundleID;
	BOOL _activated;
	BOOL _dismissWithHomeButton;
}
+ (void)requestRemoteViewService:(id)service options:(id)options completion:(id)completion;
- (id)initWithViewController:(id)viewController;
- (id)_impersonatesApplicationWithBundleID;
- (id)_initWithRemoteAlertHostViewController:(id)remoteAlertHostViewController;
- (void)_setDismissWithHomeButton:(BOOL)homeButton;
- (void)_setImpersonatedApplicationBundleID:(id)anId;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (BOOL)handleMenuButtonTap;
- (BOOL)isRemote;
- (BOOL)matchesRemoteAlertService:(id)service options:(id)options;
- (void)remoteAlertDidTerminateWithError:(id)remoteAlert;
@end

