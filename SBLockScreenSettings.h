/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockScreenSettings : XXUnknownSuperclass {
	BOOL _alwaysPutPluginsBelowScrollView;
	BOOL _killsInsecureDrawingApps;
	SBBounceSettings *_verticalBounceSettings;
	SBBounceSettings *_horizontalBounceSettings;
	SBLockScreenPasscodeSettings *_passcodeSettings;
	SBSlideToUnlockFailureRecognizerSettings *_slideToUnlockFailureRecognizerSettings;
	SBAnimationSettings *_unlockToPhoneWallpaperOutSettings;
	SBAnimationSettings *_unlockToPhoneWallpaperInSettings;
	SBAnimationSettings *_unlockWallpaperOutSettings;
	SBAnimationSettings *_unlockWallpaperInSettings;
	float _lockToUnlockSlideCompletionPercentage;
	float _lockToUnlockSlideCompletionPercentageIPad;
	float _unlockSlideForIdleTimerDisabledPercentage;
	float _unlockSlideForIdleTimerDisabledPercentageIPad;
	float _notificationScrollForIdleTimerDisabledOffset;
	float _notificationScrollForIdleTimerDisabledOffsetIPad;
	float _appGrabberSlideUpVelocityThreshold;
	float _unlockSwipeWallpaperAlpha;
}
@property(assign) BOOL alwaysPutPluginsBelowScrollView;
@property(assign) float appGrabberSlideUpVelocityThreshold;
@property(retain) SBBounceSettings *horizontalBounceSettings;
@property(assign) BOOL killsInsecureDrawingApps;
@property(assign) float lockToUnlockSlideCompletionPercentage;
@property(assign) float lockToUnlockSlideCompletionPercentageIPad;
@property(assign) float notificationScrollForIdleTimerDisabledOffset;
@property(assign) float notificationScrollForIdleTimerDisabledOffsetIPad;
@property(retain) SBLockScreenPasscodeSettings *passcodeSettings;
@property(retain) SBSlideToUnlockFailureRecognizerSettings *slideToUnlockFailureRecognizerSettings;
@property(assign) float unlockSlideForIdleTimerDisabledPercentage;
@property(assign) float unlockSlideForIdleTimerDisabledPercentageIPad;
@property(assign) float unlockSwipeWallpaperAlpha;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperOutSettings;
@property(retain) SBAnimationSettings *unlockWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockWallpaperOutSettings;
@property(retain) SBBounceSettings *verticalBounceSettings;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

