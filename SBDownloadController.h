/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSDownloadQueueObserver.h"


__attribute__((visibility("hidden")))
@interface SBDownloadController : XXUnknownSuperclass <SSDownloadQueueObserver> {
	SSDownloadQueue *_downloadQueue;
	NSMutableSet *_pendingDownloadRemovals;
	NSMutableArray *_downloads;
	unsigned _downloadLoadCount;
	NSMutableDictionary *_bundleIDDownloadMap;
	BOOL _hasDownloadedStoreDownload;
}
+ (id)sharedInstance;
- (id)init;
- (void)_delayedDownloadQueueChange;
- (void)_downloadingIconWasRemoved:(id)removed;
- (void)_downloadsEnded;
- (void)_finishDownload:(id)download;
- (void)_finishDownloadInLocalState:(id)localState;
- (void)_finishDownloadInStore:(id)store;
- (void)_processDownloadQueueChangedWithPendingRemovals;
- (void)_showDownloadQueueError;
- (id)bundleIdentifiersBeingDownloaded:(id)downloaded;
- (BOOL)bundledIdentifierIsBeingDownloaded:(id)downloaded;
- (void)cancelDownload:(id)download;
- (BOOL)checkQueue;
- (id)currentDownloads;
- (void)dealloc;
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
- (void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;
- (void)downloadQueueError:(id)error;
- (void)downloadQueueNetworkUsageChanged:(id)changed;
- (id)downloadWithBundleIdentifier:(id)bundleIdentifier;
- (void)downloadingIconStatusDidChange:(id)downloadingIconStatus;
- (BOOL)hasDownloadedStoreDownload;
- (BOOL)moveDownloadToFrontOfQueue:(id)queue;
@end

