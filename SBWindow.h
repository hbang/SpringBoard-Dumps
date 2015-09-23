/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWindow : XXUnknownSuperclass {
	int _jailBehavior;
}
@property(readonly, assign, nonatomic) UIEdgeInsets jailInsets;
+ (CGRect)_actualBoundsForScreen:(id)screen withJailBehavior:(int)jailBehavior;
+ (UIEdgeInsets)_jailInsetsForScreen:(id)screen;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithScreen:(id)screen jailBehavior:(int)behavior;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (void)setAlpha:(float)alpha;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)manager;
- (void)setScreen:(id)screen;
@end

