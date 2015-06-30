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
	unsigned _feed;
}
- (id)initWithBulletin:(id)bulletin feed:(unsigned)feed;
- (id)_bbDismissAction;
- (id)_bbDismissAppearance;
- (BOOL)_supportsSubActions;
- (id)_uiBannerActionForBBAction:(id)bbaction context:(id)context;
- (id)action;
- (id)bbActions;
- (id)categoryImage;
- (void)dealloc;
- (int)defaultActionType;
- (BOOL)matchesContext:(id)context;
- (id)message;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)instance;
@end

