/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "SBCollectionViewCellDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBStarkBannerTargetObserver.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBStarkBulletinBannerSource, SBStarkBannerCell, SBStarkAlertItemBannerSource, SBStarkNotificationLayout, UITapGestureRecognizer, SBStarkBannerTarget, SBUIBannerContext, NSArray, UICollectionView;
@protocol SBStarkNotificationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkNotificationViewController : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate> {
	id<SBStarkNotificationViewControllerDelegate> _delegate;
	BOOL _touchCapable;
	UITapGestureRecognizer *_backGestureRecognizer;
	UITapGestureRecognizer *_selectGestureRecognizer;
	SBStarkBannerTarget *_bannerTarget;
	SBStarkAlertItemBannerSource *_alertItemBannerSource;
	SBStarkBulletinBannerSource *_bulletinBannerSource;
	SBUIBannerContext *_currentContext;
	NSArray *_currentSubActionLabels;
	SBStarkBannerCell *_currentCell;
	int _state;
	SBStarkNotificationLayout *_notificationsLayout;
	UICollectionView *_notificationsView;
}
@property(assign, nonatomic) id<SBStarkNotificationViewControllerDelegate> delegate;
@property(assign, nonatomic) int state;
@property(assign, nonatomic, getter=isSuspended) BOOL suspended;
@property(assign, nonatomic, getter=isSuspendedForAssistant) BOOL suspendedForAssistant;
- (id)initWithInterfaceType:(int)interfaceType;
- (void)_performBackGesture:(id)gesture;
- (void)_performSelectGesture:(id)gesture;
- (void)_setState:(int)state;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)collectionView;
- (void)starkBannerTarget:(id)target didChangeContextWithDismissReason:(int)dismissReason;
@end
