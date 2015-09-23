/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBVODController : NSObject {
	NSMutableArray *_alarms;
	NSMutableSet *_alarmsToFire;
	NSMutableSet *_alarmsToFireWhenMovieEnds;
	NSTimer *_timer;
	NSTimer *_movieTimeoutTimer;
	unsigned _reloadingForBoot : 1;
}
+ (id)sharedInstance;
- (id)init;
- (void)_alarmFired:(id)fired;
- (BOOL)_alarmIsExpired:(id)expired hints:(id)hints;
- (id)_expiredAlarmsPath;
- (void)_movieEndTimeout:(id)timeout;
- (void)_noteExpiredAlarms:(id)alarms;
- (void)_nowPlayingInfoChanged;
- (void)_presentAlarmAlerts:(id)alerts;
- (void)_presentAlarmsHavingFiredSinceDate:(id)date;
- (void)_sanityCheckExpiredAlarms:(id)alarms;
- (void)_scheduleTimer;
- (void)_significantTimeChanged:(id)changed;
- (void)_writeTimeToDefaults;
- (void)alarmDidSanityCheck:(id)alarm;
- (void)dealloc;
- (void)didWakeFromSleep;
- (void)iTunesSyncHasCompleted:(int)completed;
- (void)iTunesSyncRequestedStart;
- (void)reloadAlarms:(BOOL)alarms;
@end

