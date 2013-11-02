/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconZoomAnimator.h"
#import "SBIconListLayoutDelegate.h"
#import "SpringBoard-Structs.h"

@class SBFloatyFolderView, SBFolderZoomSettings, SBFolderIconView;

__attribute__((visibility("hidden")))
@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {
	SBFloatyFolderView *_folderView;
	SBFolderIconView *_folderIconView;
	CGAffineTransform _folderIconViewScaleTransform;
}
@property(retain, nonatomic) SBFolderZoomSettings *zoomSettings;
- (id)initWithFolderController:(id)folderController iconView:(id)view iconZoomScale:(float)scale;
- (void)_animateToZoomFraction:(float)zoomFraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
- (void)_applyFolderFadeForZoomFraction:(float)zoomFraction;
- (void)_applyIconCrossfadeForZoomFraction:(float)zoomFraction;
- (void)_applyIconTransformForZoomFraction:(float)zoomFraction;
- (void)_calculateZoomedOffset:(CGPoint *)offset scale:(float *)scale forIcon:(id)icon withView:(id)view;
- (void)_cleanupZoom;
- (unsigned)_numberOfSignificantAnimations;
- (void)_prepareZoom;
- (void)_setZoomFraction:(float)fraction;
- (void)dealloc;
@end
