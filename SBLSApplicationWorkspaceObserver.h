/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLSApplicationWorkspaceObserver : XXUnknownSuperclass <LSApplicationWorkspaceObserverProtocol> {
	LSApplicationWorkspace *_appWorkspace;
	NSHashTable *_applicationObservers;
	NSHashTable *_placeholderObservers;
	NSMutableSet *_placeholderProxies;
}
@property(retain, nonatomic) NSSet *placeholderProxies;
@property(readonly, assign, nonatomic) LSApplicationWorkspace *workspace;
+ (id)sharedInstance;
- (id)init;
- (void)_addObserver:(id)observer table:(id)table;
- (void)_removeObserver:(id)observer table:(id)table;
- (void)addApplicationLifecycleObserver:(id)observer;
- (void)addPlaceholderLifecycleObserver:(id)observer;
- (void)applicationInstallsArePrioritized:(id)prioritized arePaused:(id)paused;
- (void)applicationInstallsDidCancel:(id)applicationInstalls;
- (void)applicationInstallsDidChange:(id)applicationInstalls;
- (void)applicationInstallsDidPause:(id)applicationInstalls;
- (void)applicationInstallsDidPrioritize:(id)applicationInstalls;
- (void)applicationInstallsDidResume:(id)applicationInstalls;
- (void)applicationInstallsDidStart:(id)applicationInstalls;
- (void)applicationInstallsDidUpdateIcon:(id)applicationInstalls;
- (void)applicationsDidInstall:(id)applications;
- (void)applicationsDidUninstall:(id)applications;
- (void)dealloc;
- (void)networkUsageChanged:(BOOL)changed;
- (void)removeApplicationLifecycleObserver:(id)observer;
- (void)removePlaceholderLifecycleObserver:(id)observer;
@end

