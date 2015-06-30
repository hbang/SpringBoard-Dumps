/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBTextDisplayView : UIView {
	NSString *_text;
	NSString *_style;
}
- (id)initWithWidth:(float)width text:(id)text style:(id)style;
- (void)_updateText;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)setStyle:(id)style;
- (void)setText:(id)text;
@end
