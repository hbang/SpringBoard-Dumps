/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBBannerContextViewControllerDelegate
- (void)bannerViewController:(id)controller didRequestSticky:(BOOL)sticky;
- (void)bannerViewController:(id)controller willSelectActionWithContext:(id)context;
- (void)bannerViewControllerDidPullDown:(id)bannerViewController;
- (void)bannerViewControllerDidReceiveRaiseGesture:(id)bannerViewController;
- (void)bannerViewControllerDidRequestDismissal:(id)bannerViewController;
- (void)bannerViewControllerDidRequestSticky:(id)bannerViewController;
- (void)bannerViewControllerDidSelectAction:(id)bannerViewController;
- (void)bannerViewControllerDidShrinkForKeyboard:(id)bannerViewController;
@end
