/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "SBStarkIconCellDelegate.h"
#import "SBStarkLauncherLayoutDelegate.h"
#import "SBStarkLauncherViewController.h"

@class SBStarkLauncherLayout, UICollectionView;
@protocol SBStarkTouchLauncherObserver;

__attribute__((visibility("hidden")))
@interface SBStarkTouchLauncherViewController : SBStarkLauncherViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBStarkIconCellDelegate, SBStarkLauncherLayoutDelegate> {
	id<SBStarkTouchLauncherObserver> _observer;
	SBStarkLauncherLayout *_layout;
	UICollectionView *_iconCollectionView;
}
@property(assign, nonatomic) id<SBStarkTouchLauncherObserver> observer;
+ (float)desiredHeightForBounds:(CGRect)bounds;
- (id)initWithInterfaceType:(int)interfaceType;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (BOOL)canScrollLeft;
- (BOOL)canScrollRight;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;
- (BOOL)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)indexPath;
- (void)dealloc;
- (float)height;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)collectionView;
- (void)relayoutIcons;
- (UIEdgeInsets)scrollButtonInsets;
- (void)scrollLeft;
- (void)scrollRight;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)setHeight:(float)height;
- (BOOL)starkIconCellDisplaysBadges:(id)badges;
- (void)starkLauncherLayoutDidChangeScrollButtonInsets:(id)starkLauncherLayout;
@end

