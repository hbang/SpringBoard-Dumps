/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _SBAutoInstallForecastDateCache : XXUnknownSuperclass {
	unsigned _scheduleType;
	SUAutoInstallForecast *_forecast;
	NSCalendar *_calendar;
	NSDate *_roundedStartDate;
	NSDate *_roundedEndDate;
	NSDateIntervalFormatter *_timeIntervalFormatter;
	BOOL _parsed;
	NSString *_roundedTimeInterval;
}
@property(retain, nonatomic) NSString *roundedTimeInterval;
@property(assign, nonatomic) unsigned scheduleType;
- (id)initWithForecast:(id)forecast;
- (id)_componentsFromDate:(id)date;
- (void)_computeTonightRangeRelativeToDate:(id)date extraDayOffset:(int)offset outStart:(id *)start outEnd:(id *)end;
- (BOOL)_isStart:(id)start end:(id)end withinDateRange:(id)range end:(id)end4;
- (void)_parseForecast;
- (id)_timeIntervalFormatter;
- (void)dealloc;
- (id)description;
@end

