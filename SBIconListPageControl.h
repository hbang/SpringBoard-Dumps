/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIconListPageControl : UIPageControl {
	id _delegate;
}
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
- (id)_pageIndicatorCurrentImageForPage:(int)page;
- (id)_pageIndicatorImageForPage:(int)page;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end

