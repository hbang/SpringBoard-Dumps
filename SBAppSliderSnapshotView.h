/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBAppSwitcherPageContentView.h"

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBAppSliderSnapshotView : XXUnknownSuperclass <SBAppSwitcherPageContentView> {
	SBApplication *_application;
	UIView *_containerView;
	SBWallpaperEffectView *_wallpaperEffectView;
	SBSnapshotImageInfo *_snapshotImageInfo;
	UIImageView *_snapshotImage;
	CGSize _imageSize;
	SBFakeStatusBarViewCache *_statusBarCache;
	SBFakeStatusBarView *_statusBar;
	NSString *_statusBarCacheKey;
	BOOL _isVisible;
	BOOL _invalidated;
	BOOL _needsZoomFilter;
	BOOL _loadedImage;
	NSObject<OS_dispatch_queue> *_snapshotQueue;
	int _orientation;
}
@property(retain, nonatomic) SBApplication *application;
@property(assign, nonatomic) BOOL invalidated;
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) SBSnapshotImageInfo *snapshotImageInfo;
+ (id)_fallbackDefaultBackgroundColor;
+ (id)appSliderSnapshotViewForApplication:(id)application orientation:(int)orientation loadAsync:(BOOL)async withQueue:(id)queue statusBarCache:(id)cache;
- (id)initWithApplication:(id)application orientation:(int)orientation async:(BOOL)async withQueue:(id)queue statusBarCache:(id)cache;
- (id)initWithFrame:(CGRect)frame;
- (id)_cachedImageForImageInfos:(id)imageInfos foundInfo:(out id *)info;
- (id)_cachedSnapshotForSnapshotInfos:(id)snapshotInfos foundInfo:(out id *)info;
- (CGImageRef)_cgImageForSnapshotInfo:(id)snapshotInfo;
- (int)_containerOrientation;
- (id)_defaultImageforImageInfo:(id)info;
- (id)_imageAtPath:(id)path preferredScale:(float)scale orientation:(out int *)orientation;
- (void)_layoutContainer;
- (void)_layoutStatusBar;
- (void)_loadImageAsyncFromSnapshotInfo:(id)snapshotInfo;
- (void)_loadSnapshotAsync;
- (void)_loadSnapshotSync;
- (CGImageRef)_queue_createDecodedImageIfPossible:(CGImageRef)possible;
- (BOOL)_queue_keepGoing;
- (CGAffineTransform)_rotationTransformForOrientation;
- (CGRect)_snapshotFrame;
- (id)_snapshotImage;
- (id)_snapshotImageForImageInfo:(id)imageInfo;
- (void)_snapshotImageLoaded:(CGImageRef)loaded withInfo:(id)info;
- (id)_snapshotInfoForDefaultPNG;
- (id)_snapshotInfoForSnapshotFromInfos:(id)infos;
- (id)_snapshotInfos;
- (id)_snapshotName;
- (id)_statusBarCacheKeyForStyleRequest:(id)styleRequest;
- (void)_updateStatusbarTranslucency;
- (void)_updateTranslucency;
- (void)_viewDismissing:(id)dismissing;
- (void)_viewPresenting:(id)presenting;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)layoutSubviews;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)setOrientation:(int)orientation orientationBehavior:(int)behavior;
- (CGSize)sizeThatFits:(CGSize)fits;
@end
