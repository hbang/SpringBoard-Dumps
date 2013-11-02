/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSDictionary;

@interface SBPlatformController : XXUnknownSuperclass {
	NSString *_currentConfigurationName;
	NSMutableDictionary *_currentConfiguration;
	NSMutableDictionary *_currentCapabilities;
	NSMutableDictionary *_regionalOverrideSoftwareBehaviors;
	NSDictionary *_discoveredCapabilities;
	int _currentLockdownState;
	BOOL _saveLocalePostActivation;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addIconListIdentifiers:(id)identifiers toSet:(id)set;
- (id)_copyConfigInfoWithName:(id)name;
- (id)_copyDefaultConfigInfo;
- (void)_iCloudRestoreDidEnd;
- (void)addCapabilities:(id)capabilities resetCapabilites:(id)capabilites;
- (void)addTelephonyCapabilitiesAndPost:(BOOL)post;
- (BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
- (BOOL)allowYouTube;
- (BOOL)allowYouTubePlugin;
- (BOOL)canDisplayHomescreenWallpaper;
- (BOOL)capabililtyOverrideEnabledByPreference:(id)preference;
- (id)currentConfigurationName;
- (CFBooleanRef)currentITunesStoreCapability;
- (void)dealloc;
- (id)defaultDisplayIdentifiers;
- (id)defaultInfoForCapability:(id)capability;
- (void)discoverCurrentConfiguration;
- (id)enabledCapabilities;
- (id)hardwareInfoForCapability:(id)capability;
- (BOOL)hasCapability:(id)capability;
- (BOOL)hasRestriction:(id)restriction;
- (id)iconState;
- (id)infoForCapability:(id)capability;
- (BOOL)isCarrierInstall;
- (BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
- (BOOL)isInternalInstall;
- (void)localeChanged;
- (id)localizedPlatformName;
- (void)lockdownStateChanged;
- (BOOL)matchesPlatforms:(id)platforms;
- (void)noteCapabilityOverrideMightHaveChanged:(id)changed setByPreference:(id)preference;
- (void)noteCapabilityOverridesMightHaveChanged;
- (void)noteConfigurationChangedWithKeys:(id)keys;
- (void)noteDeveloperDeviceStateMightHaveChanged;
- (void)noteITunesStoreCapabilityChanged;
- (id)platformName;
- (void)postCurrentConfiguration;
- (id)regionalOverrideSoftwareBehaviorForKey:(id)key;
- (void)resetDefaultSoftwareBehaviorsAndPost:(BOOL)post;
- (void)setOriginalRegionFormatCountryCodeAndResetSoftwareBehaviorsIfNecessary;
- (void)setSoftwareBehavior:(id)behavior forKey:(id)key;
- (void)setValue:(id)value forCapability:(id)capability;
- (id)systemBuildVersion;
@end

