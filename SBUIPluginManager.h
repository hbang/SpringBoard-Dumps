/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIPluginManager : SBPluginManager {
	NSMutableDictionary *_uiPlugins;
	SBUIPluginHost *_pendingActivation;
	SBUIPluginHost *_hostPendingActivation;
}
@property(retain) SBUIPluginHost *hostPendingActivation;
+ (id)sharedInstance;
- (id)_loadedUIPluginHostsVisible:(BOOL)visible;
- (void)cancelPendingActivationEvent:(int)event;
- (BOOL)handleActivationEvent:(int)event eventSource:(int)source withContext:(id)context;
- (BOOL)handleButtonDownEventFromSource:(int)source;
- (BOOL)handleButtonTapFromSource:(int)source;
- (BOOL)handleButtonUpEventFromSource:(int)source;
- (id)loadUIPluginNamed:(id)named withHost:(id)host;
- (id)loadedUIPluginHosts;
- (id)loadedUIPlugins;
- (BOOL)overrideInterfaceOrientation:(int *)orientation;
- (BOOL)overrideScreenDimInterval:(double *)interval;
- (void)prepareForActivationEvent:(int)activationEvent eventSource:(int)source afterInterval:(double)interval;
- (BOOL)suppressingNotifications;
- (BOOL)unloadUIPlugin:(id)plugin forHost:(id)host;
- (BOOL)wantsActivationEvent:(int)event eventSource:(int)source interval:(double *)interval;
@end

