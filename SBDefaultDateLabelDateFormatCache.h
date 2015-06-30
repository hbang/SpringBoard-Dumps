/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBDefaultDateLabelDateFormatCache : XXUnknownSuperclass {
	NSDateFormatter *_dayOfWeekFormatter;
	NSDateFormatter *_dayMonthYearFormatter;
	NSDateFormatter *_dayMonthFormatter;
	NSDateFormatter *_timeFormatter;
}
- (id)init;
- (void)dealloc;
- (id)formatDateAsDayMonthStyle:(id)style;
- (id)formatDateAsDayMonthYearStyle:(id)style;
- (id)formatDateAsDayOfWeek:(id)week;
- (id)formatDateAsTimeStyle:(id)style;
- (void)resetFormatters:(id)formatters;
- (void)resetFormattersIfNecessary;
@end
