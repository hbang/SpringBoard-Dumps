/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AFAssistantUIService <NSObject>
@optional
- (void)assistantConnection:(id)connection conversationFailedWithError:(id)error;
- (void)assistantConnection:(id)connection receivedCommand:(id)command;
- (void)assistantConnection:(id)connection requestFailedWithError:(id)error;
- (void)assistantConnection:(id)connection shouldSpeak:(BOOL)speak;
- (void)assistantConnectionConversationFinished:(id)finished;
- (void)assistantConnectionRequestFinished:(id)finished;
@required
- (id)supportedCommands;
@end
