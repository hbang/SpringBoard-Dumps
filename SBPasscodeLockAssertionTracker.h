/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBPasscodeLockAssertionTracker : XXUnknownSuperclass {
	void *_mkbAssertion;
	NSMutableSet *_assertions;
}
- (id)init;
- (void)addAssertion:(id)assertion;
- (void)dealloc;
- (id)description;
- (BOOL)hasActiveAssertions;
- (id)mkbAssertionOptions;
- (void)removeAssertion:(id)assertion;
@end

