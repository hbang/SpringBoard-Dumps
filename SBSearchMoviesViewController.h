/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBSearchResultDetailsViewController.h"

@protocol SBSearchResultDetailsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBSearchMoviesViewController : XXUnknownSuperclass <SBSearchResultDetailsViewController> {
	NSURLSessionDataTask *_dataTask;
	id<SBSearchResultDetailsViewControllerDelegate> actionDelegate;
	SPSearchResult *_result;
	SPSearchResultSection *_section;
	NSArray *_movies;
}
@property(assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate;
@property(retain) UIColor *contentBackgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain) NSArray *movies;
@property(retain) SPSearchResult *result;
@property(retain) SPSearchResultSection *section;
@property(readonly, assign) Class superclass;
@property(readonly, assign) BOOL wantsInset;
+ (id)viewControllerForResult:(id)result inSection:(id)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)indexPath;
- (CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;
- (void)dealloc;
- (void)loadWithCompletionBlock:(id)completionBlock;
- (int)numberOfSectionsInCollectionView:(id)collectionView;
- (void)reloadData;
@end

