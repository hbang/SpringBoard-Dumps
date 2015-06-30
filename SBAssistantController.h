/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBHomeCentricPopoverControllerDelegate.h"
#import "SBShowcaseViewControllerProtocol.h"
#import "SBUIPluginHost.h"


__attribute__((visibility("hidden")))
@interface SBAssistantController : SBUIPluginHost <SBHomeCentricPopoverControllerDelegate, SBShowcaseViewControllerProtocol> {
	SBHomeCentricPopoverController *_homeCentricPopover;
	NSString *_popoverAppDisplayIDBeingHosted;
	SBShowcaseController *_showcase;
	int _revealMode;
	BOOL _unlockedDevice;
	BOOL _isDismissing;
	int _activationEvent;
	SBDeviceLockDisableAssertion *_disableAssertion;
}
@property(assign, getter=isDismissing) BOOL dismissing;
@property(assign, nonatomic) int revealMode;
@property(assign, nonatomic) SBShowcaseController *showcase;
@property(assign, nonatomic) BOOL unlockedDevice;
+ (BOOL)_runActivateAssistantTest;
+ (BOOL)isAssistantRunningHidden;
+ (BOOL)isAssistantVisible;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (BOOL)shouldEnterAssistant;
+ (BOOL)supportedAndEnabled;
- (id)init;
- (void)_cleanupContextHosting;
- (void)_dismissUIPlugin:(id)plugin animated:(BOOL)animated;
- (BOOL)_isPluginLoaded;
- (void)_loadPlugin;
- (void)_notePluginVisibilityDidChange;
- (void)_presentPopover:(id)popover revealMode:(int)mode completion:(id)completion;
- (int)_showcaseRevealModeForPluginRevealMode:(int)pluginRevealMode;
- (BOOL)activateIgnoringTouches;
- (float)bottomBarHeight;
- (void)dealloc;
- (void)dismissAssistant;
- (void)dismissAssistantForAlertActivation:(id)alertActivation;
- (void)dismissAssistantWithFade;
- (void)dismissAssistantWithFadeOfDuration:(double)duration;
- (void)homeCentricPopoverDidDismissView:(id)homeCentricPopover;
- (void)homeCentricPopoverDidPresentView:(id)homeCentricPopover;
- (void)homeCentricPopoverWillDismissView:(id)homeCentricPopover animated:(BOOL)animated;
- (void)homeCentricPopoverWillPresentView:(id)homeCentricPopover animated:(BOOL)animated;
- (BOOL)pluginSuppressesNotifications;
- (BOOL)pluginWantsActivationEvent:(int)event interval:(double *)interval;
- (BOOL)pluginWantsInterfaceOrientation:(int *)orientation;
- (BOOL)pluginWantsScreenDimInterval:(double *)interval;
- (void)preparePluginForActivationEvent:(int)activationEvent afterInterval:(double)interval;
- (float)revealAmountForMode:(int)mode;
- (void)revealModeWillChange:(int)revealMode;
- (BOOL)shouldShowLockStatusBarTime;
- (void)uiPlugin:(id)plugin forceUpdateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
- (void)uiPlugin:(id)plugin ignoresKeyboardAvoidance:(BOOL)avoidance;
- (void)uiPlugin:(id)plugin isNowRunning:(BOOL)running;
- (BOOL)uiPlugin:(id)plugin launchApplicationWithBundleID:(id)bundleID openURL:(id)url;
- (BOOL)uiPlugin:(id)plugin openURL:(id)url;
- (BOOL)uiPluginAttemptDeviceUnlock:(id)unlock withPassword:(id)password lockViewOwner:(id)owner;
- (void)uiPluginUserEventOccurred:(id)occurred;
- (BOOL)uiPluginWantsActivation:(id)activation forEvent:(int)event revealMode:(int)mode completion:(id)completion;
- (void)uiPluginWantsSizeUpdate:(id)update revealMode:(int)mode withBlock:(id)block;
- (void)viewDidAppear;
- (void)viewDidDisappear;
@end

