/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMinimumViableSwitcherTableViewController : XXUnknownSuperclass <SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling> {
	NSMutableArray *_displayItems;
	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	SBAppView *_temporaryAppView;
	SBAppView *_temporarySideAppView;
	_UILegibilitySettings *_legibilitySettings;
	SBDisplayItem *_returnToDisplayItem;
	SBDisplayItem *_initialDisplayItem;
	SBDisplayItem *_returnToSideDisplayItem;
	SBMainDisplayLayoutState *_initialLayoutState;
	SBBestAppSuggestion *_bestAppSuggestion;
	BOOL _invalidated;
}
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *displayItems;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, assign) Class superclass;
+ (float)snapshotScale;
- (void)_hostSideAppToHideThem;
- (void)_unhostSideAppToStopHidingThem;
- (void)animateDismissalToDisplayItem:(id)displayItem forTransitionRequest:(id)transitionRequest withCompletion:(id)completion;
- (void)animatePresentationForTransitionRequest:(id)transitionRequest withCompletion:(id)completion;
- (id)appViewRequesterIdentifier:(id)identifier;
- (int)appViewRequesterPriority:(id)priority;
- (void)dealloc;
- (void)endInteractionWithCommitment:(BOOL)commitment;
- (void)endTransitionWithSuccess:(BOOL)success completion:(id)completion;
- (void)insertDisplayItem:(id)item atIndex:(unsigned)index updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)invalidate;
- (id)nextDisplayItem;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)removeDisplayItem:(id)item updateScrollPosition:(BOOL)position forReason:(int)reason completion:(id)completion;
- (void)replaceDisplayItem:(id)item withDisplayItem:(id)displayItem completion:(id)completion;
- (void)setTransitionParameters:(UIEdgeInsets)parameters;
- (void)startInteractiveTransition:(BOOL)transition presenting:(BOOL)presenting withRequest:(id)request;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end
