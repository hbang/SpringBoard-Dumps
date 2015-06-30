/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBZoomableCrossfadeView : XXUnknownSuperclass {
	UIView *_startView;
	UIView *_endView;
	BOOL _translucent;
	BOOL _crossfaded;
}
+ (id)crossfadeViewWithStartView:(id)startView endView:(id)view translucent:(BOOL)translucent;
- (id)_initWithStartView:(id)startView endView:(id)view translucent:(BOOL)translucent;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (id)animationFactory;
- (void)crossfadeWithCompletion:(id)completion;
- (void)dealloc;
- (void)layoutSubviews;
@end

