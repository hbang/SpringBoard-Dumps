/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBWiFiPasswordAlertItem : SBAlertItem {
	id _delegate;
	NSString *_name;
}
- (id)initWithNetworkName:(id)networkName;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)dismiss;
- (BOOL)dismissOnLock;
- (void)returnKeyPressed:(id)pressed;
- (void)setDelegate:(id)delegate;
@end

