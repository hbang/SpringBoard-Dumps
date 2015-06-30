/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconObserver.h"
#import "SBLSApplicationPlaceholderLifecycleObserver.h"


__attribute__((visibility("hidden")))
@interface SBApplicationPlaceholderController : XXUnknownSuperclass <SBIconObserver, SBLSApplicationPlaceholderLifecycleObserver> {
	SBApplicationController *_appController;
	SBLSApplicationWorkspaceObserver *_lsWorkspaceObserver;
	NSMutableDictionary *_placeholdersByBundleID;
	NSMutableSet *_pendingAdded;
	NSMutableSet *_pendingInstalled;
	NSMutableSet *_pendingCancelled;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addPlaceholders:(id)placeholders;
- (void)_downloadsEnded;
- (void)_dropGrabbedIconIfNecessary:(id)necessary completion:(id)completion;
- (void)_finishPlaceholder:(id)placeholder;
- (void)_postPlaceholdersDidChangeForAdded:(id)_postPlaceholders modified:(id)modified removed:(id)removed;
- (void)_processPendingProxies;
- (void)_removeDownloadingIcons:(id)icons saveState:(BOOL)state;
- (void)_removePlaceholders:(id)placeholders forInstall:(BOOL)install;
- (void)_swapDownloadingIcon:(id)icon forApplicationIcon:(id)applicationIcon;
- (void)applicationPlaceholdersAdded:(id)added;
- (void)applicationPlaceholdersCancelled:(id)cancelled;
- (void)applicationPlaceholdersIconUpdated:(id)updated;
- (void)applicationPlaceholdersInstalled:(id)installed;
- (void)applicationPlaceholdersModified:(id)modified;
- (void)applicationPlaceholdersNetworkUsageChanged:(BOOL)changed;
- (void)dealloc;
- (BOOL)hasDownloadedStoreApplication;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (BOOL)isUsingNetwork;
- (id)placeholderForDisplayID:(id)displayID;
- (id)placeholdersByDisplayID;
@end
