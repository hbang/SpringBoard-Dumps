/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAlertViewDelegate.h"


__attribute__((visibility("hidden")))
@interface SBActivationFailedAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	BOOL _showRetryButton;
	BOOL _showSupportNumber;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFailureCount:(int)failureCount;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)performUnlockAction;
@end

