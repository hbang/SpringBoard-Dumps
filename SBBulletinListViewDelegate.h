/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "NSObject.h"
#import "UIGestureRecognizerDelegate.h"


@protocol SBBulletinListViewDelegate <NSObject, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
- (void)handleEatenTouch:(id)touch;
- (void)handlePan:(id)pan;
- (void)handleTap:(id)tap;
@end

