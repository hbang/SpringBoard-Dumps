/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface SBUILockScreenNotificationAnimationHandler : XXUnknownSuperclass {
	SBLockScreenViewController *_lockScreenViewController;
	CADisplayLink *_displayLink;
	NSObject<OS_dispatch_group> *_dispatchGroup;
}
- (id)initWithLockScreenViewController:(id)lockScreenViewController;
- (void)_displayLinkDidFire:(id)_displayLink;
- (void)dealloc;
- (void)performAnimationWithAdditionalAnimations:(id)additionalAnimations completion:(id)completion;
@end

