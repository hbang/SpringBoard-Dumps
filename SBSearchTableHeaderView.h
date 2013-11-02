/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SBSearchTableHeaderView : XXUnknownSuperclass {
	UILabel *_titleLabel;
	UIView *_separatorView;
	NSString *_reuseIdentifier;
}
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;
@property(retain, nonatomic) NSString *title;
+ (float)heightForContentSizeCategory:(id)contentSizeCategory;
+ (id)lineColor;
+ (float)titleBaselineFromBottomForContentSizeCategory:(id)contentSizeCategory;
- (id)initWithReuseIdentifier:(id)reuseIdentifier;
- (void)dealloc;
- (BOOL)isUserInteractionEnabled;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

