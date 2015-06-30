/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction {
	SBAlert *_activatingAlert;
	SBAlert *_deactivatingAlert;
	BOOL _activation;
}
- (id)initActivationWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller from:(id)from to:(id)to;
- (id)initDeactivationWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller from:(id)from to:(id)to;
- (void)_commit;
- (id)_initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller activatingAlert:(id)alert deactivatingAlert:(id)alert5 activation:(BOOL)activation;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertWillDeactivate:(id)selfStarkAlert;
@end

