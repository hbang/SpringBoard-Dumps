/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBModalLayoutCaching.h"
#import "SpringBoard-Structs.h"
#import "SBDateLabelDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol NCNotificationDateLabel;

__attribute__((visibility("hidden")))
@interface SBNotificationCell : XXUnknownSuperclass <SBDateLabelDelegate, SBModalLayoutCaching> {
	UIView *_realContentView;
	UIImageView *_iconImageView;
	UILabel *_primaryLabel;
	UILabel *_subtitleLabel;
	UILabel *_secondaryLabel;
	UILabel *_relevanceDateLabel;
	UILabel<NCNotificationDateLabel> *_eventDateLabel;
	UIButton *_actionButton;
	UIImageView *_attachmentView;
	CGSize _attachmentSize;
	int _layoutMode;
	UIViewController *_secondaryContentViewController;
	BOOL _secondaryTextNumberOfLinesIsUpperBound;
	unsigned _secondaryTextNumberOfLines;
	float _secondaryTextHeight;
	UIImage *_icon;
}
@property(retain, nonatomic) UIButton *actionButton;
@property(assign, nonatomic) float attachmentAlpha;
@property(readonly, retain, nonatomic) UIView *attachmentView;
@property(readonly, assign, nonatomic) CGRect contentBounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) float eventDateAlpha;
@property(retain, nonatomic) UIColor *eventDateColor;
@property(retain, nonatomic) UILabel<NCNotificationDateLabel> *eventDateLabel;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImage *icon;
@property(assign, nonatomic) float iconAlpha;
@property(readonly, retain, nonatomic) UIView *iconView;
@property(assign, nonatomic) int layoutMode;
@property(readonly, retain, nonatomic) UILabel *primaryLabel;
@property(copy, nonatomic) NSString *primaryText;
@property(assign, nonatomic) float primaryTextAlpha;
@property(retain, nonatomic) UIColor *primaryTextColor;
@property(readonly, retain, nonatomic) UIView *realContentView;
@property(assign, nonatomic) float relevanceDateAlpha;
@property(retain, nonatomic) UIColor *relevanceDateColor;
@property(retain, nonatomic) UILabel *relevanceDateLabel;
@property(retain, nonatomic) UIViewController *secondaryContentViewController;
@property(readonly, retain, nonatomic) UILabel *secondaryLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(assign, nonatomic) float secondaryTextAlpha;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(assign, nonatomic) float secondaryTextHeight;
@property(readonly, assign, nonatomic) unsigned secondaryTextNumberOfLines;
@property(readonly, assign, nonatomic) BOOL secondaryTextNumberOfLinesIsUpperBound;
@property(readonly, assign, nonatomic) BOOL shouldVerticallyCenterContent;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
@property(copy, nonatomic) NSString *subtitleText;
@property(assign, nonatomic) float subtitleTextAlpha;
@property(retain, nonatomic) UIColor *subtitleTextColor;
@property(readonly, assign) Class superclass;
+ (float)actionButtonPaddingLeft;
+ (float)contentWidthWithRowWidth:(float)rowWidth andAttachmentSize:(CGSize)size forLayoutMode:(int)layoutMode;
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
+ (float)firstLineBaselineOffsetFromTop;
+ (float)firstLineBaselineOffsetFromTopNoIcon;
+ (float)paddingBetweenTitleAndRelevanceDate;
+ (id)preferredFontForTextStyle:(id)textStyle symbolicTraits:(unsigned)traits;
+ (float)secondLineBaselineOffsetFromFirstLine;
+ (void)setupEventDateLabel:(id)label;
+ (void)setupRelevanceDateLabel:(id)label;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)_set;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)_set;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAttachmentImage:(id)image;
- (void)setSecondaryTextNumberOfLines:(unsigned)lines treatAsUpperBound:(BOOL)bound;
@end

