/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLayoutElementIdentity.h"


@protocol SBLayoutElementDescriptor <SBLayoutElementIdentity>
@property(readonly, copy, nonatomic) id entityGenerator;
@property(readonly, assign, nonatomic) unsigned layoutAttributes;
@property(readonly, assign, nonatomic) int layoutRole;
@property(readonly, assign, nonatomic) unsigned supportedLayoutRoles;
@property(readonly, assign, nonatomic) Class viewControllerClass;
- (BOOL)hasLayoutAttributes:(unsigned)attributes;
- (BOOL)supportsLayoutRole:(int)role;
@end

