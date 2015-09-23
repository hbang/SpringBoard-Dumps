/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLeafIcon : SBIcon <NSCopying> {
	NSString *_leafIdentifier;
	NSString *_applicationBundleID;
	NSMutableSet *_dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;
}
- (id)init;
- (id)initWithLeafIdentifier:(id)leafIdentifier applicationBundleID:(id)anId;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)_noteActiveDataSource;
- (void)_noteActiveDataSourceDidChangeNotification:(id)_noteActiveDataSource;
- (void)_noteActiveDataSourceDidGenerateIconFormat:(int)_noteActiveDataSource;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)_noteActiveDataSource;
- (void)_noteDataSourceDidInvalidateNotification:(id)_noteDataSource;
- (void)_updateActiveDataSource;
- (id)accessoryTextForLocation:(int)location;
- (int)accessoryTypeForLocation:(int)location;
- (id)activeDataSource;
- (void)addIconDataSource:(id)source;
- (BOOL)allowsUninstall;
- (id)applicationBundleID;
- (id)badgeNumberOrString;
- (BOOL)canEllipsizeLabel;
- (void)completeUninstall;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)generateIconImage:(int)image;
- (id)getGenericIconImage:(int)image;
- (unsigned)hash;
- (BOOL)iconAppearsInNewsstand;
- (BOOL)isEqual:(id)equal;
- (BOOL)isRecentlyUpdated;
- (BOOL)launchEnabled;
- (void)launchFromLocation:(int)location;
- (id)leafIdentifier;
- (BOOL)matchesRepresentation:(id)representation;
- (id)nodeIdentifier;
- (BOOL)progressIsPaused;
- (float)progressPercent;
- (int)progressState;
- (void)removeIconDataSource:(id)source;
- (void)removeIconDataSourcesOfClass:(Class)aClass;
- (id)representation;
- (void)setUninstalled;
@end

