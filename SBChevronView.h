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
	float _alphaComponent;
	_SBFVibrantSettings *_vibrantSettings;
	UIView *_tintView;
	UIView *_backgroundView;
	BOOL _unified;
	UIView *_alphaContainerView;
}
@property(assign, nonatomic) double animationDuration;
@property(retain, nonatomic) UIColor *color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int state;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
- (id)initWithColor:(id)color;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_frameForGrabberView:(id)grabberView forState:(int)state unified:(BOOL)unified;
- (void)_layoutGrabberView:(id)view forState:(int)state;
- (BOOL)_setState:(int)state;
- (BOOL)_setUnified:(BOOL)unified;
- (CGAffineTransform)_transformForGrabberView:(id)grabberView forState:(int)state;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)view;
- (void)setState:(int)state animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

