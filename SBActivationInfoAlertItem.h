/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"


__attribute__((visibility("hidden")))
@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UIView *_accessoryView;
	UITextView *_textView;
	NSString *_meid;
	NSString *_imei;
	NSString *_iccid;
	float _alertHeight;
}
+ (id)activeItem;
- (id)init;
- (id)_formattedICCID;
- (id)_formattedIMEI;
- (void)_simStatusChanged:(id)changed;
- (void)_updateTextView;
- (BOOL)allowInSetup;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)forcesModalAlertAppearance;
- (void)willActivate;
@end

