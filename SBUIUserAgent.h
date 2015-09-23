/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBUIUserAgent <NSObject>
- (void)activateModalBulletinAlert:(id)alert;
- (void)activateRemoteAlertService:(id)service options:(id)options;
- (void)activateRemoteAlertService:(id)service options:(id)options activationHandler:(id)handler deactivationHandler:(id)handler4;
- (int)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)observer;
- (void)adjustLockScreenContentByOffset:(float)offset forAwayViewPlugin:(id)awayViewPlugin withAnimationDuration:(double)animationDuration;
- (BOOL)alertIsActive;
- (BOOL)applicationInstalledForDisplayID:(id)displayID;
- (BOOL)canLaunchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId;
- (BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
- (BOOL)canLaunchFromSource:(int)source withURL:(id)url bundleID:(id)anId;
- (BOOL)canUserLaunchIcon;
- (CGRect)defaultContentRegionForAwayViewPlugin:(id)awayViewPlugin withOrientation:(int)orientation;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsLocked;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsTethered;
- (void)dimScreen:(BOOL)screen;
- (void)disableLockScreenBundleNamed:(id)named deactivationContext:(id)context;
- (void)enableLockScreenBundleNamed:(id)named activationContext:(id)context;
- (id)folderNameForDisplayID:(id)displayID;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (BOOL)isApplicationForegroundObscured:(id)obscured;
- (BOOL)isIdleTimerDisabledForReason:(id)reason;
- (BOOL)isNamedRemoteAlertServiceActive:(id)active controllerClassName:(id)name;
- (BOOL)isScreenOn;
- (BOOL)launchApplicationFromSource:(int)source withDisplayID:(id)displayID options:(id)options;
- (BOOL)launchApplicationFromSource:(int)source withURL:(id)url options:(id)options;
- (BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
- (BOOL)launchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
- (BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
- (BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin actionIdentifier:(id)identifier userResponse:(id)response origin:(int)origin;
- (BOOL)launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock;
- (id)localizedDisplayNameForDisplayID:(id)displayID;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary andDimScreen:(BOOL)screen;
- (BOOL)lockScreenIsShowing;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)displayID;
- (void)notifyOnNextUserEvent;
- (BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
- (void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
- (void)prepareToAnswerCall;
- (void)removeActiveInterfaceOrientationObserver:(id)observer;
- (id)searchBackdropView;
- (id)searchBlurEffectView;
- (void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
- (void)setIdleText:(id)text;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (void)setMinimumBacklightLevel:(float)level animated:(BOOL)animated;
- (void)setWallpaperTunnelActive:(BOOL)active forFullscreenAlertController:(id)fullscreenAlertController;
- (BOOL)springBoardIsActive;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)awayViewPlugin;
- (void)updateInterfaceOrientationIfNecessary;
- (void)updateLockScreenInterfaceIfNecessary;
- (CFRunLoopRef)wifiRunLoopRef;
@end

