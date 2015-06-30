/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBControlCenterObserver.h"


__attribute__((visibility("hidden")))
@interface SBControlCenterContainerView : XXUnknownSuperclass <SBControlCenterObserver> {
	UIView *_darkeningView;
	float _revealPercentage;
	SBChevronView *_chevronToTrack;
	BOOL _useMaxDarkness;
	BOOL _animatingDynamically;
	BOOL _adjustingBrightness;
	UIView *_dynamicsContainerView;
	SBControlCenterContentContainerView *_contentContainerView;
}
@property(assign, nonatomic, getter=isAdjustingBrightness) BOOL adjustingBrightness;
@property(assign, nonatomic) BOOL animatingDynamically;
@property(readonly, retain, nonatomic) SBControlCenterContentContainerView *contentContainerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) UIView *dynamicsContainerView;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float revealPercentage;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (id)_contentChevronView;
- (id)_currentBGColor;
- (void)_updateContentFrame;
- (void)_updateDarkeningFrame;
- (void)abortAnimatedTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)controlCenter withDuration:(double)duration;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setContentHeight:(float)height;
- (void)trackChevronView:(id)view;
- (void)updateBackgroundSettings:(id)settings;
@end

