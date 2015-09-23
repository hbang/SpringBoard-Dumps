/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinWindowController : XXUnknownSuperclass {
	UIWindow *_bulletinWindow;
	BOOL _rotatingKeyboard;
	BOOL _aboveAssistant;
	NSMutableSet *_windowClients;
	NSMutableSet *_keyClients;
	NSMutableSet *_busyClients;
	NSMutableSet *_busyReasons;
	SBBulletinRootViewController *_rootVC;
	BOOL _wantsKeyWindow;
}
@property(readonly, retain, nonatomic) UIViewController *rootViewController;
@property(assign, nonatomic, getter=_wantsKeyWindow, setter=_setWantsKeyWindow:) BOOL wantsKeyWindow;
@property(readonly, retain, nonatomic) UIWindow *window;
@property(assign, nonatomic, getter=isWindowAboveAssistant) BOOL windowAboveAssistant;
+ (BOOL)_isSecure;
+ (id)sharedInstance;
+ (BOOL)shouldSuppressAlertForBulletin:(id)bulletin;
- (id)init;
- (BOOL)_allowsShowNotificationsGestureFromBanner:(BOOL)banner;
- (BOOL)_allowsShowNotificationsSystemGestureFromBanner:(BOOL)banner;
- (void)_becomeKeyWindow;
- (void)_didBecomeKeyWindow:(id)window;
- (void)_didResignKeyWindow:(id)window;
- (BOOL)_hasKeyWindowClients;
- (BOOL)_isBusyForReason:(id)reason;
- (void)_resignAsKeyWindow;
- (void)addBusyClient:(id)client;
- (void)addWindowClient:(id)client;
- (void)addWindowClient:(id)client withChildViewController:(id)childViewController;
- (BOOL)allowsDismissBannerGesture;
- (BOOL)allowsHideNotificationsGesture;
- (BOOL)allowsShowNotificationsGesture;
- (BOOL)allowsShowNotificationsSystemGesture;
- (BOOL)allowsShowNotificationsSystemGestureFromBanner;
- (void)dealloc;
- (BOOL)isBusy;
- (void)removeBusyClient:(id)client;
- (void)removeWindowClient:(id)client;
- (void)removeWindowClient:(id)client withChildViewController:(id)childViewController;
- (void)setBusy:(BOOL)busy forReason:(id)reason;
- (void)updateKeyWindowStatusIfNecessary;
@end

