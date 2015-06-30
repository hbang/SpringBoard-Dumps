/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBReachabilityTriggerDelegate;

__attribute__((visibility("hidden")))
@interface SBReachabilityTrigger : XXUnknownSuperclass <SBUIBiometricEventObserver> {
	id<SBReachabilityTriggerDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, assign, nonatomic) id<SBReachabilityTriggerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithDelegate:(id)delegate;
- (void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
- (void)clearPendingReachabilityTrigger;
- (void)setEnabled:(BOOL)enabled;
@end
