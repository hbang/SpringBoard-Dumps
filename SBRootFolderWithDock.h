/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import "SBRootFolder.h"


__attribute__((visibility("hidden")))
@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {
	SBIconListModel *_dock;
}
- (void)_notifyIndexChange:(int)change identifiers:(id)identifiers withValidationBlock:(id)validationBlock;
- (void)_setDock:(id)dock;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)dock;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexOfList:(id)list;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (BOOL)isIconStateDirty;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)listAtIndex:(unsigned)index;
- (id)listContainingIcon:(id)icon;
- (id)listContainingLeafIconWithIdentifier:(id)identifier;
- (void)markIconStateClean;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (void)removeEmptyList:(id)list;
- (BOOL)supportsDock;
@end

