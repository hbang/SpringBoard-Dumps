/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconGridImage, SBFolderIcon;

__attribute__((visibility("hidden")))
@interface _SBFolderPageElement : XXUnknownSuperclass {
	SBIconGridImage *_gridImage;
	unsigned _visibleRow;
	unsigned _pageIndex;
	SBFolderIcon *_folderIcon;
}
@property(assign, nonatomic) SBFolderIcon *folderIcon;
@property(retain, nonatomic) SBIconGridImage *gridImage;
@property(assign, nonatomic) unsigned pageIndex;
@property(assign, nonatomic) unsigned visibleRow;
- (void)dealloc;
- (unsigned)firstVisibleMiniIconIndex;
- (unsigned)firstVisibleRowForGap;
@end
