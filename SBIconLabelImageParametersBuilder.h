/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIconLabelImageParametersBuilder : XXUnknownSuperclass {
	BOOL _accessibilityIncreaseContrastEnabled;
	BOOL _wantsFocusHighlight;
	SBIcon *_icon;
	SBIconView *_iconView;
	id<SBIconViewDelegate> _iconViewDelegate;
	Class _iconViewClass;
	int _iconLocation;
	_UILegibilitySettings *_settings;
	NSString *_text;
}
@property(assign, nonatomic) BOOL accessibilityIncreaseContrastEnabled;
@property(retain, nonatomic) SBIcon *icon;
@property(assign, nonatomic) int iconLocation;
@property(retain, nonatomic) SBIconView *iconView;
@property(retain, nonatomic) Class iconViewClass;
@property(retain, nonatomic) id<SBIconViewDelegate> iconViewDelegate;
@property(retain, nonatomic) _UILegibilitySettings *settings;
@property(retain, nonatomic) NSString *text;
@property(assign, nonatomic) BOOL wantsFocusHighlight;
- (BOOL)_canEllipsizeLabel;
- (BOOL)_canUseMemoryPool;
- (id)_focusHighlightColor;
- (id)_font;
- (BOOL)_hasValidInputs;
- (CGSize)_maxSize;
- (float)_scale;
- (id)buildParameters;
- (void)dealloc;
@end

