/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAlarmAlertItem : SBRingingAlertItem {
	Alarm *_alarm;
	BOOL _snoozeAlarm;
}
- (id)initWithAlarm:(id)alarm;
- (id)alarm;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (BOOL)allowsSnooze;
- (void)autoMute;
- (id)avAudioCategory;
- (id)avClientName;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (id)lockLabel;
- (void)setAlarm:(id)alarm;
- (id)soundIdentifier;
- (void)startSnoozingAndDeactivate;
- (void)willDeactivateForReason:(int)reason;
@end

