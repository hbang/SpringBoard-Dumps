/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBReturnToLockscreenWorkspaceTransaction : SBWorkspaceTransaction {
	SBApplication *_fromApp;
	SBAwayController *_awayController;
	BOOL _workspaceAlreadyResumed;
}
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager fromApplication:(id)application toAwayController:(id)awayController;
- (void)_commit;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfWorkspaceDidResume;
@end

