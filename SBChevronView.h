/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_SBFVibrantView.h"


__attribute__((visibility("hidden")))
@interface SBChevronView : XXUnknownSuperclass <_SBFVibrantView> {
	UIView *_leftGrabberView;
	UIView *_rightGrabberView;
	double _animationDuration;
	int _state;
	UIColor *_color;
	_SBFVibrantSettings *_vibrantSettings;
	UIView *_colorCompositingView;
	UIView *_darkTintView;
	UIView *_lightTintView;
	UIView *_backgroundView;
	UIView *_alphaContainerView;
}
@property(assign, nonatomic) double animationDuration;
@property(retain, nonatomic) UIColor *color;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
- (id)initWithColor:(id)color;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_frameForGrabberView:(id)grabberView forState:(int)state;
- (void)_layoutGrabberView:(id)view forState:(int)state;
- (BOOL)_setState:(int)state;
- (CGAffineTransform)_transformForGrabberView:(id)grabberView forState:(int)state;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)view;
- (void)setState:(int)state animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

