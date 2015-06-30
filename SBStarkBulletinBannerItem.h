/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerItem.h"


__attribute__((visibility("hidden")))
@interface SBStarkBulletinBannerItem : SBStarkBannerItem {
	BBBulletin *_bulletin;
	SBUISound *_sound;
}
- (id)initWithBulletin:(id)bulletin;
- (id)action;
- (int)actionType;
- (id)categoryImage;
- (void)dealloc;
- (BOOL)matchesContext:(id)context;
- (id)sound;
- (id)subActionLabels;
- (id)subActionWithIndex:(unsigned)index;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)instance;
@end

