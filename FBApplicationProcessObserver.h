/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol FBApplicationProcessObserver <FBProcessObserver>
@optional
- (void)applicationProcessDebuggingStateDidChange:(id)applicationProcessDebuggingState;
- (void)applicationProcessDidExit:(id)applicationProcess withContext:(id)context;
- (void)applicationProcessDidLaunch:(id)applicationProcess;
- (void)applicationProcessWillLaunch:(id)applicationProcess;
@end
