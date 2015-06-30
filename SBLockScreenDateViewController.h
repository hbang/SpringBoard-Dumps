/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockScreenDateViewController : XXUnknownSuperclass {
	NSTimer *_updateTimer;
	BOOL _disablesUpdates;
	_UILegibilitySettings *_legibilitySettings;
}
@property(assign, nonatomic, getter=isDateHidden) BOOL dateHidden;
@property(assign, nonatomic) BOOL disablesUpdates;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_addObservers;
- (void)_backlightChanged;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateFormat;
- (void)_updateView;
- (id)dateView;
- (id)dateViewIfExists;
- (void)dealloc;
- (void)loadView;
- (void)setContentAlpha:(float)alpha withDateVisible:(BOOL)dateVisible;
- (void)setView:(id)view;
- (void)willMoveToParentViewController:(id)parentViewController;
@end

