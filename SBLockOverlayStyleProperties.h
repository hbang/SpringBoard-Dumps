/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockOverlayStyleProperties : XXUnknownSuperclass {
	UIColor *_primaryColor;
	UIColor *_secondaryColor;
	UIColor *_tintColor;
	float _tintAlpha;
	float _blurRadius;
	unsigned _style;
	int _quality;
	_UIBackdropViewSettings *_settings;
}
@property(readonly, assign, nonatomic) float blurRadius;
@property(readonly, assign, nonatomic) int graphicsQuality;
@property(readonly, assign, nonatomic) unsigned style;
@property(readonly, assign, nonatomic) float tintAlpha;
@property(readonly, assign, nonatomic) UIColor *tintColor;
- (id)initWithStyle:(unsigned)style quality:(int)quality;
- (void)_configure;
- (id)_settingsForStyle;
- (id)_stringForQuality;
- (id)_stringForStyle;
- (void)dealloc;
- (id)description;
@end

