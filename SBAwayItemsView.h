/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayItemsView : UIModalView {
	NSArray *_displayedItems;
	float _widestLabel;
}
+ (GSFontRef)createItemTypeFont;
- (id)init;
- (void)dealloc;
- (void)drawItems;
- (void)drawRect:(CGRect)rect;
- (BOOL)hasAwayItems;
- (BOOL)reloadData;
@end

