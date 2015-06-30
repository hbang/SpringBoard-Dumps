/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {
	SBLockScreenViewControllerBase *_lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
	BOOL _waitingForSceneDestruction;
}
- (id)initWithAlertManager:(id)alertManager application:(id)application lockScreenController:(id)controller;
- (id)initWithAlertManager:(id)alertManager application:(id)application lockScreenController:(id)controller forRelaunch:(BOOL)relaunch withResult:(id)result;
- (void)_alertDidActivate;
- (void)_begin;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (void)_didComplete;
- (void)_kickoffAlertActivation;
- (void)_setupAndActivate;
- (void)dealloc;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end
