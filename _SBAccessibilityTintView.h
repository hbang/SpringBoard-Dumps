/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface _SBAccessibilityTintView : XXUnknownSuperclass <_SBFakeBlur, SBWallpaperObserver> {
	int _variant;
	id<_SBFakeBlurObserver> _observer;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<_SBFakeBlurObserver> observer;
@property(readonly, assign) Class superclass;
- (id)initWithVariant:(int)variant;
- (void)_updateBackgroundColor;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (int)effectiveStyle;
- (void)requestStyle:(int)style;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
@end
