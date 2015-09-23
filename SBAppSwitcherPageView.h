/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppSwitcherPageView : XXUnknownSuperclass {
	UIView *_shadowView;
	UIView *_hitTestBlocker;
	UIView<SBAppSwitcherPageContentView> *_view;
	UIView *_overlayView;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) UIView *overlay;
@property(assign, nonatomic) float shadowAlpha;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view;
+ (float)_edgeBorderForOrientation:(int)orientation;
+ (CGSize)sizeForOrientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (CGAffineTransform)_transformForOrientation:(int)orientation;
- (CGAffineTransform)_transformForScale;
- (CGRect)_viewFrame;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)layoutSubviews;
- (void)setBlocksTouches:(BOOL)touches;
- (void)setShadowEnabled:(BOOL)enabled;
- (void)setView:(id)view animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

