/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBSceneManagerObserver.h"

@protocol SBSceneManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBSceneManager : XXUnknownSuperclass <FBSceneManagerObserver> {
	FBSceneManager *_sceneManager;
	SBSceneLayoutManager *_layoutManager;
	FBSDisplay *_display;
	id<SBSceneManagerDelegate> _delegate;
	BSCopyingCacheSet *_allScenes;
	BSCopyingCacheSet *_daemonScenes;
	BSCopyingCacheSet *_applicationScenes;
	BSCopyingCacheSet *_foregroundApplicationScenes;
	BSCopyingCacheSet *_reportedForegroundApplicationScenes;
	BSCopyingCacheSet *_externalApplicationScenes;
	BSCopyingCacheSet *_externalForegroundApplicationScenes;
	BSCopyingCacheSet *_reportedExternalForegroundApplicationScenes;
	NSCountedSet *_assertedBackgroundScenes;
	NSMutableSet *_externalForegroundApplicationHostReasons;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBSceneManagerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBSceneLayoutManager *layoutManager;
@property(readonly, assign) Class superclass;
- (id)initWithDisplay:(id)display;
- (BOOL)_isStarkActivelyConnected;
- (id)_newLayoutManager;
- (id)allScenes;
- (id)applicationScenes;
- (id)assertBackgroundedStatusForScenes:(id)scenes;
- (id)daemonScenes;
- (void)dealloc;
- (void)destroyAllScenes;
- (id)externalApplicationScenes;
- (id)externalForegroundApplicationScenes;
- (id)foregroundApplicationScenes;
- (BOOL)isHostingExternalForegroundApplicationScenes;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (void)setShouldHostExternalForegroundApplicationScenes:(BOOL)hostExternalForegroundApplicationScenes forReason:(id)reason;
@end

