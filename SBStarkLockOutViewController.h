/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkLockOutViewController : XXUnknownSuperclass {
	SBStarkScreenController *_screenController;
	int _mode;
	SBStarkLockOutView *_modeView;
	SBStarkLockOutView *_previousModeView;
	BOOL _inDealloc;
	BOOL _pendingAnimated;
	int _pendingMode;
	SBUIStarkStartupAnimation *_startupAnimation;
}
@property(assign, nonatomic) int lockOutMode;
@property(readonly, assign, nonatomic) SBStarkLockOutView *lockoutView;
@property(retain, nonatomic) SBStarkScreenController *screenController;
- (id)_newModeViewForMode:(int)mode;
- (void)_updateLockOutModeIfPending;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (void)loadView;
- (void)setLockOutMode:(int)mode animated:(BOOL)animated;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

