/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UIStatusBarStyleDelegate.h"
#import "SBStarkAutoHideControlBarDelegate.h"

@class UIViewController, NSMutableSet, SBStarkFakeIconOperationController, SBStarkScreenFocusController, UIStatusBar;
@protocol SBStarkLauncher, SBStarkControlBarDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkControlBarViewController : XXUnknownSuperclass <UIStatusBarStyleDelegate, SBStarkAutoHideControlBarDelegate> {
	id<SBStarkControlBarDelegate> _delegate;
	double _autoHideDelay;
	NSMutableSet *_launcherHideReasons;
	UIViewController<SBStarkLauncher> *_launcherViewController;
	UIStatusBar *_statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet *_statusBarHideReasons;
	int _requestedStyle;
	SBStarkScreenFocusController *_focusController;
	SBStarkFakeIconOperationController *_fakeIconOperationController;
}
@property(assign, nonatomic) double autoHideDelay;
@property(assign, nonatomic) id<SBStarkControlBarDelegate> delegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController;
@property(retain, nonatomic) SBStarkScreenFocusController *focusController;
@property(readonly, assign, nonatomic) CGPoint highestVisiblePoint;
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (id)initWithInterfaceType:(int)interfaceType;
- (void)_autoHideTriggered;
- (BOOL)_isLauncherHidden;
- (BOOL)_isStatusBarHidden;
- (CGRect)_launcherViewFrameForVisibility:(BOOL)visibility;
- (void)_resetAutoHideTimer;
- (void)_setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory fallbackToDefaultAnimationFactory:(BOOL)defaultAnimationFactory;
- (void)dealloc;
- (void)loadView;
- (void)resetStarkControlBarAutoHideTimer;
- (void)setLauncherHidden:(BOOL)hidden forReason:(id)reason animated:(BOOL)animated;
- (void)setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
- (void)setStatusBarHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
- (void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
- (void)updateStatusBarWithRequestedStyle:(int)requestedStyle animationFactory:(id)factory;
- (void)viewDidLayoutSubviews;
@end

