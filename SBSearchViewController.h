/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchViewController : XXUnknownSuperclass <SBReachabilityObserver, UIGestureRecognizerDelegate, SPUISearchViewControllerPresentation, SPUISearchPluginWrapperInterface> {
	SBSearchBackdropView *_searchBackdrop;
	SPUINavigationController *_searchNavigationController;
	SPUISearchViewController *_searchViewController;
	FBDisplayLayoutElement *_displayLayoutElement;
	BOOL _isDisplayLayoutElementActive;
	BOOL _needsStatusBarLayoutLayer;
	BOOL _needsFakeStatusBarForModalPresentation;
	BOOL _isPresenting;
	UIGestureRecognizer *_dismissReachabilityGesture;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property(readonly, assign, nonatomic, getter=isFadingOut) BOOL fadingOut;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL needsFakeStatusBarForModalPresentation;
@property(assign, nonatomic) BOOL needsStatusBarLayoutLayer;
@property(assign, nonatomic) unsigned presentsFromEdge;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
+ (id)sharedInstance;
- (id)init;
- (double)_accessibilityActivationAnimationStartDelay;
- (BOOL)_hasResults;
- (void)_lockScreenUIWillLock:(id)_lockScreenUI;
- (void)_performReachabilityTransactionForActivate:(BOOL)activate immediately:(BOOL)immediately;
- (id)_searchViewControllerProxy;
- (void)dealloc;
- (void)didFinishPresenting:(BOOL)presenting;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)animated completionBlock:(id)block;
- (void)dismissReachability:(id)reachability;
- (id)displayNameForApplicationWithBundleIdentifier:(id)bundleIdentifier;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)handleCancelReachabilityGesture;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)loadView;
- (BOOL)reachabilityModeActive;
- (BOOL)reachabilitySupported;
- (void)requestGestureResetAnimated:(BOOL)animated;
- (id)searchViewController;
- (void)searchViewControllerWillTriggerLaunch;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)updatePresentationProgress:(float)progress;
- (void)willBeginDismissing:(BOOL)dismissing;
- (void)willBeginPresentingAnimated:(BOOL)animated;
- (void)willBeginPresentingAnimated:(BOOL)animated fromSource:(unsigned)source;
@end

