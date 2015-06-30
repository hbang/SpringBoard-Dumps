/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIDynamicItem.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface _SBNotificationCenterBouncingItem : XXUnknownSuperclass <UIDynamicItem> {
	CGPoint _center;
	CGRect _bounds;
	id _stepper;
}
@property(readonly, assign, nonatomic) CGRect bounds;
@property(assign, nonatomic) CGPoint center;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) CGRect frame;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) CGAffineTransform transform;
- (id)initWithFrame:(CGRect)frame stepper:(id)stepper;
- (void)dealloc;
- (void)setBounds:(CGRect)bounds;
@end

