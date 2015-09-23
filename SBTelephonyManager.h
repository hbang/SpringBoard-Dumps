/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBTelephonyManager : XXUnknownSuperclass {
	BOOL _containsCellularRadio;
	BOOL _hasCellularTelephony;
	BOOL _hasCellularData;
	BOOL _hasAppleTelephony;
	BOOL _hasAnyTelephony;
	NSString *_cachedCTRegistrationStatus;
	int _registrationStatus;
	BOOL _signalStrengthHasBeenSet;
	long _signalStrength;
	long _signalStrengthBars;
	NSString *_operatorName;
	NSString *_lastKnownNetworkCountryCode;
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
	int _lteConnectionShows4G;
	int _modemDataConnectionType;
	BOOL _modemDataConnectionTypeIsKnown;
	BOOL _fallingBackToCellular;
	tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
	void *_queue_fastDormancySuspendAssertion;
	TUCall *_incomingCall;
	TUCall *_activeCall;
	TUCall *_heldCall;
	TUCall *_outgoingCall;
}
@property(retain, nonatomic) TUCall *activeCall;
@property(retain, nonatomic) TUCall *heldCall;
@property(retain, nonatomic) TUCall *incomingCall;
@property(retain, nonatomic) TUCall *outgoingCall;
+ (id)sharedTelephonyManager;
+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)necessary;
- (id)init;
- (BOOL)EDGEIsOn;
- (BOOL)MALoggingEnabled;
- (void)SBTelephonyDaemonRestartHandler;
- (id)SIMStatus;
- (void)_avSystemControllerDidError:(id)_avSystemController;
- (CFStringRef)_cachedCTRegistrationStatus;
- (unsigned)_callCountForService:(int)service;
- (void)_cancelFakeService;
- (void)_delayedAudioResume;
- (void)_fetchOperatorNameWithCompletion:(id)completion;
- (void)_headphoneChanged:(id)changed;
- (BOOL)_lteConnectionShows4G;
- (void)_performQueryInBackground:(id)background withMainQueueResultHandler:(id)mainQueueResultHandler;
- (void)_phoneActivationStateChanged:(id)changed;
- (id)_phoneApp;
- (void)_postDataConnectionTypeChanged;
- (void)_postStartupNotification;
- (void)_prepareToAnswerCall;
- (BOOL)_pretendingToSearch;
- (void)_provisioningUpdateWithStatus:(int)status;
- (void)_reallySetOperatorName:(id)name;
- (void)_resetCTMMode;
- (void)_resetModemConnectionType;
- (CTServerConnectionRef)_serverConnection;
- (void)_serverConnectionDidError:(SBIconCoordinate)_serverConnection;
- (void)_setCachedCTRegistrationStatus:(CFStringRef)status;
- (void)_setCurrentActivationAlertItem:(id)item;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)emergencyCallbackMode;
- (void)_setIsLoggingCallAudio:(BOOL)audio;
- (void)_setIsUsingWiFiConnection:(BOOL)connection;
- (void)_setRegistrationStatus:(int)status;
- (void)_setSIMStatus:(id)status;
- (void)_setSignalStrength:(long)strength andBars:(long)bars;
- (void)_setWantsToHideDataIndicators:(int)hideDataIndicators;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeService;
- (void)_updateLastKnownNetworkCountryCode;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)ctinfo;
- (void)_updateRegistrationNow;
- (void)_updateState;
- (BOOL)activeCallExists;
- (void)airplaneModeChanged;
- (int)callCount;
- (void)callEventHandler:(id)handler;
- (int)callForwardingIndicator;
- (BOOL)callWouldUseReceiver:(BOOL)receiver;
- (void)carrierBundleChanged;
- (BOOL)cellularRadioCapabilityIsActive;
- (void)configureForTTY:(BOOL)tty;
- (BOOL)containsCellularRadio;
- (id)copyMobileEquipmentInfo;
- (id)copyTelephonyCapabilities;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCall;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectIncomingCall;
- (id)displayedCall;
- (void)dumpBasebandState:(id)state;
- (void)exitEmergencyCallbackMode;
- (unsigned)faceTimeAudioCallCount;
- (void)handleCallAudioFinished:(id)finished;
- (void)handleCallControlFailure:(id)failure;
- (BOOL)hasAnyTelephony;
- (BOOL)hasCellularData;
- (BOOL)hasCellularTelephony;
- (BOOL)heldCallExists;
- (BOOL)inCall;
- (double)inCallDuration;
- (BOOL)inCallUsingReceiverForcingRoutingToReceiver:(BOOL)receiver;
- (BOOL)inCallUsingSpeakerOrReceiver;
- (BOOL)incomingCallExists;
- (BOOL)isCallAmbiguous;
- (BOOL)isEmergencyCallActive;
- (BOOL)isEmergencyCallScheme:(id)scheme;
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
- (void)queue_setFastDormancySuspended:(BOOL)suspended withConnection:(CTServerConnectionRef)connection;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setCallForwardingIndicator:(int)indicator;
- (void)setFastDormancySuspended:(BOOL)suspended;
- (void)setIncomingVoiceCallsEnabled:(BOOL)enabled;
- (void)setIsInAirplaneMode:(BOOL)airplaneMode;
- (void)setIsNetworkTethering:(BOOL)tethering withNumberOfDevices:(int)devices;
- (void)setIsUsingVPNConnection:(BOOL)connection;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
- (void)setNetworkRegistrationEnabled:(BOOL)enabled;
- (void)setOperatorName:(id)name;
- (BOOL)shouldHangUpOnLock;
- (BOOL)shouldPromptForTTY;
- (long)signalStrength;
- (long)signalStrengthBars;
- (void)swapCalls;
- (unsigned)telephonyCallCount;
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
- (id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition service:(int)service forceAssist:(BOOL)assist suppressAssist:(BOOL)assist7 wasAlreadyAssisted:(BOOL)assisted;
@end

