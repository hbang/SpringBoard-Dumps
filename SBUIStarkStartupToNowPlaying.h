/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation {
	NSNumber *_activated;
}
- (id)initWithActivatingApp:(id)activatingApp fromLockoutView:(id)lockoutView starkScreenController:(id)controller;
- (void)_cleanupAnimation;
- (id)_createViewToAnimate;
- (void)_prepareAnimation;
- (void)_setupStartDependencies;
- (void)_startAnimation;
- (void)dealloc;
@end
