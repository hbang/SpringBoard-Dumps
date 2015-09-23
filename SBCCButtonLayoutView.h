/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCCButtonLayoutView : SBControlCenterSectionView {
	NSMutableArray *_buttons;
	UIScrollView *_scrollView;
	BOOL _useFlexiblePadding;
	float _interButtonPadding;
	unsigned _buttonStretchThreshold;
	int _maxButtons;
	UIEdgeInsets _contentEdgeInsets;
}
@property(assign, nonatomic) unsigned buttonStretchThreshold;
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;
@property(assign, nonatomic) float interButtonPadding;
@property(assign, nonatomic) int maxButtons;
@property(assign, nonatomic) BOOL useFlexiblePadding;
- (id)initWithFrame:(CGRect)frame;
- (void)_didAddButton:(id)button;
- (void)_didRemoveButton:(id)button;
- (void)_resortButtons;
- (void)_setButtons:(id)buttons;
- (void)addButton:(id)button;
- (id)buttons;
- (void)dealloc;
- (void)layoutSubviews;
- (void)removeButton:(id)button;
- (void)resortButtons;
@end
