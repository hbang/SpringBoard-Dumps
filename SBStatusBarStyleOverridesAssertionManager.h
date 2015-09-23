/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSXPCListenerDelegate.h"
#import "SBStatusBarStyleOverridesAssertionServer.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBStatusBarStyleOverridesAssertionManager : XXUnknownSuperclass <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer> {
	NSXPCListener *_xpcListener;
	NSMapTable *_assertionsByIdentifierByClientConnection;
	NSMapTable *_assertionsByStyleOverride;
	NSObject<OS_dispatch_queue> *_internalQueue;
	int _statusBarStyleOverrides;
	int _exclusiveStatusBarStyleOverrides;
	FBWorkspaceEventQueue *_eventQueue;
}
@property(retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property(assign, nonatomic) int exclusiveStatusBarStyleOverrides;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property(assign, nonatomic) int statusBarStyleOverrides;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSXPCListener *xpcListener;
+ (id)sharedInstance;
- (id)init;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)overrides;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)identifiers forClientConnection:(id)clientConnection;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)overrides;
- (void)_invalidateAssertionsWithIdentifiers:(id)identifiers forClientConnection:(id)clientConnection;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)foregroundApplications withHandler:(id)handler;
- (void)_postStatusStringsByStyle:(id)style;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)activeAssertionsByStyleOverride inactiveAssertionsByStyleOverride:(id)override;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)foregroundAppsAndPostAddedStyleOverrides removedStyleOverrides:(int)overrides;
- (void)activateStatusBarStyleOverridesAssertions:(id)assertions reply:(id)reply;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)identifiers;
- (void)dealloc;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)assertions;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)setStatusString:(id)string forAssertionWithIdentifier:(id)identifier;
- (void)updateForegroundApplications:(id)applications withOptions:(unsigned)options completion:(id)completion;
@end

