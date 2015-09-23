/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver> {
}
- (id)initWithAllowedTarget:(id)allowedTarget;
- (void)alertItemsController:(id)controller didActivateAlertItem:(id)item;
- (void)alertItemsController:(id)controller didDeactivateAlertItem:(id)item forReason:(int)reason;
- (void)dealloc;
@end

