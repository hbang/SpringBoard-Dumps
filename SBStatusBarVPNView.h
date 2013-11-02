/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"

@class UIImageView;

@interface SBStatusBarVPNView : SBStatusBarContentView {
	UIImageView *_imageView;
	BOOL _setOnce;
	BOOL _showIndicator;
	BOOL _showVpnView;
	BOOL _showOnLeft;
	float _overlap;
}
- (id)init;
- (void)dealloc;
- (BOOL)isVisible;
- (float)overlap;
- (float)padding;
- (int)priority;
- (void)setMode:(int)mode;
- (void)setOverlap:(float)overlap;
- (void)setShowOnLeft:(BOOL)left;
- (void)setShowsIndicator:(BOOL)indicator;
- (void)setVisible:(BOOL)visible;
- (BOOL)showOnLeft;
- (BOOL)showsIndicator;
- (void)updateIndicator;
@end

