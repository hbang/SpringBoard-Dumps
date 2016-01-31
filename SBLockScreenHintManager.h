/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenHintManager : XXUnknownSuperclass <UIGestureRecognizerDelegate, SBPresentingDelegate, SBControlCenterObserver, SBUIBiometricEventObserver> {
	BOOL _gestureHandlingEnabled;
	BOOL _guestGestureActive;
	BOOL _didEvaluatePressDelay;
	BOOL _fingerOnMesa;
	SBLockScreenView *_lockScreenView;
	SBLockScreenHintTapGestureRecognizer *_tapGesture;
	SBLockScreenHintLongPressGestureRecognizer *_longPressGesture;
	SBLockScreenHintPanGestureRecognizer *_panGesture;
	NSMutableSet *_gestures;
	NSMapTable *_controllersToGuestGestures;
	NSMapTable *_controllersToConflictingGuestGestures;
	int _gestureState;
	id<SBCoordinatedPresenting> _previousActiveController;
	id<SBCoordinatedPresenting> _activeController;
	unsigned _activeHintEdge;
	NSDate *_initialTouchTimeStamp;
	CGPoint _initialPanLocationInViewSpace;
}
@property(retain, nonatomic) id<SBCoordinatedPresenting> activeController;
@property(assign, nonatomic) unsigned activeHintEdge;
@property(retain, nonatomic) NSMapTable *controllersToConflictingGuestGestures;
@property(retain, nonatomic) NSMapTable *controllersToGuestGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) BOOL didEvaluatePressDelay;
@property(assign, nonatomic, getter=isFingerOnMesa) BOOL fingerOnMesa;
@property(assign, nonatomic, getter=isGestureHandlingEnabled) BOOL gestureHandlingEnabled;
@property(assign, nonatomic) int gestureState;
@property(retain, nonatomic) NSMutableSet *gestures;
@property(assign, nonatomic, getter=isGuestGestureActive) BOOL guestGestureActive;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) CGPoint initialPanLocationInViewSpace;
@property(retain, nonatomic) NSDate *initialTouchTimeStamp;
@property(retain, nonatomic) SBLockScreenView *lockScreenView;
@property(retain, nonatomic) SBLockScreenHintLongPressGestureRecognizer *longPressGesture;
@property(retain, nonatomic) SBLockScreenHintPanGestureRecognizer *panGesture;
@property(retain, nonatomic) id<SBCoordinatedPresenting> previousActiveController;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) SBLockScreenHintTapGestureRecognizer *tapGesture;
- (id)init;
- (void)_abortCurrentAnimationForController:(id)controller;
- (void)_beginControllerPresentationForPan;
- (CGRect)_bottomGrabberZone;
- (CGRect)_bottomLeftGrabberZone;
- (CGRect)_cameraGrabberZone;
- (BOOL)_canControllerWithIdentifier:(int)identifier becomeActiveWithTouchAtLocation:(CGPoint)location;
- (void)_cancelGuestGesturesExcludingController:(id)controller;
- (int)_compareControllerWithIdentifier:(int)identifier withControllerWithIdentifier:(int)identifier2;
- (id)_controller:(id)controller managedGestureLikeGesture:(id)gesture;
- (id)_controllerForGesture:(id)gesture;
- (id)_coordinatedPresentingControllerWithIdentifier:(int)identifier;
- (BOOL)_didActiveControllerChange;
- (void)_dismissControllerForPress:(id)press abortingCurrentAnimation:(BOOL)animation;
- (BOOL)_doesController:(id)controller manageGestureLikeGesture:(id)gesture;
- (double)_elapsedTapPeriod;
- (void)_endControllerPresentationForPanInState:(int)state;
- (void)_handlePan:(id)pan;
- (void)_handlePress:(id)press;
- (void)_handleTap:(id)tap;
- (BOOL)_hasCoordinatedPresentingController:(id)controller;
- (BOOL)_hasTapPeriodElapsed;
- (unsigned)_hintEdgeForController:(id)controller;
- (BOOL)_hintGestureShouldBegin:(id)_hintGesture;
- (void)_initializeInitialTouchTimeStamp;
- (void)_installLocalGestures;
- (BOOL)_isBounceEnabledForController:(id)controller locationInWindow:(CGPoint)window;
- (BOOL)_isController:(id)controller excludingViewsUnderGesture:(id)gesture;
- (BOOL)_isPresentationEnabledForController:(id)controller locationInWindow:(CGPoint)window;
- (id)_lockScreenBottomLeftController;
- (id)_lockScreenCameraController;
- (id)_lockScreenNotificationListController;
- (id)_lockScreenNotificationListView;
- (id)_lockScreenViewController;
- (void)_noteBioMatchingEnabledDidChange:(id)_noteBioMatchingEnabled;
- (void)_presentingController:(id)controller willHandlePan:(id)pan;
- (void)_presentingController:(id)controller willHandleTap:(id)tap;
- (void)_reenableGestures;
- (void)_removeAllGestures;
- (void)_removeTapGestureFailureRequirementFromGuestGestures:(id)guestGestures;
- (void)_resetGesture:(id)gesture;
- (void)_resetGesture:(id)gesture forController:(id)controller;
- (void)_resetGestureSequence;
- (void)_resetGestureSequenceAndReenableGestures;
- (void)_resetInitialPanLocation;
- (void)_setLocalGesture:(id)gesture enabled:(BOOL)enabled;
- (id)_tapGestureForActiveController;
- (void)_tapPeriodElapsed;
- (CGRect)_topGrabberZone;
- (void)_updateActiveControllerPresentationForPress:(BOOL)press;
- (void)_updateControllerPresentationForPan;
- (void)_updateControllerPresentationForTap;
- (void)_updateControllerPresentationForTapOrPress:(id)tapOrPress withAnimation:(id)animation abortingCurrentAnimation:(BOOL)animation3;
- (void)_updateGrabberStateForControllerIfNecessary:(id)controllerIfNecessary;
- (id)_viewForGestures;
- (void)addCoordinatedPresentingController:(id)controller;
- (void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)notificationCenterDidDismiss:(id)notificationCenter;
- (void)presentingController:(id)controller conflictingGestureDidBegin:(id)conflictingGesture;
- (void)presentingController:(id)controller conflictingGestureDidEnd:(id)conflictingGesture;
- (BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)presentingController:(id)controller willHandleGesture:(id)gesture;
- (void)presentingControllerDidFinishPresentation:(id)presentingController;
- (void)removeCoordinatedPresentingController:(id)controller;
- (void)resetCoordinatedPresentingController:(id)controller;
@end

