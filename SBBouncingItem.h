/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDynamicItem.h"


__attribute__((visibility("hidden")))
@interface SBBouncingItem : XXUnknownSuperclass <UIDynamicItem> {
	CGRect _bounds;
	CGPoint _center;
	float _multiplier;
	id _translateBlock;
}
@property(readonly, assign, nonatomic) CGRect bounds;
@property(assign, nonatomic) CGPoint center;
@property(readonly, assign, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, assign, nonatomic) unsigned collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign) float multiplier;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) CGAffineTransform transform;
@property(copy) id translateBlock;
- (void)dealloc;
- (void)setBounds:(CGRect)bounds;
@end

