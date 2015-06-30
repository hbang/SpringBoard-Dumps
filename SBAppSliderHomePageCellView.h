/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWallpaperObserver.h"
#import "SBAppSwitcherPageContentView.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBAppSliderHomePageCellView : XXUnknownSuperclass <SBWallpaperObserver, SBAppSwitcherPageContentView> {
	UIView *_possiblyRotatedContainer;
	UIView *_nonRotatedContainer;
	UIView *_homeScreenView;
	UIView *_homeSnapshot;
	UIView *_wallpaperView;
	SBFakeStatusBarView *_fakeStatusBar;
	BOOL _usesSnapshots;
	int _snapshotOrientation;
	int _orientation;
}
@property(retain, nonatomic) UIView *homeScreenView;
@property(readonly, assign, nonatomic) UIView *homeSnapshot;
@property(assign, nonatomic) int orientation;
+ (id)wallpaperSnapshotForZoomFactor:(float)zoomFactor orientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (void)_statusBarFrameChanging;
- (void)_updateWallpaperView;
- (void)_viewDidAnimatePresentation:(id)_view;
- (void)_viewDismissing:(id)dismissing;
- (void)_viewPresenting:(id)presenting;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHomeSnapshot:(id)snapshot inOrientation:(int)orientation;
- (void)setLegibilitySettings:(id)settings;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
@end
