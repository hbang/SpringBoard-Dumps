/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {
	SBAlertItem *_alertItem;
	NSString *_title;
	NSString *_message;
	SBUISound *_sound;
	NSDate *_originDate;
}
- (id)initWithAlertItem:(id)alertItem;
- (id)action;
- (id)category;
- (id)categoryImage;
- (void)dealloc;
- (int)defaultActionType;
- (id)ignoreAction;
- (BOOL)isSticky;
- (BOOL)matchesContext:(id)context;
- (unsigned)priority;
- (void)reloadDisplayProperties;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)title;
@end

