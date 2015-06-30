/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBInteractionPassThroughView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBIconImageCrossfadeView : SBInteractionPassThroughView {
	_SBAnimatableCorneredView *_containerView;
	SBIconImageView *_imageView;
	UIView *_crossfadeView;
	float _crossfadeFraction;
	float _containerScaleX;
	float _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;
}
@property(assign, nonatomic) BOOL masksCorners;
@property(assign, nonatomic) BOOL performsTrueCrossfade;
@property(assign, nonatomic) CGPoint stretchAnchorPoint;
- (id)initWithImageView:(id)imageView crossfadeView:(id)view;
- (void)_updateCornerMask;
- (void)cleanup;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (void)setFadeFraction:(float)fraction;
- (void)setMorphFraction:(float)fraction;
@end

