/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBAppSwitcherIconControllerDelegate <NSObject>
- (void)switcherIconScroller:(id)scroller activate:(id)activate;
- (void)switcherIconScroller:(id)scroller contentOffsetChanged:(float)changed;
- (unsigned)switcherIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float *)normalizedOffset andXVelocity:(float)velocity;
- (BOOL)switcherIconScroller:(id)scroller shouldHideIconForDisplayLayout:(id)displayLayout;
- (void)switcherIconScrollerBeganPanning:(id)panning;
- (void)switcherIconScrollerDidEndScrolling:(id)switcherIconScroller;
@end

