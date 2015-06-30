/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBPanGestureRecognizer.h"


__attribute__((visibility("hidden")))
@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer {
	int m_offscreenEdge;
	float m_edgeMargin;
	float m_falseEdge;
	int m_touchesChecked;
	CGPoint m_firstTouch;
	float m_edgeCenter;
	float m_allowableDistanceFromEdgeCenter;
	BOOL m_requiresSecondTouchInRange;
}
@property(assign, nonatomic) float allowableDistanceFromEdgeCenter;
@property(assign, nonatomic) float edgeCenter;
@property(assign, nonatomic) float edgeMargin;
@property(assign, nonatomic) float falseEdge;
@property(assign, nonatomic) BOOL requiresSecondTouchInRange;
- (id)initForOffscreenEdge:(int)offscreenEdge;
- (void)_updateAnimationDistanceAndEdgeCenter;
- (BOOL)firstTouchInRange:(CGPoint)range;
- (void)reset;
- (BOOL)secondTouchInRange:(CGPoint)range;
- (void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;
@end

