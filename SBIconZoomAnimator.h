/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconAnimator.h"
#import "SBIconIndexNodeObserver.h"


__attribute__((visibility("hidden")))
@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {
	NSMapTable *_listIconToViewMap;
	NSMapTable *_dockIconToViewMap;
	NSSet *_criticalIconNodeIdentifiers;
	SBIconListModel *_iconListModel;
	SBIconListView *_iconListView;
	SBIconListView *_dockListView;
}
@property(retain, nonatomic) NSSet *criticalIconNodeIdentifiers;
@property(readonly, assign, nonatomic) SBIconListView *dockListView;
@property(readonly, assign, nonatomic) SBIconListView *iconListView;
@property(retain, nonatomic) SBIconZoomSettings *settings;
- (id)initWithFolderController:(id)folderController;
- (void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
- (void)_applyLabelAlphaFraction:(float)fraction;
- (void)_cleanupAnimation;
- (void)_clearObservers;
- (void)_iconModelDidRelayout;
- (void)_iconModelDidReload;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)reason;
- (unsigned)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(float)fraction;
- (void)_setDockListView:(id)view;
- (void)_setIconListView:(id)view;
- (void)dealloc;
- (unsigned)dockIconCount;
- (void)enumerateIconsAndIconViewsWithHandler:(id)handler;
- (id)iconViewForIcon:(id)icon;
- (unsigned)listIconCount;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
@end

