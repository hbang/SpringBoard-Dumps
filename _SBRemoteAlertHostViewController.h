/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIRemoteAlertHostInterface.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol _SBRemoteAlertHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SBRemoteAlertHostViewController : XXUnknownSuperclass <SBUIRemoteAlertHostInterface> {
	id<_SBRemoteAlertHostViewControllerDelegate> _delegate;
	NSString *_serviceClassName;
}
@property(assign, nonatomic) id<_SBRemoteAlertHostViewControllerDelegate> delegate;
@property(copy, nonatomic) NSString *serviceClassName;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)dealloc;
- (id)description;
- (void)dismiss;
- (void)dismissAndLockUIIfNecessary;
- (void)setAllowsAlertStacking:(BOOL)stacking;
- (void)setAllowsBanners:(BOOL)banners;
- (void)setAllowsMenuButtonDismissal:(BOOL)dismissal;
- (void)setBackgroundStyle:(int)style withDuration:(double)duration;
- (void)setDesiredAutoLockDuration:(double)duration;
- (void)setDesiredHardwareButtonEvents:(int)events;
- (void)setDesiredStatusBarStyleOverrides:(int)overrides;
- (void)setDismissalAnimationStyle:(int)style;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (void)setShouldDisableFadeInAnimation:(BOOL)disableFadeInAnimation;
- (void)setShouldDismissOnUILock:(BOOL)dismissOnUILock;
- (void)setStatusBarHidden:(BOOL)hidden withDuration:(double)duration;
- (void)setSupportedInterfaceOrientationOverride:(unsigned)override;
- (void)setWallpaperTunnelActive:(BOOL)active;
- (void)viewServiceDidTerminateWithError:(id)viewService;
@end

