/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIconRotationContainer : UIView {
	UIView *_startSnapshot;
	UIView *_endSnapshot;
	SBIcon *_icon;
	BOOL _shouldCrossfade;
}
@property(retain, nonatomic) SBIcon *icon;
- (void)crossfadeWithDuration:(double)duration;
- (void)dealloc;
- (id)newSnapshot:(id)snapshot includingShadows:(BOOL)shadows;
- (void)prepareToCrossfade;
- (void)setOrigin:(CGPoint)origin;
- (void)setStartIcon:(id)icon endIcon:(id)icon2;
@end
