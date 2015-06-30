/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBAlertManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBAlertManager : XXUnknownSuperclass <SBAlertDelegate, SBWindowContextManagerDelegate, SBWindowContextHostManagerDelegate> {
	UIScreen *_screen;
	SBAlertWindow *_alertWindow;
	SBAlertWindow *_deferredAlertWindow;
	SBAlertWindow *_lockAlertWindow;
	NSMutableArray *_alerts;
	NSMapTable *_observers;
	NSMutableSet *_removalPendingAlerts;
	BOOL _deactivatingAllAlerts;
	id<SBAlertManagerDelegate> _delegate;
	SBWindowContextManager *_contextManager;
	SBWindowContextHostManager *_contextHostManager;
	struct {
		unsigned delegateOverrideRequester : 1;
		unsigned delegateShouldEnableContextHostingForRequester : 1;
	} _delegateFlags;
}
@property(assign, nonatomic) id<SBAlertManagerDelegate> delegate;
- (id)init;
- (id)initWithScreen:(id)screen;
- (void)_activate:(id)activate;
- (void)_deactivate:(id)deactivate;
- (void)_makeAlertWindowOpaque:(BOOL)opaque;
- (void)_removeFromView:(id)view;
- (void)_resetAlertWindowOpacity;
- (void)activate:(id)activate;
- (id)activeAlert;
- (id)activeAlertWindow;
- (void)addObserver:(id)observer;
- (void)alert:(id)alert requestsBackgroundStyleChangeWithAnimationFactory:(id)animationFactory;
- (void)alertIsReadyToBeDeactivated:(id)beDeactivated;
- (void)alertIsReadyToBeRemovedFromView:(id)view;
- (id)allAlerts;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (BOOL)containsAlert:(id)alert;
- (id)contextHostManager;
- (void)deactivate:(id)deactivate;
- (void)deactivateAlertsAfterLaunch;
- (void)deactivateAll;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)hasStackedAlerts;
- (void)removeObserver:(id)observer;
- (id)screen;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
- (id)topMostWindow;
- (void)windowContextManager:(id)manager didStopTrackingContextsForScreen:(id)screen;
- (BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
- (void)windowContextManager:(id)manager willStartTrackingContextsForScreen:(id)screen;
- (id)windowForAlert:(id)alert;
- (id)windows;
@end

