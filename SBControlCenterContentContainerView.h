/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBControlCenterObserver.h"


__attribute__((visibility("hidden")))
@interface SBControlCenterContentContainerView : XXUnknownSuperclass <SBControlCenterObserver> {
	UIView *_accessibilityBackgroundView;
	UIView *_lighteningView;
	_UIBackdropView *_backdropView;
	SBControlCenterContentView *_contentView;
	float _contentHeight;
}
@property(retain, nonatomic) _UIBackdropView *backdropView;
@property(assign) float contentHeight;
@property(retain, nonatomic) SBControlCenterContentView *contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void)_accessibilityBackgroundContrastDidChange:(id)_accessibilityBackgroundContrast;
- (void)_updateBackground;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)layoutSubviews;
@end

