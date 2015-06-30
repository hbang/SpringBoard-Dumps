/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction {
	SBAlert *_activatingAlert;
	SBAlert *_deactivatingAlert;
	BOOL _activation;
}
- (id)initActivationWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to;
- (id)initDeactivationWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to;
- (void)_commit;
- (id)_initWithWorkspace:(id)workspace alertManager:(id)manager activatingAlert:(id)alert deactivatingAlert:(id)alert4 activation:(BOOL)activation;
- (BOOL)alertDidDeactivate:(id)alert overAlerts:(id)alerts;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfAlertWillActivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfAlertWillDeactivate:(id)selfAlert overAlerts:(id)alerts;
@end

