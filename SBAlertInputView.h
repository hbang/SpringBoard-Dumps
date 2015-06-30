/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"


@interface SBAlertInputView : SBSlidingAlertDisplay <UITextFieldDelegate> {
	UITextField *_inputTextField;
	UIKeyboard *_keyboard;
	SBTextDisplayView *_textDisplay;
	UIScroller *_scroller;
	UINavigationBar *_bar;
	BOOL _digitsOnly;
	id _delegate;
	int _minLength;
	int _maxLength;
}
+ (id)createBottomBarForInstance:(id)instance;
+ (id)createTopBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_sendClicked:(id)clicked;
- (void)_setInputTextField:(id)field;
- (void)_setKeyboard:(id)keyboard;
- (void)_setNavigationBar:(id)bar;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (void)sbAlertInputViewCancelClicked:(id)clicked;
- (void)sbAlertInputViewSendClicked:(id)clicked;
- (void)setDelegate:(id)delegate;
- (void)setDigitsOnly:(BOOL)only;
- (void)setMaxLength:(int)length;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setMinLength:(int)length;
- (void)setText:(id)text;
- (BOOL)showsDesktopImage;
- (id)textField;
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
@end

