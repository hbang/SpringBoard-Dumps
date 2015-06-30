/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBNowPlayingAlertItemPushButton : UIPushButton {
	float _yOffset;
	float _xOffset;
}
- (id)initWithImage:(id)image;
- (CGRect)hitRect;
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
- (void)setXOffset:(float)offset;
- (void)setYOffset:(float)offset;
@end

