/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIcon : XXUnknownSuperclass <SBIconIndexNode> {
	NSHashTable *_observers;
	id _badgeNumberOrString;
	unsigned _uninstalled : 1;
	UIImage *_cachedIconImages[14];
}
@property(readonly, assign, nonatomic) BOOL shouldWarmUp;
+ (id)_iconImageOfSize:(CGSize)size scale:(float)scale failGracefully:(BOOL)gracefully drawing:(id)drawing;
+ (id)_iconImagesMemoryPool;
+ (id)memoryMappedIconImageForIconImage:(id)iconImage;
+ (id)memoryMappedIconImageOfSize:(CGSize)size scale:(float)scale withDrawing:(id)drawing;
- (id)init;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (void)_notifyLaunchEnabledDidChange;
- (id)accessoryTextForLocation:(int)location;
- (int)accessoryTypeForLocation:(int)location;
- (void)addNodeObserver:(id)observer;
- (void)addObserver:(id)observer;
- (BOOL)allowsUninstall;
- (id)appPlaceholder;
- (id)application;
- (id)applicationBundleID;
- (id)automationID;
- (id)badgeNumberOrString;
- (int)badgeValue;
- (BOOL)canEllipsizeLabel;
- (BOOL)canReceiveGrabbedIcon;
- (void)completeUninstall;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)folder;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (id)getGenericIconImage:(int)image;
- (id)getIconImage:(int)image;
- (id)getStandardIconImageForLocation:(int)location;
- (id)getUnmaskedIconImage:(int)image;
- (id)gridCellImage;
- (BOOL)hasCachedImageForLocation:(int)location;
- (BOOL)hasFolderIconView;
- (BOOL)hasObserver:(id)observer;
- (BOOL)iconAppearsInNewsstand;
- (int)iconFormatForLocation:(int)location;
- (Class)iconImageViewClassForLocation:(int)location;
- (Class)iconViewClassForLocation:(int)location;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (BOOL)isApplicationIcon;
- (BOOL)isBookmarkIcon;
- (BOOL)isDownloadingIcon;
- (BOOL)isEmptyPlaceholder;
- (BOOL)isFolderIcon;
- (BOOL)isGrabbedIconPlaceholder;
- (BOOL)isLeafIcon;
- (BOOL)isNewsstandApplicationIcon;
- (BOOL)isNewsstandIcon;
- (BOOL)isPlaceholder;
- (BOOL)isRecentlyUpdated;
- (BOOL)isUninstalled;
- (BOOL)isUserInstalledApplicationIcon;
- (BOOL)isWebApplicationIcon;
- (BOOL)launchEnabled;
- (void)launchFromLocation:(int)location;
- (id)leafIdentifier;
- (void)localeChanged;
- (int)localizedCompareDisplayNames:(id)names;
- (BOOL)matchesEntity:(id)entity;
- (BOOL)matchesRepresentation:(id)representation;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (void)noteBadgeDidChange;
- (BOOL)progressIsPaused;
- (float)progressPercent;
- (int)progressState;
- (void)purgeCachedImages;
- (void)reloadIconImage;
- (void)reloadIconImagePurgingImageCache:(BOOL)cache;
- (void)removeNodeObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)representation;
- (void)setBadge:(id)badge;
- (void)setUninstalled;
- (BOOL)shouldCacheImageForFormat:(int)format;
- (id)tags;
- (id)uninstallAlertBody;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
- (id)uninstallAlertTitleForAppWithDocumentsInCloud;
- (id)webClip;
@end

