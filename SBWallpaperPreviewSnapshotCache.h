/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBWallpaperPreviewSnapshotCache : XXUnknownSuperclass <SBIconIndexNodeObserver> {
	SBFMappedImageCache *_imageCache;
	int _invalidatedLocations;
}
- (id)initWithImageCache:(id)imageCache;
- (void)_backlightFadeFinished;
- (id)_homeScreenSnapshotProvider;
- (id)_lockScreenSnapshotProvider;
- (void)dealloc;
- (id)homeScreenSnapshot;
- (void)invalidateSnapshotsForLocations:(int)locations;
- (id)lockScreenSnapshot;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)regenerateSnapshotsForLocations:(int)locations withCompletion:(id)completion;
@end

