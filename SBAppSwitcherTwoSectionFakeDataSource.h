/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBAppSwitcherPeopleDataSourceConsumer;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherTwoSectionFakeDataSource : SBAppSwitcherPeopleAbstractDataSource <SBAppSwitcherPeopleDataSource> {
	NSMutableArray *_sectionOne;
	NSMutableArray *_sectionTwo;
	NSMutableDictionary *_personIDsToColors;
	int _maxPersonID;
}
@property(assign, nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)_fillInSectionArrays;
- (void)_insertOneRecentPersonAndDeleteOneAtTheEnd;
- (id)_randomColor;
- (id)_rectOfColor:(id)color size:(float)size;
- (void)_swapColorOfOneRecentPerson;
- (void)cachedMonogramImageForPersonID:(int)personID ofSize:(float)size generatingIfNecessaryWithResult:(id)result;
- (id)contactItemForIndexPath:(id)indexPath;
- (void)dealloc;
- (id)existingCachedMonogramImageForPersonID:(int)personID ofSize:(float)size outIsMask:(BOOL *)mask;
- (BOOL)isImageMaskForPersonID:(int)personID ofSize:(float)size;
- (unsigned)numberOfContactsInSection:(unsigned)section;
- (unsigned)numberOfSections;
- (id)optionalEmptyPlaceholderStringForSection:(unsigned)section;
- (void)purgeCaches;
- (id)silhouetteMonogramOfSize:(float)size;
- (id)titleForSection:(unsigned)section;
@end

