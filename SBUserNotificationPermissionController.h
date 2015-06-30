/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBUserNotificationPermissionController : XXUnknownSuperclass <SBUserNotificationCapable> {
	BOOL _queueSuspended;
	BOOL _showingAlert;
	BOOL _canPerformQueuedActions;
	NSString *_bundleIdentifier;
	NSObject<OS_dispatch_queue> *_performQueue;
}
@property(readonly, retain, nonatomic) SBApplication *application;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(assign, nonatomic) BOOL canPerformQueuedActions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *performQueue;
@property(assign, nonatomic, getter=isQueueSuspended) BOOL queueSuspended;
@property(assign, nonatomic, getter=isShowingAlert) BOOL showingAlert;
@property(readonly, assign) Class superclass;
+ (id)controllerForApplication:(id)application;
+ (id)controllerForBundleIdentifier:(id)bundleIdentifier;
+ (void)createCacheIfNecessary;
+ (void)evictControllerFromCache:(id)cache;
+ (void)migratePushSettings:(unsigned)settings forBundleIdentifier:(id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (void)didDeactivateAlert:(id)alert reason:(int)reason;
- (id)effectiveUserNotificationSettings;
- (unsigned)enabledTypesForAdditionalTypes:(unsigned)additionalTypes supportedTypes:(unsigned)types enabledTypes:(unsigned)types3;
- (void)enqueueAction:(id)action;
- (BOOL)haveRegisteredBefore;
- (void)installedApplicationsChanged:(id)changed;
- (void)noteBadgeSetLocally;
- (void)notePermissionAlertAccepted:(BOOL)accepted withSettings:(id)settings makeAppDelegateCallback:(BOOL)callback;
- (void)registerPrivilegedForAdditionalTypes:(unsigned)additionalTypes;
- (void)registerSupportedNotificationTypes:(unsigned)types withEnabledNotificationSettings:(id)enabledNotificationSettings makeAppDelegateCallback:(BOOL)callback bypassAlert:(BOOL)alert;
- (void)registerUserNotificationSettings:(id)settings makeAppDelegateCallback:(BOOL)callback;
- (void)saveRegisteredUserNotificationSettings:(id)settings;
- (void)saveRegisteredUserNotificationSettings:(id)settings userDeniedNotifications:(BOOL)notifications;
- (void)scheduleLocalNotifications:(id)notifications replaceExistingNotifications:(BOOL)notifications2;
- (void)setBadge:(id)badge;
- (void)setBadge:(id)badge onBehalfOfSystem:(BOOL)system;
- (void)setHaveRegisteredBefore:(BOOL)before;
- (id)settingsForRequestedSettings:(id)requestedSettings systemDesiredTypes:(unsigned)types;
- (void)tearDownQueue;
- (void)unregisterUserNotificationSettings;
@end

