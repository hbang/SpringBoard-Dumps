/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface _SBIconProgressFractionTransition : _SBIconProgressTransition {
	float _targetFraction;
}
+ (id)newTransitionToFraction:(float)fraction;
- (void)_updateView:(id)view forDisplayedFraction:(float)displayedFraction;
- (void)completeTransitionAndUpdateView:(id)view;
- (BOOL)isCompleteWithView:(id)view;
- (void)updateToFraction:(float)fraction;
- (void)updateView:(id)view withElapsedTime:(double)elapsedTime;
@end

