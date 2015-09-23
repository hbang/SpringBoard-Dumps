/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBannerPullDownGestureHandler : SBBannerGestureHandler {
	BOOL _pulledDown;
	BOOL _startedPulledDown;
	_UIDynamicValueAnimation *_animation;
	BOOL _invalidated;
	BOOL _completed;
}
- (id)_boundaryForShow:(BOOL)show finalDisplacement:(float)displacement;
- (float)_finalDisplacementForShow:(BOOL)show;
- (void)_finishGestureWithDisplacement:(float)displacement velocity:(float)velocity;
- (id)_newAnimationForShow:(BOOL)show withDisplacement:(double)displacement velocity:(double)velocity;
- (float)_pullDownDistance;
- (id)_pullForShow:(BOOL)show finalDisplacement:(float)displacement;
- (BOOL)_shouldFinishWithLocation:(CGPoint)location velocity:(float)velocity;
- (void)_stopAnimating;
- (void)_updateWithDisplacement:(float)displacement velocity:(float)velocity;
- (void)dealloc;
- (BOOL)handleGestureType:(int)type state:(int)state location:(CGPoint)location displacement:(float)displacement velocity:(float)velocity;
- (void)invalidate;
@end
