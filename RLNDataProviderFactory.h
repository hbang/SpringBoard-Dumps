/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RLNDataProviderFactory : XXUnknownSuperclass {
	NSMutableDictionary *_dataProvidersBySectionID;
}
+ (id)sharedInstance;
- (id)init;
- (void)_noteInstalledAppsDidChange:(id)_noteInstalledApps;
- (void)_notePushStoreAppsDidChange:(id)_notePushStoreApps;
- (void)_reloadDataProviders:(id)providers;
- (id)createDataProviderWithSectionID:(id)sectionID;
- (void)dealloc;
- (void)reloadDataProviders;
@end

