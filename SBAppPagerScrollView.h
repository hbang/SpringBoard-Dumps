/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


@interface SBAppPagerScrollView : XXUnknownSuperclass {
	float m_pageWidth;
	CGPoint m_rawOffset;
	float m_maxOffset;
	CGPoint m_startingOffset;
	BOOL m_paging;
	BOOL m_moved;
}
@property(assign, nonatomic) float maxOffset;
@property(assign, nonatomic) float pageWidth;
@property(assign, nonatomic) BOOL paging;
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;
- (void)setContentOffset:(CGPoint)offset;
@end
