/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBScreenConnectionHandler.h"

@class NSMapTable, SBStarkBackgroundProviderManager, SBStarkStatusBarStateProvider, SBStarkScreenController, SBSpuriousScreenUndimmingAssertion, SBPasscodeLockDisableAssertion;
@protocol SBStarkScreenManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkScreenManager : XXUnknownSuperclass <SBScreenConnectionHandler> {
	SBStarkBackgroundProviderManager *_backgroundProviderManager;
	NSMapTable *_screenToControllerMap;
	SBStarkScreenController *_activeScreenController;
	SBStarkStatusBarStateProvider *_statusBarStateProvider;
	SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
	SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
	id<SBStarkScreenManagerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBStarkScreenManagerDelegate> delegate;
+ (id)sharedInstance;
- (id)init;
- (void)_promptUnlockIfNecessary;
- (void)_setActiveController:(id)controller;
- (id)activeScreenController;
- (id)backgroundProviderManager;
- (void)dealloc;
- (BOOL)isStarkActive;
- (void)screenManager:(id)manager didTriggerConnectionHandlerEvent:(int)event forScreen:(id)screen;
- (BOOL)screenManager:(id)manager shouldBindConnectionHandlerToScreen:(id)screen;
- (id)statusBarStateProvider;
@end

