/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBUIBannerItemView;

__attribute__((visibility("hidden")))
@interface SBBannerTransitionContext : XXUnknownSuperclass {
	UIView<SBUIBannerItemView> *_fromView;
	UIView<SBUIBannerItemView> *_toView;
	int dismissReason;
	int animation;
}
@property(assign, nonatomic) int animation;
@property(assign, nonatomic) int dismissReason;
@property(retain, nonatomic) UIView<SBUIBannerItemView> *fromView;
@property(retain, nonatomic) UIView<SBUIBannerItemView> *toView;
+ (id)contextFromView:(id)view toView:(id)view2;
- (void)dealloc;
@end

