/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"
#import "UIWindowDelegate.h"

@class UIView, UIWindow;
@protocol SBSwitcherPopoverWindowControllerDelegate;

@interface SBSwitcherPopoverWindowController : NSObject <UIWindowDelegate> {
	UIWindow *_popoverWindow;
	UIView *_popoverRootView;
	BOOL _popoverVisible;
	id _delegate;
}
@property(assign, nonatomic) id<SBSwitcherPopoverWindowControllerDelegate> delegate;
@property(readonly, assign, nonatomic) BOOL popoverVisible;
@property(readonly, assign, nonatomic) UIView *rootView;
@property(readonly, assign, nonatomic) UIWindow *window;
+ (id)sharedInstance;
- (void)cleanupPopover;
- (void)dealloc;
- (void)didRotateFromOrientation:(int)orientation;
- (void)prepareAndPresentPopoverForFrame:(CGRect)frame inView:(id)view delegate:(id)delegate withPresentationBlock:(id)presentationBlock;
- (void)rotatePopoverWindowToOrientation:(int)orientation;
- (void)willRotateToOrientation:(int)orientation;
@end
