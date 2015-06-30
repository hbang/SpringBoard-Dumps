/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"

@protocol SBLockScreenPluginControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenPluginController : XXUnknownSuperclass <_UISettingsKeyObserver> {
	SBLockScreenPluginLoader *_pluginLoader;
	NSMutableDictionary *_plugins;
	SBLockScreenPlugin *_activePlugin;
	SBLockScreenPlugin *_displayedPlugin;
	SBLockScreenPluginTransitionFactory *_transitionFactory;
	id<SBLockScreenPluginControllerDelegate> _delegate;
	SBLockScreenViewController *_lockScreenViewController;
	BOOL _pluginControllerReceivedViewWillDisappear;
	BOOL _pluginControllerReceivedViewDidDisappear;
	UIWindow *_previousWindow;
	BOOL _removedDisplayedPluginTemporarily;
	SBLockScreenTestPluginSettings *_testSettings;
	BOOL _lockScreenHasNotifications;
	BOOL _allowDisplayOfPlugins;
	float _fadeDuration;
}
@property(assign, nonatomic) BOOL allowDisplayOfPlugins;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBLockScreenPluginControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(assign) float fadeDuration;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL lockScreenHasNotifications;
@property(assign, nonatomic) SBLockScreenViewController *lockScreenViewController;
@property(retain, nonatomic) SBLockScreenPluginLoader *pluginLoader;
@property(readonly, assign) Class superclass;
- (id)initWithLockScreenViewController:(id)lockScreenViewController;
- (void)_addObservers;
- (void)_disablePluginsPassingTest:(id)test withReason:(id)reason;
- (void)_handleApplicationExit:(id)exit;
- (void)_handlePluginDisable:(id)disable;
- (void)_handleUIRelock;
- (void)_handleUpdatePluginLegibilitySettings:(id)settings;
- (id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)display;
- (BOOL)_loadLockScreenPluginWithName:(id)name activationContext:(id)context;
- (void)_lockScreenDidMoveToWindow;
- (id)_lockScreenView;
- (void)_lockScreenWillMoveToWindow;
- (void)_notifyDisplayedPluginAddedToWindow;
- (void)_notifyDisplayedPluginRemovedFromWindow;
- (void)_passcodeLockedStateChanged:(id)changed;
- (id)_pluginForName:(id)name controller:(id)controller;
- (BOOL)_pluginHidesNotificationList:(id)list;
- (id)_pluginView;
- (void)_refreshLockScreenPlugin;
- (void)_removeActivePlugin;
- (void)_removeDisplayedPluginPermanently:(BOOL)permanently;
- (void)_setActivePlugin:(id)plugin;
- (void)_setDisplayedPlugin:(id)plugin;
- (void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
- (id)_transitionContextWithOldPlugin:(id)oldPlugin newPlugin:(id)plugin;
- (void)_transitionFromExclusionaryPluginToNotificationList;
- (void)_transitionFromNotificationListToExclusionaryPlugin;
- (void)_updateCallPluginPresentationStyle;
- (void)_updateNotificationListForNewlyActivatedPlugin;
- (id)activePlugin;
- (id)activePluginBundleName;
- (BOOL)activePluginHidesNotificationList;
- (void)dealloc;
- (CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
- (BOOL)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
- (id)displayedPlugin;
- (BOOL)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (void)handleLockScreenTemporarilyDismissed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleUIUnlock;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)isPhonePluginActive;
- (BOOL)isPhonePluginVisible;
- (BOOL)isPluginVisible;
- (BOOL)pluginControllerShouldAnimateOthersResumption;
- (void)reset;
- (BOOL)sendEventToPlugin:(id)plugin;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (BOOL)wantsMenuButtonHeldEvent;
@end

