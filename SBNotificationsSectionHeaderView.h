/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNotificationsSectionHeaderView : XXUnknownSuperclass {
	UILabel *_titleLabel;
	UIImageView *_iconImageView;
	SBNotificationsClearButton *_xButton;
	SBNotificationsClearButton *_clearButton;
	UIImageView *_buttonBackground;
	id _xAction;
	id _clearAction;
	float _widthWhenShowingClear;
	BOOL _showingClear;
	SBNotificationCenterSeparatorView *_separator;
}
+ (void)_compositingFilterForView:(id)view;
+ (id)defaultBackgroundColorForGraphicsQuality:(int)graphicsQuality;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_buttonBackgroundFrame;
- (id)_clearBackgroundImage;
- (id)_clearImage;
- (void)_setShowsClear:(BOOL)clear animated:(BOOL)animated;
- (CGRect)_xButtonFrame;
- (id)_xImage;
- (void)buttonAction:(id)action;
- (CGRect)contentBounds;
- (void)dealloc;
- (int)initialGraphicsQuality;
- (BOOL)isShowingClear;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetAnimated:(BOOL)animated;
- (void)setBackgroundView:(id)view;
- (void)setFloating:(BOOL)floating;
- (void)setHasClearButton:(BOOL)button;
- (void)setTarget:(id)target forClearButtonAction:(id)clearButtonAction;
- (void)setTarget:(id)target forClearButtonVisibleAction:(id)clearButtonVisibleAction;
@end

