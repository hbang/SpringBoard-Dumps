/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver> {
	SBFolderSettings *_folderSettings;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (BOOL)canShowLabelAccessoryView;
- (id)initWithFrame:(CGRect)frame;
- (void)_applyEditingStateAnimated:(BOOL)animated;
- (id)_folderIconImageView;
- (void)_updateAdaptiveColors;
- (BOOL)allowsTapWhileEditing;
- (unsigned)centerVisibleMiniIconIndex;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)dealloc;
- (id)dropGlow;
- (unsigned)firstVisibleMiniIconIndex;
- (id)folder;
- (id)folderIcon;
- (CGRect)frameForMiniIconAtIndex:(unsigned)index;
- (double)grabDurationForEvent:(id)event;
- (id)iconBackgroundView;
- (unsigned)lastVisibleMiniIconIndex;
- (void)prepareDropGlow;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)floatyFolderView allowFolderInteraction:(BOOL)interaction;
- (void)removeDropGlow;
- (void)scrollToFirstGapAnimated:(BOOL)firstGapAnimated;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned)page animated:(BOOL)animated;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)firstPageAnimated;
- (void)scrollToTopOfPage:(unsigned)page animated:(BOOL)animated;
- (void)setBackgroundAndIconGridImageAlpha:(float)alpha;
- (void)setFloatyFolderCrossfadeFraction:(float)fraction;
- (void)setIcon:(id)icon;
- (void)setIconGridImageAlpha:(float)alpha;
- (void)setShouldRasterizeImageView:(BOOL)rasterizeImageView;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)showDropGlow:(BOOL)glow;
- (CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)index;
- (unsigned)visibleMiniIconCount;
- (unsigned)visibleMiniIconListIndex;
@end

