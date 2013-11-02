/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIButton, SBIconLabel, UILabel;

@interface SBNowPlayingBarMediaControlsView : XXUnknownSuperclass {
	UIButton *_prevButton;
	UIButton *_playButton;
	UIButton *_nextButton;
	UIButton *_airPlayButton;
	UILabel *_trackLabel;
	int _toggleType;
	SBIconLabel *_toggleLabel;
	BOOL _isAirPlayVisible;
	BOOL _isPlaying;
	BOOL _isEnabled;
	BOOL _showingToggleLabel;
}
@property(readonly, assign, nonatomic) UIButton *airPlayButton;
@property(assign, nonatomic) BOOL airPlayButtonVisible;
@property(assign, nonatomic) BOOL marqueeRunning;
@property(readonly, assign, nonatomic) UIButton *nextButton;
@property(readonly, assign, nonatomic) UIButton *playButton;
@property(readonly, assign, nonatomic) UIButton *prevButton;
- (id)initWithFrame:(CGRect)frame;
- (id)_descriptionLabel;
- (void)_layoutForiPad;
- (void)_layoutForiPhone;
- (void)_muteChanged:(id)changed;
- (void)_orientationLockChanged:(id)changed;
- (void)_setToggleType:(int)type;
- (id)_toggleLabelText;
- (void)_toggleStatus:(id)status;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLabelWidth:(float)width;
- (void)setTrackString:(id)string;
- (void)updateImages:(BOOL)images enabled:(BOOL)enabled;
@end

