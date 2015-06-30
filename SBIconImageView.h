/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconProgressViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBIconObserver.h"


__attribute__((visibility("hidden")))
@interface SBIconImageView : XXUnknownSuperclass <SBIconObserver, SBIconProgressViewDelegate> {
	UIImageView *_overlayView;
	SBIconProgressView *_progressView;
	BOOL _isPaused;
	UIImage *_cachedSquareContentsImage;
	BOOL _showsSquareCorners;
	SBIcon *_icon;
	float _brightness;
	float _overlayAlpha;
}
@property(assign, nonatomic) float brightness;
@property(retain, nonatomic) SBIcon *icon;
@property(assign, nonatomic) float overlayAlpha;
@property(assign, nonatomic) BOOL showsSquareCorners;
+ (float)cornerRadius;
+ (id)dequeueRecycledIconImageViewOfClass:(Class)aClass;
+ (void)recycleIconImageView:(id)view;
- (id)initWithFrame:(CGRect)frame;
- (void)_clearCachedImages;
- (void)_clearProgressView;
- (id)_currentOverlayImage;
- (id)_generateSquareContentsImage;
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
- (void)setIcon:(id)icon animated:(BOOL)animated;
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

