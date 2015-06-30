/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinFadeOverlayOwner.h"


__attribute__((visibility("hidden")))
@interface SBLinenFadeContainer : XXUnknownSuperclass <SBBulletinFadeOverlayOwner> {
	UIView *_linenView;
	SBBulletinLinenFadeView *_fadeView;
}
- (id)initWithFrame:(CGRect)frame;
- (id)initWithLinenView:(id)linenView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLinenGradientAlpha:(float)alpha;
- (void)setRasterizesFadeOverlay:(BOOL)overlay;
- (void)setShouldShowFadeOverlay:(BOOL)showFadeOverlay;
@end

