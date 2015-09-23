/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationCell : SBNotificationCell {
	BOOL _isTopCell;
	BOOL _drawsSeparators;
	float _currentContentAlpha;
	UIView *_topSeparatorView;
	UIView *_bottomSeparatorView;
	id<SBAwayListCellButtonHandler> _actionButtonHandler;
	SBLockScreenNotificationScrollView *_contentScrollView;
	SBUnlockActionContext *_unlockActionContext;
	UILabel *_unlockTextLabel;
	id<UIScrollViewDelegate> _delegate;
	BOOL _resetsScrollOnPluginWillDisable;
	float _contentScrollViewWidth;
}
@property(retain, nonatomic) UIButton *actionButton;
@property(readonly, assign, nonatomic) UIScrollView *contentScrollView;
@property(assign, nonatomic) float contentScrollViewWidth;
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;
@property(assign, nonatomic) BOOL drawsSeparators;
@property(assign, nonatomic) BOOL isTopCell;
@property(assign, nonatomic) BOOL resetsScrollOnPluginWillDisable;
@property(retain, nonatomic) SBUnlockActionContext *unlockActionContext;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForPrimaryText;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForPrimaryText;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForSubtitleText;
+ (float)primaryPaddingLeft;
+ (float)rowHeightForTitle:(id)title subtitle:(id)subtitle body:(id)body maxLines:(unsigned)lines attachmentSize:(CGSize)size datesVisible:(BOOL)visible rowWidth:(float)width includeUnlockActionText:(BOOL)text;
+ (BOOL)wantsUnlockActionText;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (id)_buttonWithLabel:(id)label;
- (void)_handleActionButtonPress:(id)press;
- (void)_notePluginWillDisable:(id)_notePlugin;
- (int)_separatorBackdropOverlayBlendMode;
- (id)_separatorColor;
- (void)_setSeparatorBackdropOverlayBlendMode:(int)mode;
- (void)_updateUnlockText:(id)text;
- (id)_vibrantTextColor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetScrollView;
- (void)scrollToOriginAnimated:(BOOL)originAnimated;
- (void)setButtonLabel:(id)label handler:(id)handler;
- (void)setContentAlpha:(float)alpha;
- (void)setRelevanceDateLabel:(id)label;
@end

