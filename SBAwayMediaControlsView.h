/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class MPAudioDeviceController, UIButton, UISlider, UILabel;

@interface SBAwayMediaControlsView : UIView {
	unsigned _beganSeeking : 1;
	int _seekingDirection;
	UIButton *_prevButton;
	UIButton *_nextButton;
	UIButton *_playPauseButton;
	UISlider *_slider;
	UIButton *_routeButton;
	UILabel *_routeLabel;
	MPAudioDeviceController *_audioDeviceController;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
- (id)initWithFrame:(CGRect)frame;
- (void)_changeTrackButtonDown:(id)down;
- (void)_changeTrackButtonEndSeek:(id)seek;
- (void)_changeTrackButtonTouchPause:(id)pause;
- (void)_changeTrackButtonUp:(id)up;
- (id)_newButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
- (void)_nowPlayingChanged:(id)changed;
- (void)_playPauseButtonAction:(id)action;
- (void)_registerForNowPlayingNotifications;
- (void)_registerForVolumeNotifications;
- (void)_showAudioRoutes:(id)routes;
- (void)_showRouteButton:(BOOL)button volumeSlider:(BOOL)slider animated:(BOOL)animated;
- (CGRect)_sliderFrameWithRouteButton:(BOOL)routeButton;
- (void)_systemVolumeChanged:(id)changed;
- (void)_unregisterForNowPlayingNotifications;
- (void)_unregisterForVolumeNotifications;
- (void)_updateInformation;
- (void)_volumeChange:(id)change;
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;
- (void)audioDeviceControllerMediaServerDied:(id)died;
- (void)dealloc;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setAlpha:(float)alpha;
@end

