/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUIControlCenterButtonDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"


__attribute__((visibility("hidden")))
@interface SBCCButtonLikeSectionView : XXUnknownSuperclass <SBUIControlCenterButtonDelegate, _UISettingsKeyObserver> {
	UIVisualEffect *_normalStateEffect;
	UIVisualEffect *_highlightedStateEffect;
	UIVisualEffectView *_vibrantDarkenLayer;
	UIView *_tintingDarkenLayer;
	SBUIControlCenterButton *_button;
	SBUIControlCenterLabel *_label;
	BOOL _showingMenu;
	unsigned _roundCorners;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned roundCorners;
@property(assign, nonatomic, getter=isShowingMenu) BOOL showingMenu;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (id)_backgroundImageWithRoundCorners:(unsigned)roundCorners;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (BOOL)_shouldUseButtonAppearance;
- (void)_updateBackgroundForStateChange;
- (void)_updateEffects;
- (void)button:(id)button didChangeState:(int)state;
- (void)buttonTapped:(id)tapped;
- (void)dealloc;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)enabled;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setImage:(id)image;
- (void)setNumberOfLines:(int)lines;
- (void)setSelected:(BOOL)selected;
- (void)setText:(id)text;
- (void)settings:(id)settings changedValueForKey:(id)key;
@end

