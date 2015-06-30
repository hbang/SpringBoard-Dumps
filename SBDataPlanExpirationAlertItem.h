/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDataPlanAccountAlertItem.h"


@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {
	NSDate *_expirationDate;
}
@property(retain, nonatomic) NSDate *expirationDate;
- (id)initWithAccountURL:(id)accountURL expirationDate:(id)date;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
@end

