/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockScreenBatteryChargingView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView {
	UIView *_batteryContainerView;
	_UIBackdropView *_batteryBlurView;
	SBLockScreenBatteryFillView *_batteryFillView;
	_UILegibilityLabel *_chargePercentLabel;
	NSArray *_batteryConstraints;
	NSLayoutConstraint *_batteryTopOffset;
}
- (id)initWithFrame:(CGRect)frame;
- (float)_batteryBaseline;
- (float)_batteryNoseOffset;
- (id)_chargePercentFont;
- (float)_chargingTextBaselineOffset;
- (void)_prepareConstraints;
- (BOOL)batteryVisible;
- (void)dealloc;
- (double)desiredVisibilityDuration;
- (void)layoutSubviews;
- (void)setBatteryVisible:(BOOL)visible;
- (void)setLegibilitySettings:(id)settings;
- (void)setPrimaryChargePercentage:(int)percentage isCharging:(BOOL)charging detailed:(BOOL)detailed;
@end

