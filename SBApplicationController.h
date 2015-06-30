/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationRestrictionDataSource.h"
#import "SBLSApplicationLifecycleObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBApplicationController : XXUnknownSuperclass <SBApplicationRestrictionDataSource, SBLSApplicationLifecycleObserver> {
	NSMutableDictionary *_applications;
	NSMutableDictionary *_applicationsByBundleIdentifer;
	NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
	SBApplication *_applicationCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary *_backgroundDisplayDict;
	NSOperationQueue *_backgroundOperationQueue;
	NSLock *_applicationsLock;
	NSMutableDictionary *_systemAppsVisibilityOverrides;
	BOOL _visibilityOverridesAreDirty;
	BKSApplicationStateMonitor *_appStateMonitor;
	BOOL _booting;
	NSMutableSet *_appsToAutoLaunchAfterBoot;
	SBApplicationRestrictionController *_restrictionController;
	SBLSApplicationWorkspaceObserver *_lsWorkspaceObserver;
	NSCountedSet *_pendingRequestedUninstallsBundleID;
}
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (BOOL)_applicationHasBeenModified:(id)modified applicationProxy:(id)proxy;
- (void)_calculateApplicationDiff:(id *)diff removed:(id *)removed applicationProxies:(id)proxies;
- (void)_deviceFirstUnlocked;
- (id)_getLSApplicationProxies;
- (void)_loadApplication:(id)application proxy:(id)proxy;
- (id)_loadApplications:(id)applications removed:(id)removed applicationProxies:(id)proxies;
- (void)_loadApplicationsAndIcons:(id)icons removed:(id)removed applicationProxies:(id)proxies reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons6;
- (void)_lockStateChanged:(id)changed;
- (void)_mediaServerConnectionDied:(id)died;
- (void)_memoryWarningReceived;
- (id)_modifiedApplications:(id)applications applicationProxies:(id)proxies;
- (void)_preLoadApplications;
- (void)_recordingStateChanged:(id)changed;
- (void)_registerForAVSystemControllerNotifications;
- (void)_reloadBackgroundIDsDict;
- (void)_removePendingRequestedUninstalledBundleID:(id)anId;
- (void)_sendInstalledAppsDidChangeNotification:(id)_sendInstalledApps removed:(id)removed modified:(id)modified;
- (void)_setVisibilityOverridesAreDirty:(BOOL)dirty;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_unusuallyMutedAudioPlaying:(id)playing;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)loadedApplications reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons;
- (void)_updateLocationState;
- (id)allApplications;
- (id)allDisplayIdentifiers;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (Class)applicationClassForInfoDictionary:(id)infoDictionary;
- (id)applicationCurrentlyRecordingAudio;
- (id)applicationWithDisplayIdentifier:(id)displayIdentifier;
- (id)applicationWithPid:(int)pid;
- (void)applicationsInstalled:(id)installed;
- (void)applicationsUninstalled:(id)uninstalled;
- (id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
- (id)applicationsWithPid:(int)pid;
- (void)autoLaunchAppsIfNecessaryAfterBoot;
- (void)buildLocationState;
- (id)clockApplication;
- (id)dataActivation;
- (void)dealloc;
- (id)faceTimeApp;
- (id)iPod;
- (BOOL)loadApplication:(id)application;
- (id)loadApplications;
- (void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn;
- (void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables entitlements:(id)entitlements;
- (void)loadWebclipAndIcon:(id)icon;
- (int)locationStatusBarIconType;
- (id)mobilePhone;
- (id)newsstandApps;
- (void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
- (id)restrictionController;
- (id)setupApplication;
- (void)uninstallApplication:(id)application;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)showing hiding:(id *)hiding;
- (void)waitForOperationsToComplete;
- (id)webApplications;
@end

