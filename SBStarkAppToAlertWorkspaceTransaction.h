/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert *_activatingAlert;
	SBApplication *_topApplication;
	BKSApplicationActivationAssertion *_topApplicationActivationAssertion;
	SBUIAnimationController *_animation;
	BOOL _animatedAppDeactivation;
	BOOL _fromStarkLauncher;
}
@property(readonly, assign, nonatomic) SBAlert *alert;
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert overTopApplication:(id)application;
- (void)_commit;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
@end

