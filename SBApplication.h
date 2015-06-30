/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDisplay.h"
#import "SpringBoard-Structs.h"


@interface SBApplication : SBDisplay {
	NSString *_bundleIdentifier;
	NSString *_roleIdentifier;
	NSString *_path;
	NSBundle *_bundle;
	NSDictionary *_infoDictionary;
	NSString *_displayName;
	NSString *_demoRole;
	NSNumber *_dataFlags;
	NSMutableSet *_statusBarItemSet;
	NSMutableArray *_tags;
	UIRemoteApplication *_remoteApplication;
	CFSetRef _launchAlerts;
	NSString *_seatbeltProfilePath;
	NSDictionary *_seatbeltEnvVars;
	NSString *_signerIdentity;
	int _signatureState;
	unsigned _eventPort;
	unsigned _doingBackgroundNetworking;
	unsigned _failedLaunchCount;
	unsigned _memoryWarningCount;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _relauchesOnAbnormalExit : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
}
+ (void)flushLaunchAlertsOfType:(int)type;
+ (void)flushSnapshotsForIdentifier:(id)identifier;
- (id)initWithBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application;
- (void)_addInternalDebugVariablesToEnvironment;
- (id)_additionalDisplayQualification;
- (void)_cancelWatchdogAssertExpiryTimer;
- (void)_cancelWatchdogTimer;
- (void)_relaunchAfterAbnormalExit:(BOOL)exit;
- (void)_relaunchNow;
- (void)_resetDataUsage;
- (void)_resetEventPort;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)timeout token:(unsigned)token;
- (void)_sendCurrentDeviceOrientation;
- (void)_setDataUsage:(unsigned)usage;
- (void)_startDeactivationWatchdogTimer;
- (void)_startLaunchWatchdogTimer;
- (void)_startResumeWatchdogTimer;
- (void)_startTerminationWatchdogTimer;
- (void)_startWatchdogTimerWithTimeInterval:(double)timeInterval selector:(SEL)selector;
- (void)_watchdogAssertExpired:(id)expired;
- (BOOL)activate;
- (unsigned)addWatchdogAssertionWithTimeout:(double *)timeout;
- (int)applicationSignatureState;
- (float)autoDimTime;
- (float)autoLockTime;
- (id)bundle;
- (id)bundleIdentifier;
- (unsigned)dataUsage;
- (BOOL)deactivate;
- (void)deactivated;
- (void)dealloc;
- (int)defaultStatusBarMode;
- (int)defaultStatusBarOrientation;
- (id)demoRole;
- (id)displayIdentifier;
- (id)displayIdentifierWithURLScheme:(BOOL)urlscheme;
- (id)displayName;
- (BOOL)enabled;
- (unsigned)eventPort;
- (void)exitedAbnormally;
- (void)exitedCommon;
- (void)exitedNormally;
- (int)failedLaunchCount;
- (id)infoDictionary;
- (BOOL)isBeingDebugged;
- (BOOL)isDefaultRole;
- (BOOL)isSystemApplication;
- (BOOL)kill;
- (void)launchFailed;
- (void)launchSucceeded;
- (id)launchdJobLabel;
- (void)markApplicationIdentityAsTrusted;
- (unsigned)memoryWarningCount;
- (void)noteAddedStatusBarItem:(id)item;
- (void)noteRemovedStatusBarItem:(id)item;
- (id)path;
- (id)pathForDefaultImage:(BOOL *)defaultImage;
- (id)pathForIcon;
- (int)pid;
- (unsigned)priority;
- (BOOL)relaunchesAfterAbnormalExit;
- (id)remoteApplication;
- (void)removeAppPrefs;
- (void)removeStatusBarItems;
- (void)removeWatchdogAssertionWithToken:(unsigned)token;
- (void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(double *)timeout;
- (void)resetLaunchAlertForType:(int)type;
- (id)roleIdentifier;
- (id)seatbeltEnvironmentVariables;
- (id)seatbeltProfilePath;
- (BOOL)sendActivationEvent:(int)event;
- (void)setApplicationSignatureState:(int)state;
- (void)setDemoRole:(id)role;
- (void)setDisplayName:(id)name;
- (void)setEnabled:(BOOL)enabled;
- (void)setIsDefaultRole:(BOOL)role;
- (void)setLaunchdJobLabel:(id)label;
- (void)setMemoryWarningCount:(unsigned)count;
- (void)setPid:(int)pid;
- (void)setRelaunchesAfterAbnormalExit:(BOOL)exit;
- (void)setRoleIdentifier:(id)identifier;
- (void)setSeatbeltEnvironmentVariables:(id)variables;
- (void)setSeatbeltProfilePath:(id)path;
- (void)setSignerIdentity:(id)identity;
- (void)setTags:(id)tags;
- (void)setUseDemoRole:(BOOL)role;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)shouldLaunchPNGless;
- (BOOL)shouldWatchdog;
- (BOOL)showLaunchAlertForType:(int)type;
- (id)signerIdentity;
- (id)tags;
- (void)watchdogForDeactivate;
- (void)watchdogForLaunch;
- (void)watchdogForResume;
- (void)watchdogForTermination;
@end

