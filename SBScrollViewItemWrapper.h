/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface SBScrollViewItemWrapper : XXUnknownSuperclass <NSCopying> {
	unsigned _section;
	SBAppSwitcherPeopleContactItem *_item;
	unsigned _itemIndex;
}
@property(readonly, assign, nonatomic) SBAppSwitcherPeopleContactItem *item;
@property(readonly, assign, nonatomic) unsigned itemIndex;
@property(readonly, assign, nonatomic) unsigned section;
- (id)initWithSection:(unsigned)section itemIndex:(unsigned)index item:(id)item;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
@end

