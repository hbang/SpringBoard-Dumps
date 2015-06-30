/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertView.h"
#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"


__attribute__((visibility("hidden")))
@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {
	TPButton *_dismissButton;
	TPButton *_replyButton;
	UIView *_notifyView;
	UIView *_replyView;
	UITextView *_charsRemainingView;
	UIActivityIndicatorView *_progressIndicator;
	UITextField *_responseField;
	UITextView *_textView;
	UITextView *_responseMessageView;
	BOOL _allowsResponse;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void)_cancelClicked;
- (void)_centerTextView:(id)view inRect:(CGRect)rect;
- (id)_charsRemainingView;
- (id)_notifyView;
- (void)_okayClicked;
- (void)_replyClicked;
- (id)_replyView;
- (id)_responseMessageView;
- (void)_setupResponseBar;
- (void)_textChanged:(id)changed;
- (id)_textView;
- (void)_updateCharsRemaining;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)alertStringAvailable:(id)available;
- (BOOL)allowsResponse;
- (void)dealloc;
- (void)displayString:(id)string;
- (void)layoutSubviews;
- (void)setAllowsResponse:(BOOL)response;
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
@end

