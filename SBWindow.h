/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@protocol SBWindowLayoutStrategy;

__attribute__((visibility("hidden")))
@interface SBWindow : XXUnknownSuperclass {
	SBRecycledViewsContainer *_recycledViewsContainerView;
	int _jailBehavior;
	id<SBWindowLayoutStrategy> _layoutStrategy;
}
@property(readonly, assign, nonatomic) UIEdgeInsets jailInsets;
@property(readonly, retain, nonatomic) id<SBWindowLayoutStrategy> layoutStrategy;
+ (CGRect)_actualBoundsForScreen:(id)screen withJailBehavior:(int)jailBehavior;
+ (UIEdgeInsets)_jailInsetsForScreen:(id)screen;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithScreen:(id)screen debugName:(id)name;
- (id)initWithScreen:(id)screen debugName:(id)name scene:(id)scene;
- (id)initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name;
- (id)initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name scene:(id)scene;
- (id)_initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name scene:(id)scene;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (void)dealloc;
- (id)recycledViewsContainer;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)manager;
@end

