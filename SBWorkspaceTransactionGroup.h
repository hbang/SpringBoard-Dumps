/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBWorkspaceTransactionDelegate.h"

@protocol SBWorkspaceTransactionGroupDelegate;

__attribute__((visibility("hidden")))
@interface SBWorkspaceTransactionGroup : SBWorkspaceTransaction <SBWorkspaceTransactionDelegate> {
	NSMutableArray *_transactions;
}
@property(assign, nonatomic) id<SBWorkspaceTransactionGroupDelegate> delegate;
@property(readonly, assign, nonatomic) NSArray *transactions;
- (id)init;
- (id)initWithTransactions:(id)transactions;
- (void)_doForAllTransactions:(id)allTransactions;
- (BOOL)_shouldBeWatchdogged:(id *)watchdogged;
- (void)addMilestones:(int)milestones;
- (void)addTransaction:(id)transaction;
- (BOOL)alertDidActivate:(id)alert overAlerts:(id)alerts;
- (BOOL)alertDidDeactivate:(id)alert;
- (BOOL)alertWillActivate:(id)alert overAlerts:(id)alerts;
- (BOOL)alertWillDeactivate:(id)alert;
- (BOOL)applicationActivated:(id)activated;
- (BOOL)applicationDidBecomeReceiver:(id)application fromApplication:(id)application2;
- (BOOL)applicationDidFinishLaunching:(id)application withInfo:(id)info;
- (BOOL)applicationDidStartLaunching:(id)application withInfo:(id)info;
- (BOOL)applicationExited:(id)exited;
- (BOOL)applicationLaunchDidFail:(id)applicationLaunch;
- (BOOL)applicationWillBecomeReceiver:(id)application fromApplication:(id)application2;
- (BOOL)canBeInterrupted;
- (void)commit;
- (void)dealloc;
- (id)description;
- (void)interruptWithReason:(int)reason;
- (void)transactionDidFinish:(id)transaction success:(BOOL)success;
- (BOOL)workspaceDidResume;
- (BOOL)workspaceDidSuspend;
- (BOOL)workspaceWillResume;
- (BOOL)workspaceWillSuspend;
@end

