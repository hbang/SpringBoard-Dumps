/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBUIBannerSource <NSObject>
@optional
- (void)bannerViewDidAppear:(id)bannerView;
- (void)bannerViewDidDismiss:(id)bannerView forReason:(int)reason;
- (void)bannerViewWillAppear:(id)bannerView;
- (void)bannerViewWillDismiss:(id)bannerView forReason:(int)reason;
@required
- (id)dequeueNextBannerItemForTarget:(id)target;
- (id)newBannerViewForContext:(id)context;
- (id)peekNextBannerItemForTarget:(id)target;
@end

