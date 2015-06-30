/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBGradientView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandShelfView : SBGradientView {
	UIView *_tintView;
	float _tintAlpha;
	SBHighlightView *_highlightView;
	unsigned _shelfIndex;
}
@property(assign, nonatomic) unsigned shelfIndex;
@property(assign, nonatomic) float tintAlpha;
@property(retain, nonatomic) UIColor *tintColor;
- (void)dealloc;
- (void)layoutSubviews;
@end

