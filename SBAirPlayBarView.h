/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAirPlayBarView : UIView {
	UIView *_speakerIcon;
	UIButton *_airPlayButton;
	UISlider *_volumeSlider;
	BOOL _airPlayEnabled;
}
@property(readonly, assign, nonatomic) UIButton *airPlayButton;
@property(assign, nonatomic, getter=isAirPlayEnabled) BOOL airPlayEnabled;
@property(readonly, assign, nonatomic) UISlider *volumeSlider;
- (id)initWithFrame:(CGRect)frame;
- (void)layoutSubviews;
- (void)setAirPlayEnabled:(BOOL)enabled animated:(BOOL)animated;
@end

