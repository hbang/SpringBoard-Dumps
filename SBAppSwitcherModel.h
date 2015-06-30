/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppSwitcherModel : XXUnknownSuperclass {
	NSMutableArray *_recentDisplayIdentifiers;
	NSTimer *_saveTimer;
}
+ (id)sharedInstance;
- (id)init;
- (void)_invalidateSaveTimer;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (void)_saveRecentsDelayed;
- (void)addToFront:(id)front;
- (void)appsRemoved:(id)removed added:(id)added;
- (void)dealloc;
- (id)identifiers;
- (void)remove:(id)remove;
- (id)snapshot;
@end

