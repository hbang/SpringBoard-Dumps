/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLockOverlayView.h"

@protocol SBLockScreenBuddyViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenBuddyView : SBLockOverlayView {
	UILabel *_titleLabel;
	UIView *_logoImageContainer;
	UIImageView *_logoImageView;
	BOOL _usesWhiteLogo;
	int _viewState;
	SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
	_UILegibilitySettings *_legibilitySettings;
	id<SBLockScreenBuddyViewDelegate> _delegate;
	unsigned _style;
	UIView *_activationInfoView;
	UIButton *_infoButton;
}
@property(retain, nonatomic) UIView *activationInfoView;
@property(assign, nonatomic) id<SBLockScreenBuddyViewDelegate> delegate;
@property(retain, nonatomic) UIButton *infoButton;
@property(assign, nonatomic) unsigned style;
- (id)initWithFrame:(CGRect)frame useWhiteLogo:(BOOL)logo;
- (void)_toggleViewState;
- (void)configureOverlayPropertiesForStyle:(unsigned)style;
- (void)dealloc;
- (BOOL)isFakeLogoHidden;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setTitleLanguage:(id)language;
- (void)setTitleString:(id)string;
- (void)setViewState:(int)state;
- (id)underlayPropertiesFactory;
@end

