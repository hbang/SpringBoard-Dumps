/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBAlert *_alert;
	SBUIAnimationController *_animation;
	BOOL _animatedAppActivation;
	BOOL _animatingAlertSuspension;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingLauncher;
	BOOL _fromAssistant;
	BOOL _waitingForAppActivation;
}
@property(readonly, assign, nonatomic) SBAlert *alert;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
- (void)_alertAnimationComplete:(id)complete;
- (void)_alertDidDeactivate;
- (void)_begin;
- (void)_beginAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_didComplete;
- (void)_endAnimation;
- (void)_handleFailure;
- (BOOL)_hasAnimation;
- (void)_setupMilestonesFrom:(id)from to:(id)to;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (void)mainScreenApplicationSceneDidCommit:(id)mainScreenApplicationScene;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)completed;
- (id)swizzledToDisplayIfNecessary;
@end

