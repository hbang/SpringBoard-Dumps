/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue, SBAppSwitcherPeopleDataSourceConsumer, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleRecentsPlusFavoritesDataSource : SBAppSwitcherPeopleAbstractDataSource <SBAppSwitcherPeopleDataSource> {
	NSArray *_favoritePeople;
	NSArray *_recentPeople;
	SBAppSwitcherSettings *_settings;
	SGSuggestionsService *_suggestionsService;
	NSObject<OS_dispatch_queue> *_recalculationQueue;
	NSObject<OS_dispatch_group> *_addressBookInUseGroup;
	void *_recalculation_queue_addressBook;
	BOOL _abUpdateCoalescenceNeedsUpdateFlag;
	NSMutableDictionary *_monogramKeyLRUSets;
	NSMutableDictionary *_monogramImageSourceDates;
	NSMutableDictionary *_recalculation_queue_recordIDsToContactItems;
}
@property(assign, nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *favoritePeople;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSArray *recentPeople;
@property(readonly, assign) Class superclass;
+ (id)_imageIsMaskDictionary;
+ (id)_imageIsMaskSemaphore;
+ (id)_peopleMappedImageCache;
- (id)init;
- (void)_addressBookChangedExternally;
- (id)_contactItemForIndexPath:(id)indexPath;
- (void)_favoritesDidChange:(id)_favorites;
- (void)_individualPeopleChanged:(id)changed;
- (BOOL)_isImageMaskForPersonID:(int)personID ofSize:(float)size;
- (id)_keyForPersonID:(int)personID size:(float)size;
- (id)_monogramKeyLRUSetForSize:(float)size;
- (id)_monogramQueue;
- (id)_monogrammerForSize:(float)size;
- (void)_notifyConsumerOfDataSourceChange;
- (unsigned)_numberOfContactsInSection:(unsigned)section;
- (unsigned)_numberOfMonogramsToCache;
- (id)_optionalEmptyPlaceholderStringForSection:(unsigned)section;
- (void)_purgeLeastRecentlyUsedMonogramImages;
- (BOOL)_purgeStaleMonogramImages;
- (void)_purgeUnreferencedContactItems;
- (id)_queue_contactItemForUnifiedPersonRecordID:(int)unifiedPersonRecordID;
- (void)_removeIsImageMaskEntryForKey:(id)key;
- (unsigned)_sectionForExternalSection:(unsigned)externalSection;
- (void)_setIsImageMask:(BOOL)mask forPersonID:(int)personID ofSize:(float)size;
- (id)_titleForSection:(unsigned)section;
- (void)_updateFavoritesList:(id)list;
- (void)_updateRecentsList:(id)list;
- (void)cachedMonogramImageForPersonID:(int)personID ofSize:(float)size generatingIfNecessaryWithResult:(id)result;
- (id)contactItemForIndexPath:(id)indexPath;
- (void)dealloc;
- (id)existingCachedMonogramImageForPersonID:(int)personID ofSize:(float)size outIsMask:(BOOL *)mask;
- (unsigned)numberOfContactsInSection:(unsigned)section;
- (unsigned)numberOfSections;
- (id)optionalEmptyPlaceholderStringForSection:(unsigned)section;
- (void)purgeCaches;
- (id)silhouetteMonogramOfSize:(float)size;
- (id)titleForSection:(unsigned)section;
- (void)updateIfNecessary;
@end

