/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SBSearchModel : XXUnknownSuperclass <SPDaemonQueryDelegate, PRSImageSource> {
	NSTimer *_clearSearchTimer;
	NSDate *_clearSearchDate;
	CPLRUDictionary *_cachedResultImages;
	NSObject<OS_dispatch_semaphore> *_cacheResultLock;
	NSOperationQueue *_prefetchOperationQueue;
	NSOperationQueue *_loadOperationQueue;
	NSOperation *_waitOperation;
	void *_addressBook;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (void)_cacheImage:(id)image forKey:(id)key;
- (void)_clearSearchTimerFired;
- (id)_customImageForPath:(id)path;
- (BOOL)_getCachedImageForKey:(id)key withCompletionBlock:(id)completionBlock;
- (id)_imageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
- (id)_uniqueKeyForResult:(id)result withSearchDomain:(unsigned)searchDomain;
- (void)_updateClearSearchTimerFireDate;
- (id)cachedImageForResult:(id)result inSection:(id)section;
- (void)cancelPrefetchingAndStartNewBatch;
- (id)currentToken;
- (void)dealloc;
- (void)fetchImageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
- (void)getImageWithIdentifier:(id)identifier block:(id)block;
- (void)handleOptionsForNewSections:(id)newSections;
- (void)invalidate;
- (id)operationFetchingImageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
- (BOOL)prefetchImageForResult:(id)result inSection:(id)section;
- (void)resetClearSearchTimer;
- (void)startClearSearchTimer;
@end

