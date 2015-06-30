/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"

@protocol SBAppSwitcherIconControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherIconController : XXUnknownSuperclass <UIScrollViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate> {
	NSMutableArray *_appList;
	NSMutableDictionary *_iconViews;
	NSMutableArray *_iconViewCenters;
	BOOL _appListIsValid;
	UIScrollView *_scrollView;
	UIView *_iconContainer;
	float _distanceBetweenCenters;
	float _nominalDistanceBetweenCenters3;
	float _nominalDistanceBetweenCenters5;
	unsigned _iconTransitionIndex;
	BOOL _dragMaster;
	BOOL _preventScroll;
	SBStopScrollingGestureRecognizer *_stopScrollingGesture;
	int _layoutOrientation;
	int _simplicityOptions;
	CGRect _iconViewDefaultFrame;
	SBIconViewMap *_iconViewMap;
	_UILegibilitySettings *_legibilitySettings;
	id<SBAppSwitcherIconControllerDelegate> _delegate;
	NSArray *_displayLayouts;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBAppSwitcherIconControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *displayLayouts;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned iconTransitionIndex;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, assign) Class superclass;
+ (float)nominalDistanceBetween3IconCentersForSize:(CGSize)size;
+ (float)nominalDistanceBetween5IconCentersForSize:(CGSize)size;
- (id)init;
- (CGPoint)_adjustedCenter:(CGPoint)center forIconView:(id)iconView;
- (float)_calculateDistanceBetweenCentersBasedOnCenteredIndex:(unsigned)index;
- (float)_calculateDistanceBetweenCentersBasedOnCurrentContentOffset;
- (CGPoint)_centerOfIndex:(unsigned)index forDistance:(float)distance inOrientation:(int)orientation;
- (unsigned)_centeredIndex;
- (void)_cleanupAllIcons;
- (void)_cleanupIcon:(id)icon;
- (float)_distanceBetweenCenters;
- (float)_halfWidth;
- (void)_handleStopScrollingGesture:(id)gesture;
- (CGRect)_iconFaultRectForIndex:(unsigned)index;
- (id)_iconViewForIndex:(unsigned)index;
- (void)_iconsReloaded:(id)reloaded;
- (BOOL)_isIndexVisible:(unsigned)visible withPadding:(BOOL)padding;
- (void)_layoutForDistance:(float)distance;
- (float)_maxXOffsetForDistance:(float)distance;
- (void)_recalculateBaseIconSpacingValues;
- (float)_recalculateLayout:(BOOL)layout;
- (id)_safeDelegate;
- (void)_updateVisibleIconViewsWithPadding:(BOOL)padding;
- (int)_windowInterfaceOrientation;
- (void)cancelScrolling;
- (void)cancelTracking;
- (void)dealloc;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)iconHandleLongPress:(id)press;
- (float)iconLabelWidth;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (Class)iconViewClassForIcon:(id)icon location:(int)location;
- (void)insertItem:(id)item atIndex:(unsigned)index duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (BOOL)isScrolling;
- (void)loadView;
- (void)reloadInOrientation:(int)orientation;
- (void)removeItem:(id)item duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)replaceItemAtIndex:(unsigned)index withNewItem:(id)newItem duration:(double)duration;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)setNormalizedOffset:(float)offset;
- (void)setOffsetToIndex:(unsigned)index animated:(BOOL)animated;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (unsigned)supportedInterfaceOrientations;
- (void)switcherWasDismissed:(BOOL)dismissed;
- (Class)viewMap:(id)map iconViewClassForIcon:(id)icon;
- (int)viewMap:(id)map locationForIcon:(id)icon;
- (unsigned)viewMap:(id)map maxRecycledViewsOfClass:(Class)aClass;
- (id)windowForRecycledViewsInViewMap:(id)viewMap;
@end

