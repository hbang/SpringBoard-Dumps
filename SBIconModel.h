/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBIconModel : NSObject {
	NSDictionary *_previousIconState;
	NSMutableArray *_iconLists;
	SBButtonBar *_buttonBar;
	NSMutableDictionary *_allIcons;
	NSSet *_hiddenIconTags;
	NSSet *_visibleIconTags;
}
+ (int)maxIconListCount;
+ (id)modernIconCellForCell:(id)cell;
+ (id)modernIconListForList:(id)list;
+ (id)modernIconStateForState:(id)state;
+ (id)sharedInstance;
- (id)init;
- (void)_addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
- (id)_arrayForIconList:(id)iconList;
- (void)_completedUninstall:(id)uninstall;
- (id)_dictionaryForIcon:(id)icon;
- (BOOL)_iconListsAreDirty;
- (id)_iconState;
- (void)_replaceAppIconWithDownloadingIcon:(id)downloadingIcon sourceList:(id)list;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_writeIconState;
- (id)addBookmarkIconForWebClip:(id)webClip;
- (id)addDownloadingIconForDisplayIdentifier:(id)displayIdentifier;
- (id)addDownloadingIconForDownload:(id)download;
- (id)addEmptyIconList;
- (void)addIconForApplication:(id)application;
- (void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
- (id)addSpotlightIconForDisplayIdentifier:(id)displayIdentifier spotlightCategory:(id)category iconName:(id)name;
- (id)allIcons;
- (id)buttonBar;
- (void)clearPreviousIconState;
- (void)compactIconLists;
- (void)createIconLists;
- (void)dealloc;
- (void)deleteIconState;
- (id)exportState;
- (id)firstAvailableIconListIndex:(int *)index;
- (id)iconForDisplayIdentifier:(id)displayIdentifier;
- (id)iconForDisplayIdentifier:(id)displayIdentifier andSpotlightCategory:(id)category;
- (id)iconListContainingIcon:(id)icon;
- (id)iconListContainingIconWithDisplayIdentifier:(id)displayIdentifier;
- (id)iconLists;
- (BOOL)iconPositionInPlatformState:(id)platformState index:(int *)index inIconListNumber:(int *)iconListNumber;
- (id)iconState;
- (BOOL)importState:(id)state;
- (int)indexOfIconList:(id)iconList;
- (BOOL)isIconVisible:(id)visible;
- (void)loadAllIcons;
- (void)localeChanged;
- (void)noteIconStateChangedExternally;
- (void)relayout;
- (void)removeAppForDownloadingIcon:(id)downloadingIcon;
- (void)removeEmptyIconList:(id)list;
- (void)replaceDownloadingDisplayIdentifiers:(id)identifiers withDisplayIdentifiers:(id)displayIdentifiers;
- (void)saveIconState;
- (void)setVisibilityOfIconsWithVisibleTags:(id)visibleTags hiddenTags:(id)tags;
- (void)uninstallApplicationIcon:(id)icon;
- (void)uninstallBookmarkIcon:(id)icon;
- (id)visibleIconIdentifiers;
@end

