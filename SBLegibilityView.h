/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLegibilityView : XXUnknownSuperclass {
	int _tintColor;
	UIImage *_tintImage;
	UIEdgeInsets _hitTestEdgeInsets;
}
@property(assign, nonatomic) UIEdgeInsets hitTestEdgeInsets;
@property(assign, nonatomic) int tintColor;
@property(retain, nonatomic) UIImage *tintImage;
- (id)initWithSettings:(id)settings strength:(float)strength image:(id)image tintColor:(int)color;
- (id)_tintColorForSettings:(id)settings;
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (void)setSettings:(id)settings image:(id)image shadowImage:(id)image3;
@end

