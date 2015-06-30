/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinHeaderViewDelegate.h"
#import "SBBulletinFadeOverlayOwner.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinTableView : XXUnknownSuperclass <SBBulletinHeaderViewDelegate, SBBulletinFadeOverlayOwner> {
	NSMutableSet *_visibleSectionHeaders;
	SBBulletinLinenFadeView *_fadeContainer;
	BOOL _suppressUpdates;
	BOOL _hasReloadedOnce;
	unsigned _animatingUpdateCount;
}
@property(assign, nonatomic) BOOL suppressUpdates;
- (id)initWithFrame:(CGRect)frame linenView:(id)view;
- (void)_decrementAnimatingCount;
- (void)_incrementAnimatingCount;
- (void)_orderHeierarchyAndAdjustLinenViewBackingAsNecessary;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (BOOL)hasReloadedOnce;
- (void)headerViewWillAppear:(id)headerView;
- (void)headerViewWillDisappear:(id)headerView;
- (BOOL)isAnimatingUpdates;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setLinenGradientAlpha:(float)alpha;
- (void)setRasterizesFadeOverlay:(BOOL)overlay;
- (id)visibleSectionHeaders;
@end

