/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBVODAlarm : NSObject {
	NSString *_title;
	NSString *_path;
	NSDictionary *_rentalInfo;
	unsigned _loadingRentalInfo : 1;
	unsigned _sanityCheckingExpiration : 1;
	unsigned _watched : 1;
}
+ (void)_rentalInfoThread;
+ (void)cancelPendingLoads;
- (id)initWithDictionary:(id)dictionary;
- (id)_dateWithStartDate:(id)startDate duration:(id)duration;
- (id)_rentalInfo;
- (void)_setRentalInfo:(id)info;
- (int)compare:(id)compare;
- (void)dealloc;
- (id)expirationDate;
- (BOOL)hasFireDateSinceDate:(id)date;
- (BOOL)hasLoaded;
- (BOOL)isExpired;
- (id)nextFireDate;
- (id)path;
- (BOOL)rentalHasBeenWatched;
- (void)sanityCheckExpiration;
- (id)title;
@end

