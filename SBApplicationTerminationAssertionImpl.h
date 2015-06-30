/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBApplicationTerminationAssertion.h"


__attribute__((visibility("hidden")))
@interface SBApplicationTerminationAssertionImpl : XXUnknownSuperclass <SBApplicationTerminationAssertion> {
	NSString *_displayId;
	unsigned char _reason;
	SBApplicationTerminationAssertionManager *_manager;
}
@property(readonly, assign, nonatomic) NSString *displayId;
@property(readonly, assign, nonatomic) unsigned char reason;
- (id)initWithDisplayId:(id)displayId reason:(unsigned char)reason manager:(id)manager;
- (void)dealloc;
- (id)description;
@end
