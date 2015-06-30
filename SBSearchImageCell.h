/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchStandardCell.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBSearchImageCell : SBSearchStandardCell {
	UIImageView *_titleImageView;
	NSOperation *_fetchImageOperation;
}
@property(retain, nonatomic) NSOperation *fetchImageOperation;
@property(readonly, assign, nonatomic) UIImageView *titleImageView;
+ (id)placeHolderImageForDomain:(unsigned)domain result:(id)result size:(CGSize)size;
+ (BOOL)supportsSection:(id)section result:(id)result;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (id)constantConstraints;
- (void)dealloc;
- (float)imageWidth;
- (float)leftTextMargin;
- (id)leftTextView;
- (id)leftView;
- (void)prepareForReuse;
- (void)updateWithSection:(id)section result:(id)result traitCollection:(id)collection;
- (id)variableConstraints;
@end

