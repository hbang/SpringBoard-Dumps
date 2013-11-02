/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString, NSArray;

@interface SBWiFiTrustAlertItem : SBAlertItem {
	NSString *_displayName;
	NSString *_networkName;
	NSArray *_certificateArray;
	BOOL _sentResponse;
}
- (id)initWithCertificateArray:(id)certificateArray networkName:(id)name;
- (id)_scanDictionaryWithCertificateData;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (Class)alertSheetClass;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)dismissOnLock;
@end

