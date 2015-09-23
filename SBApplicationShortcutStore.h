/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBApplicationShortcutStore : XXUnknownSuperclass {
	NSLock *_stateLock;
	NSObject<OS_dispatch_queue> *_saveQueue;
	NSArray *_cachedShortcutItems;
	BOOL _isLoaded;
	BOOL _isDirty;
	NSString *_bundleIdentifier;
}
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSArray *cachedShortcutItems;
@property(copy, nonatomic) NSArray *shortcutItems;
- (id)initWithBundleIdentifier:(id)bundleIdentifier;
- (id)_plistArrayFromShortcutItems:(id)shortcutItems;
- (void)_saveQueue_save;
- (id)_shortcutItemsFromPlistArray:(id)plistArray;
- (void)_stateLock_loadFromDiskIfNeeded;
- (void)_stateLock_markDirty;
- (id)_url;
- (void)dealloc;
- (id)description;
- (void)saveSynchronously;
@end

