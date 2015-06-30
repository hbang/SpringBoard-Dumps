/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBIconIndexNode;

__attribute__((visibility("hidden")))
@interface SBIconStateUnarchiveResult : XXUnknownSuperclass <SBIconStateUnarchiveContext> {
	SBIconModel *_iconSource;
	id<SBIconIndexNode> _node;
	NSMutableArray *_folderStack;
	int _parseDepth;
	NSMutableSet *_nodeIdentifiersUnarchived;
	BOOL _corrupted;
	BOOL _dirty;
}
@property(retain, nonatomic, setter=_setIconSource:) SBIconModel *_iconSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic, getter=isDirty) BOOL dirty;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<SBIconIndexNode> node;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;
- (id)_currentFolder;
- (int)_currentParseDepth;
- (BOOL)_isNodeIdentifierAlreadyUnarchived:(id)unarchived;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_noteNodeIdentifierWasUnarchived:(id)unarchived;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (id)_popFolder;
- (void)_pushFolder:(id)folder;
- (void)_setNode:(id)node;
- (void)dealloc;
@end

