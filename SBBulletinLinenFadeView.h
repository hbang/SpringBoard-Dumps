/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinLinenFadeView : XXUnknownSuperclass {
	SBBulletinLinenSegmentView *_fadeSegment;
	UIImageView *_fadeOverlayMask;
}
- (id)initWithFrame:(CGRect)frame linenView:(id)view;
- (void)dealloc;
- (float)fadeHeight;
- (void)setFrame:(CGRect)frame;
- (void)setGradientAlpha:(float)alpha;
@end
