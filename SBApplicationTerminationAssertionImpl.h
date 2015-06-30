/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationTerminationAssertion.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBApplicationTerminationAssertionImpl : XXUnknownSuperclass <SBApplicationTerminationAssertion> {
	NSString *_displayId;
	id _pluginHoldToken;
	unsigned char _reason;
	SBApplicationTerminationAssertionManager *_manager;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayId;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) id pluginHoldToken;
@property(readonly, assign, nonatomic) unsigned char reason;
@property(readonly, assign) Class superclass;
- (id)initWithDisplayId:(id)displayId pluginHoldToken:(id)token reason:(unsigned char)reason manager:(id)manager;
- (void)dealloc;
@end

