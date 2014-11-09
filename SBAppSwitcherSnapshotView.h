/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAppSwitcherPageContentView.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSString, UIImage, SBAppSwitcherSettings, SBSnapshotImageInfo, SBAppSwitcherStatusBarViewCache, SBApplication, NSObject, SBDisplayItem, SBWallpaperEffectView, UIImageView, SBZoomableCrossfadeView;
@protocol SBAppSwitcherCacheVended, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherSnapshotView : XXUnknownSuperclass <SBAppSwitcherPageContentView> {
	SBDisplayItem *_displayItem;
	SBApplication *_application;
	UIView *_containerView;
	SBAppSwitcherSettings *_settings;
	SBWallpaperEffectView *_wallpaperEffectView;
	SBSnapshotImageInfo *_snapshotImageInfo;
	UIImageView *_snapshotImageView;
	CGSize _imageSize;
	SBZoomableCrossfadeView *_updateCrossfadeView;
	SBZoomableCrossfadeView *_zoomUpCrossfadeView;
	UIImageView *_zoomUpSnapshotView;
	CGSize _zoomUpImageSize;
	UIImage *_deferredUpdateImage;
	SBAppSwitcherStatusBarViewCache *_statusBarCache;
	UIView<SBAppSwitcherCacheVended> *_statusBar;
	BOOL _isVisible;
	BOOL _simplifyForMotion;
	BOOL _invalidated;
	BOOL _needsZoomFilter;
	BOOL _loadedImage;
	BOOL _needsZoomUpImage;
	int _appSnapshotUpdatedSequenceID;
	NSObject<OS_dispatch_queue> *_snapshotQueue;
	BOOL _shouldTransitionToDefaultPng;
	int _orientation;
}
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIImage *deferredUpdateImage;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SBDisplayItem *displayItem;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL invalidated;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) BOOL shouldTransitionToDefaultPng;
@property(retain, nonatomic) SBSnapshotImageInfo *snapshotImageInfo;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) SBZoomableCrossfadeView *updateCrossfadeView;
+ (id)_fallbackDefaultBackgroundColor;
+ (id)appSwitcherSnapshotViewForDisplayItem:(id)displayItem orientation:(int)orientation loadAsync:(BOOL)async withQueue:(id)queue statusBarCache:(id)cache;
- (id)initWithDisplayItem:(id)displayItem application:(id)application orientation:(int)orientation async:(BOOL)async withQueue:(id)queue statusBarCache:(id)cache;
- (id)initWithFrame:(CGRect)frame;
- (id)_cachedImageForImageInfos:(id)imageInfos downscaled:(BOOL)downscaled foundInfo:(out id *)info;
- (id)_cachedSnapshotForSnapshotInfos:(id)snapshotInfos downscaled:(BOOL)downscaled foundInfo:(out id *)info;
- (CGImageRef)_cgImageForSnapshotInfo:(id)snapshotInfo downscaled:(BOOL)downscaled;
- (int)_containerOrientation;
- (void)_crossfadeToNewSnapshotImage:(id)newSnapshotImage;
- (void)_crossfadeToZoomUpViewIfNecessary;
- (id)_imageFromSnapshotInfos:(id)snapshotInfos forZoomUp:(BOOL)zoomUp loadedImageInfoOut:(out id *)anOut loadedDownscaledOut:(out BOOL *)anOut4;
- (void)_layoutContainer;
- (void)_layoutStatusBar;
- (void)_loadImageAsyncBodySnapshotInfo:(id)info displayItem:(id)item;
- (void)_loadImageAsyncFromSnapshotInfo:(id)snapshotInfo;
- (void)_loadSnapshotAsync;
- (void)_loadSnapshotSync;
- (void)_loadZoomUpSnapshotSync;
- (CGImageRef)_queue_createDecodedImageIfPossible:(CGImageRef)possible;
- (BOOL)_queue_keepGoing;
- (CGAffineTransform)_rotationTransformForOrientation;
- (void)_snapshotChanged:(id)changed;
- (CGRect)_snapshotFrame;
- (id)_snapshotImageForImageInfo:(id)imageInfo downscaledIfAvailable:(BOOL)available downscaledWasAvailableOut:(out BOOL *)anOut;
- (void)_snapshotImageLoaded:(CGImageRef)loaded withInfo:(id)info downscaled:(BOOL)downscaled;
- (id)_snapshotInfoForDefaultPNG;
- (id)_snapshotInfoForDefaultPNGWithLaunchOrientation:(int)launchOrientation;
- (id)_snapshotInfoForSnapshotFromInfos:(id)infos;
- (id)_snapshotInfos;
- (id)_snapshotName;
- (void)_updateStatusbarTranslucency;
- (void)_updateTranslucency;
- (void)_viewDismissing:(id)dismissing;
- (void)_viewPresenting:(id)presenting;
- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)setOrientation:(int)orientation orientationBehavior:(int)behavior;
- (void)simplifyForMotion;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)unsimplifyAfterMotion;
@end

