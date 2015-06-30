/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBFadeAnimationSettings : XXUnknownSuperclass {
	float _backlightFadeDuration;
	SBFAnimationSettings *_dateInSettings;
	SBFAnimationSettings *_overlayInSettings;
	SBFAnimationSettings *_contentInSettings;
	SBFAnimationSettings *_wallpaperInSettings;
	SBFAnimationSettings *_dateOutSettings;
	SBFAnimationSettings *_overlayOutSettings;
	SBFAnimationSettings *_wallpaperOutSettings;
	CGRect _wallpaperInContentsRect;
	CGRect _wallpaperOutContentsRect;
}
@property(assign, nonatomic) float backlightFadeDuration;
@property(retain, nonatomic) SBFAnimationSettings *contentInSettings;
@property(retain, nonatomic) SBFAnimationSettings *dateInSettings;
@property(retain, nonatomic) SBFAnimationSettings *dateOutSettings;
@property(retain, nonatomic) SBFAnimationSettings *overlayInSettings;
@property(retain, nonatomic) SBFAnimationSettings *overlayOutSettings;
@property(assign, nonatomic) CGRect wallpaperInContentsRect;
@property(retain, nonatomic) SBFAnimationSettings *wallpaperInSettings;
@property(assign, nonatomic) CGRect wallpaperOutContentsRect;
@property(retain, nonatomic) SBFAnimationSettings *wallpaperOutSettings;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

