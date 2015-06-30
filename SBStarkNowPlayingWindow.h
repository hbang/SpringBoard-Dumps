/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkNowPlayingWindow : SBWindow <SBWindowContextManagerDelegate, SBWindowContextHostManagerDelegate> {
	SBWindowContextManager *_contextManager;
	SBWindowContextHostManager *_contextHostManager;
}
- (id)initWithScreen:(id)screen jailBehavior:(int)behavior;
- (id)contextHostManager;
- (void)dealloc;
- (void)windowContextManager:(id)manager didStopTrackingContextsForScreen:(id)screen;
- (BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
- (void)windowContextManager:(id)manager willStartTrackingContextsForScreen:(id)screen;
@end

