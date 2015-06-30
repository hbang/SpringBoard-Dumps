/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBSearchTableViewCell : XXUnknownSuperclass {
	BOOL _badged;
	BOOL _starred;
	BOOL _isFirstInSection;
	BOOL _isLastInSection;
	BOOL _hasImage;
	BOOL _aboveSelectedCell;
	UILabel *_titleLabel;
	UILabel *_subtitleLabel;
	UILabel *_auxiliaryTitleLabel;
	UILabel *_auxiliarySubtitleLabel;
	UILabel *_summaryLabel;
	UIImageView *_titleImageView;
	UIImageView *_badgeImageView;
	UIImageView *_starImageView;
	NSOperation *_fetchImageOperation;
	UIView *_background;
	UIView *_clippingContainer;
	UIView *_separatorView;
	BOOL _hasRoundedImage;
	BOOL _shouldKnockoutImage;
}
@property(assign, nonatomic, getter=isAboveSelectedCell) BOOL aboveSelectedCell;
@property(retain, nonatomic) NSString *auxiliarySubtitle;
@property(retain, nonatomic) NSString *auxiliaryTitle;
@property(assign, nonatomic, getter=isBadged) BOOL badged;
@property(retain, nonatomic) NSOperation *fetchImageOperation;
@property(assign, nonatomic, getter=isFirstInSection) BOOL firstInSection;
@property(assign, nonatomic, getter=hasImage) BOOL hasImage;
@property(assign, nonatomic, getter=hasRoundedImage) BOOL hasRoundedImage;
@property(assign, nonatomic, getter=isLastInSection) BOOL lastInSection;
@property(assign, nonatomic) BOOL shouldKnockoutImage;
@property(assign, nonatomic, getter=isStarred) BOOL starred;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *summary;
@property(retain, nonatomic) NSString *title;
+ (id)backgroundColor;
+ (void)initialize;
+ (id)lineColor;
+ (id)maskedSelectedBackgroundColor;
+ (void)resetContentSizeCache;
+ (float)rowHeightForPreferredContentSizeWithNumberOfSummaryLines:(int)summaryLines;
+ (id)secontaryTextColor;
+ (id)selectedTextColor;
+ (id)starImage;
+ (float)subtitleBaselineOriginForContentSizeCategory:(id)contentSizeCategory;
+ (float)summaryBaselineOriginForContentSizeCategory:(id)contentSizeCategory;
+ (float)titleBaselineOriginForContentSizeCategory:(id)contentSizeCategory;
+ (id)unmaskedSelectedBackgroundColor;
+ (id)unreadImage;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (id)_scriptingInfo;
- (void)clipToTopHeaderInTableView:(id)tableView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setIsLastInSection:(BOOL)section;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setSummary:(id)summary withNumberOfLines:(int)lines;
- (void)setTitleImage:(id)image animated:(BOOL)animated;
- (void)updateBottomLine;
- (void)updateSelectedState;
@end

