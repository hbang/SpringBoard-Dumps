/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert *_alert;
	SBUIAnimationController *_animation;
	BOOL _animatedAppActivation;
	BOOL _animatingAlertSuspension;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingLauncher;
	BOOL _fromAssistant;
}
@property(readonly, assign, nonatomic) SBAlert *alert;
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
- (void)_alertAnimationComplete:(id)complete;
- (void)_beginAnimation;
- (void)_commit;
- (void)_deactivateAlertIfNecessary;
- (void)_endAnimation;
- (void)_handleFailure;
- (BOOL)_hasAnimation;
- (id)_newAnimationControllerFrom:(id)from to:(id)to;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (BOOL)selfStarkAlertWillDeactivate:(id)selfStarkAlert;
@end

