/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBConferenceManager : XXUnknownSuperclass {
	BOOL _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (id)_faceTimeApp;
- (void)_faceTimeAppActivationStateChanged:(id)changed;
- (void)_faceTimeCapabilityChanged:(id)changed;
- (void)_faceTimeStateChanged:(id)changed;
- (void)_updateStatusBar;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)canStartFaceTime;
- (id)currentCallRemoteUserId;
- (id)currentCallStatusDisplayString;
- (void)dealloc;
- (void)endFaceTime;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)hasFaceTimeCapability;
- (BOOL)inFaceTime;
- (void)invitedToIMAVChat:(id)imavchat;
- (void)updateStatusBar;
@end

