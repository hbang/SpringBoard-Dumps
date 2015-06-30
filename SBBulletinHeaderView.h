/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinLinenSegmentView.h"
#import "SBBulletinClearButtonDelegate.h"

@protocol SBBulletinHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinHeaderView : SBBulletinLinenSegmentView <SBBulletinClearButtonDelegate> {
	UIView *_translucentOverlay;
	UIView *_iconView;
	SBBulletinBlurredShadowLabel *_sectionLabel;
	SBBulletinBlurredShadowLabel *_sectionAltLabel;
	SBBulletinClearButton *_clearButton;
	id<SBBulletinHeaderViewDelegate> _delegate;
	NSString *_sectionID;
}
@property(readonly, assign, nonatomic) SBBulletinClearButton *clearButton;
@property(assign, nonatomic) id<SBBulletinHeaderViewDelegate> delegate;
@property(readonly, assign, nonatomic) NSString *sectionID;
+ (float)headerHeight;
- (id)initWithFrame:(CGRect)frame linenView:(id)view;
- (BOOL)_configureAltTextInAvailableWidth:(float)availableWidth;
- (void)_dateOrLocaleChanged:(id)changed;
- (CGRect)_positionAltLabel;
- (BOOL)_showingAltLabel;
- (void)clearButton:(id)button willTransitionWithDuration:(double)duration;
- (void)clearButtonWasPressed:(id)pressed;
- (void)configureWithSection:(id)section;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setShowsClearButton:(BOOL)button animated:(BOOL)animated;
- (void)willMoveToWindow:(id)window;
@end

