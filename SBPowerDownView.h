/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPowerDownViewInterface.h"
#import "UIGestureRecognizerDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBAlertView.h"

@protocol SBPowerDownViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPowerDownView : SBAlertView <SBPowerDownViewInterface, UIGestureRecognizerDelegate> {
	NSTimer *_autoDismissTimer;
	id<SBPowerDownViewDelegate> _delegate;
	SBFakeStatusBarView *_fakeStatusBarView;
	SBShapeView *_darkeningOutsideBarsUnderlay;
	SBShapeView *_darkeningInsideBarsUnderlay;
	UIView *_topContainer;
	UIView *_topBar;
	SBFGlintyStringView *_topBarLabel;
	UIView *_topBarLabelBackgroundView;
	_UIBackdropView *_topBarBackground;
	UIView *_bottomContainer;
	UIView *_bottomBar;
	UILabel *_bottomBarLabel;
	_UIBackdropView *_bottomBarBackground;
	BOOL _addedFakeStatusBar;
	BOOL _hiddenLockScreenForeground;
	UIPanGestureRecognizer *_slideGestureRecognizer;
	UILongPressGestureRecognizer *_touchGestureRecognizer;
	CGPoint _slideGestureInitialPoint;
}
@property(assign, nonatomic) id<SBPowerDownViewDelegate> delegate;
- (id)initWithFrame:(CGRect)frame;
- (void)_addFakeStatusBarIfNecessary;
- (void)_animatePowerDown;
- (float)_bottomBarOffset;
- (void)_cancelAutoDismissTimer;
- (id)_insideBarsPath;
- (id)_lockScreenView;
- (id)_newDarkeningShapeView:(CGRect)view;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (id)_outsideBarsPath;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_resetAutoDismissTimer;
- (void)_slideCompleted:(BOOL)completed;
- (void)_slideGestureRecognizer:(id)recognizer;
- (float)_topBarOffset;
- (void)_touchGestureRecognizer:(id)recognizer;
- (void)animateIn;
- (void)animateOut;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)isSupportedInterfaceOrientation:(int)orientation;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
@end

