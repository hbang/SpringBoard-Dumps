/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBRemoteViewInfo : XXUnknownSuperclass {
	NSString *_remoteViewIdentifier;
	SBProxyRemoteView *_proxyRemoteView;
	unsigned _contextID;
	SBApplication *_application;
	CGSize _viewSize;
}
@property(retain, nonatomic) SBApplication *application;
@property(assign, nonatomic) unsigned contextID;
@property(retain, nonatomic) SBProxyRemoteView *proxyRemoteView;
@property(retain, nonatomic) NSString *remoteViewIdentifier;
@property(assign, nonatomic) CGSize viewSize;
- (void)dealloc;
@end

