/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBWindowContextAppearance;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherContextHostWrapperView : XXUnknownSuperclass <SBAppSwitcherPageContentView> {
	SBWindowContextHostManager *_contextHostManager;
	UIView *_containerView;
	UIView<SBWindowContextAppearance> *_contextHostView;
	UIView *_snapshotView;
	SBWallpaperEffectView *_wallpaperEffectView;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame application:(id)application;
- (CGAffineTransform)_rotationTransformForOrientation:(int)orientation;
- (void)_viewDidAnimateDismissal:(id)_view;
- (void)_viewDidAnimatePresentation:(id)_view;
- (void)_viewDismissing:(id)dismissing;
- (void)_viewPresenting:(id)presenting;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

