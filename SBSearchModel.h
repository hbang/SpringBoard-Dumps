/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SPDaemonQueryDelegate.h"

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SBSearchModel : XXUnknownSuperclass <SPDaemonQueryDelegate> {
	NSTimer *_clearSearchTimer;
	NSDate *_clearSearchDate;
	NSMutableDictionary *_cachedImages;
	NSObject<OS_dispatch_semaphore> *_cacheLock;
}
+ (id)sharedInstance;
- (id)init;
- (void)_clearSearchTimerFired;
- (id)_customImageForPath:(id)path;
- (id)_imageForDomain:(unsigned)domain andDisplayID:(id)anId;
- (void)_updateClearSearchTimerFireDate;
- (void)dealloc;
- (void)handleOptionsForNewSections:(id)newSections;
- (id)imageForDisplayIdentifier:(id)displayIdentifier spotlightKey:(id)key;
- (id)imageViewForDomain:(unsigned)domain andDisplayID:(id)anId;
- (id)launchingURLForResult:(id)result withDisplayIdentifier:(id)displayIdentifier andSection:(id)section;
- (void)resetClearSearchTimer;
- (void)startClearSearchTimer;
@end

