/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBApplication : SBDisplay <SBRemoteLocalNotificationAlertDelegate> {
	NSString *_bundleIdentifier;
	NSString *_roleIdentifier;
	NSString *_displayIdentifier;
	NSString *_path;
	NSString *_bundleVersion;
	NSString *_longDisplayName;
	NSString *_defaultImageName;
	NSString *_author;
	NSArray *_folderNames;
	NSString *_fallbackFolderName;
	NSDictionary *_searchDomainLaunchInfo;
	SBCFBundle *_cachedBundle;
	SBProcess *_process;
	id _processObserver;
	SBProcessAssertion *_resumeProcessAssertion;
	SBProcessAssertion *_suspendingProcessAssertion;
	double _modificationDate;
	NSString *_displayName;
	NSMutableArray *_tags;
	UIRemoteApplication *_remoteApplication;
	SBAppContextHostView *_contextHostView;
	NSDictionary *_seatbeltEnvVars;
	NSString *_signerIdentity;
	unsigned _activationEventSequenceNumber;
	NSTimer *_watchdogTimer;
	double _userLaunchEventTime;
	unsigned _monitoringLocaleAndTimeChanges : 1;
	unsigned _watchdogType : 4;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _lastExitWasAbnormal : 1;
	unsigned _switcherManagedHostView : 1;
	unsigned _suspendedEventsOnly : 1;
	unsigned _usingLocation : 1;
	unsigned _roleDisallowsLocationBadge : 1;
	unsigned _deactivatingForForcedExit : 1;
	unsigned _isUnsupportediBooks : 1;
	unsigned _isRevealable : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _isClassic : 1;
	unsigned _isGameCenterEnabled : 1;
	unsigned _wasGameCenterEverEnabled : 1;
	unsigned _backgroundContinuationEnabled : 1;
	unsigned _backgroundContinuationEnabledValid : 1;
	unsigned _supportsAudioBackgroundMode : 1;
	unsigned _supportsLocationBackgroundMode : 1;
	unsigned _supportsVOIPBackgroundMode : 1;
	unsigned _supportsPushResumptionBackgroundMode : 1;
	unsigned _supportsContinuousBackgroundMode : 1;
	unsigned _wantsUnboundedTaskCompletionAssertions : 1;
	unsigned _prefersSavedSnapshots : 1;
	unsigned _hasBeenFrontmost : 1;
	unsigned _requiresHiDPI : 1;
	unsigned _hasWatchdogAssertions : 1;
	unsigned _supportsPortraitOrientation : 1;
	unsigned _supportsPortraitUpsideDownOrientation : 1;
	unsigned _supportsLandscapeLeftOrientation : 1;
	unsigned _supportsLandscapeRightOrientation : 1;
	unsigned _installationAssertionCount : 8;
	unsigned _defaultStatusBarStyle : 8;
	BOOL _defaultStatusBarHidden;
	unsigned _defaultInterfaceOrientation : 8;
	unsigned _defaultInterfaceOrientationOverride : 8;
	unsigned _interfaceOrientationOverrideSet : 1;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _hasShownDataPlanAlertSinceLock : 1;
	unsigned _launchAlerts : 8;
	unsigned _suspendType : 8;
	unsigned _uninstalled : 1;
	int _preferredBackgroundJetsamPriority;
	int _ratingRank;
	Class _iconClass;
	NSArray *_customMachServices;
	NSArray *_externalAccessoryProtocols;
	NSDictionary *_customSpotlightIconPaths;
	NSArray *_cachedLocalNotifications;
	NSTimer *_terminateIfRunningTimer;
	unsigned _cachedApplicationState;
	opaque_pthread_mutex_t _appStateMutex;
	NSDate *_nextApplicationWakeDate;
	PCPersistentTimer *_applicationWakeTimer;
	PCPersistentTimer *_localNotificationTimer;
	UILocalNotification *_pendingLocalNotification;
	SBProcessAssertion *_transientProcessAssertion;
	NSTimer *_transientSuspendTimer;
	int _transientAssertionType;
	SBProcessAssertion *_periodicWakeProcessAssertion;
	NSTimer *_periodicWakeSuspendTimer;
	SBProcessAssertion *_continuousBackgroundProcessAssertion;
	SBProcessAssertion *_simpleRemoteActionProcessAssertion;
}
@property(retain, nonatomic) SBProcess *process;
@property(assign, getter=isUsingLocation) BOOL usingLocation;
+ (BOOL)allowAllInBackground;
+ (void)flushLaunchAlertsOfType:(int)type;
+ (id)systemSnapshotsDirectory;
- (id)initWithBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
- (void)_addInternalDebugVariablesToEnvironment;
- (id)_additionalDisplayQualification;
- (void)_cancelAutoRelaunch;
- (void)_cancelProcessAssertionForSimpleRemoteAction;
- (void)_cancelWatchdogTimer;
- (void)_clearContextHostView;
- (void)_clearWatchdogAssertions;
- (id)_copyApplicationMetadata;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (id)_currentDefaultPNGName;
- (id)_defaultImagePathInBundle:(id)bundle baseResourceName:(id)name ofType:(id)type scale:(float *)scale;
- (void)_dismissAllLocalNotificationAlerts;
- (BOOL)_doesProfileMatchSignerIdentity:(MISProfileRef)identity;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_dropResumeProcessAssertion;
- (void)_dropSuspendingProcessAssertion;
- (void)_dropTransientProcessAssertion;
- (id)_expirationDateForProvisioningProfile;
- (void)_fireNotification:(id)notification;
- (id)_lastLocalNotificationFireDate;
- (id)_localizedGenreFromDictionary:(id)dictionary;
- (id)_localizedGenreNameForID:(int)anId;
- (id)_pathIfFileExistsAtPath:(id)path;
- (void)_purgeRemoteApplication;
- (void)_relaunchAfterExitIfNecessary;
- (void)_resetDataUsage;
- (double)_resumeDurationForTransientType:(int)transientType;
- (void)_resumeForPeriodicWakeWithReason:(id)reason;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)timeout token:(unsigned)token;
- (id)_scheduledLocalNotifications;
- (void)_sendApplicationStateChangedNotification:(unsigned)notification;
- (void)_setAutoLaunchForVoIP:(BOOL)voIP;
- (void)_setContextHostView:(id)view;
- (void)_setDataUsage:(int)usage;
- (void)_setDoingBackgroundNetworking:(unsigned)networking;
- (void)_setLastLocalNotificationFireDate:(id)date;
- (void)_setMonitoringForLocaleAndTimeChanges:(BOOL)localeAndTimeChanges;
- (void)_setScheduledLocalNotifications:(id)notifications;
- (BOOL)_shouldAutoLaunchForVoIP;
- (BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)install;
- (BOOL)_signatureNeedsExplicitUserTrust;
- (void)_startWatchdogTimerType:(int)type;
- (void)_suspendForPeriodicWakeTimerFired:(id)periodicWakeTimerFired;
- (void)_takeResumeProcessAssertion;
- (void)_takeSuspendingProcessAssertion;
- (id)_transientIdentifier;
- (void)_transientResumeForType:(int)type;
- (void)_transientSuspendForTimerFired:(id)timerFired;
- (void)_unregisterRemoteViewsAndSheets;
- (void)_updateApplicationWakeTimers;
- (void)_updateCachedApplicationState;
- (void)_updateLocalNotificationTimers;
- (void)_watchdogAssertExpired:(id)expired;
- (void)_watchdogFired;
- (void)_watchdogFiredFired;
- (void)activate;
- (unsigned)activationEventSequenceNumber;
- (unsigned)addWatchdogAssertionWithTimeout:(double *)timeout;
- (id)appSnapshotDirectoryWithoutDisplayIdentifier;
- (id)appSnapshotPath;
- (id)applicationNextWakeDate;
- (int)applicationSignatureState;
- (unsigned)applicationState;
- (id)author;
- (double)autoDimTime;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)install;
- (double)autoLockTime;
- (BOOL)backgroundContinuationAvailable;
- (BOOL)backgroundContinuationEnabled;
- (BOOL)backgroundContinuationSupported;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (unsigned)cachedApplicationState;
- (void)cancelLocalNotification:(id)notification;
- (BOOL)classicAppRequiresHiDPI;
- (BOOL)classicAppZoomedIn;
- (BOOL)classicAppZoomedInOrRequiresHiDPI;
- (BOOL)classicDefaultStatusBarHidden;
- (id)contextHostView;
- (id)customSpotlightIconPathsForKey:(id)key;
- (int)dataUsage;
- (void)deactivate;
- (void)deactivated;
- (void)dealloc;
- (void)decrementInstallationAssertionCount;
- (id)defaultImage:(BOOL *)image;
- (id)defaultImage:(BOOL *)image preferredScale:(float)scale originalOrientation:(int *)orientation currentOrientation:(int *)orientation4;
- (id)defaultImage:(BOOL *)image preferredScale:(float)scale originalOrientation:(int *)orientation currentOrientation:(int *)orientation4 canUseIOSurface:(BOOL)surface;
- (id)defaultImage:(BOOL *)image preferredScale:(float)scale originalOrientation:(int *)orientation currentOrientation:(int *)orientation4 launchingInterfaceOrientation:(int)orientation5 canUseIOSurface:(BOOL)surface;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (id)displayIdentifier;
- (id)displayName;
- (int)effectiveBackgroundJetsamPriority;
- (BOOL)enabled;
- (void)exitedAbnormally;
- (void)exitedCommon;
- (void)exitedNormally;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (void)flushSnapshotsForAllRoles:(BOOL)allRoles;
- (id)folderNames;
- (id)getPendingLocalNotification;
- (BOOL)hasBeenFrontmost;
- (BOOL)hasGameCenterData;
- (BOOL)hasMiniAlerts;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (void)hideContextHostView;
- (Class)iconClass;
- (void)incrementInstallationAssertionCount;
- (BOOL)isClassic;
- (BOOL)isDefaultRole;
- (BOOL)isInstallationAssertionHeld;
- (BOOL)isNowRecordingApplication;
- (BOOL)isRevealable;
- (BOOL)isSameExecutableAsApplication:(id)application;
- (BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)launchingInterfaceOrientation;
- (BOOL)isSystemApplication;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isUnsupportediBooks;
- (BOOL)isUserRatable;
- (BOOL)isWidgetApplication;
- (void)kill;
- (void)launch;
- (void)launchSucceeded:(BOOL)succeeded;
- (id)launchdJobLabel;
- (int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
- (void)localNotificationTimerFired;
- (id)loggingIdentifier;
- (id)longDisplayName;
- (void)markApplicationIdentityAsTrusted;
- (void)markUserLaunchInitiationTime;
- (double)modificationDate;
- (void)notifyOfImminentProcessAssertionExpiration;
- (void)notifyOfTaskResume;
- (void)notifyTaskSwitcherEntered:(BOOL)entered;
- (void)overrideDefaultInterfaceOrientation:(int)orientation;
- (id)path;
- (int)preferredBackgroundJetsamPriority;
- (void)prepareForUninstallation;
- (BOOL)provisioningProfileValidated;
- (void)purgeBundleCaches;
- (int)ratingRank;
- (id)remoteApplication;
- (void)remoteLocalNotificationAlertShouldLaunch:(id)remoteLocalNotificationAlert forApplication:(id)application;
- (void)remoteLocalNotificationAlertShouldSnooze:(id)remoteLocalNotificationAlert forApplication:(id)application;
- (void)removeDefaultInterfaceOrientationOverride;
- (void)removeWatchdogAssertionWithToken:(unsigned)token;
- (void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(double *)timeout;
- (void)resetLaunchAlertForType:(int)type;
- (void)resetSuspendSettings;
- (void)resumeToQuit;
- (id)roleIdentifier;
- (id)sandboxPath;
- (void)scheduleLocalNotifications:(id)notifications replaceExistingNotifications:(BOOL)notifications2;
- (id)scheduledLocalNotifications;
- (id)seatbeltEnvironmentVariables;
- (void)sendOpenURL:(id)url;
- (void)sendSimpleRemoteAction:(int)action;
- (void)setApplicationNextWakeDate:(id)date;
- (void)setBackgroundContinuationEnabled:(BOOL)enabled;
- (void)setDisplayName:(id)name;
- (void)setEnabled:(BOOL)enabled;
- (void)setHasBeenFrontmost:(BOOL)frontmost;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)lock;
- (void)setIsDefaultRole:(BOOL)role;
- (void)setIsUnsupportediBooks:(BOOL)books;
- (void)setNowPlayingWithAudio:(BOOL)audio;
- (void)setSeatbeltEnvironmentVariables:(id)variables;
- (void)setSuspendType:(int)type;
- (void)setSwitcherManagedHostView:(BOOL)view;
- (void)setTags:(id)tags;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)shouldLaunchPNGless;
- (BOOL)showLaunchAlertForType:(int)type;
- (id)signerIdentity;
- (void)spdResumeForTrafficRequested;
- (void)startWatchdogTimerForPhoneSlideIfNecessary;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (BOOL)supportsAudioBackgroundMode;
- (BOOL)supportsContinuousBackgroundMode;
- (BOOL)supportsLocationBackgroundMode;
- (BOOL)supportsPushResumptionBackgroundMode;
- (BOOL)supportsVOIPBackgroundMode;
- (BOOL)suspendedEventsOnly;
- (int)suspensionType;
- (BOOL)switcherManagedHostView;
- (id)tags;
- (void)takeAssertionWithTimeoutForSimpleRemoteAction;
- (void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB *)entitlements;
- (void)wakeTimerFired;
- (BOOL)wantsUnboundedTaskCompletionAssertions;
- (void)willActivateOtherRole:(id)role;
@end

