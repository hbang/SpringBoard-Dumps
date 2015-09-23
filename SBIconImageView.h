/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconObserver.h"
#import "SBReusableView.h"
#import "SpringBoard-Structs.h"
#import "SBIconProgressViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBIconImageView : XXUnknownSuperclass <SBIconObserver, SBIconProgressViewDelegate, SBReusableView> {
	SBIcon *_icon;
	float _brightness;
	int _location;
	UIImageView *_overlayView;
	SBIconProgressView *_progressView;
	BOOL _isPaused;
	UIImage *_cachedSquareContentsImage;
	BOOL _showsSquareCorners;
	float _overlayAlpha;
}
@property(assign, nonatomic) float brightness;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBIcon *icon;
@property(assign, nonatomic) float overlayAlpha;
@property(assign, nonatomic) BOOL showsSquareCorners;
@property(readonly, assign) Class superclass;
+ (float)cornerRadius;
+ (id)dequeueRecycledIconImageViewOfClass:(Class)aClass;
+ (void)recycleIconImageView:(id)view;
+ (id)viewMap;
+ (unsigned)viewMap:(id)map maxRecycledViewsOfClass:(Class)aClass;
+ (id)windowForRecycledViewsInViewMap:(id)viewMap;
- (id)initWithFrame:(CGRect)frame;
- (void)_clearCachedImages;
- (void)_clearProgressView;
- (id)_currentOverlayImage;
- (void)_didReceiveLowMemoryWarning:(id)warning;
- (id)_generateIconBasicOverlayImageForFormat:(int)format;
- (id)_generateIconSquareOverlayImageForFormat:(int)format;
- (id)_generateSquareContentsImage;
- (id)_iconBasicOverlayImage;
- (id)_iconSquareOverlayImage;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_updateOverlayAlpha;
- (void)_updateOverlayImage;
- (void)_updateProgressMask;
- (id)contentsImage;
- (id)darkeningOverlayImage;
- (void)dealloc;
- (void)iconImageDidUpdate:(id)iconImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)progressViewCanBeRemoved:(id)removed;
- (void)setIcon:(id)icon location:(int)location animated:(BOOL)animated;
- (void)setPaused:(BOOL)paused;
- (void)setProgressAlpha:(float)alpha;
- (void)setProgressState:(int)state paused:(BOOL)paused percent:(float)percent animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
- (id)snapshot;
- (id)squareContentsImage;
- (id)squareDarkeningOverlayImage;
- (void)updateImageAnimated:(BOOL)animated;
- (CGRect)visibleBounds;
@end

