/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDefaultBannerTextView : XXUnknownSuperclass {
	NSAttributedString *_primaryTextAttributedString;
	NSAttributedString *_primaryTextAttributedStringComponent;
	UIImage *_primaryTextAccessoryImageComponent;
	NSAttributedString *_secondaryTextAttributedString;
	BOOL _secondaryTextItalicized;
	UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
}
@property(copy, nonatomic) NSString *primaryText;
@property(retain, nonatomic) UIImage *primaryTextAccessoryImage;
@property(readonly, assign, nonatomic) UILabel *relevanceDateLabel;
@property(copy, nonatomic) NSString *secondaryText;
+ (id)_defaultRelevanceDateFont;
- (id)initWithFrame:(CGRect)frame;
- (void)_invalidatePrimaryTextAttributedString;
- (id)_primaryTextAttributedString;
- (CGSize)_primaryTextSizeForBounds:(CGRect)bounds;
- (CGSize)_relevanceDateSize;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;
- (void)setRelevanceDate:(id)date;
- (void)setSecondaryText:(id)text italicized:(BOOL)italicized;
- (BOOL)textWillWrapForWidth:(float)text;
@end

