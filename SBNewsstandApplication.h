/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNewsstandApplication : SBApplication {
	BOOL _isMagazineApp;
	BOOL _iconIsBoundOnRight;
	unsigned _supportsNewsstandContentBackgroundMode : 1;
	unsigned _allowedContentNotificationsPerDay;
	unsigned char _newsstandWakes;
	unsigned _lastPostedState;
}
@property(readonly, assign, nonatomic) BOOL iconIsBoundOnRight;
@property(readonly, assign, nonatomic) BOOL isMagazineApp;
- (id)initWithApplicationInfo:(id)applicationInfo bundle:(id)bundle infoDictionary:(id)dictionary;
- (void)activate;
- (void)didExitWithType:(int)type terminationReason:(int)reason;
- (Class)iconClass;
- (BOOL)isFakeApp;
- (BOOL)isNewsstandApplication;
- (void)processDidLaunch:(id)process;
- (void)resumeForContentAvailable;
- (void)setApplicationState:(unsigned)state;
- (BOOL)shouldThrottleContentNotificationOnDate:(id)date withLastCount:(unsigned *)lastCount onDay:(int *)day;
- (BOOL)supportsBackgroundAppRefresh;
@end
