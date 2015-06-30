/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "SBIconScrollViewDelegate.h"
#import "SBIconListPageControlDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBFolderViewDelegate;

__attribute__((visibility("hidden")))
@interface SBFolderView : XXUnknownSuperclass <SBIconScrollViewDelegate, SBIconListPageControlDelegate, UITextFieldDelegate> {
	NSMutableArray *_iconListViews;
	SBIconListView *_rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	SBIconViewMap *_viewMap;
	SBIconListPageControl *_pageControl;
	SBIconScrollView *_scrollView;
	SBFolderTitleTextField *_titleTextField;
	UIView *_scalingView;
	BOOL _isEditing;
	BOOL _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder *_folder;
	int _orientation;
	_UILegibilitySettings *_legibilitySettings;
}
@property(readonly, assign, nonatomic) int currentPageIndex;
@property(assign, nonatomic) id<SBFolderViewDelegate> delegate;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@property(retain, nonatomic) SBFolder *folder;
@property(readonly, assign, nonatomic) NSArray *iconListViews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic, getter=isScrolling) BOOL scrolling;
@property(assign, nonatomic) float statusBarHeight;
@property(readonly, assign, nonatomic) SBIconViewMap *viewMap;
- (id)initWithFolder:(id)folder orientation:(int)orientation;
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
- (void)_addIconListView:(id)view;
- (void)_addIconListViewsForModels:(id)models;
- (id)_createIconListViewForList:(id)list;
- (id)_currentIconListView;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (CGRect)_frameForScalingView;
- (BOOL)_hasMinusPages;
- (id)_iconListViewAtIndex:(unsigned)index;
- (id)_iconListViewForList:(id)list;
- (BOOL)_isValidPageIndex:(int)index;
- (void)_layoutSubviews;
- (unsigned)_minusPageCount;
- (float)_offsetToCenterPageControlInSpaceForPageControl;
- (int)_pageIndexForOffset:(float)offset;
- (float)_pageWidth;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_purgeListViews;
- (void)_pushDisableUpdateCurrentIconListCount;
- (void)_removeIconListView:(id)view;
- (void)_resetIconListViews;
- (float)_scrollOffsetForFirstListView;
- (float)_scrollOffsetForPageAtIndex:(int)index;
- (BOOL)_scrollViewThinksItsScrolling;
- (void)_setAnimatedScrolling:(BOOL)scrolling;
- (void)_setCurrentPageIndex:(int)index;
- (void)_setFolderName:(id)name;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (BOOL)_showsTitle;
- (float)_titleFontSize;
- (void)_updateEditingStateAnimated:(BOOL)animated;
- (void)_updateIconListFrames;
- (void)_updateIconListViews;
- (id)borrowScalingView;
- (void)cleanupAfterClosing;
- (id)currentIconListView;
- (void)dealloc;
- (void)didAnimate;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)fadeContentForMagnificationFraction:(float)magnificationFraction;
- (void)fadeContentForMinificationFraction:(float)minificationFraction;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (id)iconListViewAtIndex:(unsigned)index;
- (id)iconListViewAtPoint:(CGPoint)point;
- (id)iconListViewForTouch:(id)touch;
- (void)iconScrollView:(id)view willSetContentOffset:(inout CGPoint *)offset;
- (void)iconScrollViewDidCancelTouchTracking:(id)iconScrollView;
- (void)iconScrollViewWillCancelTouchTracking:(id)iconScrollView;
- (void)layoutIconLists:(double)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
- (void)layoutSubviews;
- (BOOL)locationCountsAsInsideFolder:(CGPoint)folder;
- (void)noteUserHasGrabbedIcon:(BOOL)icon;
- (void)noteUserIsInteractingWithIcons;
- (void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
- (void)prepareToOpen;
- (void)resetIconListViews;
- (void)returnScalingView;
- (CGRect)scalingViewFrame;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)setNeedsLayout;
- (void)tearDownListViews;
- (void)textFieldDidEndEditing:(id)textField;
- (BOOL)textFieldShouldBeginEditing:(id)textField;
- (BOOL)textFieldShouldReturn:(id)textField;
- (void)updateIconListIndexAndVisibility;
- (void)updateIconListIndexAndVisibility:(BOOL)visibility;
- (void)updateIconListViews;
- (void)willAnimate;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
@end

