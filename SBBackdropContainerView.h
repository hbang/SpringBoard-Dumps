/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SBBackdropContainerView : XXUnknownSuperclass {
	_UIBackdropView *_backdropView;
}
@property(retain, nonatomic) _UIBackdropView *backdropView;
@property(readonly, assign, nonatomic) UIView *contentView;
- (id)initWithFrame:(CGRect)frame;
- (void)_reallyInsertSubview:(id)subview atIndex:(int)index;
- (void)addSubview:(id)subview;
- (void)dealloc;
- (void)insertSubview:(id)subview atIndex:(int)index;
- (void)layoutSubviews;
@end

