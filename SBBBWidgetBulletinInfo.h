/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBBWidgetBulletinInfo : SBBBBulletinInfo {
	NSString *_identifier;
	float _preferredViewHeight;
	BOOL _visible;
	struct {
		unsigned isPreferredViewHeightValid : 1;
	} _widgetBulletinInfoFlags;
}
@property(assign, nonatomic) float preferredViewHeight;
@property(readonly, assign, nonatomic) SBWidgetViewController *representedWidget;
- (void)dealloc;
- (float)heightForReusableViewForBulletinViewController:(id)bulletinViewController layoutMode:(int)mode bulletinLocation:(int)location;
- (id)identifier;
- (id)originalSectionIdentifier;
- (void)populateReusableView:(id)view;
- (id)representedBulletin;
- (Class)reusableViewClass;
- (id)reusableViewIdentifier;
- (id)widgetIdentifier;
@end
