/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLegibilitySettings : XXUnknownSuperclass {
	float _slideToUnlockDarkShadowStrength;
	float _slideToUnlockLightShadowStrength;
	float _cameraGrabberDarkShadowStrength;
	float _cameraGrabberLightShadowStrength;
	float _timeDarkShadowStrength;
	float _timeLightShadowStrength;
	float _dateDarkShadowStrength;
	float _dateLightShadowStrength;
	float _legalDarkShadowStrength;
	float _legalLightShadowStrength;
	float _iconLabelDarkShadowStrength;
	float _iconLabelLightShadowStrength;
	float _folderTitleDarkShadowStrength;
	float _folderTitleLightShadowStrength;
	float _timerTextDarkShadowStrength;
	float _timerTextLightShadowStrength;
	float _timerDialDarkShadowStrength;
	float _timerDialLightShadowStrength;
}
@property(assign) float cameraGrabberDarkShadowStrength;
@property(assign) float cameraGrabberLightShadowStrength;
@property(assign) float dateDarkShadowStrength;
@property(assign) float dateLightShadowStrength;
@property(assign) float folderTitleDarkShadowStrength;
@property(assign) float folderTitleLightShadowStrength;
@property(assign) float iconLabelDarkShadowStrength;
@property(assign) float iconLabelLightShadowStrength;
@property(assign) float legalDarkShadowStrength;
@property(assign) float legalLightShadowStrength;
@property(assign) float slideToUnlockDarkShadowStrength;
@property(assign) float slideToUnlockLightShadowStrength;
@property(assign) float timeDarkShadowStrength;
@property(assign) float timeLightShadowStrength;
@property(assign) float timerDialDarkShadowStrength;
@property(assign) float timerDialLightShadowStrength;
@property(assign) float timerTextDarkShadowStrength;
@property(assign) float timerTextLightShadowStrength;
+ (id)settingsControllerModule;
- (float)cameraGrabberStrengthForStyle:(int)style;
- (float)dateStrengthForStyle:(int)style;
- (float)folderTitleStrengthForStyle:(int)style;
- (float)iconLabelStrengthForStyle:(int)style;
- (float)legalStrengthForStyle:(int)style;
- (void)setDefaultValues;
- (float)slideToUnlockStrengthForStyle:(int)style;
- (float)timeStrengthForStyle:(int)style;
- (float)timerDialStrengthForStyle:(int)style;
- (float)timerTextStrengthForStyle:(int)style;
@end

