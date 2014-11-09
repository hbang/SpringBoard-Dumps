/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCalendar, NSTimer, NSDate;
@protocol SBRelativeDateTimerDelegate;

__attribute__((visibility("hidden")))
@interface SBRelativeDateTimer : XXUnknownSuperclass {
	NSCalendar *_gregorian;
	NSTimer *_timer;
	NSDate *_date;
	id<SBRelativeDateTimerDelegate> _delegate;
	int _currResolution;
	int _currValue;
}
+ (void)addTimerToMainRunLoop:(id)mainRunLoop;
+ (void)initialize;
+ (void)invalidateTimer:(id)timer;
- (id)init;
- (void)_fireAndUpdateTimerIfNecessary;
- (void)_fireForEvent:(id)event;
- (void)_fireForLocaleEvent:(id)localeEvent;
- (double)_nextFireInterval:(id)interval resolution:(int)resolution comparedToNow:(int)now;
- (id)_timeDifferenceFromDate:(id)date;
- (id)date;
- (void)dealloc;
- (void)fireAndSchedule;
- (void)invalidate;
- (double)nextFireInterval;
- (void)setDate:(id)date;
- (void)setDelegate:(id)delegate;
@end

