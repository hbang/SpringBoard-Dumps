/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBDateLabelDelegate.h"
#import "SpringBoard-Structs.h"

@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBNotificationCell : XXUnknownSuperclass <SBDateLabelDelegate> {
	UIView *_realContentView;
	UIImageView *_iconImageView;
	UILabel *_primaryLabel;
	UILabel *_subtitleLabel;
	UILabel *_secondaryLabel;
	UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
	UILabel<SBBulletinDateLabel> *_eventDateLabel;
	UIButton *_actionButton;
	UIImageView *_attachmentView;
	CGSize _attachmentSize;
	BOOL _secondaryTextNumberOfLinesIsUpperBound;
	unsigned _secondaryTextNumberOfLines;
	float _secondaryTextHeight;
	UIImage *_icon;
}
@property(retain, nonatomic) UIButton *actionButton;
@property(assign, nonatomic) float attachmentAlpha;
@property(readonly, assign, nonatomic) UIView *attachmentView;
@property(readonly, assign, nonatomic) CGRect contentBounds;
@property(assign, nonatomic) float eventDateAlpha;
@property(retain, nonatomic) UIColor *eventDateColor;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *eventDateLabel;
@property(retain, nonatomic) UIImage *icon;
@property(assign, nonatomic) float iconAlpha;
@property(readonly, assign, nonatomic) UIView *iconView;
@property(readonly, assign, nonatomic) UILabel *primaryLabel;
@property(copy, nonatomic) NSString *primaryText;
@property(assign, nonatomic) float primaryTextAlpha;
@property(retain, nonatomic) UIColor *primaryTextColor;
@property(readonly, assign, nonatomic) UIView *realContentView;
@property(assign, nonatomic) float relevanceDateAlpha;
@property(retain, nonatomic) UIColor *relevanceDateColor;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *relevanceDateLabel;
@property(readonly, assign, nonatomic) UILabel *secondaryLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(assign, nonatomic) float secondaryTextAlpha;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(assign, nonatomic) float secondaryTextHeight;
@property(readonly, assign, nonatomic) unsigned secondaryTextNumberOfLines;
@property(readonly, assign, nonatomic) BOOL secondaryTextNumberOfLinesIsUpperBound;
@property(readonly, assign, nonatomic) UILabel *subtitleLabel;
@property(copy, nonatomic) NSString *subtitleText;
@property(assign, nonatomic) float subtitleTextAlpha;
@property(retain, nonatomic) UIColor *subtitleTextColor;
+ (float)actionButtonPaddingLeft;
+ (float)contentWidthWithRowWidth:(float)rowWidth andAttachmentSize:(CGSize)size;
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
+ (float)iconPaddingLeft;
+ (float)paddingBetweenTitleAndRelevanceDate;
+ (float)primaryPaddingLeft;
+ (float)primaryPaddingRight;
+ (void)setupEventDateLabel:(id)label;
+ (void)setupRelevanceDateLabel:(id)label;
+ (float)xInsetForOrientation:(int)orientation;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAttachmentImage:(id)image;
- (void)setSecondaryTextNumberOfLines:(unsigned)lines treatAsUpperBound:(BOOL)bound;
@end

