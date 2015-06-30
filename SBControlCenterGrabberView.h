/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterObserver.h"
#import "SBUIControlCenterControlObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBControlCenterGrabberView : XXUnknownSuperclass <SBUIControlCenterControlObserver, SBControlCenterObserver> {
	SBChevronView *_chevronView;
	float _defaultChevronAlpha;
	SBUIControlCenterLabel *_statusLabel;
	SBUIControlCenterLabel *_statusLabel2;
	int _statusState;
	NSMutableDictionary *_statusByReason;
	NSMutableArray *_statusReasonQueue;
	SBControlCenterStatusUpdate *_activeStatus;
	BSTimer *_statusTimer;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (float)defaultHeightForOrientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (void)_animateNextStatus;
- (void)_animateWithDuration:(double)duration animations:(id)animations;
- (void)_animateWithDuration:(double)duration delay:(double)delay animations:(id)animations;
- (void)_evaluateStatusStateForNewStatus:(id)newStatus;
- (id)_getNextStatusString;
- (CGRect)_grabberRect;
- (BOOL)_hasPendingStatus;
- (id)_peekNextStatus;
- (id)_popNextStatus;
- (void)_rescindStatusUpdate:(id)update;
- (void)_resetLabelAndChevronState;
- (void)_restartTimerWithInterval:(double)interval handler:(id)handler;
- (void)_setStatusState:(int)state;
- (id)chevronView;
- (void)controlAppearanceDidChangeForState:(int)controlAppearance;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)controlConfigurationDidChangeForState:(int)controlConfiguration;
- (void)dealloc;
- (void)layoutSubviews;
- (void)presentStatusUpdate:(id)update;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

