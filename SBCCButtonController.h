/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBCCButtonModuleDelegate.h"
#import "SBUIControlCenterButtonDelegate.h"

@protocol SBCCButtonControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBCCButtonController : XXUnknownSuperclass <SBCCButtonModuleDelegate, SBUIControlCenterButtonDelegate> {
	UIAlertController *_alertController;
	id<SBCCButtonControllerDelegate> _delegate;
	SBCCButtonModule *_module;
}
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id<SBCCButtonControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBCCButtonModule *module;
@property(readonly, assign) Class superclass;
- (id)initWithModule:(id)module;
- (void)_buttonTapped;
- (void)_updateButtonProperties;
- (void)_updateButtonState;
- (void)buttonModulePropertiesDidChange:(id)buttonModuleProperties;
- (void)buttonModuleStateDidChange:(id)buttonModuleState;
- (void)buttonTapped:(id)tapped;
- (void)controlCenterDidDismiss;
- (void)dealloc;
- (id)glyphImageForState:(int)state;
- (BOOL)presentConfirmationAlert;
- (id)view;
- (void)viewDidLoad;
@end

