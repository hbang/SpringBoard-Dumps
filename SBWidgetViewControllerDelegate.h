/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBWidgetViewControllerDelegate <NSObject>
@optional
- (int)activeLayoutModeForWidget:(id)widget;
- (void)attemptReconnectionAfterUnanticipatedDisconnection:(id)disconnection;
- (void)contentAvailabilityDidChangeForWidget:(id)contentAvailability;
- (id)extensionForWidget:(id)widget;
- (UIEdgeInsets)marginInsetsForWidget:(id)widget;
- (CGSize)maxSizeForWidget:(id)widget;
- (void)remoteViewControllerDidConnectForWidget:(id)remoteViewController;
- (BOOL)shouldRequestWidgetRemoteViewControllers;
- (id)widget:(id)widget didUpdatePreferredHeight:(float)height completion:(id)completion;
- (void)widget:(id)widget requestsLaunchOfURL:(id)url;
- (BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)widget;
@end

