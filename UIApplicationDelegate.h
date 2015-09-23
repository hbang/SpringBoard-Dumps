/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol UIApplicationDelegate <NSObject>
@optional
@property(retain, nonatomic) UIWindow *window;
- (BOOL)application:(id)application continueUserActivity:(id)activity restorationHandler:(id)handler;
- (void)application:(id)application didChangeStatusBarFrame:(CGRect)frame;
- (void)application:(id)application didChangeStatusBarOrientation:(int)orientation;
- (void)application:(id)application didDecodeRestorableStateWithCoder:(id)coder;
- (void)application:(id)application didFailToContinueUserActivityWithType:(id)type error:(id)error;
- (void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
- (void)application:(id)application didReceiveLocalNotification:(id)notification;
- (void)application:(id)application didReceiveRemoteNotification:(id)notification;
- (void)application:(id)application didReceiveRemoteNotification:(id)notification fetchCompletionHandler:(id)handler;
- (void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
- (void)application:(id)application didRegisterUserNotificationSettings:(id)settings;
- (void)application:(id)application didUpdateUserActivity:(id)activity;
- (void)application:(id)application handleActionWithIdentifier:(id)identifier forLocalNotification:(id)localNotification completionHandler:(id)handler;
- (void)application:(id)application handleActionWithIdentifier:(id)identifier forLocalNotification:(id)localNotification withResponseInfo:(id)responseInfo completionHandler:(id)handler;
- (void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification completionHandler:(id)handler;
- (void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification withResponseInfo:(id)responseInfo completionHandler:(id)handler;
- (void)application:(id)application handleEventsForBackgroundURLSession:(id)backgroundURLSession completionHandler:(id)handler;
- (BOOL)application:(id)application handleOpenURL:(id)url;
- (void)application:(id)application handleWatchKitExtensionRequest:(id)request reply:(id)reply;
- (BOOL)application:(id)application openURL:(id)url options:(id)options;
- (BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
- (void)application:(id)application performActionForShortcutItem:(id)shortcutItem completionHandler:(id)handler;
- (void)application:(id)application performFetchWithCompletionHandler:(id)completionHandler;
- (BOOL)application:(id)application shouldAllowExtensionPointIdentifier:(id)identifier;
- (BOOL)application:(id)application shouldRestoreApplicationState:(id)state;
- (BOOL)application:(id)application shouldSaveApplicationState:(id)state;
- (unsigned)application:(id)application supportedInterfaceOrientationsForWindow:(id)window;
- (id)application:(id)application viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
- (void)application:(id)application willChangeStatusBarFrame:(CGRect)frame;
- (void)application:(id)application willChangeStatusBarOrientation:(int)orientation duration:(double)duration;
- (BOOL)application:(id)application willContinueUserActivityWithType:(id)type;
- (void)application:(id)application willEncodeRestorableStateWithCoder:(id)coder;
- (BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;
- (void)applicationDidBecomeActive:(id)application;
- (void)applicationDidEnterBackground:(id)application;
- (void)applicationDidFinishLaunching:(id)application;
- (void)applicationDidReceiveMemoryWarning:(id)application;
- (void)applicationProtectedDataDidBecomeAvailable:(id)applicationProtectedData;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)applicationProtectedData;
- (void)applicationShouldRequestHealthAuthorization:(id)application;
- (void)applicationSignificantTimeChange:(id)change;
- (void)applicationWillEnterForeground:(id)application;
- (void)applicationWillResignActive:(id)application;
- (void)applicationWillTerminate:(id)application;
@end

