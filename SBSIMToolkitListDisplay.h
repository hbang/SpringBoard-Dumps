/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"


@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay {
	UITable *_table;
	NSArray *_items;
}
+ (id)createTopBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_selectListItem:(unsigned long)item;
- (id)_simToolkitListItems;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (void)navigationBar:(id)bar buttonClicked:(int)clicked;
- (int)numberOfRowsInTable:(id)table;
- (void)setMiddleContentAlpha:(float)alpha;
- (BOOL)showsDesktopImage;
- (id)table:(id)table cellForRow:(int)row column:(id)column;
- (void)tableSelectionDidChange:(id)tableSelection;
@end

