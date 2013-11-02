/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBCrossfadeZoomSettings, SBFolderZoomSettings, SBCenterZoomSettings, SBCenterAppZoomSettings;

__attribute__((visibility("hidden")))
@interface SBRootZoomSettings : XXUnknownSuperclass {
	SBCenterZoomSettings *_unlockSettings;
	SBCenterAppZoomSettings *_centerLaunchSettings;
	SBCenterAppZoomSettings *_centerSuspendSettings;
	SBCrossfadeZoomSettings *_crossfadeLaunchSettings;
	SBCrossfadeZoomSettings *_crossfadeSuspendSettings;
	SBFolderZoomSettings *_folderOpenSettings;
	SBFolderZoomSettings *_folderCloseSettings;
}
@property(retain) SBCenterAppZoomSettings *centerLaunchSettings;
@property(retain) SBCenterAppZoomSettings *centerSuspendSettings;
@property(retain) SBCrossfadeZoomSettings *crossfadeLaunchSettings;
@property(retain) SBCrossfadeZoomSettings *crossfadeSuspendSettings;
@property(retain) SBFolderZoomSettings *folderCloseSettings;
@property(retain) SBFolderZoomSettings *folderOpenSettings;
@property(retain) SBCenterZoomSettings *unlockSettings;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end
