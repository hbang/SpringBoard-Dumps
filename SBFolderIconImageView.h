/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconImageView.h"
#import "SBFolderIconObserver.h"
#import "SBIconBlurryBackgroundViewObserver.h"
#import "SpringBoard-Structs.h"

@class SBFloatyFolderView, SBFolderIconBackgroundView, NSMutableArray, _SBIconGridWrapperView, UIView;

__attribute__((visibility("hidden")))
@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver> {
	SBFolderIconBackgroundView *_backgroundView;
	UIView *_pageGridContainer;
	_SBIconGridWrapperView *_leftWrapperView;
	_SBIconGridWrapperView *_rightWrapperView;
	NSMutableArray *_pageElements;
	unsigned _currentPageIndex;
	SBFloatyFolderView *_crossfadeFolderView;
	UIView *_crossfadeScalingView;
	BOOL _animating;
}
- (id)initWithFrame:(CGRect)frame;
- (id)_currentPageElement;
- (id)_folderIcon;
- (id)_generateSquareContentsImage;
- (Class)_iconGridImageClass;
- (CGSize)_interPageSpacing;
- (CGSize)_interiorGridSizeClipRect;
- (void)_performScrollingMovingToLeft:(BOOL)left movingToRight:(BOOL)right targetPageIndex:(unsigned)index targetPageScrollRow:(unsigned)row newLeftElement:(id)element newRightElement:(id)element6 animated:(BOOL)animated;
- (void)_setAnimating:(BOOL)animating;
- (void)_setPageElements:(id)elements;
- (void)_setupGridViewsInDefaultConfiguration;
- (void)_showLeftMinigrid;
- (void)_showRightMinigrid;
- (void)_updateRasterization;
- (id)backgroundView;
- (void)blurryBackgroundViewDidChangeWhetherBlurring:(id)blurryBackgroundView;
- (unsigned)centerVisibleMiniIconIndex;
- (void)cleanupAfterFloatyFolderCrossfade;
- (id)contentsImage;
- (id)darkeningOverlayImage;
- (void)dealloc;
- (unsigned)firstVisibleMiniIconIndex;
- (void)folderIcon:(id)icon didUpdateGridImage:(id)image forListIndex:(unsigned)listIndex forContainedIconImageUpdate:(id)containedIconImageUpdate;
- (CGRect)frameForMiniIconAtIndex:(unsigned)index;
- (CGRect)frameForMiniIconAtIndexPath:(id)indexPath;
- (unsigned)lastVisibleMiniIconIndex;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)floatyFolderView allowFolderInteraction:(BOOL)interaction;
- (void)scrollToFirstGapAnimated:(BOOL)firstGapAnimated;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned)page animated:(BOOL)animated;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)firstPageAnimated;
- (void)scrollToTopOfPage:(unsigned)page animated:(BOOL)animated;
- (void)setBackgroundAndIconGridImageAlpha:(float)alpha;
- (void)setBackgroundScale:(float)scale;
- (void)setFloatyFolderCrossfadeFraction:(float)fraction;
- (void)setIconGridImageAlpha:(float)alpha;
- (void)setWallpaperRelativeCenter:(CGPoint)center;
- (id)snapshot;
- (void)updateImageAnimated:(BOOL)animated;
- (CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)index;
- (unsigned)visibleMiniIconCount;
- (unsigned)visibleMiniIconListIndex;
@end

