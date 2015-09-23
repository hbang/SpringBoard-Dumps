/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBPasscodeLockAssertionManager : XXUnknownSuperclass {
	SBPasscodeLockAssertionTracker *_preventLockTracker;
	SBPasscodeLockAssertionTracker *_lockScreenCameraTracker;
	SBPasscodeLockAssertionTracker *_siriTracker;
	SBPasscodeLockAssertionTracker *_transientTracker;
}
- (id)init;
- (void)addAssertion:(id)assertion;
- (void)dealloc;
- (id)description;
- (BOOL)hasActiveAssertions;
- (void)removeAssertion:(id)assertion;
@end

