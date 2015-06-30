/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinRootViewController : XXUnknownSuperclass {
	SBBulletinRootView *_rootView;
	SBBulletinWindowController *_windowController;
	_SBBulletinRootViewControllerTransitionContext *_activeTransitionContext;
}
- (id)initWithBulletinWindowController:(id)bulletinWindowController;
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;
- (void)bulletinWindowControllerDismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
- (void)bulletinWindowControllerPresentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)loadView;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

