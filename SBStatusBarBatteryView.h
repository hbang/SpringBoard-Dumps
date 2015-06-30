/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarBatteryView : SBStatusBarContentView {
	int _batteryCapacity;
	BOOL _batteryCharging;
	BOOL _isOnAC;
}
- (id)init;
- (void)_batteryStatusChanged:(id)changed;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)mouseUp:(GSEventRef)up;
- (void)setBatteryCapacity:(int)capacity andCharging:(BOOL)charging isOnAC:(BOOL)ac;
- (void)start;
- (void)stop;
- (void)updateBattery;
@end
