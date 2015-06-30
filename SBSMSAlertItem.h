/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBSMSAlertItem : SBAlertItem {
	CKMessage *_message;
	int _alignment;
	BOOL _alignmentHasBeenSet;
	BOOL _displayingEntireMessage;
	BOOL _playedSound;
	NSString *_name;
}
+ (BOOL)_showSMSPreview;
+ (void)playMessageReceived;
+ (void)prefsChanged;
+ (BOOL)shouldHideSMSPreview;
+ (BOOL)shouldPlayMessageReceived;
- (void)_deactivateAllTaggedSMSAlertItems;
- (int)_groupID;
- (void)_markReadIfDisplayingEntireMessage;
- (void)_tag;
- (void)_untag;
- (id)address;
- (id)alertImageData;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (id)alertSheet;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (int)bodyTextAlignmentForAlertSheet:(id)alertSheet displayedLineCount:(int)count;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)hasAttachments;
- (id)lockLabel;
- (id)messageText;
- (id)name;
- (void)performUnlockAction;
- (void)reply;
- (BOOL)senderIsVoicemail;
- (void)setMessage:(id)message;
- (BOOL)shouldShowInEmergencyCall;
- (void)willActivate;
- (void)willPresentAlertView:(id)view;
- (BOOL)willShowInAwayItems;
@end
