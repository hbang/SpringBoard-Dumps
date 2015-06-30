/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBBluetoothController : NSObject {
	NSMutableArray *_devices;
}
+ (id)sharedInstance;
- (void)addDeviceNotification:(id)notification;
- (void)avrcpPause:(id)pause;
- (void)avrcpPerformPause:(id)pause;
- (void)avrcpPerformPlay:(id)play;
- (void)avrcpPerformStop:(id)stop;
- (void)avrcpPerformToggle:(id)toggle;
- (void)avrcpPlay:(id)play;
- (void)avrcpStop:(id)stop;
- (void)batteryChanged:(id)changed;
- (float)batteryLevel;
- (BOOL)canReportBatteryLevel;
- (void)connectionChanged:(id)changed;
- (void)dealloc;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)iapDeviceChanged:(id)changed;
- (void)noteDevicesChanged;
- (void)removeDeviceNotification:(id)notification;
- (void)startWatchingForDevices;
- (void)stopWatchingForDevices;
- (void)updateBattery;
@end

