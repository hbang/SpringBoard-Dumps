/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenNowPlayingPluginController : XXUnknownSuperclass {
	SBLockScreenViewController *_viewController;
	SBMediaController *_mediaController;
	PCPersistentTimer *_disableTimer;
}
- (id)initWithLockScreenViewController:(id)lockScreenViewController mediaController:(id)controller;
- (void)_addObservers;
- (void)_disableNowPlayingPlugin;
- (void)_startDisableTimer;
- (void)_updateNowPlayingPlugin;
- (void)dealloc;
- (void)invalidateDisableTimer;
- (BOOL)isNowPlayingPluginActive;
@end

