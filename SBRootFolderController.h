/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFolderController.h"


__attribute__((visibility("hidden")))
@interface SBRootFolderController : SBFolderController {
}
@property(readonly, assign, nonatomic) SBRootFolderView *contentView;
@property(retain, nonatomic) SBRootFolder *folder;
- (id)initWithFolder:(id)folder orientation:(int)orientation;
- (Class)_contentViewClass;
- (unsigned)_depth;
- (BOOL)_listIndexIsVisible:(unsigned)visible;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (id)dockListView;
- (id)folderControllers;
- (BOOL)hasDock;
- (BOOL)isDisplayingIcon:(id)icon;
- (BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
- (void)setDockOffscreenFraction:(float)fraction;
- (void)setDockVerticalStretch:(float)stretch;
- (void)setIdleText:(id)text;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
@end

