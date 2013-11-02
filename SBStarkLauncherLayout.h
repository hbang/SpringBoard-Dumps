/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;
@protocol SBStarkLauncherLayoutDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkLauncherLayout : XXUnknownSuperclass {
	id<SBStarkLauncherLayoutDelegate> _delegate;
	unsigned _numberOfItems;
	CGSize _itemSize;
	NSArray *_attributesByItem;
	BOOL _layoutForScrollButtons;
	UIEdgeInsets _scrollButtonInsets;
}
@property(assign, nonatomic) id<SBStarkLauncherLayoutDelegate> delegate;
@property(assign, nonatomic) float itemHeight;
@property(assign, nonatomic) BOOL layoutForScrollButtons;
@property(readonly, assign, nonatomic) UIEdgeInsets scrollButtonInsets;
+ (float)desiredItemHeightForWidth:(float)width;
+ (Class)layoutAttributesClass;
- (CGSize)collectionViewContentSize;
- (void)dealloc;
- (id)layoutAttributesForElementsInRect:(CGRect)rect;
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;
- (void)prepareLayout;
@end

