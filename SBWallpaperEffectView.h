/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWallpaperObserver.h"
#import "_SBFakeBlurObserver.h"

@class UIImageView, UIColor, UIView, UIImage;
@protocol _SBFakeBlur;

__attribute__((visibility("hidden")))
@interface SBWallpaperEffectView : XXUnknownSuperclass <_SBFakeBlurObserver, SBWallpaperObserver> {
	int _variant;
	UIColor *_wallpaperAverageColor;
	int _startStyle;
	int _endStyle;
	float _transitionFraction;
	UIView<_SBFakeBlur> *_blurView;
	UIView *_grayscaleTintView;
	UIView *_colorTintView;
	UIView<_SBFakeBlur> *_transitionBlurView;
	UIView *_transitionGrayscaleTintView;
	UIView *_transitionColorTintView;
	UIImageView *_maskImageView;
	UIView *_blurMaskingContainer;
	UIView *_tintMaskingContainer;
	UIImage *_maskImage;
	BOOL _shouldMaskBlur;
	BOOL _shouldMaskTint;
	BOOL _accessibilityIncreaseContrastEnabled;
}
+ (id)imageInRect:(CGRect)rect forVariant:(int)variant withStyle:(int)style zoomFactor:(float)factor mask:(id)mask masksBlur:(BOOL)blur masksTint:(BOOL)tint;
- (id)initWithWallpaperVariant:(int)wallpaperVariant;
- (void)_accessibilityEnhanceBackgroundContrastChanged:(id)changed;
- (void)_clearView:(id *)view;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (void)_configureGrayscaleTintView:(id *)view colorTintView:(id *)view2 forStyle:(int)style;
- (void)_configureViews;
- (void)_setTransitionFraction:(float)fraction;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_updateWallpaperAverageColor:(id)color;
- (BOOL)currentTransitionStateIsOpaque;
- (void)dealloc;
- (id)description;
- (void)fakeBlurView:(id)view didChangeStyle:(int)style;
- (void)layoutSubviews;
- (BOOL)prepareToAnimateToTransitionState:(inout XXStruct_S5WqmA *)transitionState;
- (void)setMaskImage:(id)image masksBlur:(BOOL)blur masksTint:(BOOL)tint;
- (void)setStyle:(int)style;
- (void)setTransitionState:(XXStruct_S5WqmA)state;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
@end

