/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockScreenPlugin : XXUnknownSuperclass {
	SBAwayViewPluginController *_controller;
	SBLockOverlayContext *_overlay;
	NSString *_bundleName;
	id _auxiliaryActivationAnimationBlock;
	id _auxiliaryDeactivationAnimationBlock;
}
@property(copy) id auxiliaryActivationAnimationBlock;
@property(copy) id auxiliaryDeactivationAnimationBlock;
@property(copy) NSString *bundleName;
@property(retain) SBAwayViewPluginController *controller;
@property(retain) SBLockOverlayContext *overlay;
- (void)dealloc;
@end

