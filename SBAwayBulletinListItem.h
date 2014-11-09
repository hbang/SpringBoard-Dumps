/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAwayListItem.h"

@class BBBulletin, BBObserver, NSString, NSMutableArray, NSDate, UIViewController, UIImage;

__attribute__((visibility("hidden")))
@interface SBAwayBulletinListItem : SBAwayListItem {
	NSMutableArray *_bulletins;
	int _personID;
	NSString *_contactInfo;
	BBObserver *_observer;
	NSDate *_sortDate;
	NSDate *_displayDate;
	NSString *_message;
	UIImage *_listItemImage;
	BBBulletin *_activeBulletin;
	UIViewController *_secondaryContentViewController;
}
@property(retain) BBBulletin *activeBulletin;
@property(retain) UIViewController *secondaryContentViewController;
- (id)initWithBulletin:(id)bulletin andObserver:(id)observer;
- (BOOL)_suppressesMessageForPrivacy;
- (void)_update;
- (void)_updateActiveBulletin;
- (void)_updateDisplayDate;
- (void)_updateImage;
- (void)_updateMessage;
- (void)_updateSortDate;
- (void)addBulletin:(id)bulletin;
- (id)attachmentImageForKey:(id)key;
- (id)attachmentText;
- (id)bulletinWithID:(id)anId;
- (id)bulletins;
- (void)buttonPressed;
- (BOOL)canBeClearedByNotificationCenter;
- (BOOL)canCoalesceWithBulletin:(id)bulletin;
- (BOOL)canSnooze;
- (BOOL)containsBulletinWithID:(id)anId;
- (id)date;
- (void)dealloc;
- (id)description;
- (BOOL)hasEventDate;
- (BOOL)hasSamePersonAsBulletin:(id)bulletin;
- (id)iconImage;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (unsigned)maxMessageLines;
- (id)message;
- (void)modifyBulletin:(id)bulletin;
- (id)observer;
- (BOOL)overridesQuietMode;
- (void)prepareWithCompletion:(id)completion;
- (id)publishDate;
- (void)removeAllBulletins;
- (void)removeBulletin:(id)bulletin;
- (int)snoozeButtonindex;
- (id)sortDate;
- (id)sortedBulletins;
- (id)subtitle;
- (id)title;
- (BOOL)wantsFullscreenPresentation;
- (BOOL)wantsHighlightOnInsert;
@end

