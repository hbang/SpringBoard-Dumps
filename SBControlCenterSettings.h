/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface SBControlCenterSettings : XXUnknownSuperclass {
	BOOL _highlightUsesPlusL;
	BOOL _backgroundDarkensCC;
	float _controlAlpha;
	float _controlAlpha1x;
	float _disabledAlpha;
	float _disabledAlpha1x;
	float _highlightAlpha;
	float _glowAlpha;
	UIColor *_highlightColor;
	float _bounceFriction;
	float _backgroundColorAlpha;
}
@property(assign) float backgroundColorAlpha;
@property(assign) BOOL backgroundDarkensCC;
@property(assign) float bounceFriction;
@property(assign) float controlAlpha;
@property(assign) float controlAlpha1x;
@property(assign) float disabledAlpha;
@property(assign) float disabledAlpha1x;
@property(assign) float glowAlpha;
@property(assign) float highlightAlpha;
@property(retain) UIColor *highlightColor;
@property(assign) BOOL highlightUsesPlusL;
+ (id)settingsControllerModule;
- (float)resolvedControlAlpha;
- (float)resolvedDisabledAlpha;
- (void)setDefaultValues;
@end

