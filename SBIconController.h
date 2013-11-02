/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MCProfileConnectionObserver.h"
#import "BBObserverDelegate.h"
#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBSearchGestureObserver.h"
#import "SBIconViewDelegate.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBIconModelApplicationDataSource.h"
#import "SpringBoard-Structs.h"

@class SBLeafIcon, SBIconContentView, BBObserver, SBIconColorSettings, NSTimer, UITouch, NSIndexPath, NSMutableSet, NSMutableArray, NSSet, _UILegibilitySettings, NSObject, SBRootFolderController, SBIcon, SBIconModel, SBFolder;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBIconController : XXUnknownSuperclass <BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBSearchGestureObserver, SBIconViewDelegate, SBIconModelDelegate, SBIconViewMapDelegate, SBIconModelApplicationDataSource> {
	NSSet *_visibleTags;
	NSSet *_hiddenTags;
	SBIconModel *_iconModel;
	SBIconContentView *_contentView;
	BOOL _needsRelayout;
	BOOL _sendITunesNotification;
	BBObserver *_bbObserver;
	NSMutableSet *_displayIDsWithBadgingDisabled;
	SBRootFolderController *_rootFolderController;
	SBFolder *_closingFolder;
	SBFolder *_folderToOpenWhenScrollingEnds;
	BOOL _rotating;
	int _orientation;
	SBIcon *_launchingIcon;
	SBIcon *_highlightedIcon;
	SBLeafIcon *_iconToReveal;
	SBIcon *_grabbedIcon;
	SBIcon *_recipientIcon;
	NSMutableArray *_droppedIconsAnimatingIntoPlace;
	NSMutableArray *_droppedIconsInToOrOutOfFolder;
	unsigned _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
	SBIcon *_lastTouchedIcon;
	BOOL _isEditing;
	BOOL _animatingFolder;
	BOOL _grabbedIconIsDraggedOutOfFolderView;
	SBFolder *_grabbedIconSourceFolder;
	BOOL _allowsUninstall;
	float _iconAlpha;
	float _oldScrollOffset;
	UITouch *_lastTouch;
	NSTimer *_folderSpringloadTimer;
	BOOL _keyboardIsRotating;
	BOOL _isAnimatingFolderCreation;
	BOOL _isAnimatingForUnscatter;
	NSObject<OS_dispatch_queue> *_folderIconLoadingBackgroundQueue;
	unsigned _maxIconViewsInHierarchy;
	unsigned _maxNewsstandItemViewsInHierarchy;
	SBIconColorSettings *_iconColorSettings;
	BOOL _showingSearch;
	_UILegibilitySettings *_legibilitySettings;
	NSIndexPath *_indexPathToResetTo;
}
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
+ (id)sharedInstance;
- (id)init;
- (void)_addToFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
- (void)_animateFolder:(id)folder open:(BOOL)open animated:(BOOL)animated;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)sectionInfo;
- (void)_cancelFolderSpringloadTimer;
- (void)_cleanupForClosingFolderAnimated:(BOOL)closingFolderAnimated;
- (void)_closeFolderController:(id)controller animated:(BOOL)animated;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)animation;
- (CGRect)_contentViewRelativeFrameForIcon:(id)icon;
- (id)_currentFolderController;
- (id)_debugStringForIconOrder:(int)iconOrder;
- (void)_dropIcon:(id)icon withInsertionPath:(id)insertionPath;
- (void)_dropIconIntoOpenFolder:(id)folder withInsertionPath:(id)insertionPath;
- (void)_dropIconOutOfClosingFolder:(id)closingFolder withInsertionPath:(id)insertionPath;
- (void)_folderDidFinishOpenClose:(BOOL)_folder animated:(BOOL)animated;
- (unsigned)_folderRowsForFolder:(id)folder;
- (unsigned)_folderRowsForFolder:(id)folder inOrientation:(int)orientation;
- (BOOL)_iconCanBeGrabbed:(id)grabbed;
- (void)_iconDropDidFinish:(id)_iconDrop;
- (BOOL)_iconListIndexIsValid:(int)valid;
- (void)_iconModelDidLayout:(id)_iconModel;
- (void)_iconModelDidReloadIcons:(id)_iconModel;
- (void)_iconModelWillLayout:(id)_iconModel;
- (void)_iconModelWillReloadIcons:(id)_iconModel;
- (void)_iconVisibilityChanged:(id)changed;
- (void)_installedAppsDidChange:(id)_installedApps;
- (void)_keyboardWillHide:(id)_keyboard;
- (void)_keyboardWillShow:(id)_keyboard;
- (void)_launchIcon:(id)icon;
- (void)_lockScreenUIWillLock:(id)_lockScreenUI;
- (void)_moveDroppedIconsToLocation:(int)location;
- (void)_moveIconToContentView:(id)contentView;
- (void)_noteFolderAnimationStateDidChange;
- (void)_noteUserIsInteractingWithIcons;
- (id)_openFolderController;
- (void)_precacheFolderImages:(id)images location:(int)location;
- (void)_prepareToResetRootIconLists;
- (id)_proposedFolderNameForGrabbedIcon:(id)grabbedIcon recipientIcon:(id)icon;
- (void)_resetFolderSpringloadTimer;
- (void)_resetRootIconLists;
- (id)_rootFolderController;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (void)_runScrollFolderTest:(int)test;
- (void)_selectIconModel:(BOOL)model;
- (void)_setAnimatingFolderCreation:(BOOL)creation;
- (void)_setFolderToOpenAfterScrolling:(id)openAfterScrolling;
- (void)_setHasAnimatingFolder:(BOOL)folder;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (void)_snapshotFadeDidStop:(id)_snapshotFade finished:(id)finished snapshot:(id)snapshot;
- (void)_updateDisabledBadgesSetWithSections:(id)sections;
- (void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
- (void)addNewIconsToDesignatedLocations:(id)designatedLocations saveIconState:(BOOL)state;
- (id)allApplications;
- (BOOL)allowsUninstall;
- (void)animateIcons:(id)icons intoFolderIcon:(id)icon openFolderOnFinish:(BOOL)finish complete:(id)complete;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (void)applicationRestrictionController:(id)controller didUpdateVisibleTags:(id)tags hiddenTags:(id)tags3;
- (BOOL)canSaveIconState:(id)state;
- (BOOL)canUninstallIcon:(id)icon;
- (void)clearHighlightedIcon;
- (void)closeFolderAnimated:(BOOL)animated;
- (void)compactFolders:(id)folders;
- (void)compactIconsInIconListsInFolder:(id)folder moveNow:(BOOL)now limitToIconList:(id)iconList;
- (void)compactRootIconLists;
- (id)contentView;
- (id)createNewFolderFromRecipientIcon:(id)recipientIcon grabbedIcon:(id)icon;
- (id)currentFolderIconList;
- (int)currentFolderIconListIndex;
- (int)currentIconListIndex;
- (id)currentRootIconList;
- (void)dealloc;
- (id)defaultIconState;
- (void)didDeleteIconState:(id)state;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)didSaveIconState:(id)state;
- (BOOL)dismissSpotlightIfNecessary;
- (id)dockListView;
- (void)finishInstallingIconAnimated:(BOOL)animated;
- (id)firstPageLeafIdentifiers;
- (void)fixupBouncedIconsInFolder:(id)folder startingWithIndex:(int)index;
- (BOOL)folderController:(id)controller draggedIconDidMoveFromListView:(id)draggedIcon toListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconDidPauseAtLocation:(CGPoint)draggedIcon inListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconMightDropFromListView:(id)listView;
- (void)folderController:(id)controller draggedIconShouldDropFromListView:(id)draggedIcon;
- (void)folderControllerDidEndScrolling:(id)folderController;
- (void)folderControllerShouldBeginEditing:(id)folderController;
- (void)folderControllerShouldClose:(id)folderController;
- (id)folderIconListAtIndex:(unsigned)index;
- (void)folderSpringloadTimerFired;
- (void)getListView:(id *)view folder:(id *)folder relativePath:(id *)path forIndexPath:(id)indexPath createIfNecessary:(BOOL)necessary;
- (id)grabbedIcon;
- (void)handleHomeButtonTap;
- (BOOL)hasAnimatingFolder;
- (BOOL)hasOpenFolder;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMoved:(id)moved;
- (BOOL)iconAllowsBadging:(id)badging;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconHandleLongPress:(id)press;
- (id)iconListViewAtIndex:(unsigned)index inFolder:(id)folder createIfNecessary:(BOOL)necessary;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (id)iconToReveal;
- (void)iconTouchBegan:(id)began;
- (BOOL)iconViewDisplaysBadges:(id)badges;
- (BOOL)iconViewDisplaysCloseBox:(id)box;
- (void)iconWasTapped:(id)tapped;
- (BOOL)importIconState:(id)state;
- (id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now;
- (id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now pop:(BOOL)pop;
- (id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now;
- (id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now pop:(BOOL)pop;
- (BOOL)isAnimatingForUnscatter;
- (BOOL)isDroppingIcon:(id)icon;
- (BOOL)isDroppingIconsInOrOutOfFolder;
- (BOOL)isEditing;
- (BOOL)isFolderScrolling;
- (BOOL)isIconVisiblyRepresented:(id)represented;
- (BOOL)isNewsstandEnabled;
- (BOOL)isNewsstandOpen;
- (BOOL)isScrolling;
- (id)lastTouchedIcon;
- (void)layoutIconLists:(float)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
- (id)model;
- (void)moveIconFromWindow:(id)window toIconList:(id)iconList;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)touch;
- (void)noteIconStateChangedExternally;
- (void)noteViewCovered;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer updateSectionInfo:(id)info;
- (id)openFolder;
- (void)openFolder:(id)folder animated:(BOOL)animated;
- (int)orientation;
- (id)placeIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now layoutNow:(BOOL)now4 pop:(BOOL)pop;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
- (id)recipientIcon;
- (BOOL)relayout;
- (void)removeAllIconAnimations;
- (void)removeIcon:(id)icon andCompactFolder:(BOOL)folder folderRef:(id *)ref;
- (void)removeIcon:(id)icon compactFolder:(BOOL)folder;
- (void)replaceFolderIcon:(id)icon byContainedIcon:(id)icon2 animated:(BOOL)animated;
- (void)replaceIconAtPath:(id)path withIcon:(id)icon saveState:(BOOL)state;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)restoreScrollingAndRotationAfterUngrab;
- (id)rootFolder;
- (id)rootIconListAtIndex:(int)index;
- (void)scatterAnimated:(BOOL)animated withCompletion:(id)completion;
- (BOOL)scrollToIconListAtIndex:(int)index animate:(BOOL)animate;
- (void)scrollToIconListContainingIcon:(id)iconListContainingIcon animate:(BOOL)animate;
- (void)scrollToIconToRevealAnimated:(BOOL)revealAnimated;
- (void)searchGesture:(id)gesture changedPercentComplete:(float)complete;
- (void)setGrabbedIcon:(id)icon;
- (void)setIconToReveal:(id)reveal revealingPrevious:(BOOL)previous;
- (void)setIdleModeText:(id)text;
- (void)setIsEditing:(BOOL)editing;
- (void)setLastTouch:(id)touch;
- (void)setLastTouchedIcon:(id)icon;
- (void)setRecipientIcon:(id)icon duration:(double)duration;
- (void)shiftFolderViewsForKeyboardAppearing:(BOOL)keyboardAppearing keyboardHeight:(float)height;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showInfoAlertIfNeeded:(BOOL)needed;
- (void)showSpotlightAlertIfNecessary;
- (void)uninstallIcon:(id)icon;
- (void)uninstallIcon:(id)icon animate:(BOOL)animate;
- (void)uninstallIconAnimationCompletedForIcon:(id)icon;
- (void)unscatterAnimated:(BOOL)animated afterDelay:(double)delay withCompletion:(id)completion;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)showing hiding:(id *)hiding;
- (void)updateCurrentIconListIndexAndVisibility;
- (void)updateCurrentIconListIndexAndVisibility:(BOOL)visibility;
- (void)updateNumberOfRowsWithDuration:(double)duration;
- (int)viewMap:(id)map locationForIcon:(id)icon;
- (unsigned)viewMap:(id)map maxRecycledIconViewsOfClass:(Class)aClass;
- (unsigned)viewMap:(id)map numberOfViewsToPrepareOfClass:(Class)aClass;
- (id)viewMapShouldPrepareViewsOfClasses:(id)viewMap;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

