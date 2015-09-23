/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainAppSwitcherPageContentView.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWallpaperObserver.h"


__attribute__((visibility("hidden")))
@interface SBAppSwitcherHomePageCellView : XXUnknownSuperclass <SBWallpaperObserver, SBMainAppSwitcherPageContentView> {
	UIView *_possiblyRotatedContainer;
	UIView *_nonRotatedContainer;
	UIView *_homeScreenView;
	UIView *_homeSnapshot;
	UIView *_wallpaperView;
	SBFakeStatusBarView *_fakeStatusBar;
	SBAppSwitcherStatusBarViewCache *_statusBarCache;
	BOOL _usesSnapshots;
	int _snapshotOrientation;
	int _orientation;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView *homeScreenView;
@property(readonly, retain, nonatomic) UIView *homeSnapshot;
@property(assign, nonatomic) int orientation;
@property(readonly, assign) Class superclass;
+ (id)wallpaperSnapshotForZoomFactor:(float)zoomFactor orientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame statusBarCache:(id)cache;
- (void)_addHomeScreenViewAsSubview:(id)subview;
- (void)_statusBarStyleOverridesDidChange:(id)_statusBarStyleOverrides;
- (void)_updateWallpaperView;
- (void)_viewDidAnimatePresentation:(id)_view;
- (void)_viewDismissing:(id)dismissing;
- (void)_viewPresenting:(id)presenting;
- (float)cornerRadius;
- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (void)setCornerRadius:(float)radius;
- (void)setHomeSnapshot:(id)snapshot inOrientation:(int)orientation;
- (void)setLegibilitySettings:(id)settings;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
@end

