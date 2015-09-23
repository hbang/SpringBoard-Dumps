/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomUpAppFromAlert : SBUIAnimationZoomUpApp {
	SBAlertManager *_alertManager;
	SBAlert *_alert;
}
- (id)initWithActivatingApp:(id)activatingApp deactivatingAlert:(id)alert alertManager:(id)manager;
- (void)animateZoomWithCompletion:(id)completion;
- (double)animationDelay;
- (double)animationDuration;
- (void)cleanupZoom;
- (void)dealloc;
- (void)prepareZoom;
@end

