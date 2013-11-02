/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_source, SBAssertionDelegate;

__attribute__((visibility("hidden")))
@interface SBAssertion : XXUnknownSuperclass {
	id<SBAssertionDelegate> _delegate;
	NSString *_reason;
	unsigned _clientPort;
	NSObject<OS_dispatch_source> *_source;
}
@property(assign, nonatomic) id<SBAssertionDelegate> delegate;
@property(readonly, assign, nonatomic) NSString *reason;
- (id)initWithClientPort:(unsigned)clientPort reason:(id)reason;
- (void)dealloc;
- (id)description;
@end

