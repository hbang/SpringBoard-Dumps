/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCenterIconZoomAnimator.h"


__attribute__((visibility("hidden")))
@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
	UIView *_appView;
	CGRect _destinationFrame;
	float _distantScale;
}
@property(assign) float distantScale;
@property(retain, nonatomic) SBCenterAppZoomSettings *settings;
- (id)initWithFolderController:(id)folderController appView:(id)view;
- (void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
- (double)_appZoomDelay;
- (void)_cleanupAnimation;
- (void)_delayedForRotation;
- (void)_fadeAppForZoomFraction:(float)zoomFraction;
- (double)_iconZoomDelay;
- (unsigned)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(float)fraction;
- (void)_zoomAppForZoomFraction:(float)zoomFraction;
- (CGPoint)cameraPosition;
- (void)dealloc;
@end

