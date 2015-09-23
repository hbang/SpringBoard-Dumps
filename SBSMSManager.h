/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBSMSManager : XXUnknownSuperclass {
}
+ (BOOL)carrierSMSReceiveOnlyEnabled;
+ (id)sharedSMSManager;
- (id)init;
- (id)badgeNumberOrString;
- (void)dealloc;
- (void)deleteMessage:(id)message deleteConversationIfEmpty:(BOOL)empty;
- (BOOL)isShowingSendFailure;
- (void)markMessageAsRead:(id)read;
- (void)messageReceived:(id)received;
- (void)messageSendError:(id)error;
- (void)messageSent:(id)sent;
- (void)redisplayAllMessagesForCarrierSMSReceiveOnlyMode;
- (void)setBadgeNumberOrString:(id)string;
- (void)updateSMSBadges;
@end

