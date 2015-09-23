/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDisplayLayoutContext.h"
#import "BSDescriptionProviding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBWorkspaceTransitionLayoutDelegate;

__attribute__((visibility("hidden")))
@interface SBWorkspaceTransitionContext : XXUnknownSuperclass <SBDisplayLayoutContext, BSDescriptionProviding> {
	NSMutableDictionary *_entities;
	NSMutableDictionary *_previousEntities;
	BOOL _finalized;
	SBLayoutState *_layoutState;
	SBLayoutState *_previousLayoutState;
	BOOL _animationDisabled;
	BSAnimationSettings *_animationSettings;
	SBWorkspaceTransitionRequest *_request;
	id<SBWorkspaceTransitionLayoutDelegate> _layoutDelegate;
}
@property(readonly, assign, nonatomic, getter=_isFinalized) BOOL _finalized;
@property(assign, nonatomic) BOOL animationDisabled;
@property(retain, nonatomic) BSAnimationSettings *animationSettings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBWorkspaceTransitionLayoutDelegate> layoutDelegate;
@property(readonly, retain, nonatomic) SBLayoutState *layoutState;
@property(readonly, copy, nonatomic) NSSet *previousEntities;
@property(readonly, retain, nonatomic) SBLayoutState *previousLayoutState;
@property(assign, nonatomic) SBWorkspaceTransitionRequest *request;
@property(readonly, assign) Class superclass;
+ (id)context;
- (id)init;
- (id)_display;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)multilinePrefix;
- (id)descriptionWithMultilinePrefix:(id)multilinePrefix;
- (id)entityForIdentifier:(id)identifier;
- (id)entityForKey:(id)key;
- (void)finalize;
- (id)previousEntityForIdentifier:(id)identifier;
- (id)previousEntityForKey:(id)key;
- (void)setEntity:(id)entity forKey:(id)key;
- (void)setPreviousEntity:(id)entity forKey:(id)key;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

