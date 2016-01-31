/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUISteppableAnimationControllerGroup : SBUIAnimationControllerGroup {
	float _percentage;
}
- (id)initWithAnimations:(id)animations;
- (void)addAnimation:(id)animation;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (BOOL)isStepped;
- (void)setStepPercentage:(float)percentage;
- (float)stepPercentage;
@end
