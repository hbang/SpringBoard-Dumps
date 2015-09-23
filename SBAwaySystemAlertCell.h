/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwaySystemAlertCell : SBAwayListItemCell {
	NSArray *_buttons;
	id<SBAwayListCellButtonHandler> _buttonHandler;
	BOOL _horizontalButtonLayout;
}
+ (id)_buttonBackgroundImage;
+ (id)_buttonFont;
+ (float)_buttonHorizontalInset;
+ (float)_buttonVerticalInset;
+ (float)_buttonWidthForText:(id)text;
+ (float)rowHeightForTitle:(id)title message:(id)message rowWidth:(float)width buttonLabels:(id)labels;
- (CGRect)_cellContentViewFrame;
- (void)_createContentView;
- (void)_forwardButtonPressToHandler:(id)handler;
- (float)_getMaxButtonWidth;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setButtonLabels:(id)labels handler:(id)handler isAlarm:(BOOL)alarm;
@end
