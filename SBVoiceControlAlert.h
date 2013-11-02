/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBVoiceControlAlert : SBAlert {
	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	} _voiceControlFlags;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
}
+ (void)bluetoothDeviceRequestedVoiceControl:(id)control;
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)control;
+ (id)pendingOrActiveAlert;
+ (void)registerForAlerts;
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)necessary;
+ (void)setNextRecognitionAudioInputPaths:(id)paths;
+ (BOOL)shouldEnterVoiceControl;
+ (void)unregisterForAlerts;
- (id)init;
- (id)initFromMenuButton;
- (id)initFromWiredHeadsetButton;
- (void)_makeActive;
- (void)_prime;
- (void)_resign;
- (void)_setRoutingAttributesForWiredHeadset:(BOOL)wiredHeadset;
- (void)activateWhenReady;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (double)autoDimTime;
- (void)cancel;
- (void)cancelIfNotActivated;
- (void)dealloc;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
- (BOOL)handleMenuButtonTap;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
@end

