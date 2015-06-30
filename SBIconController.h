/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconListPageControlDelegate.h"
#import "UIScrollViewDelegate.h"
#import <Foundation/NSObject.h>


@interface SBIconController : NSObject <UIScrollViewDelegate, SBIconListPageControlDelegate> {
	SBIconModel *_iconModel;
	UIView *_contentView;
	SBIconScrollView *_scrollView;
	SBIconListPageControl *_pageControl;
	int _currentIconListIndex;
	int _currentColumnIndex;
	TPLCDTextView *_idleText;
	float _currentIdleTextOffset;
	SBSearchView *_searchView;
	int _orientation;
	SBIcon *_lastClickedIcon;
	double _lastClickedTime;
	SBIcon *_iconToInstall;
	SBIcon *_grabbedIcon;
	SBIconList *_grabbedIconList;
	int _grabbedIndex;
	SBIcon *_swappedIcon;
	SBIconList *_swappedIconList;
	int _swappedIndex;
	SBIconList *_destinationIconList;
	int _destinationIndex;
	SBIcon *_lastTouchedIcon;
	NSTimer *_scrollPageTimer;
	unsigned _didScroll : 1;
	unsigned _isEditing : 1;
	unsigned _compacted : 1;
	unsigned _willSwap : 1;
	unsigned _animatedScrolling : 1;
	unsigned _scrollingToSearch : 1;
	unsigned _movedFromOrigin : 1;
	unsigned _disableUpdatingCurrentIconList : 1;
	unsigned _onWallpaper : 1;
	float _lastScrollFraction;
	float _iconAlpha;
	float _searchViewAlpha;
	UITouch *_lastTouch;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addEmptyListIfNecessary;
- (void)_awayControllerLocked:(id)locked;
- (void)_awayControllerUnlocked:(id)unlocked;
- (void)_showSearchKeyboardIfNecessary:(BOOL)necessary;
- (id)addIcon:(id)icon toIconList:(id)iconList index:(int)index animate:(BOOL)animate moveNow:(BOOL)now scrollToList:(BOOL)list;
- (void)adjustIconListAlpha;
- (void)animateToNewState:(float)newState domino:(BOOL)domino;
- (void)cancelScrollTimer;
- (void)clickedIcon:(id)icon;
- (void)compactIconsInIconLists:(BOOL)iconLists limitToIconList:(id)iconList;
- (id)contentView;
- (id)currentIconList;
- (int)currentIconListIndex;
- (void)dealloc;
- (id)destinationIconList;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)doubleClickedIcon:(id)icon;
- (void)finishInstallingIcon;
- (void)fixupBouncedIconsAfterIndex:(int)index;
- (id)grabbedIcon;
- (BOOL)hasIdleModeText;
- (id)iconAnimationView;
- (id)iconToInstall;
- (void)idleTextDidAnimate:(id)idleText finished:(id)finished toText:(id)text;
- (void)incrementReorderCount;
- (id)insertIcon:(id)icon intoIconList:(id)list index:(int)index moveNow:(BOOL)now duration:(float)duration;
- (BOOL)isEditing;
- (BOOL)isScrolling;
- (BOOL)isShowingSearch;
- (id)lastTouchedIcon;
- (void)launchIcon:(id)icon;
- (void)lcdTextViewCompletedScroll:(id)scroll;
- (int)lowestVisibleIconListIndexAndColumnIndex:(int *)index;
- (void)moveAnimation:(id)animation didFinish:(id)finish movePlan:(id)plan;
- (void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4;
- (void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4 animate:(BOOL)animate;
- (void)moveIconFromWindow:(id)window toIconList:(id)iconList;
- (void)moveIconToWindow:(id)window;
- (void)noteDownloadStateChanged;
- (void)noteGrabbedIconLocationChangedWithEvent:(id)event;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)touch;
- (void)noteNumberOfIconListsChanged;
- (void)noteViewCovered;
- (int)orientation;
- (void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
- (void)removeEmptyIconList:(id)list animate:(BOOL)animate;
- (void)removeIcon:(id)icon animate:(BOOL)animate;
- (int)reorderCount;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)scatterWithDuration:(double)duration startTime:(double)time;
- (void)scatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
- (void)scrollLeft;
- (void)scrollRight;
- (void)scrollToIconDestination;
- (void)scrollToIconListAtIndex:(int)index animate:(BOOL)animate;
- (void)scrollToIconListContainingIcon:(id)iconListContainingIcon animate:(BOOL)animate;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDecelerating:(id)scrollView;
- (void)setGrabbedIcon:(id)icon;
- (void)setIconToInstall:(id)install;
- (void)setIconsDisplayOnWallpaper:(BOOL)wallpaper;
- (void)setIdleModeText:(id)text;
- (void)setIsEditing:(BOOL)editing;
- (void)setLastTouch:(id)touch;
- (void)setLastTouchedIcon:(id)icon;
- (void)setPageControlVisible:(BOOL)visible;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showInfoAlertIfNeeded;
- (void)ungrabAnimation:(id)animation didFinish:(id)finish grabbedIcon:(id)icon;
- (void)uninstallIcon:(id)icon;
- (void)uninstallIcon:(id)icon animate:(BOOL)animate;
- (void)uninstallIconDidAnimate:(id)uninstallIcon finished:(id)finished icons:(id)icons;
- (void)unscatterWithDuration:(double)duration startTime:(double)time;
- (void)unscatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
- (void)updateContentSize;
- (void)updateCurrentIconListIndexAndVisibilityForcing:(BOOL)forcing;
- (void)updateIconListFrames;
- (void)updateIconListWallpaperState;
- (void)updateNumberOfRowsWithDuration:(float)duration;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

