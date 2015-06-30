/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIActiveOrientationObserver.h"


__attribute__((visibility("hidden")))
@interface SBAppSliderWindowController : XXUnknownSuperclass <SBUIActiveOrientationObserver> {
	SBAppSliderWindow *_window;
	UIViewController *_rootViewController;
	int _trueWindowOrientation;
	int _overrideWindowOrientation;
	NSMutableSet *_rotationPreventionReasons;
}
@property(retain, nonatomic) UIViewController *rootViewController;
@property(readonly, assign, nonatomic) UIWindow *window;
- (id)initWithRootViewController:(id)rootViewController;
- (BOOL)_hasOrientationOverride;
- (void)_rotateIfNecessaryTo:(int)to withDuration:(double)duration forOverride:(BOOL)override;
- (void)_setOverrideWindowOrientation:(int)orientation;
- (void)_setTrueWindowOrientation:(int)orientation;
- (BOOL)_shouldAllowRotation:(BOOL)rotation;
- (void)_windowDidBecomeVisible:(id)_window;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)activeInterfaceOrientation willAnimateWithDuration:(double)duration fromOrientation:(int)orientation;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)activeInterfaceOrientation;
- (void)clearOverrideWindowOrientation;
- (void)dealloc;
- (void)overrideWindowOrientation:(int)orientation;
- (void)setAllowRotation:(BOOL)rotation forReason:(id)reason;
- (int)windowOrientation;
- (int)windowOrientationWithoutOverrides;
@end

