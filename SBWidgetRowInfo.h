/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWidgetRowInfo : SBRowInfo {
	SBWidgetViewController *_widget;
	float _preferredViewHeight;
	BOOL _visible;
	struct {
		unsigned isRePushingUpdates : 1;
	} _widgetBulletinInfoFlags;
}
@property(assign, nonatomic) float preferredViewHeight;
@property(readonly, assign, nonatomic) NCWidgetDatum *representedWidgetDatum;
@property(retain, nonatomic) SBWidgetViewController *widget;
- (id)_sectionIcon;
- (void)dealloc;
- (id)displayName;
- (float)heightForReusableViewForNotificationCenterTableViewController:(id)notificationCenterTableViewController layoutMode:(int)mode sectionLocation:(int)location;
- (id)icon;
- (id)identifier;
- (void)populateReusableView:(id)view;
- (Class)reusableViewClass;
- (id)reusableViewIdentifier;
- (id)settingsIcon;
@end
