/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILocalNotification, NSTimer, SBUISound, SBApplication;
@protocol SBSystemLocalNotificationAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBSystemLocalNotificationAlert : XXUnknownSuperclass {
	SBApplication<SBSystemLocalNotificationAlertDelegate> *_app;
	UILocalNotification *_localNotification;
	NSString *_bodyText;
	NSString *_actionLabel;
	NSString *_customLockLabel;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	SBUISound *_sound;
	NSTimer *_autoMuteTimer;
}
@property(readonly, assign, nonatomic) SBApplication *application;
@property(readonly, assign, nonatomic) NSString *bodyText;
@property(readonly, assign, nonatomic) UILocalNotification *localNotification;
+ (BOOL)_isAlertPlayingAnAVItem:(id)item;
+ (id)alertMatchingLocalNotification:(id)notification;
+ (id)alerts;
+ (void)dismissAlertsPlayingAnAVItem;
+ (BOOL)isAnyAlertPlayingAnAVItem;
+ (id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+ (id)pathForSoundName:(id)soundName inApp:(id)app;
+ (void)snoozeAlertsAndDismiss:(BOOL)dismiss;
- (id)initWithLocalNotification:(id)localNotification forApplication:(id)application;
- (void)_autoMuteTimerFired;
- (void)_playPresentationSound;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)dismiss:(int)dismiss;
- (BOOL)isCriticalAlert;
- (BOOL)isSnoozable;
- (BOOL)isSystemLocalNotificationAlert;
- (id)lockLabel;
- (void)performUnlockAction;
- (BOOL)shouldShowInEmergencyCall;
- (id)sound;
- (int)unlockSource;
- (void)willActivate;
- (void)willDeactivateForReason:(int)reason;
@end

