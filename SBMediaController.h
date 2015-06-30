/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPAVRoutingControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBMediaController : XXUnknownSuperclass <MPAVRoutingControllerDelegate> {
	int _manualVolumeChangeCount;
	NSDictionary *_nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer *_volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _lastNowPlayingAppPID;
	BOOL _lastNowPlayingAppIsPlaying;
	BOOL _suppressHUD;
	BOOL _ringerMuted;
	BOOL _screenSharing;
	BOOL _screenSharingSetsStatusBarOverride;
	NSTimer *_screenSharingStatusBarOverrideTimer;
	NSTimer *_videoOutStatusBarOverrideTimer;
	MPAVRoutingController *_routingController;
	int _nowPlayingProcessPID;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) SBApplication *nowPlayingApplication;
@property(assign, nonatomic) int nowPlayingProcessPID;
@property(assign, nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property(readonly, assign) Class superclass;
@property(assign) BOOL suppressHUD;
+ (BOOL)applicationCanBeConsideredNowPlaying:(id)playing;
+ (void)sendResetPlaybackTimeoutCommand;
+ (id)sharedInstance;
- (id)init;
- (float)_calcButtonRepeatDelay;
- (void)_cancelPendingVolumeChange;
- (void)_changeVolumeBy:(float)by;
- (void)_clearScreenSharingStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (void)_commitVolumeChange:(id)change;
- (void)_externalScreenChanged:(id)changed;
- (void)_nowPlayingAppIsPlayingDidChange;
- (id)_nowPlayingInfo;
- (void)_nowPlayingInfoChanged;
- (void)_nowPlayingPIDChanged;
- (void)_registerForNotifications;
- (BOOL)_sendMediaCommand:(unsigned)command;
- (void)_serverConnectionDied:(id)died;
- (void)_softMuteChanged:(id)changed;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_systemMuteChanged:(id)changed;
- (void)_systemVolumeChanged:(id)changed;
- (void)_unregisterForNotifications;
- (void)_updateAVRoutes;
- (BOOL)addTrackToWishList;
- (BOOL)banTrack;
- (BOOL)beginSeek:(int)seek;
- (void)cancelVolumeEvent;
- (BOOL)changeTrack:(int)track;
- (void)dealloc;
- (void)decreaseVolume;
- (BOOL)endSeek:(int)seek;
- (void)handleVolumeEvent:(IOHIDEventRef)event;
- (BOOL)handsetRouteIsSelected;
- (BOOL)hasTrack;
- (void)increaseVolume;
- (BOOL)isFirstTrack;
- (BOOL)isLastTrack;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (BOOL)isScreenSharing;
- (BOOL)lastSavedRingerMutedState;
- (BOOL)likeTrack;
- (BOOL)muted;
- (id)nameOfPickedRoute;
- (BOOL)pause;
- (BOOL)play;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (void)routingControllerAvailableRoutesDidChange:(id)routingControllerAvailableRoutes;
- (void)setNowPlayingInfo:(id)info;
- (BOOL)setPlaybackSpeed:(int)speed;
- (void)setVolume:(float)volume;
- (BOOL)skipFifteenSeconds:(int)seconds;
- (BOOL)stop;
- (BOOL)togglePlayPause;
- (BOOL)toggleRepeat;
- (BOOL)toggleShuffle;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)updateScreenSharingStatusBarStyleOverrideSuppressionPreference;
- (float)volume;
- (BOOL)volumeControlIsAvailable;
@end

