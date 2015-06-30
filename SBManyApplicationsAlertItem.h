/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBManyApplicationsAlertItem : XXUnknownSuperclass {
	NSURL *_url;
	NSArray *_applications;
	id _completion;
}
@property(readonly, retain, nonatomic) NSArray *applications;
@property(readonly, copy, nonatomic) id completion;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)init;
- (id)initWithURL:(id)url applications:(id)applications completion:(id)completion;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end

