/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBAppSliderSettings : XXUnknownSuperclass {
	int _simplicityOptions;
	SBFAnimationSettings *_dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings *_gestureSettings;
}
@property(retain) SBFAnimationSettings *dosidoAnimationSettings;
@property(retain) _UIScreenEdgePanRecognizerSettings *gestureSettings;
@property(assign) int simplicityOptions;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
- (BOOL)shouldSimplifyForOptions:(int)options;
@end

