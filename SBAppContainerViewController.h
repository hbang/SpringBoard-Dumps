/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLayoutElementViewController.h"
#import "SpringBoard-Structs.h"
#import "FBSceneMonitorDelegate.h"


__attribute__((visibility("hidden")))
@interface SBAppContainerViewController : SBLayoutElementViewController <FBSceneMonitorDelegate> {
	SBApplication *_application;
	NSString *_sceneIdentifier;
	FBScene *_scene;
	FBSceneMonitor *_monitor;
	FBSSceneSettingsDiffInspector *_settingsInspector;
	FBSSceneSettingsDiffInspector *_effectiveSettingsInspector;
	UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
	NSCountedSet *_sideSwitcherHiddenRequesters;
}
@property(retain, nonatomic) SBApplication *application;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) int displayMode;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString *sceneIdentifier;
@property(readonly, assign) Class superclass;
- (void)_configureWithScene:(id)scene;
- (void)_invalidateSceneDerivedObjects;
- (void)_layoutTransitionDidEnd;
- (void)_updateEffectiveLayoutElementVisibility;
- (void)_updateSideSwitcherGrabber;
- (void)configureWithEntity:(id)entity forElement:(id)element layoutState:(id)state;
- (void)dealloc;
- (BOOL)isSideSwitcherGrabberHidden;
- (void)loadView;
- (void)prepareForReuse;
- (void)sceneMonitor:(id)monitor effectiveSceneSettingsDidChangeWithDiff:(id)effectiveSceneSettings;
- (void)sceneMonitor:(id)monitor pairingStatusDidChangeForExternalSceneIDs:(id)pairingStatus;
- (void)sceneMonitor:(id)monitor sceneClientSettingsDidChangeWithDiff:(id)sceneClientSettings transitionContext:(id)context;
- (void)sceneMonitor:(id)monitor sceneSettingsDidChangeWithDiff:(id)sceneSettings;
- (void)sceneMonitor:(id)monitor sceneWasCreated:(id)created;
- (void)setDisplayMode:(int)mode options:(unsigned)options withAnimationFactory:(id)animationFactory completion:(id)completion;
- (void)setSideSwitcherGrabberHidden:(BOOL)hidden forRequester:(id)requester;
- (id)snapshotView;
- (BOOL)supportsReuse;
- (id)view;
- (void)viewWillLayoutSubviews;
@end

