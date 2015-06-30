/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppsToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerObserver> {
	NSArray *_topApplications;
	SBAlert *_activatingAlert;
	SBAlertManager *_alertManager;
	SBUIAnimationController *_animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	BOOL _suspendWorkspace;
	BOOL _deferAlertActivationForAnimationCompletion;
}
@property(copy, nonatomic) id alertActivationBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithAlertManager:(id)alertManager alert:(id)alert overTopApplications:(id)applications;
- (void)_activateAlert;
- (void)_begin;
- (void)_didComplete;
- (void)_switcherToAlertAnimationFinished;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
@end

