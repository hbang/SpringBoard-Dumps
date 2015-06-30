/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBAppSwitcherPeopleDelegate, SBAppSwitcherPeopleDataSource;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleViewController : XXUnknownSuperclass <_UISettingsKeyObserver, SBAppSwitcherPeopleDataSourceConsumer, UIGestureRecognizerDelegate, SBAppSwitcherPeopleScrollViewDelegate> {
	SBAppSwitcherPeopleScrollView *_peopleScrollView;
	UIPanGestureRecognizer *_closeGestureRecognizer;
	SBAppSwitcherSettings *_settings;
	_UILegibilitySettings *_legibilitySettings;
	CGPoint _contentOffsetBeforeExpandingItem;
	BOOL _interactivelyClosingItem;
	BOOL _animatingPresentation;
	NSArray *_dataSourceSnapshotLastProvidedToScrollView;
	id<SBAppSwitcherPeopleDataSource> _activeDataSource;
	BOOL _bbHasWarmedFavoritesListManager;
	BOOL _presented;
	BOOL _finishedLoadingAllData;
	id<SBAppSwitcherPeopleDelegate> _delegate;
}
@property(retain, nonatomic) id<SBAppSwitcherPeopleDataSource> activeDataSource;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBAppSwitcherPeopleDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_configureDataSourceIfNecessaryAndPossible;
- (void)_configureGestureRecognizers;
- (void)_configurePeopleScrollView;
- (void)_deviceUnlockedForFirstTime:(id)firstTime;
- (void)_handleClosePanGesture:(id)gesture;
- (void)_switcherDidPresentAnimation:(id)_switcher;
- (void)_switcherWillAnimate:(id)_switcher;
- (void)bbServerHasInitializedABFavoritesListManagerToWorkaround17689168;
- (void)cachedMonogramImageForPersonID:(int)personID generatingIfNecessaryWithResult:(id)result;
- (void)cancelTracking;
- (void)dataSourceChanged:(id)changed;
- (void)dealloc;
- (id)existingCachedMonogramImageForPersonID:(int)personID outIsMask:(BOOL *)mask;
- (id)expandedItemWrapper;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)launchURL:(id)url;
- (void)loadView;
- (float)monogramSize;
- (int)numberOfSectionsInPeopleScrollView:(id)peopleScrollView;
- (id)peopleScrollView:(id)view itemAtIndexPath:(id)indexPath;
- (int)peopleScrollView:(id)view numberOfItemsInSection:(int)section;
- (id)peopleScrollView:(id)view placeholderStringForEmptySection:(unsigned)emptySection;
- (CGSize)peopleScrollView:(id)view sizeForItem:(id)item expanded:(BOOL)expanded;
- (CGSize)peopleScrollView:(id)view sizeForPlaceholderForSection:(int)section;
- (id)peopleScrollView:(id)view titleForSection:(unsigned)section;
- (id)peopleScrollView:(id)view viewForItem:(id)item;
- (CGSize)peopleScrollViewSize;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (id)silhouetteMonogram;
- (void)switcherWasDismissed:(BOOL)dismissed;
- (void)switcherWillBePresented:(BOOL)switcher;
- (void)tappedExpandCollapseForItem:(id)item;
- (BOOL)useVerticallyCompactLayoutSize;
@end

