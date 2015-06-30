/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBTelephonyManager : NSObject {
	NSString *_operatorName;
	unsigned _usingWifi : 1;
	unsigned _usingVPN : 1;
	unsigned _iTunesNeedsToRecheckActivation : 1;
}
+ (id)sharedTelephonyManager;
- (id)init;
- (BOOL)EDGEIsOn;
- (BOOL)MALoggingEnabled;
- (id)SIMStatus;
- (void)_cancelFakeService;
- (void)_delayedAudioResume;
- (id)_fetchOperatorName;
- (void)_headphoneChanged:(id)changed;
- (void)_mainThreadDaemonRestart:(CFDictionaryRef)restart;
- (void)_reallySetOperatorName:(id)name;
- (void)_resetCTMMode;
- (CTServerConnectionRef)_serverConnection;
- (void)_setRegistrationStatus:(int)status;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeService;
- (void)_updateRegistrationNow;
- (void)_updateState;
- (BOOL)activeCallExists;
- (id)allMissedCallsAfterRowID:(long long)anId;
- (id)allUnreadSMSAfterRowID:(long long)anId;
- (void)answerIncomingCall;
- (void)answerIncomingCallEndingOthers;
- (int)callCount;
- (BOOL)callWouldUseReceiver:(BOOL)receiver;
- (void)checkForRegistrationSoon;
- (void)configureForTTY:(BOOL)tty;
- (void)copyICCID:(id *)iccid IMEI:(id *)imei;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCall;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectIncomingCall;
- (id)displayForOutgoingCallURL:(id)outgoingCallURL;
- (void)dumpBasebandState:(id)state;
- (long long)getRowIDOfLastCallInsert;
- (long long)getRowIDOfLastSMSInsert;
- (void)handleSIMReady;
- (BOOL)heldCallExists;
- (BOOL)inCall;
- (double)inCallDuration;
- (BOOL)inCallUsingReceiver;
- (BOOL)incomingCallExists;
- (BOOL)isNetworkRegistrationEnabled;
- (BOOL)isUsingDataConnection;
- (BOOL)isUsingVPNConnection;
- (BOOL)isUsingWiFiConnection;
- (void)kickStartSearching;
- (void)markMessageAsRead:(CTSMSMessageRef)read;
- (void)noteSIMUnlockAttempt;
- (id)operatorName;
- (BOOL)outgoingCallExists;
- (void)powerOffRadio;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setIsUsingVPNConnection:(BOOL)connection;
- (void)setIsUsingWiFiConnection:(BOOL)connection;
- (void)setNetworkRegistrationEnabled:(BOOL)enabled;
- (void)setOperatorName:(id)name;
- (BOOL)shouldHangUpOnLock;
- (BOOL)shouldPromptForTTY;
- (void)swapCalls;
- (id)ttyTitle;
- (void)unmute;
- (void)updateAirplaneMode;
- (void)updateCalls;
- (void)updateLocale;
- (void)updateNetworkLocale;
- (void)updatePhoneNumberPrefs;
- (void)updateSMSBadges;
- (void)updateSpringBoard;
- (void)updateTTYIndicator;
- (id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition;
@end

