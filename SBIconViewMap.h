/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconViewObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconObserver.h"
#import "SBIconIndexNodeObserver.h"

@protocol SBIconViewMapDelegate, SBIconViewDelegate;

__attribute__((visibility("hidden")))
@interface SBIconViewMap : XXUnknownSuperclass <SBIconObserver, SBIconIndexNodeObserver, SBIconViewObserver> {
	SBIconModel *_model;
	NSMapTable *_iconViewsForIcons;
	id<SBIconViewMapDelegate> _delegate;
	id<SBIconViewDelegate> _viewDelegate;
	NSMapTable *_recycledIconViewsByType;
	NSMapTable *_labelsForIcons;
	NSMapTable *_lightLegibilityImagesForIcons;
	NSMapTable *_darkLegibilityImagesForIcons;
	NSMapTable *_accessoryImagesForIcons;
	_UILegibilitySettings *_legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) id<SBIconViewDelegate> viewDelegate;
+ (id)homescreenMap;
+ (id)switcherMap;
- (id)initWithIconModel:(id)iconModel delegate:(id)delegate;
- (void)_addIconView:(id)view forIcon:(id)icon;
- (void)_cacheAccessoryImagesForIcon:(id)icon location:(int *)location;
- (void)_cacheImagesForIcon:(id)icon;
- (void)_cacheLabelImagesForIcon:(id)icon location:(int *)location;
- (id)_iconViewForIcon:(id)icon;
- (void)_modelReloadedIcons;
- (void)_modelReloadedState;
- (void)_modelRemovedIcon:(id)icon;
- (void)_recycleIconView:(id)view;
- (void)dealloc;
- (id)extraIconViewForIcon:(id)icon;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (id)iconModel;
- (void)iconViewDidChangeLocation:(id)iconView;
- (id)iconViewForIcon:(id)icon;
- (id)mappedIconViewForIcon:(id)icon;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)purgeIconFromMap:(id)map;
- (void)purgeRecycledIconViewsForClass:(Class)aClass;
- (void)recycleAndPurgeAll;
- (void)recycleIconView:(id)view;
- (void)recycleViewForIcon:(id)icon;
- (void)tryToReplaceIcon:(id)replaceIcon withIcon:(id)icon;
@end

