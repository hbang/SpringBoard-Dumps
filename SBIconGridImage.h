/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIconGridImage : XXUnknownSuperclass {
	unsigned _numberOfCells;
}
@property(readonly, assign, nonatomic) unsigned numberOfCells;
@property(readonly, assign, nonatomic) unsigned numberOfColumns;
@property(readonly, assign, nonatomic) unsigned numberOfRows;
+ (id)_gridImageForNumberOfCells:(unsigned)cells withPreviousGridImage:(id)previousGridImage cellImageProviderBlock:(id)block;
+ (CGSize)cellSize;
+ (CGSize)cellSpacing;
+ (id)gridImageForNumberOfCells:(unsigned)cells withCellImageProviderBlock:(id)cellImageProviderBlock;
+ (unsigned)numberOfColumns;
+ (unsigned)numberOfRowsForNumberOfCells:(unsigned)cells;
+ (CGRect)rectAtIndex:(unsigned)index maxCount:(unsigned)count;
+ (CGSize)sizeForNumberOfRows:(unsigned)rows;
- (id)gridImageByPatchingWithCellImageProviderBlock:(id)cellImageProviderBlock;
@end

