/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconListLayoutDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBIconZoomAnimator.h"


__attribute__((visibility("hidden")))
@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {
	UIView *_zoomView;
	float _iconZoomedZ;
	float _centerRow;
	float _centerCol;
	CGPoint _cameraPosition;
}
@property(readonly, assign, nonatomic) CGPoint cameraPosition;
@property(retain, nonatomic) SBCenterZoomSettings *settings;
@property(readonly, assign, nonatomic) UIView *zoomView;
- (id)initWithFolderController:(id)folderController;
- (void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)icon;
- (void)_calculateCentersAndCameraPosition;
- (void)_cleanupAnimation;
- (double)_iconZoomDelay;
- (unsigned)_numberOfSignificantAnimations;
- (void)_positionView:(id)view forIcon:(id)icon;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(float)fraction;
- (void)dealloc;
- (void)iconListView:(id)view wouldHaveMovedIcon:(id)icon;
- (void)iconListViewLayoutInvalidated:(id)invalidated;
@end

