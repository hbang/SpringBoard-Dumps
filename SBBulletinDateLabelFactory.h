/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBulletinDateLabelFactory : XXUnknownSuperclass {
	NSMutableDictionary *_recycledLabelsByStyle;
}
+ (id)sharedInstance;
- (id)init;
- (id)_labelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style forType:(int)type;
- (void)_purgeRecycledLabels;
- (id)combinedDateLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
- (void)dealloc;
- (id)endLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
- (void)recycleLabel:(id)label;
- (id)startLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
- (int)styleForLabel:(id)label;
@end

