/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayLockBar : XXUnknownSuperclass {
	UIButton *_slideshowButton;
	UIButton *_cameraButton;
	UIView *_cameraGrabber;
	NSMutableDictionary *_orientationToButtonImages;
}
- (void)_cameraButtonHit:(id)hit;
- (id)_newButtonWithAction:(SEL)action tag:(int)tag hasComposedImage:(BOOL)image;
- (id)_selectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
- (void)_setImagesForButton:(id)button orientation:(int)orientation;
- (void)_setShowsButton:(BOOL)button button:(id *)button2 buttonTag:(int)tag hasComposedImage:(BOOL)image action:(SEL)action animated:(BOOL)animated;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (void)_slideshowButtonActivated:(id)activated;
- (id)_unselectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
- (void)dealloc;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (float)knobTrackInsetLeft;
- (void)setLabel:(id)label;
- (void)setOrientation:(int)orientation;
- (void)setShowsCameraButton:(BOOL)button;
- (void)setShowsCameraGrabber:(BOOL)grabber;
- (void)setShowsSlideshowButton:(BOOL)button;
- (void)setSlideshowButtonSelected:(BOOL)selected;
- (BOOL)showsCameraGrabber;
@end

