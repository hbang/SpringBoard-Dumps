/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBDisplayProtocol <NSObject>
- (double)accelerometerSampleInterval;
- (void)activate;
- (BOOL)activationFlag:(unsigned)flag;
- (id)activationValue:(unsigned)value;
- (BOOL)allowsEventOnlySuspension;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearDisplaySettings;
- (void)deactivate;
- (BOOL)deactivationFlag:(unsigned)flag;
- (id)deactivationValue:(unsigned)value;
- (BOOL)displayFlag:(unsigned)flag;
- (id)displayValue:(unsigned)value;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)orientationChangedEventsEnabled;
- (void)setAccelerometerSampleInterval:(double)interval;
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setActivationSetting:(unsigned)setting value:(id)value;
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDisplaySetting:(unsigned)setting value:(id)value;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
- (void)setOrientationChangedEventsEnabled:(BOOL)enabled;
- (int)statusBarStyle;
- (BOOL)suppressesNotifications;
@end

