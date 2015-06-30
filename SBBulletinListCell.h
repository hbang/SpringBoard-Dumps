/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinLinenBackedCell.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBBulletinListCell : SBBulletinLinenBackedCell {
	UIImageView *_bulletinAccessoryView;
	UIImageView *_bottomCellSeparator;
	SBBulletinCellContentView *_cellContentView;
}
+ (float)heightForRowWithSubtitle:(id)subtitle imageHeight:(float)height;
+ (float)heightForRowWithSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines width:(float)width;
- (id)initWithLinenView:(id)linenView reuseIdentifier:(id)identifier;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAttachmentImage:(id)image;
- (void)setAttachmentImageSize:(CGSize)size;
- (void)setAttachmentText:(id)text;
- (void)setBulletinAccessoryStyle:(int)style;
- (void)setCellSeparatorStyle:(int)style;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setMaxMessageLines:(unsigned)lines;
- (void)setMessage:(id)message;
- (void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;
- (void)setSubtitle:(id)subtitle;
- (void)setTitle:(id)title;
@end

