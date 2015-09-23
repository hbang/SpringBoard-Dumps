/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
- (void)transaction:(id)transaction didEndLayoutTransitionWithContinuation:(id)continuation;
- (void)transaction:(id)transaction performTransitionWithCompletion:(id)completion;
@optional
- (BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)transaction;
@required
- (void)transactionWillBeginLayoutTransition:(id)transaction;
@end

