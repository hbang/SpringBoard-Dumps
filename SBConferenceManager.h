/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBConferenceManager : NSObject <CNFSoundPlayerDelegateProtocol> {
	CNFConferenceController *_conferenceController;
	SBVideoAlert *_currentVideoAlert;
	unsigned _avState;
	NSDate *_conferenceStartedDate;
	CNFAudioPlayer *_player;
}
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController *conferenceController;
@property(readonly, assign) SBVideoAlert *currentVideoAlert;
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)_conferenceStateChanged:(id)changed;
- (void)_handleInvitation:(id)invitation;
- (void)_handleMissedInvitation:(id)invitation;
- (void)_updateStatusBar;
- (void)alertHasBeenHandled;
- (void)answerIncomingConference;
- (void)audioPlayerDidStopPlaying:(id)audioPlayer;
- (void)dealloc;
- (void)declineIncomingConference;
- (id)durationString;
- (void)endConference;
- (BOOL)inConference;
- (void)playSound:(int)sound numOfLoops:(int)loops pauseDuration:(float)duration;
- (void)stopAudioPlayer;
- (void)updateStatusBar;
- (BOOL)videoConferenceInvitationExists;
@end
