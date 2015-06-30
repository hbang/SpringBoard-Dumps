/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBTodayTableHeaderView : XXUnknownSuperclass {
	UILabel *_dateLabel;
	UILabel *_lunarDateLabel;
	BOOL _isContentValid;
	CGRect _calculatedDateLabelFrame;
	BOOL _achievedPreferredDateLabelLayout;
	CGSize _sizeThatFitsCalculatedDateLabelFrame;
	CGRect _calculatedLunarDateLabelFrame;
	int _layoutMode;
}
@property(assign, nonatomic) int layoutMode;
+ (id)defaultBackgroundColor;
+ (id)defaultDateFont;
+ (id)defaultLunarDateFont;
+ (id)defaultTextColor;
+ (float)lunarDateBaselineOffset;
- (id)initWithFrame:(CGRect)frame;
- (BOOL)_dateLabelNeedsLayoutForSize:(CGSize)size;
- (float)_dateLabelWidthForSize:(CGSize)size layoutMode:(int)mode;
- (BOOL)_isCachedSizeThatFitsValidForSize:(CGSize)size;
- (void)_layoutDateLabel;
- (void)_layoutLunarDateLabel;
- (CGRect)_lunarDateLabelFrameForBounds:(CGRect)bounds;
- (void)_updateForContentCategorySizeDidChange;
- (id)dateHeaderAttributedStringOnSingleLine:(BOOL)line;
- (id)dateHeaderOnSingleLine:(BOOL)line;
- (CGRect)dateLabelFrameForBounds:(CGRect)bounds force:(BOOL)force;
- (void)dealloc;
- (void)invalidateContent;
- (void)layoutSubviews;
- (id)lunarCalendarIdentifier;
- (id)lunarDateHeaderString;
- (BOOL)showsLunarDate;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

