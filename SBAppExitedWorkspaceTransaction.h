/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppExitedWorkspaceTransaction : SBAppToAppWorkspaceTransaction {
}
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to activationHandler:(id)handler;
- (void)_kickOffActivation;
- (id)_setupAnimationFrom:(id)from to:(id)to;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
@end

