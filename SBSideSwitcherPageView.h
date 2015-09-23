/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAppSwitcherPageView.h"
#import "UIGestureRecognizerDelegate.h"

@protocol SBSideSwitcherPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SBSideSwitcherPageView : SBAppSwitcherPageView <UIGestureRecognizerDelegate> {
	BOOL _shouldShowAppIconAsOverlay;
	BOOL _isShowingAppIconAsOverlay;
	BOOL _isActivating;
	SBIconViewMap *_iconViewMap;
	SBIconView *_iconViewSetAsOverlay;
	UITapGestureRecognizer *_tapGestureRecognizer;
	UITapGestureRecognizer *_doubleTapGestureRecognizer;
	UILongPressGestureRecognizer *_longPressGestureRecognizer;
	UILongPressGestureRecognizer *_pressDownGestureRecognizer;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBSideSwitcherPageViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL shouldShowAppIconAsOverlay;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void)_configureAppIconAsOverlayIfNecessary;
- (void)_handleLongPressGesture:(id)gesture;
- (void)_handlePressDownGesture:(id)gesture;
- (void)_handleTapGesture:(id)gesture;
- (CGAffineTransform)_overlayTransform;
- (void)_removeAppIconAsOverlayIfNecessary;
- (void)_squishAfterDelay:(double)delay;
- (void)_unsquishAfterDelay:(double)delay;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)invalidate;
- (void)layoutSubviews;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
@end

