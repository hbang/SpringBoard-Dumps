/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertView.h"
#import "_UIActionSliderDelegate.h"
#import "SBPowerDownViewInterface.h"

@protocol SBPowerDownViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface> {
	NSTimer *_autoDismissTimer;
	id<SBPowerDownViewDelegate> _delegate;
	UIView *_backdropView;
	SBShapeView *_darkeningUnderlayView;
	UIView *_darkeningOverlayView;
	_UIActionSlider *_actionSlider;
	UIButton *_cancelButton;
	UILabel *_cancelLabel;
	BOOL _hiddenLockScreenForeground;
	BOOL _canAlterScreenBrightness;
}
@property(assign, nonatomic) BOOL canAlterScreenBrightness;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBPowerDownViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void)_animatePowerDown;
- (void)_cancelAutoDismissTimer;
- (id)_lockScreenView;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_resetAutoDismissTimer;
- (void)_resetScreenBrightness;
- (void)_saveScreenBrightnessInformation;
- (void)_updateSliderExclusionPath;
- (void)actionSlider:(id)slider didUpdateSlideWithValue:(float)value;
- (void)actionSliderDidBeginSlide:(id)actionSlider;
- (void)actionSliderDidCancelSlide:(id)actionSlider;
- (void)actionSliderDidCompleteSlide:(id)actionSlider;
- (void)animateIn;
- (void)animateOut;
- (void)dealloc;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
@end

