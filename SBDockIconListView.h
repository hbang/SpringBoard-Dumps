/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBRootIconListView.h"


__attribute__((visibility("hidden")))
@interface SBDockIconListView : SBRootIconListView {
}
+ (float)defaultHeight;
+ (unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)iconColumnsOrRows;
+ (unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
- (id)initWithModel:(id)model orientation:(int)orientation viewMap:(id)map;
- (float)_additionalHorizontalInsetToCenterIcons;
- (float)_additionalVerticalInsetToCenterIcons;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (float)bottomIconInset;
- (unsigned)columnAtPoint:(CGPoint)point;
- (id)iconAtPoint:(CGPoint)point index:(unsigned *)index proposedOrder:(int *)order grabbedIcon:(id)icon;
- (int)iconLocation;
- (unsigned)iconsInColumnForSpacingCalculation;
- (unsigned)iconsInRowForSpacingCalculation;
- (CGPoint)originForIconAtCoordinate:(SBIconCoordinate)coordinate;
- (unsigned)rowAtPoint:(CGPoint)point;
- (float)sideIconInset;
- (float)topIconInset;
@end

