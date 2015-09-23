/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockOverlayContext : XXUnknownSuperclass {
	SBLockOverlayViewController *_viewController;
	unsigned _priority;
	id _activationBlock;
	id _deactivationBlock;
}
@property(copy, nonatomic) id activationBlock;
@property(copy, nonatomic) id deactivationBlock;
@property(readonly, assign, nonatomic) unsigned priority;
@property(readonly, retain, nonatomic) SBLockOverlayViewController *viewController;
- (id)initWithOverlayViewController:(id)overlayViewController priority:(unsigned)priority;
- (void)dealloc;
@end

