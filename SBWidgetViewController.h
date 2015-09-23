/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWidgetViewController : XXUnknownSuperclass {
	BOOL _hasContent;
	int _requestState;
	BOOL _implementsPerformUpdate;
	NSString *_appBundleID;
	NSString *_widgetIdentifier;
	BSAuditToken *_auditToken;
	id<SBWidgetViewControllerDelegate> _delegate;
}
@property(copy, nonatomic) NSString *appBundleID;
@property(readonly, assign, nonatomic) BSAuditToken *auditToken;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> delegate;
@property(assign, nonatomic) BOOL hasContent;
@property(readonly, assign, nonatomic) BOOL implementsPerformUpdate;
@property(readonly, assign, nonatomic, getter=isInternal) BOOL internal;
@property(assign, nonatomic) int requestState;
@property(readonly, assign, nonatomic) NSString *widgetIdentifier;
+ (id)_requestLocalViewControllerOfClass:(Class)aClass context:(id)context handler:(id)handler;
+ (id)displayNameForWidgetWithExtension:(id)extension containerBundleIdentifier:(id)identifier;
+ (id)requestViewController:(id)controller context:(id)context handler:(id)handler;
+ (id)widgetViewControllerWithIdentifier:(id)identifier bundlePath:(id)path;
- (id)initWithWidgetIdentifier:(id)widgetIdentifier bundlePath:(id)path;
- (id)_cancelTouches;
- (void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(id)completionHandler;
- (void)_requestLaunchOfURL:(id)url;
- (void)_requestPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (void)captureSnapshotWithCompletionHandler:(id)completionHandler;
- (void)connectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
- (void)dealloc;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)insertSnapshotWithCompletionHandler:(id)completionHandler;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id)completionHandler;
- (void)performUpdateWithCompletionHandler:(id)completionHandler;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(id)completionHandler;
- (void)requestPreferredViewHeightWithHandler:(id)handler;
- (void)updateContentWidth:(float)width;
- (void)validateSnapshotViewForActiveLayoutMode;
@end

