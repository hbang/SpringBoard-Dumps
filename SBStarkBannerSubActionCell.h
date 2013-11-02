/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerSubActionCell : SBCollectionViewCell {
	UILabel *_label;
	BOOL _roundedCorners;
}
@property(copy, nonatomic) NSString *labelText;
@property(assign, nonatomic) BOOL roundedCorners;
- (id)initWithFrame:(CGRect)frame;
- (void)_didSetHighlighted:(BOOL)highlighted;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

