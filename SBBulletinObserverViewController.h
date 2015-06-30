/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue, SBBulletinActionHandler;

__attribute__((visibility("hidden")))
@interface SBBulletinObserverViewController : XXUnknownSuperclass <SBUISizeObservingViewDelegate, BBObserverDelegate, SBBulletinViewControllerDelegate, SBWidgetViewControllerDelegate, SBNotificationCenterWidgetHost, SBModeViewControllerContentProviding> {
	BBObserver *_observer;
	unsigned _feed;
	id _delegate;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
	BSSerializedRequestQueue *_sectionRequestQueue;
	BSSerializedRequestQueue *_bulletinRequestQueue;
	NSMutableDictionary *_enabledSectionInfosByID;
	NSMutableArray *_visibleSectionIDs;
	NSMutableDictionary *_bulletinIDsByFeed;
	UIView *_contentProvidingView;
	SBBulletinViewController *_bulletinViewController;
	_UIContentUnavailableView *_contentUnavailableView;
	int _sectionOrderRule;
	int _supportedCategory;
	NSArray *_sectionOrder;
	NSMutableArray *_makeshiftSectionOrder;
	NSObject<OS_dispatch_queue> *_handlingControlQueue;
	int _bulletinHandlingDisabledCount;
	int _sectionHandlingDisabledCount;
	struct {
		unsigned isRePushingUpdates : 1;
		unsigned scrollsToTop : 1;
		unsigned isLayoutValid : 1;
	} _bulletinObserverViewControllerFlags;
}
@property(readonly, assign, nonatomic) SBBulletinViewController *bulletinViewController;
@property(readonly, assign, nonatomic) CGSize contentSize;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBBulletinActionHandler> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isRequestHandlingEnabled) BOOL requestHandlingEnabled;
@property(assign, nonatomic) BOOL scrollsToTop;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) int supportedCategory;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
+ (unsigned)_contentUnavailableVibrantOptionsForCurrentState;
+ (id)allCategories;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)initWithObserverFeed:(unsigned)observerFeed;
- (id)initWithObserverFeed:(unsigned)observerFeed bulletinViewControllerClass:(Class)aClass;
- (void)_addBulletinID:(id)anId toSetForFeed:(unsigned)feed;
- (void)_addBulletinID:(id)anId toSetForFeeds:(unsigned)feeds;
- (void)_addSection:(id)section toCategory:(int)category widget:(id)widget;
- (void)_associateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
- (id)_bulletinAfterBulletin:(id)bulletin inSection:(id)section;
- (id)_bulletinWithIdentifier:(id)identifier inSection:(id)section;
- (void)_disassociateBulletin:(id)bulletin fromSection:(id)section;
- (id)_enabledSectionWithIdentifier:(id)identifier;
- (void)_enqueueBulletinRequest:(id)request forBulletinInfo:(id)bulletinInfo;
- (unsigned)_feedsForBulletinID:(id)bulletinID;
- (CGRect)_frameforViewWithContentForMode:(int)mode;
- (void)_handlingQueue_setBulletinHandlingEnabled:(BOOL)enabled;
- (void)_handlingQueue_setSectionHandlingEnabled:(BOOL)enabled;
- (void)_insertContentUnavailableView;
- (void)_insertSectionIfNecessary:(id)necessary commit:(BOOL)commit;
- (BOOL)_isBulletin:(id)bulletin associatedWithSection:(id)section;
- (BOOL)_isBulletin:(id)bulletin associatedWithSection:(id)section forFeed:(unsigned)feed;
- (BOOL)_isSectionVisible:(id)visible;
- (id)_lazyContentUnavailableView;
- (void)_loadSection:(id)section;
- (unsigned)_numberOfBulletinsInSection:(id)section;
- (unsigned)_numberOfVisibleSections;
- (id)_reassociateBulletin:(id)bulletin withSection:(id)section;
- (void)_removeBulletinIDFromAllFeeds:(id)allFeeds;
- (void)_removeBulletinViewControllerView;
- (void)_setSection:(id)section enabled:(BOOL)enabled;
- (void)_setSection:(id)section visible:(BOOL)visible;
- (void)_setSectionOrder:(id)order forCategory:(int)category andSortSections:(BOOL)sections;
- (void)_setSectionOrderRule:(int)rule;
- (void)_setupQueue:(id *)queue withLabel:(const char *)label;
- (void)_setupRequestQueues;
- (void)_sortAndCommitReloadOfSectionsInCategory:(int)category;
- (void)_teardownRequestQueue:(id *)queue;
- (void)_teardownRequestQueues;
- (void)_transitionToBulletinViewControllerView:(BOOL)bulletinViewControllerView animated:(BOOL)animated;
- (void)_transitionToBulletinViewControllerViewIfNecessary;
- (void)_updateMakeshiftSectionOrderIfNecessary:(id)necessary;
- (void)_updateSection:(id)section forCategory:(int)category completion:(id)completion;
- (void)addBulletin:(id)bulletin toSection:(id)section forFeed:(unsigned)feed;
- (id)bulletinAtIndex:(unsigned)index inSection:(id)section;
- (BOOL)bulletinViewController:(id)controller didSelectAction:(id)action forBulletin:(id)bulletin inSection:(id)section;
- (BOOL)bulletinViewController:(id)controller didSelectBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller insertionAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller removalAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller replacementAnimationForBulletin:(id)bulletin inSection:(id)section;
- (BOOL)bulletinViewController:(id)controller shouldHighlightBulletin:(id)bulletin inSection:(id)section;
- (UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
- (BOOL)canRemoveViewOnDismissal:(id)dismissal;
- (void)clearSection:(id)section;
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
- (id)firstSection;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (unsigned)indexOfBulletin:(id)bulletin inSection:(id)section;
- (unsigned)indexOfSectionWithIdentifier:(id)identifier;
- (id)infoForBulletin:(id)bulletin inSection:(id)section forFeed:(unsigned)feed;
- (id)infoForBulletinSection:(id)bulletinSection;
- (id)infoForSection:(id)section;
- (id)infoForWidget:(id)widget inSection:(id)section;
- (id)infoForWidgetSection:(id)widgetSection;
- (void)insertAppropriateViewWithContent;
- (void)insertBulletinViewControllerView;
- (void)invalidateContentLayout;
- (void)invokeBlockWithAllWidgets:(id)allWidgets;
- (BOOL)isBulletinHandlingEnabled;
- (BOOL)isRePushingUpdates;
- (BOOL)isSectionHandlingEnabled;
- (int)layoutMode;
- (int)layoutModeForBulletinViewController:(id)bulletinViewController;
- (void)loadView;
- (id)observer;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (CGSize)observer:(id)observer composedAttachmentSizeForType:(int)type thumbnailWidth:(float)width height:(float)height key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin forFeed:(unsigned)feed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer noteSectionParametersChanged:(id)changed forSectionID:(id)sectionID;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (void)observer:(id)observer updateSectionInfo:(id)info inCategory:(int)category;
- (void)observer:(id)observer updateSectionOrder:(id)order forCategory:(int)category;
- (void)observer:(id)observer updateSectionOrderRule:(int)rule;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)observer;
- (void)pushUpdatesAgainForFeeds:(unsigned)feeds;
- (void)pushUpdatesAgainForSectionWithIdentifier:(id)identifier feeds:(unsigned)feeds;
- (void)remoteViewControllerDidConnectForWidget:(id)remoteViewController;
- (void)removeAndDisableSection:(id)section;
- (void)removeBulletin:(id)bulletin fromSection:(id)section;
- (void)removeSection:(id)section;
- (void)replaceBulletin:(id)bulletin inSection:(id)section;
- (id)sectionAfterSection:(id)section;
- (id)sectionIdentifierAtIndex:(unsigned)index;
- (int)sectionOrderRule;
- (id)sectionWithIdentifier:(id)identifier;
- (void)setBulletinHandlingEnabled:(BOOL)enabled;
- (void)setSectionHandlingEnabled:(BOOL)enabled;
- (void)sizeObservingView:(id)view didChangeSize:(CGSize)size;
- (void)sortVisibleSectionsForCategory:(int)category;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)updateSection:(id)section withInfo:(id)info;
- (void)updateSection:(id)section withParameters:(id)parameters;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)widget:(id)widget didUpdatePreferredHeight:(float)height completion:(id)completion;
- (void)widget:(id)widget requestsLaunchOfURL:(id)url;
- (void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (id)widgetForSection:(id)section;
- (void)willAssociateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
- (void)willDisassociateBulletin:(id)bulletin fromSection:(id)section;
@end

