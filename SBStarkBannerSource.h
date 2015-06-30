/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBStarkBannerSource : XXUnknownSuperclass <SBUIBannerSource, SBUIBannerTargetManagerObserver> {
	id _allowedTargetIdentifier;
	id<SBUIBannerTarget> _target;
	NSMutableArray *_enqueuedItems;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithAllowedTargetIdentifier:(void *)allowedTargetIdentifier;
- (void)bannerTargetManager:(id)manager didAddTarget:(id)target;
- (void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
- (id)currentItemFromTarget;
- (void)dealloc;
- (id)dequeueNextBannerItemForTarget:(id)target;
- (void)dismissCurrentItemFromTarget;
- (void)enqueueItem:(id)item;
- (unsigned)enumerateAllItemsMatchingContext:(id)context withBlock:(id)block;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)enqueuedItemsMatchingContext;
- (id)newBannerViewForContext:(id)context;
- (id)peekNextBannerItemForTarget:(id)target;
- (void)removeEnqueuedItemsAtIndexes:(id)indexes;
@end

