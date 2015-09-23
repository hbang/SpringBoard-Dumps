/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBControlCenterSettings : XXUnknownSuperclass {
	BOOL _highlightUsesPlusL;
	BOOL _forceVibrantControls;
	BOOL _useNewBounce;
	SBControlCenterSettingsSectionSettings *_settingsSectionSettings;
	SBControlCenterShortcutSectionSettings *_shortcutSectionSettings;
	float _controlAlpha;
	float _controlAlpha1x;
	float _minControlAlpha;
	float _maxControlAlpha;
	float _disabledAlpha;
	float _disabledAlpha1x;
	float _highlightAlpha;
	float _glowAlpha;
	UIColor *_highlightColor;
	float _oldBounceFriction;
	float _bounceDensityFactor;
	float _bounceResistance;
	float _minVelocity;
	float _maxVelocity;
	float _attachmentThreshold;
	float _attachmentFrequencyAbove;
	float _attachmentFrequencyBelow;
	float _attachmentVelocityDamping;
	float _attachmentMinDamping;
	float _attachmentMaxDamping;
	float _backgroundAlphaFactor;
}
@property(assign) float attachmentFrequencyAbove;
@property(assign) float attachmentFrequencyBelow;
@property(assign) float attachmentMaxDamping;
@property(assign) float attachmentMinDamping;
@property(assign) float attachmentThreshold;
@property(assign) float attachmentVelocityDamping;
@property(assign) float backgroundAlphaFactor;
@property(assign) float bounceDensityFactor;
@property(assign) float bounceResistance;
@property(assign) float controlAlpha;
@property(assign) float controlAlpha1x;
@property(assign) float disabledAlpha;
@property(assign) float disabledAlpha1x;
@property(assign) BOOL forceVibrantControls;
@property(assign) float glowAlpha;
@property(assign) float highlightAlpha;
@property(retain) UIColor *highlightColor;
@property(assign) BOOL highlightUsesPlusL;
@property(assign) float maxControlAlpha;
@property(assign) float maxVelocity;
@property(assign) float minControlAlpha;
@property(assign) float minVelocity;
@property(assign) float oldBounceFriction;
@property(retain) SBControlCenterSettingsSectionSettings *settingsSectionSettings;
@property(retain) SBControlCenterShortcutSectionSettings *shortcutSectionSettings;
@property(assign) BOOL useNewBounce;
+ (id)settingsControllerModule;
- (float)resolvedControlAlpha;
- (float)resolvedDisabledAlpha;
- (void)setDefaultValues;
@end
