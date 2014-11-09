/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class _UILegibilitySettings, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface SBFolderTitleTextField : XXUnknownSuperclass {
	BOOL _showingEditUI;
	_UILegibilityView *_legibilityView;
	BOOL _allowsEditing;
	_UILegibilitySettings *_legibilitySettings;
}
@property(assign, nonatomic) BOOL allowsEditing;
@property(assign, nonatomic) float fontSize;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
+ (id)_clearButtonImage;
+ (id)_editBackgroundImage;
+ (void)warmupIfNecessary;
- (id)initWithFrame:(CGRect)frame;
- (id)_backgroundImage;
- (id)_clearButtonImage;
- (float)_legibilityStrength;
- (CGRect)_textRectForBounds:(CGRect)bounds;
- (void)_updateLegibility;
- (void)_updateLegibilityView;
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;
- (void)dealloc;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (void)layoutSubviews;
- (void)setShowsEditUI:(BOOL)ui animated:(BOOL)animated;
- (void)setText:(id)text;
- (CGSize)sizeThatFits:(CGSize)fits;
- (CGRect)textRectForBounds:(CGRect)bounds;
@end

