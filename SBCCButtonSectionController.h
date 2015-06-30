/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterSectionViewController.h"
#import "SBCCButtonControllerDelegate.h"
#import "_UISettingsKeyPathObserver.h"


__attribute__((visibility("hidden")))
@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver> {
	NSMutableArray *_modules;
	NSMutableDictionary *_modulesByID;
	NSMutableDictionary *_moduleControllersByID;
	SBControlCenterButtonSectionSettings *_settings;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBControlCenterButtonSectionSettings *settings;
@property(readonly, assign) Class superclass;
+ (Class)buttonControllerClass;
+ (Class)viewClass;
- (id)init;
- (void)_activateModule:(id)module;
- (void)_addButtonModule:(id)module;
- (id)_allButtonModules;
- (id)_controllerForModule:(id)module;
- (void)_deactivateModule:(id)module;
- (id)_sortKeyForModule:(id)module;
- (void)_updateSettings;
- (void)buttonController:(id)controller publishStatusUpdate:(id)update;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (id)sectionIdentifier;
- (void)settings:(id)settings changedValueForKeyPath:(id)keyPath;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end

