/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBiometricEventLogger : XXUnknownSuperclass {
	BOOL _fingerOnWithScreenOn;
	unsigned long long _fingerOnTime;
	unsigned long long _keybagUnlockTime;
}
@property(assign, nonatomic) unsigned long long fingerOnTime;
@property(assign, nonatomic) BOOL fingerOnWithScreenOn;
@property(assign, nonatomic) unsigned long long keybagUnlockTime;
+ (id)sharedInstance;
- (id)init;
- (void)_clearEverything;
- (void)_fingerOn:(id)on;
- (void)_keybagBioUnlock:(id)unlock;
- (void)_prearmMatch:(id)match;
- (void)_screenTurnedOn:(id)on;
- (BOOL)_shouldSignpost;
- (BOOL)_shouldSyslogTimestamps;
- (void)_tryAgain:(id)again;
- (void)_unlockAnimationWillStart:(id)_unlockAnimation;
- (void)timestampEvent:(unsigned)event;
@end

