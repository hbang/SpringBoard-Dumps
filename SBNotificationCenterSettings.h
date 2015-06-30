/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBNotificationCenterSettings : XXUnknownSuperclass {
	SBBounceSettings *_bounceSettings;
	float _actionButtonVibrantTintLevel;
	float _actionButtonVibrantTintAlpha;
	float _actionButtonSelectedVibrantTintLevel;
	float _actionButtonSelectedVibrantTintAlpha;
	float _actionButtonOverlayTintLevel;
	float _actionButtonOverlayTintAlpha;
	float _actionButtonSelectedOverlayTintLevel;
	float _actionButtonSelectedOverlayTintAlpha;
	float _modeButtonTintLevel;
	float _modeButtonTintAlpha;
	float _modeLabelTintLevel;
	float _modeLabelTintAlpha;
	double _grabberAnimationDuration;
}
@property(assign, nonatomic) float actionButtonOverlayTintAlpha;
@property(assign, nonatomic) float actionButtonOverlayTintLevel;
@property(assign, nonatomic) float actionButtonSelectedOverlayTintAlpha;
@property(assign, nonatomic) float actionButtonSelectedOverlayTintLevel;
@property(assign, nonatomic) float actionButtonSelectedVibrantTintAlpha;
@property(assign, nonatomic) float actionButtonSelectedVibrantTintLevel;
@property(assign, nonatomic) float actionButtonVibrantTintAlpha;
@property(assign, nonatomic) float actionButtonVibrantTintLevel;
@property(retain, nonatomic) SBBounceSettings *bounceSettings;
@property(assign) double grabberAnimationDuration;
@property(assign, nonatomic) float modeButtonTintAlpha;
@property(assign, nonatomic) float modeButtonTintLevel;
@property(assign, nonatomic) float modeLabelTintAlpha;
@property(assign, nonatomic) float modeLabelTintLevel;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

