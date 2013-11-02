/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBDisplayProtocol.h"
#import "SBScreenObserver.h"
#import "SBWindowContextManagerDelegate.h"
#import "SBSystemLocalNotificationAlertDelegate.h"
#import "SBWindowContextHostManagerDelegate.h"
#import "SBLeafIconDataSource.h"

@class NSHashTable, NSString, NSArray, NSMutableDictionary, SBWindowContextManager, NSTimer, SBActivationContext, NSMapTable, NSMutableSet, NSMutableArray, NSDictionary, NSSet, BKSCFBundle, BKSMachSendRight, NSDate, UIRemoteApplication, PCPersistentTimer, UILocalNotification, BKSProcessAssertion, BKSApplicationDataStore;

__attribute__((visibility("hidden")))
@interface SBApplication : XXUnknownSuperclass <SBScreenObserver, SBWindowContextManagerDelegate, SBSystemLocalNotificationAlertDelegate, SBDisplayProtocol, SBWindowContextHostManagerDelegate, SBLeafIconDataSource> {
	NSString *_bundleIdentifier;
	NSString *_displayIdentifier;
	NSString *_path;
	NSString *_bundleVersion;
	NSMutableDictionary *_defaultImageNamesByScreenType;
	NSDictionary *_defaultImageNamesForOrientation;
	NSArray *_folderNames;
	NSString *_fallbackFolderName;
	NSDictionary *_searchDomainLaunchInfo;
	BKSCFBundle *_cachedBundle;
	BKSMachSendRight *_xpcEventPort;
	int _activationState;
	int _lastExitType;
	double _modificationDate;
	int _pid;
	NSMapTable *_screenToContextHostManager;
	NSMapTable *_defunctScreenToContextHostManager;
	SBWindowContextManager *_contextManager;
	NSString *_displayName;
	NSArray *_tags;
	UIRemoteApplication *_remoteApplication;
	NSString *_sandboxPath;
	NSString *_signerIdentity;
	unsigned _monitoringLocaleAndTimeChanges : 1;
	NSSet *_alertSuppressionContexts;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _isGameCenterEnabled : 1;
	unsigned _wasGameCenterEverEnabled : 1;
	unsigned _supportsAudioBackgroundMode : 1;
	unsigned _supportsLocationBackgroundMode : 1;
	unsigned _supportsVOIPBackgroundMode : 1;
	unsigned _supportsEABackgroundMode : 1;
	unsigned _supportsRemoteNotificationBackgroundMode : 1;
	unsigned _supportsFetchBackgroundMode : 1;
	unsigned _supportsContinuousBackgroundMode : 1;
	unsigned _wantsUnboundedTaskCompletionAssertions : 1;
	unsigned _prefersSavedSnapshots : 1;
	unsigned _suspendingUnsupported;
	unsigned _hasBeenFrontmost : 1;
	unsigned _requiresHiDPI : 1;
	unsigned _disableScreenJail : 1;
	unsigned _supportsPortraitOrientation : 1;
	unsigned _supportsPortraitUpsideDownOrientation : 1;
	unsigned _supportsLandscapeLeftOrientation : 1;
	unsigned _supportsLandscapeRightOrientation : 1;
	unsigned _shouldDisableMallocCorruptionAbort : 1;
	unsigned _terminationAssertions;
	unsigned _terminationAssertionsForCacheCleaning;
	int _supportedTypes;
	int _isClassic;
	BOOL _runningInClassicMode;
	BOOL _calculatedSupportedTypes;
	BOOL _hasViewServiceEntitlement;
	unsigned _defaultStatusBarStyle : 8;
	BOOL _defaultStatusBarHidden;
	BOOL _statusBarIsLegacy;
	int _defaultWallpaperStyle;
	BOOL _canChangeWallpaperStyle;
	unsigned _defaultInterfaceOrientation : 8;
	unsigned _defaultInterfaceOrientationOverride : 8;
	unsigned _interfaceOrientationOverrideSet : 1;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _hasShownDataPlanAlertSinceLock : 1;
	unsigned _launchAlerts : 8;
	unsigned _uninstalled : 1;
	unsigned _isLaunchableDuringSetup : 1;
	unsigned _behavesAsCaller;
	unsigned _wantsPNGlessLaunch : 1;
	unsigned _systemAppSupportsLocalNotifications : 1;
	int _ratingRank;
	Class _iconClass;
	NSArray *_customMachServices;
	NSArray *_externalAccessoryProtocols;
	NSDictionary *_customSpotlightIconPaths;
	NSMutableSet *_requireLocalNotificationsCachingReasons;
	NSArray *_cachedLocalNotifications;
	unsigned _applicationState;
	opaque_pthread_mutex_t _appBundleMutex;
	NSDate *_nextApplicationWakeDate;
	PCPersistentTimer *_applicationWakeTimer;
	PCPersistentTimer *_localNotificationTimer;
	UILocalNotification *_pendingLocalNotification;
	BKSProcessAssertion *_transientProcessAssertion;
	NSTimer *_transientSuspendTimer;
	int _transientAssertionType;
	BKSProcessAssertion *_periodicWakeProcessAssertion;
	NSTimer *_periodicWakeSuspendTimer;
	BKSProcessAssertion *_simpleRemoteActionProcessAssertion;
	int _activationCount;
	double _lastBadgeClearTime;
	NSMapTable *_displayValues;
	NSMapTable *_activationValues;
	NSMapTable *_deactivationValues;
	NSHashTable *_displayFlags;
	NSHashTable *_activationFlags;
	NSHashTable *_deactivationFlags;
	NSMutableSet *_suppressVolumeHudCategories;
	float _accelerometerSampleInterval;
	NSMutableSet *_idleTimerDisabledReasons;
	unsigned _expectsFaceContact : 1;
	unsigned _expectsFaceContactInLandscape : 1;
	unsigned _orientationChangedEventsEnabled : 1;
	unsigned _proximityEventsEnabled : 1;
	unsigned _isBeingDebugged : 1;
	unsigned _isRunning : 1;
	unsigned _isAnimatingActivation : 1;
	unsigned _isAnimatingDeactivation : 1;
	unsigned _showsProgress;
	int _applicationRestorationCheckState;
	float _minimumBrightnessLevel;
	NSArray *_domainsToPreheat;
	int _starkLaunchModes;
	BOOL _starkStatusBarStartsTranslucent;
	NSMutableArray *_activationContextStack;
	NSMutableDictionary *_alertImpersonatorsByWorkspaceType;
	BKSApplicationDataStore *_dataStore;
	NSMutableDictionary *_currentSnoozingLocalNotificationAlerts;
}
@property(copy, nonatomic) SBActivationContext *activationContext;
@property(copy) NSString *displayIdentifier;
@property(readonly, assign, nonatomic) int pid;
@property(retain, nonatomic) BKSMachSendRight *xpcEventPort;
+ (id)_defaultDisplayState;
+ (id)_fallbackOrientationStringForOrientation:(int)orientation fallbackOrientation:(int *)orientation2;
+ (BOOL)activationStateIsTransitory:(int)transitory;
+ (id)appStateKeysToPrefetch;
+ (void *)cachedSnapshotSurfaceForPath:(id)path;
+ (id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
+ (void)initialize;
+ (void)removalTimerFired:(id)fired;
+ (void)removeCachedSnapshotSurface:(void *)surface forPath:(id)path;
+ (void)removeCachedSnapshotSurfaceForPath:(id)path;
+ (void)removeCachedSnapshotsForScreen:(id)screen;
+ (void)removeCachedSnapshotsMatchingPath:(id)path;
+ (void)setCachedSnapshotSurface:(void *)surface forPath:(id)path;
+ (void)setCachedSnapshotSurface:(void *)surface forPath:(id)path purgeAfter:(double)after;
+ (void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier;
+ (void)setRemovalTimer:(double)timer forSnapshotWithPath:(id)path;
+ (BOOL)shouldHaveContextsForActivationState:(int)activationState;
+ (id)systemSnapshotsDirectory;
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated entitlements:(id)entitlements;
- (id)_activationFlags;
- (id)_activationStateToString;
- (id)_activationValues;
- (void)_addContextHostManager:(id)manager;
- (void)_addImageName:(id)name toImageNamesArray:(id)imageNamesArray screen:(id)screen;
- (id)_additionalDisplayQualification;
- (id)_alertImpersonatorForWorkspaceType:(int)workspaceType;
- (id)_allContextHostManagersCreatingForMainScreenIfNecessary;
- (BOOL)_applicationDoesNotHaveRestorationArchive;
- (void)_assignDefaultLaunchImages:(id)images forScreenType:(int)screenType;
- (id)_baseAppSnapshotPath;
- (void)_beginRequireLocalNotificationsCachingWithReason:(id)reason;
- (void)_bumpActivationCountBy:(int)by;
- (id)_cachedImageForSnapshotPath:(id)snapshotPath screen:(id)screen;
- (void)_calculateSupportedTypesFromInfoDictionary:(id)infoDictionary;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (void)_cancelProcessAssertionForSimpleRemoteAction;
- (void)_clearContextHostManagers;
- (void)_clearDefunctScreenHostingForScreen:(id)screen;
- (void)_configureDisplayNameForInfoDictionary:(id)infoDictionary atBundlePath:(id)bundlePath;
- (id)_copyApplicationMetadata;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (id)_deactivationFlags;
- (id)_deactivationValues;
- (id)_defaultImageInfoForScreen:(id)screen launchingOrientation:(int)orientation;
- (id)_defaultImageName:(id)name;
- (id)_defaultPNGForScreen:(id)screen launchingOrientation:(int)orientation orientation:(int *)orientation3;
- (id)_defaultPNGImageInfoForScreen:(id)screen launchingOrientation:(int)orientation;
- (id)_defaultPNGNameFromActivationSettings;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)searchDomainLaunchInfo;
- (id)_defaultPNGNameFromSuspensionSettings;
- (id)_defaultPNGNameUsingFallbacks:(id)fallbacks;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)urlsetting;
- (id)_defaultPNGPathForScreen:(id)screen launchingOrientation:(int)orientation imageOrientation:(int *)orientation3 resultingScale:(float *)scale;
- (void)_deleteSnapshotForScreen:(id)screen name:(id)name;
- (void)_dismissAllSystemLocalNotificationAlerts;
- (id)_displayFlags;
- (id)_displayValues;
- (unsigned)_doingBackgroundNetworking;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_dropTransientProcessAssertion;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)reason;
- (int)_fallbackImageOrientationForLaunchingOrientation:(int)launchingOrientation;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(int)launchingOrientation;
- (void)_fireNotification:(id)notification;
- (BOOL)_hasAnyAlertImpersonator;
- (void)_hideContextsOnDefunctScreen:(id)screen;
- (BOOL)_idleTimerDisabledForAnyReason;
- (id)_imageForSnapshotAtPath:(id)path fileOrientation:(int *)orientation;
- (id)_imageNamesFromInfoDictionary:(id)infoDictionary;
- (void)_imageOrientationParametersForLaunchingOrientation:(int)launchingOrientation imageTag:(id *)tag fallbackImageTag:(id *)tag3 fallbackOrientation:(int *)orientation;
- (BOOL)_infoplist_defaultPNGCalculateContainsCorgiImage;
- (id)_infoplist_defaultPNGPathForScreen:(id)screen launchingOrientation:(int)orientation imageOrientation:(int *)orientation3 resultingScale:(float *)scale;
- (BOOL)_isLocalNotification:(id)notification scheduledToFireAfterDate:(id)fireAfterDate;
- (BOOL)_isNewlyInstalled;
- (BOOL)_isRecentlyUpdated;
- (id)_lastLocalNotificationFireDate;
- (id)_localizedGenreFromDictionary:(id)dictionary;
- (id)_localizedGenreNameForID:(int)anId;
- (void)_lockStateDidChange:(id)_lockState;
- (id)_newFlagTable;
- (id)_newValueTable;
- (void)_noteIconDataSourceDidChange;
- (void)_noteSnapshotDidUpdate;
- (id)_orientationImageTagForLaunchingOrientation:(int)launchingOrientation;
- (id)_pathForExistingImageInCandidates:(id)candidates forScreen:(id)screen launchingOrientation:(int)orientation imageOrientation:(int *)orientation4 resultingScale:(float *)scale;
- (id)_pathIfFileExistsAtPath:(id)path;
- (id)_preferredImagePathByScaleInBundle:(id)bundle resourceName:(id)name ofType:(id)type screen:(id)screen outScale:(float *)scale;
- (id)_preferredImagePathInBundle:(id)bundle baseResourceName:(id)name ofType:(id)type screen:(id)screen outScale:(float *)scale;
- (void)_purgeCachedLocalNotifications;
- (void)_purgeRemoteApplication;
- (void)_removeAlertImpersonator:(id)impersonator;
- (void)_removeContextHostManager:(id)manager;
- (void)_resetDataUsage;
- (double)_resumeDurationForTransientType:(int)transientType;
- (void)_resumeForPeriodicWakeWithReason:(id)reason;
- (id)_sanitizedImageNameFromName:(id)name withExtension:(id)extension actualExtension:(out id *)extension3;
- (void)_saveSnapshotForScreen:(id)screen frame:(CGRect)frame name:(id)name overrideScale:(float)scale;
- (void)_saveSuspendSnapshot:(id)snapshot forScreen:(id)screen;
- (id)_scaleSuffixForScale:(float)scale;
- (id)_scheduledLocalNotifications;
- (CGSize)_screenSizeForScreen:(id)screen;
- (void)_sendDidLaunchNotification:(BOOL)_send;
- (void)_setActivationState:(int)state;
- (void)_setAlertImpersonator:(id)impersonator forWorkspaceType:(int)workspaceType;
- (void)_setAutoLaunchForVoIP:(BOOL)voIP;
- (void)_setDataUsage:(int)usage;
- (void)_setDoingBackgroundNetworking:(unsigned)networking;
- (void)_setHasBeenLaunched;
- (void)_setIsClassic:(BOOL)classic;
- (void)_setLastLocalNotificationFireDate:(id)date;
- (void)_setMonitoringForLocaleAndTimeChanges:(BOOL)localeAndTimeChanges;
- (void)_setPendingLocalNotificationFromBulletin:(id)bulletin;
- (void)_setProcessInfo:(id)info;
- (void)_setRecentlyUpdated:(BOOL)updated;
- (void)_setRunning:(BOOL)running;
- (void)_setScheduledLocalNotifications:(id)notifications;
- (void)_setupLocalNotificationLogging;
- (BOOL)_shouldAutoLaunchForVoIP;
- (BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)install;
- (BOOL)_shouldAutoRelaunchForEA;
- (BOOL)_shouldUseSnapshotForAppLaunchIfPossible;
- (id)_snapshotCreationDeletionQueueForScreen:(id)screen;
- (id)_snapshotImageForSnapshotImageInfo:(id)snapshotImageInfo originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation3;
- (id)_snapshotImageInfoForScreen:(id)screen launchingOrientation:(int)orientation;
- (id)_snapshotImageInfoForScreen:(id)screen named:(id)named launchingOrientation:(int)orientation;
- (id)_snapshotImageWithImageName:(id)imageName forScreen:(id)screen launchingOrientation:(int)orientation originalOrientation:(int *)orientation4 currentOrientation:(int *)orientation5;
- (id)_sortedLaunchImagesForMainScreen:(id)mainScreen bundle:(id)bundle;
- (id)_stringForActivationState:(int)activationState;
- (id)_stringForApplicationState:(unsigned)applicationState;
- (void)_suspendForPeriodicWakeTimerFired:(id)periodicWakeTimerFired;
- (void)_terminationAssertionAddedWithReason:(unsigned char)reason;
- (void)_terminationAssertionRemovedWithReason:(unsigned char)reason;
- (id)_transientIdentifier;
- (void)_transientResumeForType:(int)type;
- (void)_transientSuspendForTimerFired:(id)timerFired;
- (void)_unregisterRemoteViewsAndSheets;
- (void)_updateApplicationWakeTimers;
- (void)_updateLocalNotificationTimers;
- (void)_updateOrientationForActivationIfNecessary;
- (void)_updateRecentlyUpdatedTimer;
- (double)accelerometerSampleInterval;
- (void)activate;
- (BOOL)activationFlag:(unsigned)flag;
- (id)activationSettings;
- (id)activationSettingsDescription;
- (int)activationState;
- (id)activationValue:(unsigned)value;
- (id)alertSuppressionContexts;
- (BOOL)allowsEventOnlySuspension;
- (id)appSnapshotPathForScreen:(id)screen;
- (id)applicationNextWakeDate;
- (int)applicationSignatureState;
- (unsigned)applicationState;
- (double)autoDimTime;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)install;
- (double)autoLockTime;
- (BOOL)badgeHasBeenSetLocally;
- (id)badgeNumberOrString;
- (BOOL)behavesLikePhone;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)cachedSnapshotForImageInfo:(id)imageInfo originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation3;
- (BOOL)canAccessScreen:(id)screen;
- (void)cancelLocalNotification:(id)notification;
- (BOOL)classicAppRequiresHiDPI;
- (BOOL)classicAppZoomedIn;
- (BOOL)classicAppZoomedInOrRequiresHiDPI;
- (BOOL)classicDefaultStatusBarHidden;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearDisplaySettings;
- (id)containerPath;
- (id)contextHostManagerForScreen:(id)screen;
- (id)contextManagerCreatingIfNecessary:(BOOL)necessary;
- (id)copyWithZone:(NSZone *)zone;
- (id)customSpotlightIconPathsForKey:(id)key;
- (int)dataUsage;
- (void)deactivate;
- (BOOL)deactivationFlag:(unsigned)flag;
- (id)deactivationSettings;
- (id)deactivationSettingsDescription;
- (id)deactivationValue:(unsigned)value;
- (void)dealloc;
- (id)defaultImageForScreen:(id)screen snapshot:(BOOL *)snapshot originalOrientation:(int *)orientation currentOrientation:(int *)orientation4 canUseIOSurface:(BOOL)surface;
- (id)defaultImagePathForSnapshotWithName:(id)name screen:(id)screen;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (id)description;
- (id)descriptionForActivationSetting:(unsigned)activationSetting;
- (id)descriptionForDeactivationSetting:(unsigned)deactivationSetting;
- (id)descriptionForDisplaySetting:(unsigned)displaySetting;
- (void)didActivate;
- (void)didAnimateActivation;
- (void)didAnimateActivationOnStarkScreenController:(id)controller;
- (void)didAnimateDeactivation;
- (void)didAnimateDeactivationOnStarkScreenController:(id)controller;
- (void)didBeginLaunch:(id)launch;
- (void)didDeactivateForEventsOnly:(BOOL)eventsOnly;
- (void)didExitWithInfo:(id)info type:(int)type;
- (void)didFailToActivate;
- (void)didLaunch:(id)launch;
- (void)didSuspend;
- (BOOL)displayFlag:(unsigned)flag;
- (id)displayName;
- (id)displaySettingsDescription;
- (id)displayValue:(unsigned)value;
- (id)domainsToPreheat;
- (int)effectiveStatusBarStyle;
- (id)effectiveStatusBarStyleRequest;
- (BOOL)enabled;
- (unsigned)eventPort;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (id)fileSnapshotForImageInfo:(id)imageInfo originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation3;
- (void)finishedBackgroundContentFetchingWithInfo:(id)info;
- (void)flushSnapshotsForAllScreens;
- (void)flushSnapshotsForScreen:(id)screen;
- (id)folderNames;
- (id)getPendingLocalNotification;
- (BOOL)hasBeenFrontmost;
- (BOOL)hasGameCenterData;
- (BOOL)hasMiniAlerts;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (BOOL)hasStartedLaunching;
- (void)hostContextsOnScreen:(id)screen forRequester:(id)requester;
- (id)icon:(id)icon defaultImageWithFormat:(int)format;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)icon:(id)icon launchFromLocation:(int)location;
- (int)iconAccessoryType:(id)type;
- (BOOL)iconAllowsLaunch:(id)launch;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconAppearsInNewsstand:(id)newsstand;
- (id)iconBadgeNumberOrString:(id)string;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (Class)iconClass;
- (BOOL)iconCompleteUninstall:(id)uninstall;
- (id)iconDisplayName:(id)name;
- (id)iconFormattedAccessoryString:(id)string;
- (BOOL)iconIsRecentlyUpdated:(id)updated;
- (unsigned)iconPriority:(id)priority;
- (BOOL)iconProgressIsPaused:(id)paused;
- (float)iconProgressPercent:(id)percent;
- (int)iconProgressState:(id)state;
- (id)idleTimerDisabledReasons;
- (int)interfaceOrientationForScreen:(id)screen;
- (BOOL)isActivating;
- (BOOL)isAnyTerminationAssertionHeld;
- (BOOL)isBeingDebugged;
- (BOOL)isCacheCleaningTerminationAssertionHeld;
- (BOOL)isClassic;
- (BOOL)isFaceTime;
- (BOOL)isInternalApplication;
- (BOOL)isLaunchableDuringSetup;
- (BOOL)isMobilePhone;
- (BOOL)isNewsstandApplication;
- (BOOL)isNowRecordingApplication;
- (BOOL)isRecordingAudio;
- (BOOL)isRunning;
- (BOOL)isSameExecutableAsApplication:(id)application;
- (BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)launchingInterfaceOrientation;
- (BOOL)isSystemApplication;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isTranslucent;
- (BOOL)isWebApplication;
- (double)lastBadgeClearTime;
- (id)launchSettings;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)launchingInterfaceOrientationForOrientation:(int)orientation;
- (void)localNotificationTimerFired;
- (id)loggingIdentifier;
- (id)mainScreenContextHostManager;
- (void)markApplicationIdentityAsTrusted;
- (void)markNewlyInstalled;
- (void)markRecentlyUpdated;
- (void)markUserLaunchInitiationTime;
- (float)minimumBrightnessLevel;
- (double)modificationDate;
- (void)noteBadgeSetLocally;
- (void)noteDidOpenURL:(id)note;
- (void)notifyResignActiveForReason:(int)reason;
- (void)notifyResumeActiveForReason:(int)reason;
- (BOOL)orientationChangedEventsEnabled;
- (void)overrideDefaultInterfaceOrientation:(int)orientation;
- (id)path;
- (void)popActivationContext;
- (id)preferenceDomain;
- (void)prepareForUninstallation;
- (BOOL)provisioningProfileValidated;
- (BOOL)proximityEventsEnabled;
- (void)purgeAllCaches;
- (void)purgeBundleCaches;
- (void)pushActivationContext;
- (int)ratingRank;
- (id)remoteApplication;
- (void)removeDefaultInterfaceOrientationOverride;
- (void)resetLaunchAlertForType:(int)type;
- (void)resumeForContentAvailable;
- (void)resumeToQuit;
- (id)sandboxPath;
- (void)scheduleLocalNotifications:(id)notifications replaceExistingNotifications:(BOOL)notifications2;
- (id)scheduledLocalNotifications;
- (void)screenManager:(id)manager didChangeSuppressionOfScreen:(id)screen;
- (void)screenManager:(id)manager didDisconnectScreen:(id)screen;
- (void)screenManager:(id)manager didReconnectScreen:(id)screen;
- (void)sendSimpleRemoteAction:(int)action;
- (void)setAccelerometerSampleInterval:(double)interval;
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setActivationSetting:(unsigned)setting value:(id)value;
- (void)setAlertSuppressionContexts:(id)contexts;
- (void)setApplicationNextWakeDate:(id)date;
- (void)setApplicationState:(unsigned)state;
- (void)setBadge:(id)badge;
- (void)setBeingDebugged:(BOOL)debugged;
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;
- (void)setDisplayName:(id)name;
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDisplaySetting:(unsigned)setting value:(id)value;
- (void)setEnabled:(BOOL)enabled;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
- (void)setHasBeenFrontmost:(BOOL)frontmost;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)lock;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (void)setNowPlayingWithAudio:(BOOL)audio;
- (void)setOrientationChangedEventsEnabled:(BOOL)enabled;
- (void)setProcessInfo:(id)info;
- (void)setProximityEventsEnabled:(BOOL)enabled;
- (void)setRunning:(BOOL)running;
- (void)setSandboxPath:(id)path;
- (void)setShowsProgress:(BOOL)progress;
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
- (void)setTags:(id)tags;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)setWallpaperStyleForBackgroundStyle:(int)backgroundStyle;
- (BOOL)shouldAutoLaunchOnBootOrInstall;
- (BOOL)shouldAutoRelaunchAfterExit;
- (BOOL)shouldLaunchPNGless;
- (BOOL)showLaunchAlertForType:(int)type;
- (BOOL)showSystemVolumeHUDForCategory:(id)category;
- (BOOL)showsProgress;
- (id)signerIdentity;
- (id)snapshotImageInfosWithImageName:(id)imageName forScreen:(id)screen launchingOrientation:(int)orientation;
- (void)spdResumeForTrafficRequested;
- (int)starkStatusBarStyle;
- (id)statusBarEffectiveStyleRequestWithStyleOverrides:(int)styleOverrides;
- (BOOL)statusBarHidden;
- (int)statusBarOrientation;
- (int)statusBarStyle;
- (id)statusBarStyleRequest;
- (BOOL)supportsApplicationType:(int)type;
- (BOOL)supportsAudioBackgroundMode;
- (BOOL)supportsContinuousBackgroundMode;
- (BOOL)supportsEABackgroundMode;
- (BOOL)supportsFetchBackgroundMode;
- (BOOL)supportsLocalNotifications;
- (BOOL)supportsLocationBackgroundMode;
- (BOOL)supportsRemoteNotificationBackgroundMode;
- (BOOL)supportsStarkFullScreen;
- (BOOL)supportsStarkGateKeeper;
- (BOOL)supportsVOIPBackgroundMode;
- (BOOL)suppressesBanners;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)suspendingUnsupported;
- (void)systemLocalNotificationAlertShouldLaunch:(id)systemLocalNotificationAlert;
- (void)systemLocalNotificationAlertShouldSnooze:(id)systemLocalNotificationAlert;
- (id)tags;
- (void)takeAssertionWithTimeoutForSimpleRemoteAction;
- (id)urlScheme;
- (BOOL)usesLocalNotifications;
- (void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB *)entitlements;
- (void)wakeTimerFired;
- (int)wallpaperStyle;
- (BOOL)wantsUnboundedTaskCompletionAssertions;
- (id)webClip;
- (void)willActivate;
- (void)willAnimateActivation;
- (void)willAnimateActivationOnStarkScreenController:(id)controller;
- (void)willAnimateDeactivation:(BOOL)deactivation;
- (void)willAnimateDeactivationOnStarkScreenController:(id)controller;
- (void)willDeactivateForEventsOnly:(BOOL)eventsOnly;
- (void)windowContextManager:(id)manager didStopTrackingContextsForScreen:(id)screen;
- (BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
- (void)windowContextManager:(id)manager willStartTrackingContextsForScreen:(id)screen;
@end

