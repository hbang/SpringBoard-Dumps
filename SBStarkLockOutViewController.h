/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBStarkSessionConfiguring;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutViewController : XXUnknownSuperclass {
	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenController *_screenController;
	int _mode;
	SBStarkLockOutView *_modeView;
	SBStarkLockOutView *_previousModeView;
	FBSceneHostManager *_layoutWindowHostManager;
	NSString *_layoutWindowHostRequester;
	BOOL _inDealloc;
	BOOL _pendingAnimated;
	int _pendingMode;
	SBUIStarkStartupAnimation *_startupAnimation;
}
@property(assign, nonatomic) int lockOutMode;
@property(readonly, retain, nonatomic) SBStarkLockOutView *lockoutView;
@property(retain, nonatomic) SBStarkScreenController *screenController;
- (id)initWithCoder:(id)coder;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_newModeViewForMode:(int)mode;
- (void)_updateLockOutModeIfPending;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (void)loadView;
- (id)preferredFocusedItem;
- (void)setLockOutMode:(int)mode animated:(BOOL)animated;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

