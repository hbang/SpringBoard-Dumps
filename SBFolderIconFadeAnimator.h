/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconFadeAnimator.h"


__attribute__((visibility("hidden")))
@interface SBFolderIconFadeAnimator : SBIconFadeAnimator {
	SBFolderController *_innerFolderController;
}
- (id)initWithFolderController:(id)folderController innerController:(id)controller;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
@end

