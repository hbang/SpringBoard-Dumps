/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAnimationStepper : XXUnknownSuperclass {
	UIView *m_view;
	NSArray *m_animatingSubviews;
	double m_duration;
	float m_percentage;
	CADisplayLink *m_displayLink;
	double m_cancelTimestamp;
	double m_cancelDuration;
	float m_cancelPercentage;
}
@property(copy, nonatomic) NSArray *animatingSubviews;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) float percentage;
@property(retain, nonatomic) UIView *view;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)finish;
- (void)stepAnimationsInView:(id)view animatingSubviews:(id)subviews duration:(double)duration;
- (void)updateCancel:(id)cancel;
@end

