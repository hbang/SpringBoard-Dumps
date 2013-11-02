/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSTimer, NSMutableDictionary, CPAggregateDictionary;

@interface SBAggregateDCommunicator : NSObject {
	CPAggregateDictionary *_dictionary;
	NSTimer *_periodicFlushTimer;
	NSMutableDictionary *_applicationLastStateTime;
	double _backlightOnStartTime;
	BOOL _backlightOnStartTimeWasOnBattery;
	BOOL _backlightOnStartTimeIsValid;
	double _awakeTimeStart;
	BOOL _awakeTimeStartWasOnBattery;
	BOOL _awakeTimeStartIsValid;
	int _lastConnectionType;
	double _lastConnectionTime;
	BOOL _lastConnectionTimeIsValid;
	double _vpnUsageStartTime;
	BOOL _vpnUsageStartTimeIsValid;
}
+ (id)sharedInstance;
- (id)init;
- (void)_batteryStatusChanged:(id)changed;
- (void)_forceUpdateAllTimers:(id)timers;
- (void)_forceUpdateAwakeTimers;
- (void)_forceUpdateBacklightTimers;
- (void)_forceUpdateConnectionTypeTimers;
- (void)_forceUpdateVPNConnectionTimer;
- (void)_installedApplicationsChanged:(id)changed;
- (void)_significantTimeChanged:(id)changed;
- (void)_startVPNConnectionTimer;
- (void)_stopVPNConnectionTimer;
- (void)dealloc;
- (void)reportAppSwitcherActivated;
- (void)reportApplicationState:(id)state oldState:(unsigned)state2 newState:(unsigned)state3;
- (void)reportCallDuration:(double)duration connectionType:(int)type;
- (void)reportConnectionTypeChanged;
- (void)reportCurrentThemalLevel:(int)level;
- (void)reportDeviceHasAwoken;
- (void)reportDeviceWillSleep;
- (void)reportDiskUsage;
- (void)reportNANDUsage;
- (void)reportScreenHasDimmed;
- (void)reportScreenHasUndimmed;
- (void)reportSpringBoardDidLaunch;
- (void)reportVPNStatusChanged;
- (void)synchronousCommit;
@end

