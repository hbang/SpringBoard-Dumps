/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBCloseBoxView : XXUnknownSuperclass {
	SBIconBlurryBackgroundView *_backgroundView;
	UIView *_whiteTintView;
	UIImageView *_xColorBurnView;
	UIImageView *_xPlusDView;
	SBIconColorSettings *_colorSettings;
	CGPoint _wallpaperRelativeCenter;
}
- (id)initWithFrame:(CGRect)frame;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (void)setLegibilityStyle:(int)style;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
- (void)setWallpaperRelativeCenter:(CGPoint)center;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

