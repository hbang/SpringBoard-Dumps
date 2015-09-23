/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCCQuickLaunchSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate> {
	SBControlCenterButton *_torchButton;
	SBControlCenterButton *_clockButton;
	SBControlCenterButton *_calculatorButton;
	SBControlCenterButton *_cameraButton;
	NSMutableArray *_buttons;
	AVFlashlight *_flashlight;
	BOOL _ccVisible;
	NSObject<OS_dispatch_queue> *_flashlightQueue;
	BOOL _flashlightOn;
}
@property(assign, nonatomic, getter=isFlashlightOn) BOOL flashlightOn;
+ (Class)viewClass;
- (id)init;
- (void)_activateAppWithBundleId:(id)bundleId url:(id)url;
- (id)_bundleIDForButton:(id)button;
- (void)_deviceBlockStateDidChangeNotification:(id)_deviceBlockState;
- (void)_enableTorch:(BOOL)torch;
- (void)_featureLockStateDidChangeNotification:(id)_featureLockState;
- (void)_updateFlashlightPowerState;
- (void)_updateTorchButtonState;
- (id)_urlForButton:(id)button;
- (void)buttonTapped:(id)tapped;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)noteSettingsDidUpdate:(id)noteSettings;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;
- (id)sectionIdentifier;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

