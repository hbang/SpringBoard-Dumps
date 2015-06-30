/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkDosidoAnimation.h"


__attribute__((visibility("hidden")))
@interface SBUIStarkDosidoNowPlayingAnimation : SBUIStarkDosidoAnimation {
	NSNumber *_activatedNowPlaying;
	BOOL _waitForNowPlaying;
}
- (id)initFromAlertImpersonator:(id)alertImpersonator toNowPlayingWithStarkScreenController:(id)starkScreenController;
- (id)initFromApp:(id)app toNowPlayingWithStarkScreenController:(id)starkScreenController;
- (id)initFromNowPlayingToAlertImpersonator:(id)alertImpersonator starkScreenController:(id)controller;
- (id)initFromNowPlayingToApp:(id)app starkScreenController:(id)controller;
- (id)initFromNowPlayingToNowPlayingWithStarkScreenController:(id)starkScreenController;
- (void)_cleanupAnimation;
- (void)_commonInitWaitForNowPlaying:(BOOL)nowPlaying fromView:(id)view toView:(id)view3 alert:(id)alert toDisplay:(id)display;
- (void)_setupStartDependencies;
- (void)_startAnimation;
- (BOOL)_waitsForApplicationActivationIfNecessary;
@end

