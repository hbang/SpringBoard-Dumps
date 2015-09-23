/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBRemoteLocalNotificationAlert : SBAlertItem {
	id<SBRemoteLocalNotificationAlertDelegate> _delegate;
	SBApplication *_app;
	NSString *_body;
	NSString *_actionLabel;
	NSString *_customLockLabel;
	NSString *_alertLaunchImage;
	BOOL _showActionButton;
	BOOL _hideTitle;
	BOOL _allowSnooze;
	NSTimer *_ringtoneAutoMuteTimer;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	id _context;
}
@property(retain, nonatomic) NSString *alertLaunchImage;
@property(assign, nonatomic) BOOL allowSnooze;
@property(retain, nonatomic) id context;
@property(retain, nonatomic) NSString *customLockLabel;
@property(assign, nonatomic) id<SBRemoteLocalNotificationAlertDelegate> delegate;
@property(assign, nonatomic) BOOL hideTitle;
+ (id)alertMatchingContext:(id)context;
+ (BOOL)isPlayingRingtone;
+ (id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+ (void)playAlertSound:(BOOL)sound soundName:(id)name inBundle:(id)bundle isRingtone:(BOOL)ringtone;
+ (id)presentWithLocalNotification:(id)localNotification application:(id)application;
+ (void)stopPlayingAlertSoundOrRingtone;
- (id)initWithApplication:(id)application body:(id)body showActionButton:(BOOL)button actionLabel:(id)label;
- (void)_ringtoneAutoMuteTimerFired;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (id)lockLabel;
- (float)lockLabelFontSize;
- (void)performUnlockAction;
- (BOOL)shouldShowInEmergencyCall;
- (void)snoozeIfPossible;
- (void)snoozeOrDismiss;
- (void)startRingtoneAutoMuteTimer;
- (void)stopRingtoneAutoMuteTimer;
- (void)willDeactivateForReason:(int)reason;
- (BOOL)willShowInAwayItems;
@end

