/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkKnobLauncherCell : XXUnknownSuperclass <SBIconObserver> {
	SBIcon *_icon;
	UIView<SBIconAccessoryView> *_accessoryView;
	BOOL _showsDisclosureIndicator;
	id<SBStarkKnobLauncherCellDelegate> _delegate;
}
@property(assign, nonatomic) id<SBStarkKnobLauncherCellDelegate> delegate;
@property(retain, nonatomic) SBIcon *icon;
@property(assign, nonatomic) BOOL showsDisclosureIndicator;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (CGRect)_accessoryFrameInBounds:(CGRect)bounds;
- (void)dealloc;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (void)iconImageDidUpdate:(id)iconImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
@end

