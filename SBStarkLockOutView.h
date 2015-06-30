/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBStarkLockOutView : XXUnknownSuperclass {
	UILabel *_titleLabel;
	float _titleAscender;
	float _titleDescender;
	UIImageView *_imageView;
	CGSize _imageSize;
	UILabel *_messageLabel;
	float _messageAscender;
	float _messageDescender;
	UIButton *_backToOEMButton;
	UITapGestureRecognizer *_backToOEMGestureRecognizer;
	NSArray *_baselineSeparations;
}
@property(readonly, retain, nonatomic) UIButton *backToOEMButton;
@property(readonly, retain, nonatomic) UIImageView *imageView;
@property(readonly, retain, nonatomic) UILabel *messageLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame title:(id)title image:(id)image message:(id)message baselineSeparations:(id)separations;
- (void)_backToOEM;
- (id)_messageFontOfSize:(float)size;
- (void)_sizeMessageToFitInFrame:(CGRect)frame;
- (void)_sizeTitleToFitInFrame:(CGRect)frame;
- (id)_titleFontOfSize:(float)size;
- (void)dealloc;
- (void)layoutSubviews;
@end

