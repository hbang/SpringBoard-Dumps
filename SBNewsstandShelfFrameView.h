/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBNewsstandShelfFrameView : XXUnknownSuperclass {
	CGSize _borderSize;
	SBNewsstandShelfHeaderView *_headerView;
	SBNewsstandTilingImageView *_leftBorder;
	SBNewsstandTilingImageView *_rightBorder;
	int _orientation;
}
- (id)initWithFrame:(CGRect)frame;
- (void)configureForOrientation:(int)orientation;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)frame;
- (void)showHeaderView;
@end

