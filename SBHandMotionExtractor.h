/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBHandMotionExtractor : XXUnknownSuperclass {
	UIEdgeInsets _pixel_deltas;
	UIEdgeInsets _smoothed_deltas;
	UIEdgeInsets _all_pixel_deltas;
	float _smoothed_translation_speed;
	float _nondominant_axes_ratio;
	float _farthest_finger_separation;
	int _num_non_edge_touches;
}
@property(readonly, assign, nonatomic) UIEdgeInsets allPixelDeltas;
@property(readonly, assign, nonatomic) UIEdgeInsets averageVelocities;
@property(readonly, assign, nonatomic) float farthestFingerSeparation;
@property(readonly, assign, nonatomic) UIEdgeInsets pixelDeltas;
- (void)clear;
- (void)extractHandMotionForInnermostPath:(XXStruct_YrWplC *)innermostPath outermostPath:(XXStruct_YrWplC *)path activeTouchesCount:(unsigned)count;
@end

