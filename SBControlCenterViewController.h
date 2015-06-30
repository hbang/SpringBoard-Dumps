/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBControlCenterSectionViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_UIBackdropViewObserver.h"
#import "_UISettingsKeyObserver.h"

@protocol SBControlCenterViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBControlCenterViewController : XXUnknownSuperclass <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver> {
	SBControlCenterContainerView *_containerView;
	SBControlCenterContentView *_contentView;
	UIPanGestureRecognizer *_panGesture;
	UITapGestureRecognizer *_tapGesture;
	NSMutableArray *_sectionList;
	SBControlCenterSettings *_settings;
	BOOL _presented;
	BOOL _transitioning;
	id<SBControlCenterViewControllerDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBControlCenterViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isPresented) BOOL presented;
@property(assign, nonatomic) float revealPercentage;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic, getter=isTransitioning) BOOL transitioning;
- (id)init;
- (void)_handlePan:(id)pan;
- (void)_handleTap:(id)tap;
- (void)_noteControlCenterControlDidActivate:(id)_noteControlCenterControl;
- (void)_noteControlCenterControlDidDeactivate:(id)_noteControlCenterControl;
- (void)abortAnimatedTransition;
- (void)backdropViewDidChange:(id)backdropView;
- (id)chevronView;
- (float)contentHeightForOrientation:(int)orientation;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)controlCenter withDuration:(double)duration;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)loadView;
- (void)noteSectionEnabledStateDidChange:(id)noteSectionEnabledState;
- (void)section:(id)section publishStatusUpdate:(id)update;
- (void)sectionWantsControlCenterDismissal:(id)dismissal;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)trackChevronView:(id)view;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end

