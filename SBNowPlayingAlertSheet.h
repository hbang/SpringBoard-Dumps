/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIModalView.h>

@class UIButton, UILabel, UISlider;

@interface SBNowPlayingAlertSheet : UIModalView {
	CGRect normalSliderFrame;
	CGRect narrowSliderFrame;
	UIButton *routeButton;
	UISlider *volumeSlider;
	UILabel *routeLabel;
}
@property(assign, nonatomic) CGRect narrowSliderFrame;
@property(assign, nonatomic) CGRect normalSliderFrame;
@property(retain, nonatomic) UIButton *routeButton;
@property(retain, nonatomic) UILabel *routeLabel;
@property(retain, nonatomic) UISlider *volumeSlider;
- (id)initWithFrame:(CGRect)frame;
- (void)_positionControlButton:(int)button withFloor:(float)floor;
- (void)dealloc;
- (void)hideRouteButtonAnimated:(BOOL)animated;
- (void)hideVolumeSlider;
- (void)layout;
- (void)showRouteButtonAnimated:(BOOL)animated;
- (void)showVolumeSlider;
@end

