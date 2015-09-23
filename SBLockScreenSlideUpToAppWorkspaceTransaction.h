/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainWorkspaceTransaction.h"
#import "BSTransactionObserver.h"


__attribute__((visibility("hidden")))
@interface SBLockScreenSlideUpToAppWorkspaceTransaction : SBMainWorkspaceTransaction <BSTransactionObserver> {
	BOOL _launchedApp;
	SBWorkspaceTransaction *_earlyLaunchTransaction;
	SBWorkspaceTransaction *_deferredFinalLaunchTransaction;
	BOOL _gestureCompleted;
	BOOL _didBegin;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_begin;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (void)dealloc;
- (BOOL)isGestureCompleted;
- (void)launchAppUnderLockScreenWithTransaction:(id)transaction;
- (void)noteGestureCompletedSuccessfully:(BOOL)successfully cleanupTransaction:(id)transaction;
@end

