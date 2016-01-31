/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction {
	int _pidToPiP;
	SBWorkspaceEntity *_entityToPiP;
	int _transitionStyle;
	int _inferredTransitionStyle;
	NSString *_reason;
}
@property(readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP;
@property(assign, nonatomic) int transitionStyle;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (int)_transitionStyle;
- (void)dealloc;
@end
