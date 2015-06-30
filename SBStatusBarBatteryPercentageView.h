/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarBatteryPercentageView : SBStatusBarContentView {
	int _displayedCapacity;
	BOOL _isOnAC;
	BOOL _showBatteryPercentageView;
}
- (id)init;
- (void)_batteryStatusChanged:(id)changed;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (BOOL)isVisible;
- (float)padding;
- (int)priority;
- (void)setVisible:(BOOL)visible;
- (void)start;
- (void)stop;
- (void)updateBattery;
@end

