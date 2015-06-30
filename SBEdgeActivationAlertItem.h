/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBEdgeActivationAlertItem : SBAlertItem {
	int _error;
	NSString *_reason;
	BOOL _suggestWiFi;
	int _settingsButtonIndex;
}
- (id)initWithErrorCode:(int)errorCode reason:(id)reason suggestWiFi:(BOOL)fi;
- (void)_showNetworkPrefs;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
@end
