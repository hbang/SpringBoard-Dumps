/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBScreenManager : XXUnknownSuperclass {
	NSHashTable *_handlers;
	NSMapTable *_screenIDToHandlerMap;
	NSMapTable *_screenIDToObserversMap;
	NSMapTable *_screenIDToSuppressionReasonsMap;
	NSMapTable *_screenIDToMainWindowMap;
	NSMapTable *_screenIDToScreenMap;
	NSHashTable *_connectedScreenIDs;
}
+ (id)sharedInstance;
- (id)init;
- (void)_screenDidConnect:(id)_screen;
- (void)_screenDidDisconnect:(id)_screen;
- (void)_updateHandlerForConnectionToScreen:(id)screen;
- (void)addConnectionHandler:(id)handler;
- (void)addScreenObserver:(id)observer forScreen:(id)screen;
- (void)addSuppressionReason:(id)reason forScreen:(id)screen;
- (void)dealloc;
- (BOOL)isScreenConnected:(id)connected;
- (BOOL)isScreenSuppressed:(id)suppressed;
- (id)mainWindowForScreen:(id)screen;
- (void)removeScreenObserver:(id)observer forScreen:(id)screen;
- (void)removeSuppressionReason:(id)reason forScreen:(id)screen;
- (id)screenWithID:(unsigned)anId;
- (void)setMainWindow:(id)window forScreen:(id)screen;
@end

