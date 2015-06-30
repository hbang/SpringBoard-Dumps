/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import "SpringBoard-Structs.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _SBIconWallpaperColorProvider : XXUnknownSuperclass <_UISettingsKeyObserver, SBWallpaperObserver> {
	SBIconColorSettings *_colorSettings;
	NSHashTable *_clients;
	CGColorRef _blurColor;
	CGColorRef _solidColor;
}
+ (id)sharedInstance;
- (id)init;
- (void)_updateAllClients;
- (void)_updateBlurForClient:(id)client;
- (void)_updateClient:(id)client;
- (void)_updateColors;
- (void)addClient:(id)client;
- (void)dealloc;
- (void)removeClient:(id)client;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)updateColorForClientBoundsChange:(id)clientBoundsChange;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperGeometryDidChangeForVariant:(int)wallpaperGeometry;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
@end

