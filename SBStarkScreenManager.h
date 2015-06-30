/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBScreenConnectionHandler.h"
#import "SBStarkScreenControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBStarkScreenManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkScreenManager : XXUnknownSuperclass <SBScreenConnectionHandler, SBStarkScreenControllerDelegate> {
	NSMapTable *_screenToControllerMap;
	SBStarkScreenController *_currentScreenController;
	SBStarkStatusBarStateProvider *_statusBarStateProvider;
	SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
	SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
	SBLockScreenDisableAssertion *_lockScreenDisableAssertion;
	SBPasscodeLockDisableAssertion *_earlyConnectDeviceLockDisableAssertion;
	BOOL _hasShownConnectedAlert;
	BOOL _delayShowingConnectedAlert;
	BOOL _geoSupported;
	BOOL _earlyStarkConnection;
	BOOL _delayUpdatingLockOutMode;
	id<SBStarkScreenManagerDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBStarkScreenManagerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (void)_clearEarlyConnectState;
- (void)_clearEarlyConnectStateTimerExpired;
- (void)_clearPromptState;
- (void)_earlyStarkConnection;
- (void)_promptConnectionSteps;
- (void)_scheduleClearEarlyConnectStateExpirationTimer;
- (void)_setCurrentController:(id)controller;
- (void)_setGeoSupported:(BOOL)supported;
- (void)_unscheduleClearEarlyConnectStateExpirationTimer;
- (void)_updateGeoSupport;
- (void)_usbStarkConnected;
- (id)activeScreenController;
- (id)currentScreenController;
- (void)dealloc;
- (BOOL)handleUnlockAttempt;
- (BOOL)isGeoSupported;
- (BOOL)isStarkActive;
- (void)prepareToHandleUnlockAttempt;
- (BOOL)promptRelockUIIfAppropriate;
- (void)screenManager:(id)manager didTriggerConnectionHandlerEvent:(int)event forScreen:(id)screen;
- (BOOL)screenManager:(id)manager shouldBindConnectionHandlerToScreen:(id)screen;
- (BOOL)starkScreenControllerShouldDelayUpdateLockoutMode:(id)starkScreenController;
- (void)starkScreenControllerWantsRelockUI:(id)ui;
- (BOOL)starkScreenIsAttached;
- (id)statusBarStateProvider;
@end

