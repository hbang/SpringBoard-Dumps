/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBBulletinViewControllerDelegate <NSObject>
@optional
- (BOOL)bulletinViewController:(id)controller didSelectBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller insertionAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller removalAnimationForBulletin:(id)bulletin inSection:(id)section;
- (int)bulletinViewController:(id)controller replacementAnimationForBulletin:(id)bulletin inSection:(id)section;
- (BOOL)bulletinViewController:(id)controller shouldHighlightBulletin:(id)bulletin inSection:(id)section;
- (int)layoutModeForBulletinViewController:(id)bulletinViewController;
@end

