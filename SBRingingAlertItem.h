/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBRingingAlertItem : SBAlertItem {
	AVController *_avController;
	NSTimer *_autoMuteTimer;
}
- (void)_autoMute:(id)mute;
- (id)_avController;
- (void)_stopAutoMuteTimer;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)autoMute;
- (id)avAudioCategory;
- (id)avClientName;
- (id)avClientPriority;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (float)lockLabelFontSize;
- (BOOL)shouldShowInEmergencyCall;
- (id)soundIdentifier;
- (void)startRingingAndVibrating;
- (void)stopRingingAndVibrating;
- (void)willDeactivateForReason:(int)reason;
- (void)willPresentAlertSheet:(id)sheet;
@end

