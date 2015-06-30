/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBStarkNowPlayingServiceDelegate.h"


__attribute__((visibility("hidden")))
@interface SBStarkNowPlayingController : XXUnknownSuperclass <SBStarkNowPlayingServiceDelegate> {
	_UIAsyncInvocation *_cancelRequest;
	SBStarkNowPlayingService *_service;
	unsigned _reactivateAttempt;
	double _lastReactivationAttempt;
	NSMutableArray *_notifyBlocks;
	SBSUICarDisplayNowPlayingStateContext *_context;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_noteServiceFailure;
- (void)_notifyActive:(BOOL)active;
- (void)_notifyTimedOut:(id)anOut;
- (void)_reconnect;
- (void)_switchToService:(id)service;
- (void)dealloc;
- (BOOL)isActive;
- (void)loadView;
- (void)notifyWhenActive:(id)active withTimeout:(double)timeout;
- (void)nowPlayingService:(id)service didTerminateWithError:(id)error;
- (void)switchToState:(id)state;
@end

