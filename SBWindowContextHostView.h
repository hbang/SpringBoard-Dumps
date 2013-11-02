/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWindowContextManagerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBWindowContextManager, NSMutableSet, NSMutableArray, NSSet, NSMutableOrderedSet, UIScreen, SBWindowContextHostManager;

__attribute__((visibility("hidden")))
@interface SBWindowContextHostView : XXUnknownSuperclass <SBWindowContextManagerObserver> {
	UIScreen *_screen;
	SBWindowContextHostManager *_hostManager;
	SBWindowContextManager *_contextManager;
	NSMutableSet *_hiddenContexts;
	NSMutableOrderedSet *_contexts;
	NSMutableArray *_layerHosts;
}
@property(retain, nonatomic) SBWindowContextManager *contextManager;
@property(copy, nonatomic) NSSet *hiddenContexts;
@property(assign, nonatomic) SBWindowContextHostManager *hostManager;
@property(readonly, assign, nonatomic) UIScreen *screen;
- (id)init;
- (id)initWithScreen:(id)screen jailBehavior:(int)behavior;
- (void)_adjustLayerFrameAndTransform:(id)transform;
- (void)dealloc;
- (id)description;
- (BOOL)hasContent;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (BOOL)isHosting;
- (id)window;
- (void)windowContextManager:(id)manager didRepositionContext:(id)context from:(unsigned)from to:(unsigned)to forScreen:(id)screen;
@end

