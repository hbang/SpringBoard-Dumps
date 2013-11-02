/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderIconListView.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandIconListView : SBFolderIconListView {
	float _iconVPaddingPortrait;
	float _topIconInsetPortrait;
	float _iconVPaddingLandscape;
	float _topIconInsetLandscape;
}
+ (unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+ (int)rotationAnchor;
- (id)initWithFrame:(CGRect)frame;
- (void)_updateVisibleIconsFromRow:(unsigned)row toRow:(unsigned)row2 includeIcon:(id)icon layoutIfNeeded:(BOOL)needed;
- (Class)baseIconViewClass;
- (float)bottomIconInset;
- (void)dealloc;
- (float)sideIconInset;
- (float)topIconInset;
- (float)verticalIconPadding;
@end

