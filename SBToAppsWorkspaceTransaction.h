/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBApplicationUpdateScenesTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"
#import "SBWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBToAppsWorkspaceTransaction : SBWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransactionDelegate> {
	NSArray *_toApplications;
	NSSet *_scenesToBackground;
	NSSet *_fromApplicationScenes;
	SBDisplayLayout *_toDisplayLayout;
	BOOL _fromAssistant;
	BOOL _fromSwitcher;
	BOOL _toSpringBoard;
	BOOL _underLockScreenInForeground;
	id _resultBlock;
	SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
	NSMutableDictionary *_sceneIDsToApps;
	FBUIApplicationResignActiveAssertion *_resignActiveAssertion;
	NSMutableArray *_appsActivatingForeground;
	NSSet *_trackedProcesses;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, retain, nonatomic) NSArray *toApplications;
@property(readonly, retain, nonatomic) NSSet *trackedProcesses;
- (id)initWithAlertManager:(id)alertManager activationRequest:(id)request withResult:(id)result;
- (id)_applicationForScene:(id)scene;
- (void)_begin;
- (void)_beginAnimation;
- (void)_captureApplicationData;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)reason;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)failure;
- (void)_handleApplicationDidNotChange:(id)_handleApplication;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)failed;
- (void)_relinquishResignActiveAssertion;
- (id)_scenesToBackground;
- (void)_setupAnimation;
- (void)_synchronizeSceneUpdatesNowForScenes:(id)scenes;
- (void)_synchronizeWithSceneUpdates;
- (void)_willBegin;
- (void)activateApplications;
- (void)dealloc;
- (void)enumerateForegroundToApplicationsWithBlock:(id)block;
- (void)enumerateToApplicationsWithBlock:(id)block;
- (BOOL)isGoingToLauncher;
- (void)performToAppStateCleanup;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)shouldDismissSwitcher;
- (BOOL)shouldHideSpringBoardStatusBarOnCleanup;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldRestoreSpringBoardContentOnCleanup;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
- (BOOL)shouldWatchdog:(id *)watchdog;
- (void)synchronizedTransaction:(id)transaction didCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransaction:(id)transaction willCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransactionReadyToCommit:(id)commit;
- (void)toggleStatusBarForCleanup;
- (void)transaction:(id)transaction didCommitSceneUpdate:(id)update;
- (void)transaction:(id)transaction willCommitSceneUpdate:(id)update;
- (double)watchdogTimeout;
@end

