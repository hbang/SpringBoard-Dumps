/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerView : XXUnknownSuperclass <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {
	SBUIBannerContext *_context;
	SBStarkBannerItem *_bannerItem;
	UIImageView *_categoryImageView;
	UILabel *_titleLabel;
	float _titleAscender;
	UILabel *_subTitleLabel;
	float _subTitleAscender;
	SBStarkBannerViewButton *_okButton;
	SBStarkBannerViewButton *_actionButton;
	UIEdgeInsets _contentInsets;
	UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
	unsigned _interactionAffordances;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithContext:(id)context;
- (id)initWithFrame:(CGRect)frame;
- (UIEdgeInsets)_categoryImageInsets;
- (UIEdgeInsets)_contentInsetsForActionType:(int)actionType;
- (id)_defaultRelevanceDateFont;
- (BOOL)_hasKnob;
- (BOOL)_hasSubtitle;
- (void)_layoutForButton:(id)button contentFrame:(CGRect)frame;
- (void)_selectControl;
- (void)_setRelevanceDate:(id)date;
- (BOOL)_shouldShowOKButton;
- (id)_titleFont;
- (id)bannerContext;
- (BOOL)canBecomeFirstResponder;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (BOOL)shouldBorrowScreen;
- (void)starkBannerItemDidReloadDisplayProperties:(id)starkBannerItem;
@end

