/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView;

@interface SBNewsstandShelfView : XXUnknownSuperclass {
	UIImageView *_body;
	UIImageView *_leftEdge;
	UIImageView *_rightEdge;
	UIImageView *_shadowLeft;
	UIImageView *_shadowMiddle;
	UIImageView *_shadowRight;
	int _orientation;
	unsigned _shelfIndex;
	UILabel *_label;
}
+ (id)reuseIdentifier;
+ (id)shelf;
+ (float)shelfEdgeHeight;
+ (float)shelfHeight;
+ (float)shelfItemBaselineOffset;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)configureForOrientation:(int)orientation shelfIndex:(unsigned)index;
- (void)dealloc;
- (unsigned)shelfIndex;
@end

