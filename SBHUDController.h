/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBHUDController : XXUnknownSuperclass {
	UIWindow *_hudWindow;
	UIView *_hudContentView;
	SBHUDView *_hudView;
	int _orientation;
	BOOL _hudVisibleOrFading;
}
+ (id)sharedHUDController;
- (void)_createUI;
- (void)_orderWindowOut:(id)anOut;
- (void)_recenterHUDView;
- (void)_tearDown;
- (void)dealloc;
- (void)hideHUDView;
- (void)presentHUDView:(id)view;
- (void)presentHUDView:(id)view autoDismissWithDelay:(double)delay;
- (void)reorientHUDIfNeeded:(BOOL)needed;
- (id)visibleHUDView;
- (id)visibleOrFadingHUDView;
@end

