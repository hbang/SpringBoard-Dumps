/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenViewController, SBLockOverlayContext;

__attribute__((visibility("hidden")))
@interface SBLockOverlayTransition : XXUnknownSuperclass {
	SBLockOverlayContext *_from;
	SBLockOverlayContext *_to;
	SBLockScreenViewController *_lockScreenVC;
}
- (id)initFromOverlay:(id)overlay toOverlay:(id)overlay2 inside:(id)inside;
- (void)_hideLockContent;
- (id)_requestForContext:(id)context;
- (void)dealloc;
- (void)performTransitionAnimated:(BOOL)animated completion:(id)completion;
@end

