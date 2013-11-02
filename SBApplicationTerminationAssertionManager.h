/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBApplicationTerminationAssertionManager : XXUnknownSuperclass {
	NSMutableDictionary *_assertionsByDisplayId;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addTerminationAssertion:(id)assertion;
- (BOOL)_canAcquireTerminationAssertionForDisplayId:(id)displayId reason:(unsigned char)reason error:(char *)error;
- (void)_removeTerminationAssertion:(id)assertion;
- (id)acquireTerminationAssertionForDisplayId:(id)displayId withReason:(unsigned char)reason error:(char *)error;
- (void)dealloc;
- (id)terminationAssertionsForDisplayId:(id)displayId;
- (id)terminationAssertionsForDisplayId:(id)displayId withReason:(unsigned char)reason;
@end

