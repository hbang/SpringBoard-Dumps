/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchGesture : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSHashTable *_observers;
	SBSearchScrollView *_scrollView;
	BOOL _suppressObserverCallbacks;
	UIPanGestureRecognizer *_panGestureRecognizer;
	BOOL _isActivated;
	BOOL _animatingResetOrReveal;
	BOOL _enabled;
	UIView *_targetView;
}
@property(readonly, assign, nonatomic, getter=isActivated) BOOL activated;
@property(readonly, assign, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) BOOL enabled;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) UIView *targetView;
+ (id)sharedInstance;
- (id)init;
- (void)_displayLaunched:(id)launched;
- (void)_iconEditingStateChanged:(id)changed;
- (BOOL)_isShowingSearch;
- (void)_openFolderChanged:(id)changed;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_updateScrollingEnabled;
- (void)addObserver:(id)observer;
- (void)dealloc;
- (void)removeObserver:(id)observer;
- (void)requireGestureRecognizerToFail:(id)fail;
- (void)resetAnimated:(BOOL)animated;
- (void)revealAnimated:(BOOL)animated;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewDidScrollToTop:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)updateForRotation;
@end

