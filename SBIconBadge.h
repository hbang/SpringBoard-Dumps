/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSString;

@interface SBIconBadge : UIView {
	NSString *_badge;
	CGSize _badgeContentSize;
	BOOL _highlighted;
}
- (id)initWithBadge:(id)badge;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)setHightlighted:(BOOL)hightlighted;
@end

