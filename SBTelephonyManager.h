/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBTelephonyManager : XXUnknownSuperclass {
	NSString *_cachedCTRegistrationStatus;
	BOOL _emergencyCallsOnly;
	int _registrationStatus;
	void *_suspendDormancyAssertion;
	BOOL _signalStrengthHasBeenSet;
	long _signalStrength;
	long _signalStrengthBars;
	NSString *_operatorName;
	NSString *_lastKnownNetworkCountryCode;
	unsigned _suspendDormancyEnabled;
	unsigned _usingWifi : 1;
	unsigned _usingVPN : 1;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	BOOL _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem *_activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	NSString *_inCallStatusPreamble;
	NSTimer *_inCallTimer;
	RadiosPreferences *_radioPrefs;
	int _needsUserIdentificationModule;
	NSString *_simStatus;
	int _wantsToHideDataIndicators;
	int _modemDataConnectionType;
	BOOL _modemDataConnectionTypeIsKnown;
	BOOL _fallingBackToCellular;
	tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
}
+ (id)sharedTelephonyManager;
+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)necessary;
- (id)init;
- (BOOL)EDGEIsOn;
- (BOOL)MALoggingEnabled;
- (void)SBTelephonyDaemonRestartHandler;
- (id)SIMStatus;
- (void)_avSystemControllerDidError:(id)_avSystemController;
- (CFStringRef)_cachedCTRegistrationStatus;
- (void)_cancelFakeService;
- (void)_delayedAudioResume;
- (void)_fetchOperatorNameWithCompletion:(id)completion;
- (void)_headphoneChanged:(id)changed;
- (void)_performQueryInBackground:(id)background withMainQueueResultHandler:(id)mainQueueResultHandler;
- (void)_phoneActivationStateChanged:(id)changed;
- (id)_phoneApp;
- (void)_postDataConnectionTypeChanged;
- (void)_postStartupNotification;
- (void)_prepareToAnswerCall;
- (BOOL)_pretendingToSearch;
- (void)_provisioningUpdateWithStatus:(int)status;
- (void)_proximityChanged:(id)changed;
- (void)_reallySetOperatorName:(id)name;
- (void)_resetCTMMode;
- (void)_resetModemConnectionType;
- (CTServerConnectionRef)_serverConnection;
- (void)_serverConnectionDidError:(XXStruct_K5nmsA)_serverConnection;
- (void)_setCachedCTRegistrationStatus:(CFStringRef)status;
- (void)_setCurrentActivationAlertItem:(id)item;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)emergencyCallbackMode;
- (void)_setIsLoggingCallAudio:(BOOL)audio;
- (void)_setRegistrationStatus:(int)status;
- (void)_setSIMStatus:(id)status;
- (void)_setSignalStrength:(long)strength andBars:(long)bars;
- (void)_setWantsToHideDataIndicators:(int)hideDataIndicators;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeService;
- (void)_updateCanOnlyMakeEmergencyCalls;
- (void)_updateLastKnownNetworkCountryCode;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)ctinfo;
- (void)_updateRegistrationNow;
- (void)_updateState;
- (void)_wokeFromSleep:(id)sleep;
- (BOOL)activeCallExists;
- (void)airplaneModeChanged;
- (id)allMissedCallsAfterRowID:(long long)anId;
- (int)callCount;
- (int)callForwardingIndicator;
- (BOOL)callWouldUseReceiver:(BOOL)receiver;
- (BOOL)canOnlyMakeEmergencyCalls;
- (void)carrierBundleChanged;
- (BOOL)cellularRadioCapabilityIsActive;
- (void)configureForTTY:(BOOL)tty;
- (id)copyMobileEquipmentInfo;
- (id)copyTelephonyCapabilities;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCall;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectIncomingCall;
- (void)dumpBasebandState:(id)state;
- (void)exitEmergencyCallbackMode;
- (long long)getRowIDOfLastCallInsert;
- (BOOL)heldCallExists;
- (BOOL)inCall;
- (double)inCallDuration;
- (BOOL)inCallUsingReceiverForcingRoutingToReceiver:(BOOL)receiver;
- (BOOL)inCallUsingSpeakerOrReceiver;
- (BOOL)incomingCallExists;
- (BOOL)isCallAmbiguous;
- (BOOL)isEmergencyCallActive;
- (BOOL)isInAirplaneMode;
- (BOOL)isInEmergencyCallbackMode;
- (BOOL)isLoggingCallAudio;
- (BOOL)isNetworkRegistrationEnabled;
- (BOOL)isNetworkTethering;
- (BOOL)isTTYEnabled;
- (BOOL)isUsingSlowDataConnection;
- (BOOL)isUsingVPNConnection;
- (id)lastKnownNetworkCountryCode;
- (BOOL)multipleCallsExist;
- (BOOL)needsUserIdentificationModule;
- (void)noteSIMUnlockAttempt;
- (void)noteWirelessModemChanged;
- (int)numberOfNetworkTetheredDevices;
- (void)operatorBundleChanged;
- (id)operatorName;
- (BOOL)outgoingCallExists;
- (void)postponementStatusChanged;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setCallForwardingIndicator:(int)indicator;
- (void)setFastDormancySuspended:(BOOL)suspended;
- (void)setIncomingVoiceCallsEnabled:(BOOL)enabled;
- (void)setIsInAirplaneMode:(BOOL)airplaneMode;
- (void)setIsNetworkTethering:(BOOL)tethering withNumberOfDevices:(int)devices;
- (void)setIsUsingVPNConnection:(BOOL)connection;
- (void)setIsUsingWiFiConnection:(BOOL)connection;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
- (void)setNetworkRegistrationEnabled:(BOOL)enabled;
- (void)setOperatorName:(id)name;
- (BOOL)shouldHangUpOnLock;
- (BOOL)shouldPromptForTTY;
- (long)signalStrength;
- (long)signalStrengthBars;
- (void)swapCalls;
- (id)ttyTitle;
- (void)unmute;
- (void)updateAirplaneMode;
- (void)updateCallForwardingIndicator;
- (void)updateCalls;
- (void)updateDisplaySettings:(id)settings forOutgoingCallURL:(id)outgoingCallURL outURL:(id *)url;
- (BOOL)updateLocale;
- (void)updateNetworkLocale;
- (void)updateSpringBoard;
- (void)updateStatusBarCallDuration;
- (void)updateStatusBarCallState:(BOOL)state;
- (void)updateTTYIndicator;
- (id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition forceAssist:(BOOL)assist suppressAssist:(BOOL)assist6 wasAlreadyAssisted:(BOOL)assisted;
@end

