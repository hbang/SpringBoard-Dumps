/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBDownloadController : NSObject <ISDownloadQueueDelegate> {
	ISDownloadQueue *_downloadQueue;
}
+ (id)sharedInstance;
- (id)init;
- (void)_networkUsageChanged:(id)changed;
- (void)_showDownloadQueueError;
- (BOOL)checkQueue;
- (id)currentDownloads;
- (void)dealloc;
- (id)downloadQueue;
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals disappearances:(id)disappearances;
- (void)downloadQueueError:(id)error;
@end

