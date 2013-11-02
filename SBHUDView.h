/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIImage, NSString;

@interface SBHUDView : UIView {
	int _level;
	UILabel *_titleLabel;
	UILabel *_subtitleLabel;
	UIImageView *_imageView;
	BOOL _showsProgress;
	float _progress;
}
@property(retain, nonatomic) UIImage *image;
@property(assign, nonatomic) int level;
@property(assign, nonatomic) float progress;
@property(assign, nonatomic) BOOL showsProgress;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
+ (int)numberOfProgressIndicatorSteps;
+ (float)progressIndicatorStep;
- (id)initWithHUDViewLevel:(int)hudviewLevel;
- (void)dealloc;
- (BOOL)displaysLabel;
- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;
@end

