/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBWindowContextManagerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BSWatchdogDelegate.h"
#import "FBSceneManagerObserver.h"


__attribute__((visibility("hidden")))
@interface SBWaitForSceneCreationTransaction : XXUnknownSuperclass <FBSceneManagerObserver, FBWindowContextManagerObserver, BSWatchdogDelegate> {
	FBSceneManager *_sceneManager;
	NSString *_sceneIDToWaitForCreation;
	FBScene *_createdScene;
	BSWatchdog *_waitForContextsWatchdog;
	double _waitForContextsTimeout;
	BOOL _waitForContext;
	FBScene *_scene;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) FBScene *scene;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) BOOL waitForContexts;
- (id)initWithSceneID:(id)sceneID waitForContexts:(BOOL)contexts;
- (id)initWithSceneID:(id)sceneID waitForContexts:(BOOL)contexts waitForContextsTimeout:(double)contextsTimeout;
- (void)_begin;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_invalidateContextWaitWatchdog;
- (void)_setScene:(id)scene;
- (void)dealloc;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (void)watchdogFired:(id)fired;
- (void)windowContextManagerWillStartTrackingContexts:(id)windowContextManager;
@end

