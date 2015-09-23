/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayModel : NSObject {
	SBAwayController *_controller;
	NSMutableArray *_standardVMs;
	NSMutableArray *_calls;
	NSMutableArray *_SMSs;
	NSMutableArray *_videoConferences;
	NSMutableArray *_otherAwayItems;
}
+ (BOOL)shouldHideSMSSender;
- (id)initWithController:(id)controller;
- (void)addCall:(CTCallRef)call;
- (void)addOtherAwayItem:(id)item;
- (void)addSMSMessage:(id)message;
- (void)addVideoConferenceWithInviter:(id)inviter atDate:(id)date;
- (void)clearAwayItems;
- (void)dealloc;
- (void)markAwayTime;
- (id)missedItems;
- (void)populateWithMissedCalls:(id)missedCalls;
- (void)populateWithMissedEnhancedVoiceMails:(id)missedEnhancedVoiceMails;
- (void)populateWithMissedSMS:(id)missedSMS;
- (void)populateWithMissedVideoConferences:(id)missedVideoConferences;
- (void)setStandardVoiceMailCount:(int)count;
- (int)uncoalescedMissedItemCount;
@end

