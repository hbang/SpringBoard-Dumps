/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAppToAppWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBWebAppToWebAppWorkspaceTransaction : SBAppToAppWorkspaceTransaction {
}
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to activationHandler:(id)handler;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
@end

