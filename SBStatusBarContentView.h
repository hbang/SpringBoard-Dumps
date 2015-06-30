/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"


@interface SBStatusBarContentView : UIView {
	SBStatusBarContentsView *_contentsView;
	int _mode;
}
- (id)initWithContentsView:(id)contentsView;
- (id)initWithFrame:(CGRect)frame;
- (int)compare:(id)compare;
- (void)drawText:(id)text atPoint:(CGPoint)point forWidth:(float)width lineBreakMode:(int)mode;
- (int)effectiveModeForImages;
- (void)enableShadow;
- (BOOL)isVisible;
- (float)overlap;
- (float)padding;
- (int)priority;
- (void)setMode:(int)mode;
- (void)setOverlap:(float)overlap;
- (void)setShowOnLeft:(BOOL)left;
- (void)setVisible:(BOOL)visible;
- (BOOL)showOnLeft;
- (void)start;
- (void)stop;
- (id)textFont;
@end

