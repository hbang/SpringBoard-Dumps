/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver> {
	SBDockIconListModel *_dock;
}
- (id)init;
- (id)_listsForCompaction;
- (void)_notifyIndexChange:(int)change identifiers:(id)identifiers withValidationBlock:(id)validationBlock;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (Class)controllerClass;
- (void)dealloc;
- (id)dockModel;
- (id)folderType;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexOfList:(id)list;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (BOOL)isIconStateDirty;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)listAtIndex:(unsigned)index;
- (id)listContainingIcon:(id)icon;
- (id)listContainingLeafIconWithIdentifier:(id)identifier;
- (Class)listModelClass;
- (Class)listViewClass;
- (void)markIconStateClean;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (void)placeIconsOnFirstPage:(id)page;
- (void)removeEmptyList:(id)list;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
@end

