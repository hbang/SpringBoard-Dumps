/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinBusyClient.h"
#import "BBObserverDelegate.h"


__attribute__((visibility("hidden")))
@interface SBBulletinSoundController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinBusyClient> {
	BBObserver *_observer;
	NSMutableArray *_blockQueue;
	NSMutableDictionary *_playingSounds;
	NSMutableSet *_internalBulletinsWePlayedSoundsFor;
	NSMutableSet *_bulletinsRequiringExplicitKill;
	BOOL _deviceIsLocked;
	BOOL _quietModeEnabled;
	unsigned _quietModeState;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_enqueueBlock:(id)block forBulletin:(id)bulletin;
- (void)_hardwareButtonPressed:(id)pressed;
- (BOOL)_playSoundForBulletin:(id)bulletin playedInternally:(BOOL)internally;
- (BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)bulletin;
- (void)_stopSoundWithID:(id)anId internalOnly:(BOOL)only;
- (void)bulletinWindowStoppedBeingBusy;
- (void)dealloc;
- (BOOL)isPlayingSoundForBulletin:(id)bulletin;
- (void)killSoundForBulletin:(id)bulletin;
- (void)killSounds;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
- (void)observer:(id)observer noteAlertBehaviorOverrideStateChanged:(unsigned)changed;
- (void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (BOOL)playSoundForBulletin:(id)bulletin;
- (BOOL)quietModeEnabled;
- (unsigned)quietModeState;
@end

