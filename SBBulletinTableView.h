/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinHeaderViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableSet, UIImageView, SBBulletinLinenSegmentView, UIView;

@interface SBBulletinTableView : XXUnknownSuperclass <SBBulletinHeaderViewDelegate> {
	NSMutableSet *_visibleSectionHeaders;
	UIView *_fadeContainer;
	SBBulletinLinenSegmentView *_fadeSegment;
	UIImageView *_fadeOverlayMask;
}
- (id)initWithFrame:(CGRect)frame linenView:(id)view;
- (void)dealloc;
- (void)headerViewWillAppear:(id)headerView;
- (void)headerViewWillDisappear:(id)headerView;
- (void)layoutSubviews;
- (void)setLinenGradientAlpha:(float)alpha;
- (void)setRasterizesFadeOverlay:(BOOL)overlay;
- (id)visibleSectionHeaders;
@end

