/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBWiFiManager : NSObject {
	WiFiManagerClient *_manager;
	WiFiDeviceClient *_device;
	WiFiNetwork *_currentNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	BOOL _joining;
	int _signalStrengthBars;
	BOOL _signalStrengthHasBeenSet;
	NSTimer *_signalStrengthTimer;
	int _shouldPollSignalStrength;
	BOOL _canPollSignalStrength;
	id _delegate;
	unsigned _notificationID;
	double _lastSignalStrengthUpdateTime;
}
+ (BOOL)hasWiFi;
+ (id)sharedInstance;
- (id)init;
- (void)_askToJoinWithID:(unsigned)anId;
- (BOOL)_cachedIsAssociated;
- (void)_joinComplete:(int)complete network:(WiFiNetwork *)network;
- (void)_linkDidChange;
- (WiFiManagerClient *)_manager;
- (void)_powerStateDidChange;
- (void)_scanComplete:(CFArrayRef)complete;
- (void)_trustCallbackWithID:(unsigned)anId type:(int)type network:(WiFiNetwork *)network data:(id)data;
- (void)_updateCurrentNetwork;
- (void)_updateSignalStrengthTimer;
- (void)acceptTrust:(id)trust;
- (void)beginPollingForSignalStrength;
- (void)cancelPicker:(BOOL)picker;
- (void)cancelTrust:(BOOL)trust;
- (id)currentNetworkName;
- (void)dealloc;
- (void)dismissAlerts;
- (void)endPollingForSignalStrength;
- (BOOL)isAssociated;
- (void)joinNetwork:(id)network password:(id)password;
- (BOOL)joining;
- (id)knownNetworks;
- (BOOL)powered;
- (void)resetSettings;
- (void)scan;
- (void)setDelegate:(id)delegate;
- (void)setDevice:(WiFiDeviceClient *)device;
- (void)setWiFiEnabled:(BOOL)enabled;
- (int)signalStrengthBars;
- (void)updateSignalStrength;
- (void)userChoseNetwork:(id)network;
- (BOOL)wiFiEnabled;
@end

