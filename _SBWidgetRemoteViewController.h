/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_NCWidgetViewController_Host_IPC.h"

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SBWidgetRemoteViewController : XXUnknownSuperclass <_NCWidgetViewController_Host_IPC> {
	BOOL _valid;
	_SBWidgetViewControllerOutOfProcess *_managingHost;
	NSObject<OS_dispatch_queue> *_managingHostQueue;
}
@property(assign, nonatomic) _SBWidgetViewControllerOutOfProcess *managingHost;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue;
@property(assign, nonatomic, getter=_isValid, setter=_setValid:) BOOL valid;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)__closeTransactionForAppearanceCallWithState:(int)state withIdentifier:(id)identifier;
- (void)__requestLaunchOfURL:(id)url;
- (void)__requestPreferredViewHeight:(float)height usingAutolayout:(BOOL)autolayout requestIdentifier:(id)identifier;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)_openTransactionForAppearanceCallWithState:(int)state withIdentifier:(id)identifier;
- (void)_performOutstandingAnimationsWithRequestIdentifier:(id)requestIdentifier;
- (void)_performOutstandingCompletionWithRequestIdentifier:(id)requestIdentifier;
- (void)_performUpdateWithReplyHandler:(id)replyHandler;
- (void)_requestEncodedLayerTreeWithReplyHandler:(id)replyHandler;
- (BOOL)_serviceHasScrollToTopView;
- (void)_setWidgetIdentifier:(id)identifier;
- (void)_viewWillTransitionToSize:(CGSize)_view requestIdentifier:(id)identifier;
- (void)dealloc;
- (id)disconnect;
- (void)viewServiceDidTerminateWithError:(id)viewService;
@end

