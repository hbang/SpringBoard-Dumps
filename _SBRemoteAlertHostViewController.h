/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface _SBRemoteAlertHostViewController : XXUnknownSuperclass <SBUIRemoteAlertHostInterface> {
	id<_SBRemoteAlertHostViewControllerDelegate> _delegate;
	NSString *_serviceClassName;
}
@property(assign, nonatomic) id<_SBRemoteAlertHostViewControllerDelegate> delegate;
@property(copy, nonatomic) NSString *serviceClassName;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (id)description;
- (void)dismiss;
- (void)setAllowsBanners:(BOOL)banners;
- (void)viewServiceDidTerminateWithError:(id)viewService;
@end

