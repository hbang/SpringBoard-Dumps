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
	unsigned _endedReason;
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
- (BOOL)canStartConference;
- (void)dealloc;
- (void)declineIncomingConference;
- (id)durationString;
- (void)endConference;
- (BOOL)inConference;
- (BOOL)invitationIsFaceTimeUpgrade;
- (void)playSound:(int)sound numOfLoops:(int)loops pauseDuration:(float)duration;
- (BOOL)shouldCreateMissedFaceTimeCall;
- (void)stopAudioPlayer;
- (void)updateStatusBar;
- (BOOL)videoConferenceInvitationExists;
@end

