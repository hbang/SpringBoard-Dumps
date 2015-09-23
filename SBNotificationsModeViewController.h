/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNotificationsModeViewController : SBBulletinObserverViewController {
	struct {
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
		unsigned hasViewEverAppeared : 1;
	} _notificationsModeViewControllerDelegateFlags;
	NSMutableArray *_orderedSectionIDs;
	NSMutableDictionary *_sectionIDsToOrderedBulletins;
}
@property(assign, nonatomic) id<SBBulletinViewControllerDelegate, SBBulletinActionHandler> delegate;
@property(readonly, assign, nonatomic) NSArray *orderedSectionIDs;
@property(readonly, assign, nonatomic) NSMutableDictionary *sectionIDsToOrderedBulletins;
- (id)initWithObserverFeed:(unsigned)observerFeed;
- (void)_sortBulletins:(id)bulletins forSection:(id)section;
- (void)_sortSectionIDs;
- (void)_updateSection:(id)section withLockState:(BOOL)lockState;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)lockScreenVisibility withLockState:(BOOL)lockState updatedSubsectionIDs:(id)ids;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)lockScreenVisibility withProcessingBlock:(id)processingBlock;
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)messagePrivacyIfNecessary;
- (void)_updateSectionForChangeInNumberOfLines:(id)lines;
- (void)_updateSectionOrderForOperationInSection:(id)section;
- (int)bulletinViewController:(id)controller insertionAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller removalAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller replacementAnimationForBulletin:(id)bulletin inSection:(id)section;
- (void)commitInsertionOfBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section forFeed:(unsigned)feed;
- (void)commitInsertionOfSection:(id)section beforeSection:(id)section2;
- (void)commitMoveOfBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
- (void)commitMoveOfSection:(id)section beforeSection:(id)section2;
- (void)commitRemovalOfBulletin:(id)bulletin fromSection:(id)section;
- (void)commitRemovalOfSection:(id)section;
- (void)commitReplacementWithBulletin:(id)bulletin ofBulletin:(id)bulletin2 inSection:(id)section;
- (void)commitReplacementWithSection:(id)section ofSection:(id)section2;
- (void)dealloc;
- (BOOL)handleActionForBulletin:(id)bulletin;
- (void)hostWillPresent;
- (id)infoForBulletinInfo:(id)bulletinInfo inSection:(id)section;
- (void)populateBulletinInfo:(id)info inSection:(id)section;
- (void)updateForChangeInMessagePrivacy;
- (void)updateSection:(id)section withInfo:(id)info;
- (void)updateSection:(id)section withParameters:(id)parameters;
- (void)viewWillAppear:(BOOL)view;
@end

