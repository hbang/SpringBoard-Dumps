/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBApplicationController : NSObject {
	NSMutableDictionary *_applications;
	SBApplication *_springBoard;
	BOOL _logChanges;
	unsigned _ignoreInstallationEventCount;
	BOOL _uninstallationThreadRunning;
	NSLock *_uninstallationLock;
	NSMutableArray *_uninstallationQueue;
}
@property(assign) unsigned ignoreInstallationEventCount;
+ (id)sharedInstance;
- (id)init;
- (void)_applicationInstallationCallback;
- (id)_dequeueApplicationToUninstall;
- (void)_enqueueApplicationToUninstall:(id)uninstall;
- (void)_uninstallApplicationsThread;
- (void)_uninstallationThreadFinished;
- (id)allApplications;
- (id)allDisplayIdentifiers:(BOOL)identifiers;
- (id)applicationWithDisplayIdentifier:(id)displayIdentifier;
- (id)applicationWithPid:(int)pid;
- (id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (id)displayNameForRoleDefinition:(id)roleDefinition inBundle:(id)bundle infoDictionary:(id)dictionary;
- (id)iPod;
- (void)loadApplications:(BOOL)applications;
- (void)loadApplicationsWithPath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity seatbeltProfilePath:(id)path5 seatbeltEnvironmentVariables:(id)variables;
- (id)rolesForInfoPlist:(id)infoPlist;
- (id)rolesForRoleDefinitions:(id)roleDefinitions;
- (void)setAppsUseDemoRole:(BOOL)role;
- (id)springBoard;
- (void)uninstallApplication:(id)application;
- (void)updateSchemesForRoleDefinition:(id)roleDefinition displayIdentifier:(id)identifier application:(id)application;
@end

