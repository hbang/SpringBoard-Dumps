/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarVPNView : SBStatusBarContentView {
	UIImageView *_imageView;
	BOOL _setOnce;
	BOOL _showIndicator;
}
- (id)init;
- (void)dealloc;
- (void)setMode:(int)mode;
- (void)setShowsIndicator:(BOOL)indicator;
- (BOOL)showsIndicator;
- (void)vpnConnectionChanged;
@end

