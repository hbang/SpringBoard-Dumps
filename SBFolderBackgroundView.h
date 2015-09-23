/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFolderBackgroundView : XXUnknownSuperclass <_UISettingsKeyObserver, SBWallpaperObserver> {
	SBWallpaperEffectView *_backdropView;
	UIImageView *_backgroundImageView;
	SBFolderSettings *_folderSettings;
}
+ (float)cornerRadiusToInsetContent;
+ (CGSize)folderBackgroundSize;
- (id)initWithFrame:(CGRect)frame;
- (void)_configureBackground;
- (void)adjustCornerRadiusForMagnificationFraction:(float)magnificationFraction;
- (void)dealloc;
- (void)didAnimate;
- (void)layoutSubviews;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)willAnimate;
@end

