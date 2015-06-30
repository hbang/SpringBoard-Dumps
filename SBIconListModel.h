/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexNode.h"
#import "SBIconIndexMutableListObserver.h"


__attribute__((visibility("hidden")))
@interface SBIconListModel : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver> {
	SBIconIndexMutableList *_icons;
	NSHashTable *_nodeObservers;
	BOOL _iconStateIsDirty;
	SBFolder *_folder;
}
+ (unsigned)maxIcons;
+ (Class)viewClass;
- (id)initWithFolder:(id)folder;
- (BOOL)addIcon:(id)icon;
- (BOOL)addIcon:(id)icon asDirty:(BOOL)dirty;
- (void)addNodeObserver:(id)observer;
- (BOOL)allowsAddingIcon:(id)icon;
- (unsigned)compactIcons;
- (id)containedNodeIdentifiers;
- (BOOL)containsIcon:(id)icon;
- (BOOL)containsLeafIconWithIdentifier:(id)identifier;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)description;
- (unsigned)firstFreeSlotIndex;
- (unsigned)firstFreeSlotIndexForType:(int)type;
- (id)folder;
- (id)iconAtIndex:(unsigned)index;
- (id)icons;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexForIcon:(id)icon;
- (unsigned)indexForLeafIconWithIdentifier:(id)identifier;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (id)insertIcon:(id)icon atIndex:(unsigned *)index;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isIconStateDirty;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)markIconStateClean;
- (BOOL)matchesRepresentation:(id)representation;
- (BOOL)needsCompacting;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (unsigned)numberOfIcons;
- (id)placeIcon:(id)icon atIndex:(unsigned *)index;
- (void)removeIcon:(id)icon;
- (void)removeIconAtIndex:(unsigned)index;
- (void)removeNodeObserver:(id)observer;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
@end

