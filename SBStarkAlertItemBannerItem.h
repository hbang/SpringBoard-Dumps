/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerItem.h"


__attribute__((visibility("hidden")))
@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {
	SBAlertItem *_alertItem;
	NSString *_title;
	NSString *_message;
	SBUISound *_sound;
}
- (id)initWithAlertItem:(id)alertItem;
- (id)action;
- (int)actionType;
- (id)category;
- (id)categoryImage;
- (void)dealloc;
- (BOOL)isSticky;
- (BOOL)matchesContext:(id)context;
- (unsigned)priority;
- (void)reloadDisplayProperties;
- (id)sound;
- (id)subActionLabels;
- (id)subActionWithIndex:(unsigned)index;
- (id)title;
@end

