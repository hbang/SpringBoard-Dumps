/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSwitcherWallpaperPageContentView.h"
#import "SpringBoard-Structs.h"

@protocol SBSwitcherAppViewWrapperPageContentViewDelegate;

__attribute__((visibility("hidden")))
@interface SBSwitcherAppViewWrapperPageContentView : SBSwitcherWallpaperPageContentView {
	SBAppView *_appView;
	SBOrientationTransformWrapperView *_appTransformView;
	SBDisplayItem *_displayItem;
	SBLayoutState *_layoutState;
	SBFakeStatusBarView *_fakeStatusBar;
	id<SBSwitcherAppViewWrapperPageContentViewDelegate> _delegate;
	SBAppSwitcherSettings *_settings;
	BOOL _presenting;
	BOOL _interactive;
	int _savedStatusBarStyleOverride;
}
@property(retain, nonatomic) SBAppView *appView;
@property(assign, nonatomic) id<SBSwitcherAppViewWrapperPageContentViewDelegate> delegate;
@property(retain, nonatomic) SBDisplayItem *displayItem;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame appView:(id)view displayItem:(id)item layoutState:(id)state delegate:(id)delegate;
- (void)_createStatusBarIfNeeded;
- (void)_layoutFakeStatusBar;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_updateBreadcrumbOverrides;
- (float)cornerRadius;
- (void)dealloc;
- (void)interactionDidEnd:(BOOL)interaction;
- (void)invalidate;
- (void)layoutSubviews;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)setContentMode:(int)mode;
- (void)setCornerRadius:(float)radius;
- (void)setOrientation:(int)orientation;
- (void)viewDismissing:(id)dismissing withInteraction:(BOOL)interaction andInitialProgress:(float)progress forTransitionRequest:(id)transitionRequest;
- (void)viewPresenting:(id)presenting withInteraction:(BOOL)interaction andInitialProgress:(float)progress forTransitionRequest:(id)transitionRequest;
@end

