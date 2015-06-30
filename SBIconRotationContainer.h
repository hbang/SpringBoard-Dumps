/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIconRotationContainer : XXUnknownSuperclass {
	SBIconCoordinate _coordinate;
	SBIconViewMap *_viewMap;
	SBIconView *_startView;
	SBIconView *_endView;
	CGPoint _wallpaperRelativeImageCenter;
}
@property(readonly, assign, nonatomic) SBIconCoordinate coordinate;
@property(readonly, retain, nonatomic) SBIcon *endIcon;
@property(readonly, assign, nonatomic) CGPoint iconImageCenter;
@property(assign, nonatomic) CGPoint wallpaperRelativeImageCenter;
- (id)initWithFrame:(CGRect)frame startIcon:(id)icon endIcon:(id)icon3 viewMap:(id)map coordinate:(SBIconCoordinate)coordinate;
- (void)crossfadeWithDuration:(double)duration;
- (void)dealloc;
- (void)prepareToCrossfade;
@end

