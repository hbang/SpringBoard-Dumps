/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertDelegate.h"
#import "FBWindowContextManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "FBWindowContextManagerObserver.h"
#import "SpringBoard-Structs.h"

@protocol SBAlertManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBAlertManager : XXUnknownSuperclass <SBAlertDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver> {
	UIScreen *_screen;
	CGRect _windowFrame;
	FBScene *_alertScene;
	SBAlertWindow *_alertWindow;
	SBAlertWindow *_deferredAlertWindow;
	NSMutableArray *_alerts;
	NSMapTable *_observers;
	NSMutableSet *_removalPendingAlerts;
	NSMapTable *_alertToAccessoryWrappersMap;
	BOOL _deactivatingAllAlerts;
	id<SBAlertManagerDelegate> _delegate;
	SBDisableActiveInterfaceOrientationChangeAssertion *_orientationLockAssertion;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
	} _delegateFlags;
}
@property(readonly, assign, nonatomic) SBAlertWindow *alertWindow;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBAlertManagerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithScreen:(id)screen delegate:(id)delegate;
- (id)_accessoryWrapperForAlert:(id)alert withWindow:(id)window hostRequester:(id)requester;
- (void)_activate:(id)activate;
- (void)_assistantVisibilityDidChange:(id)_assistantVisibility;
- (void)_controlCenterDidDeactivate:(id)_controlCenter;
- (id)_createAlertWindowForAlert:(id)alert;
- (void)_deactivate:(id)deactivate;
- (void)_disablePortraitOrientationLock;
- (void)_disablePortraitOrientationLockIfPossibleForAlert:(id)alert;
- (void)_enablePortraitOrientationLock;
- (void)_hideHostedAccessoryViewsForAlert:(id)alert;
- (void)_hostAccessoryWindowsForActivatingAlert:(id)activatingAlert;
- (id)_hostedAccessoryViewsForAlert:(id)alert;
- (void)_makeAlertWindowOpaque:(BOOL)opaque;
- (BOOL)_needsPortraitOrientationLockForAlert:(id)alert;
- (void)_notificationCenterDidDeactivate:(id)_notificationCenter;
- (void)_removeFromView:(id)view oldAlertIndex:(unsigned)index;
- (void)_removeHostedAccessoryViewsForRequester:(id)requester;
- (void)_resetAlertWindowOpacity;
- (void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)deactivatingAlert;
- (void)_stopHostingAccessoryWindowsForWrapper:(id)wrapper;
- (void)activate:(id)activate;
- (id)activeAlert;
- (void)addObserver:(id)observer;
- (void)alert:(id)alert requestsBackgroundStyleChangeWithAnimationFactory:(id)animationFactory;
- (BOOL)alertCanAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)alertIsReadyToBeDeactivated:(id)beDeactivated;
- (void)alertIsReadyToBeRemovedFromView:(id)view;
- (void)alertWantsToForceWallpaperTunnelUpdate:(id)forceWallpaperTunnelUpdate;
- (void)alertWillDismiss:(id)alert;
- (id)allAlerts;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (BOOL)containsAlert:(id)alert;
- (id)contextHostManager;
- (void)deactivate:(id)deactivate;
- (void)deactivateAlertsAfterLaunch;
- (void)deactivateAll;
- (void)dealloc;
- (BOOL)hasStackedAlerts;
- (void)removeObserver:(id)observer;
- (id)screen;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
- (BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
- (void)windowContextManagerDidStopTrackingContexts:(id)windowContextManager;
- (void)windowContextManagerWillStartTrackingContexts:(id)windowContextManager;
@end

