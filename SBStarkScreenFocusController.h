/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBStarkScreenFocusController : XXUnknownSuperclass {
	UIScreen *_screen;
	NSMutableArray *_assertions;
	NSString *_displayID;
}
- (id)initWithScreen:(id)screen;
- (void)_applyAssertion:(id)assertion;
- (void)_updateEventFocus;
- (void)dealloc;
- (id)description;
- (void)dropReason:(id)reason;
- (id)focusWindow;
- (void)invalidate;
- (void)takeWithPriority:(float)priority reason:(id)reason forWindow:(id)window bundleIdentifier:(id)identifier pid:(int)pid;
@end

