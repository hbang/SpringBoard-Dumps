/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinListSection : XXUnknownSuperclass {
	NSString *_sectionID;
	int _sectionType;
	int _sectionCategory;
	id _widget;
	NSMutableArray *_bulletins;
	NSMutableSet *_bulletinIDs;
	NSArray *_sortDescriptors;
	NSString *_displayName;
	UIImage *_iconImage;
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	unsigned _messageNumberOfLines;
	BOOL _displaysCriticalBulletins;
	NSDate *_lastSortDate;
	NSMutableSet *_subsections;
	UIImage *_largeIconImage;
	BBSectionInfo *_sectionInfo;
}
@property(readonly, assign, nonatomic) NSArray *bulletins;
@property(copy, nonatomic) NSString *displayName;
@property(retain, nonatomic) UIImage *iconImage;
@property(retain, nonatomic) UIImage *largeIconImage;
@property(assign, nonatomic) unsigned messageNumberOfLines;
@property(assign, nonatomic) int sectionCategory;
@property(copy, nonatomic) NSString *sectionID;
@property(retain, nonatomic) BBSectionInfo *sectionInfo;
@property(assign, nonatomic) BOOL showsInLockScreen;
@property(assign, nonatomic) BOOL showsMessagePreview;
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(readonly, assign, nonatomic) NSSet *subsectionIDs;
@property(retain, nonatomic) id widget;
- (id)initWithSectionInfo:(id)sectionInfo;
- (unsigned)_indexForNewBulletin:(id)newBulletin;
- (unsigned)_removeBulletin:(id)bulletin;
- (id)_sortDateForBulletin:(id)bulletin;
- (id)_subsectionWithIDCreatingIfNecessary:(id)idcreatingIfNecessary;
- (void)_updateWithSectionInfo:(id)sectionInfo;
- (unsigned)addBulletin:(id)bulletin;
- (id)bulletinAtIndex:(unsigned)index;
- (unsigned)bulletinCount;
- (id)bulletinWithBulletinID:(id)bulletinID;
- (int)compare:(id)compare;
- (int)compareSection:(id)section forOrder:(int)order;
- (void)dealloc;
- (id)description;
- (BOOL)displaysCriticalBulletins;
- (BOOL)hasBulletinWithID:(id)anId;
- (BOOL)hasClearableBulletins;
- (unsigned)indexOfBulletinID:(id)bulletinID;
- (unsigned)indexOfBulletinWithLocalNotification:(id)localNotification;
- (BOOL)isBulletinSection;
- (BOOL)isWidgetSection;
- (id)lastSortDate;
- (unsigned)removeBulletin:(id)bulletin;
- (unsigned)replaceBulletin:(id)bulletin withBulletin:(id)bulletin2;
- (void)setShowsInLockScreen:(BOOL)lockScreen forSubsectionID:(id)subsectionID;
- (void)setShowsMessagePreview:(BOOL)preview forSubsectionID:(id)subsectionID;
- (BOOL)showsBulletinIDInLockScreen:(id)lockScreen;
- (BOOL)showsBulletinsInSubsectionIDInLockScreen:(id)lockScreen;
- (BOOL)showsMessagePreviewForBulletinID:(id)bulletinID;
- (BOOL)showsMessagePreviewForBulletinsInSubsectionID:(id)subsectionID;
- (void)updateWithSectionInfo:(id)sectionInfo;
@end

