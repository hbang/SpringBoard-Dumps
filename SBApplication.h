/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDisplay.h"

@class NSDictionary, NSMutableSet, UIRemoteApplication, NSString, NSMutableArray, NSArray, NSTimer, SBCFBundle, SBAppContextHostView;

@interface SBApplication : SBDisplay {
	NSString *_bundleIdentifier;
	NSString *_roleIdentifier;
	NSString *_displayIdentifier;
	NSString *_path;
	NSString *_iconPath;
	NSString *_smallIconPath;
	SBCFBundle *_cachedBundle;
	NSString *_launchdJobLabel;
	int _pid;
	SBApplicationTimes *_times;
	NSString *_displayName;
	NSString *_demoRole;
	NSMutableSet *_statusBarItemSet;
	NSMutableArray *_tags;
	UIRemoteApplication *_remoteApplication;
	SBAppContextHostView *_contextHostView;
	NSDictionary *_seatbeltEnvVars;
	NSString *_signerIdentity;
	unsigned _eventPort;
	unsigned _activationEventSequenceNumber;
	NSTimer *_watchdogTimer;
	unsigned _watchdogType : 4;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _relauchesOnAbnormalExit : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _isRevealable : 1;
	unsigned _uiPrerederedIcon : 1;
	unsigned _uiRequiresPersistentWiFi : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _defaultStatusBarStyle : 8;
	unsigned _defaultInterfaceOrientaton : 8;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _launchAlerts : 8;
	int _jetsamPriority;
	int _ratingRank;
	Class _iconClass;
	NSArray *_customMachServices;
	NSArray *_externalAccessoryProtocols;
}
+ (void)flushLaunchAlertsOfType:(int)type;
+ (id)snapshotsDirectory;
+ (void)userElapsedCPUTime:(double *)time systemElapsedCPUTime:(double *)time2 idleElapsedCPUTime:(double *)time3;
- (id)initWithBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
- (void)_addInternalDebugVariablesToEnvironment;
- (id)_additionalDisplayQualification;
- (void)_cancelAutoRelaunch;
- (void)_cancelWatchdogTimer;
- (void)_clearContextHostView;
- (void)_clearWatchdogAssertions;
- (BOOL)_doesProfileMatchSignerIdentity:(MISProfileRef)identity;
- (id)_expirationDateForProvisioningProfile;
- (void)_hideContextHostView;
- (void)_markWatchdogCPUTimes;
- (void)_purgeRemoteApplication;
- (void)_relaunchAfterAbnormalExit;
- (void)_relaunchAfterAbnormalExit:(BOOL)exit;
- (void)_relaunchNow;
- (void)_resetDataUsage;
- (void)_resetEventPort;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)timeout token:(unsigned)token;
- (void)_sendCurrentDeviceOrientation;
- (void)_setContextHostView:(id)view;
- (void)_setDataUsage:(int)usage;
- (void)_setDoingBackgroundNetworking:(unsigned)networking;
- (BOOL)_signatureNeedsExplicitUserTrust;
- (void)_startWatchdogTimerType:(int)type;
- (void)_unregisterRemoteViewsAndSheets;
- (void)_watchdogAssertExpired:(id)expired;
- (void)_watchdogFired;
- (void)_watchdogFiredFired;
- (void)activate;
- (unsigned)activationEventSequenceNumber;
- (unsigned)addWatchdogAssertionWithTimeout:(double *)timeout;
- (int)applicationSignatureState;
- (double)autoDimTime;
- (double)autoLockTime;
- (id)bundle;
- (id)bundleIdentifier;
- (id)contextHostView;
- (int)dataUsage;
- (void)deactivate;
- (void)deactivated;
- (void)dealloc;
- (id)defaultImage:(BOOL *)image;
- (int)defaultStatusBarMode;
- (int)defaultStatusBarOrientation;
- (id)demoRole;
- (id)displayIdentifier;
- (id)displayName;
- (double)elapsedCPUTime;
- (BOOL)enabled;
- (unsigned)eventPort;
- (void)exitedAbnormally;
- (void)exitedCommon;
- (void)exitedNormally;
- (id)externalAccessoryProtocols;
- (int)failedLaunchCount;
- (void)flushSnapshotsForAllRoles;
- (BOOL)hasMiniAlerts;
- (Class)iconClass;
- (BOOL)isBeingDebugged;
- (BOOL)isDefaultRole;
- (BOOL)isPrerenderedIcon;
- (BOOL)isRevealable;
- (BOOL)isSameExecutableAsApplication:(id)application;
- (BOOL)isSystemApplication;
- (BOOL)isUserRatable;
- (BOOL)isWidgetApplication;
- (unsigned)jetsamPriority;
- (void)kill;
- (BOOL)launch;
- (void)launchFailed;
- (void)launchSucceeded:(BOOL)succeeded;
- (id)launchdJobLabel;
- (void)markApplicationIdentityAsTrusted;
- (void)markLaunchTime;
- (void)noteAddedStatusBarItem:(id)item;
- (void)noteRemovedStatusBarItem:(id)item;
- (id)path;
- (id)pathForIcon;
- (id)pathForSmallIcon;
- (int)pid;
- (void)prepareForUninstallation;
- (BOOL)provisioningProfileValidated;
- (void)purgeBundleCaches;
- (int)ratingRank;
- (BOOL)relaunchesAfterAbnormalExit;
- (id)remoteApplication;
- (void)removeStatusBarItems;
- (void)removeWatchdogAssertionWithToken:(unsigned)token;
- (void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(double *)timeout;
- (void)resetLaunchAlertForType:(int)type;
- (id)roleIdentifier;
- (id)seatbeltEnvironmentVariables;
- (void)setDemoRole:(id)role;
- (void)setDisplayName:(id)name;
- (void)setEnabled:(BOOL)enabled;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setIsDefaultRole:(BOOL)role;
- (void)setLaunchdJobLabel:(id)label;
- (void)setPid:(int)pid;
- (void)setRelaunchesAfterAbnormalExit:(BOOL)exit;
- (void)setRoleIdentifier:(id)identifier;
- (void)setSeatbeltEnvironmentVariables:(id)variables;
- (void)setTags:(id)tags;
- (void)setUseDemoRole:(BOOL)role;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)shouldLaunchPNGless;
- (BOOL)shouldWatchdog;
- (BOOL)showLaunchAlertForType:(int)type;
- (id)signerIdentity;
- (void)startWatchdogTimerForPhoneSlideIfNecessary;
- (id)tags;
- (void)willActivateOtherRole:(id)role;
@end

