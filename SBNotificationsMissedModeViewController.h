/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBNotificationsModeViewController.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNotificationsMissedModeViewController : SBNotificationsModeViewController {
	NSMutableSet *_lockScreenBulletinIDs;
}
+ (id)_referenceDate;
+ (void)_sortBulletinsChronologically:(id)chronologically;
+ (id)_sortByDateForBulletin:(id)bulletin;
+ (id)sharedSectionInfo;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_expiredBulletins;
- (void)_pruneBulletins;
- (void)_sortBulletins:(id)bulletins forSection:(id)section;
- (void)_sortSectionIDs;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)lockScreenVisibility withProcessingBlock:(id)processingBlock;
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)messagePrivacyIfNecessary;
- (void)_updateSectionForChangeInNumberOfLines:(id)lines;
- (void)_updateSectionOrderForOperationInSection:(id)section;
- (UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
- (void)commitInsertionOfBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section forFeed:(unsigned)feed;
- (void)commitInsertionOfSection:(id)section beforeSection:(id)section2;
- (void)commitMoveOfBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
- (void)commitMoveOfSection:(id)section beforeSection:(id)section2;
- (void)commitReloadOfSections:(id)sections;
- (void)commitRemovalOfBulletin:(id)bulletin fromSection:(id)section;
- (void)commitRemovalOfSection:(id)section;
- (void)commitReplacementWithBulletin:(id)bulletin ofBulletin:(id)bulletin2 inSection:(id)section;
- (void)commitReplacementWithSection:(id)section ofSection:(id)section2;
- (id)contentUnavailableText;
- (void)dealloc;
- (void)didAssociateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
- (id)infoForBulletin:(id)bulletin inSection:(id)section;
- (id)infoForBulletinSection:(id)bulletinSection;
- (void)populateBulletinInfo:(id)info inSection:(id)section;
- (void)populateIconIfNecessaryForBulletinInfo:(id)bulletinInfo;
- (void)viewWillAppear:(BOOL)view;
- (void)willAssociateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
- (void)willDisassociateBulletin:(id)bulletin fromSection:(id)section;
@end

