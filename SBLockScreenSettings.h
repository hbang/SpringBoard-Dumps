/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenPasscodeSettings, SBFAnimationSettings, SBSlideToUnlockFailureRecognizerSettings, SBBounceSettings;

__attribute__((visibility("hidden")))
@interface SBLockScreenSettings : XXUnknownSuperclass {
	BOOL _alwaysPutPluginsBelowScrollView;
	SBBounceSettings *_verticalBounceSettings;
	SBBounceSettings *_horizontalBounceSettings;
	SBLockScreenPasscodeSettings *_passcodeSettings;
	SBSlideToUnlockFailureRecognizerSettings *_slideToUnlockFailureRecognizerSettings;
	SBFAnimationSettings *_unlockToPhoneWallpaperOutSettings;
	SBFAnimationSettings *_unlockToPhoneWallpaperInSettings;
	SBFAnimationSettings *_unlockWallpaperOutSettings;
	SBFAnimationSettings *_unlockWallpaperInSettings;
	float _lockToUnlockSlideCompletionPercentage;
	float _lockToUnlockSlideCompletionPercentageIPad;
	float _unlockSlideForIdleTimerDisabledPercentage;
	float _unlockSlideForIdleTimerDisabledPercentageIPad;
	float _notificationScrollForIdleTimerDisabledOffset;
	float _notificationScrollForIdleTimerDisabledOffsetIPad;
	float _unlockSwipeWallpaperAlpha;
}
@property(assign) BOOL alwaysPutPluginsBelowScrollView;
@property(retain) SBBounceSettings *horizontalBounceSettings;
@property(assign) float lockToUnlockSlideCompletionPercentage;
@property(assign) float lockToUnlockSlideCompletionPercentageIPad;
@property(assign) float notificationScrollForIdleTimerDisabledOffset;
@property(assign) float notificationScrollForIdleTimerDisabledOffsetIPad;
@property(retain) SBLockScreenPasscodeSettings *passcodeSettings;
@property(retain) SBSlideToUnlockFailureRecognizerSettings *slideToUnlockFailureRecognizerSettings;
@property(assign) float unlockSlideForIdleTimerDisabledPercentage;
@property(assign) float unlockSlideForIdleTimerDisabledPercentageIPad;
@property(assign) float unlockSwipeWallpaperAlpha;
@property(retain) SBFAnimationSettings *unlockToPhoneWallpaperInSettings;
@property(retain) SBFAnimationSettings *unlockToPhoneWallpaperOutSettings;
@property(retain) SBFAnimationSettings *unlockWallpaperInSettings;
@property(retain) SBFAnimationSettings *unlockWallpaperOutSettings;
@property(retain) SBBounceSettings *verticalBounceSettings;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

