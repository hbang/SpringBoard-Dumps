/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {
	SBAlert *_fromAlert;
	SBAlert *_toAlert;
	SBApplication *_toApplication;
	SBUIAnimationController *_animation;
}
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
- (void)_activateAlert;
- (void)_beginAnimation;
- (id)_newAnimationControllerFrom:(id)from to:(id)to;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
@end

