/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchParsecSimpleCell.h"


__attribute__((visibility("hidden")))
@interface SBSearchParsecSimpleTitleGlyphCell : SBSearchParsecSimpleCell {
	UIImageView *_titleGlyphImageView;
}
@property(retain, nonatomic) UIImageView *titleGlyphImageView;
+ (BOOL)supportsSection:(id)section result:(id)result;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (id)constantConstraints;
- (void)dealloc;
- (id)rightViewFrom:(id)from;
- (void)updateWithSection:(id)section result:(id)result traitCollection:(id)collection;
@end

