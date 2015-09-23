/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PGPictureInPictureViewControllerContentContainer.h"
#import "SBPIPContentViewLayoutSettingsObserver.h"
#import "UIGestureRecognizerDelegate.h"


__attribute__((visibility("hidden")))
@interface SBPIPContainerViewController : XXUnknownSuperclass <PGPictureInPictureViewControllerContentContainer, SBPIPContentViewLayoutSettingsObserver, UIGestureRecognizerDelegate> {
	UIView *_contentView;
	CGSize _preferredContentSize;
	int _contentViewPosition;
	CGSize _contentViewSize;
	UIEdgeInsets _contentViewPadding;
	unsigned _addContentViewLayoutConstraints : 1;
	unsigned _stashContentView : 1;
	unsigned _updateContentViewLayoutSettingsAndLayoutIfNeeded : 1;
	unsigned _panGestureHandled : 1;
	unsigned _rotationGestureHandled : 1;
	unsigned _pinchGestureHandled : 1;
	float _initialGestureScale;
	CGPoint _panGestureVelocity;
	float _pinchGestureScaleFactor;
	unsigned _handlePanRotationPinchGestureEndedState : 1;
	NSMutableArray *_layoutConstraints;
	NSLayoutConstraint *_contentViewGestureCenterXLayoutConstraint;
	NSLayoutConstraint *_contentViewGestureCenterYLayoutConstraint;
	NSLayoutConstraint *_contentViewGestureWidthLayoutConstraint;
	NSLayoutConstraint *_contentViewGestureHeightLayoutConstraint;
	FBDisplayLayoutElement *_displayLayoutElement;
	float _displayLayoutElementLevel;
	PGPictureInPictureViewController *_pictureInPictureViewController;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) float displayLayoutElementLevel;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController;
@property(readonly, assign) Class superclass;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)initWithPictureInPictureViewController:(id)pictureViewController;
- (double)SB_accessibilityContentViewScale;
- (void)SB_accessibilitySetContentViewScale:(double)scale;
- (void)_actuallyHandlePanRotationPinchGestureEndedState;
- (void)_actuallyUpdateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_adjustContentViewAnchorPointForGestureRecognizer:(id)gestureRecognizer;
- (CGSize)_constrainContentViewSize:(CGSize)size;
- (CGPoint)_contentViewCenter;
- (CGRect)_contentViewFrameInDisplayReferenceSpace;
- (CGRect)_convertContentViewFrameFromScreen:(CGRect)screen;
- (void)_handlePanGesture:(id)gesture;
- (void)_handlePanRotationPinchGestureBeganState;
- (void)_handlePanRotationPinchGestureEndedState;
- (void)_handlePinchGesture:(id)gesture;
- (void)_handleRotationGesture:(id)gesture;
- (BOOL)_stashContentViewWithContentViewCenter:(CGPoint)contentViewCenter;
- (void)_updateContentViewLayoutConstraintsWithContentViewSize;
- (void)_updateContentViewLayoutConstraintsWithFrame:(CGRect)frame;
- (void)_updateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_updateDisplayLayoutElementReferenceFrame;
- (void)contentViewLayoutSettingsDidChange;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)handleDoubleTapGesture;
- (BOOL)handleTapGesture;
- (void)loadView;
- (void)performRotateAnimationWithRotation:(int)rotation completionHandler:(id)handler;
- (void)performStartAnimationWithAnimationHandler:(id)animationHandler completionHandler:(id)handler;
- (void)performStopAnimationWithFinalLayerFrame:(CGRect)finalLayerFrame animationHandler:(id)handler completionHandler:(id)handler3;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)prepareStartAnimationWithInitialLayerFrame:(CGRect)initialLayerFrame completionHandler:(id)handler;
- (void)setContentViewPadding:(UIEdgeInsets)padding animationDuration:(double)duration animationOptions:(unsigned)options;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)viewWillTransitionToSize:(CGSize)view withTransitionCoordinator:(id)transitionCoordinator;
@end

