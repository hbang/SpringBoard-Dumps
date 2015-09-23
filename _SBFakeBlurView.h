/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface _SBFakeBlurView : XXUnknownSuperclass <_SBFakeBlur> {
	id<_SBFakeBlurObserver> _observer;
	int _requestedStyle;
	int _effectiveStyle;
	SBFWallpaperView *_wallpaperView;
	UIImageView *_imageView;
}
@property(assign, nonatomic) id<_SBFakeBlurObserver> observer;
@property(readonly, assign, nonatomic) int variant;
+ (id)_imageForStyle:(inout int *)style withSource:(id)source;
- (id)initWithVariant:(int)variant;
- (void)_updateImageWithSource:(id)source notifyObserver:(BOOL)observer;
- (void)dealloc;
- (void)didMoveToWindow;
- (int)effectiveStyle;
- (void)layoutSubviews;
- (void)reconfigureWithSource:(id)source;
- (void)requestStyle:(int)style;
- (void)rotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)updateImageWithSource:(id)source;
- (void)willMoveToWindow:(id)window;
@end

