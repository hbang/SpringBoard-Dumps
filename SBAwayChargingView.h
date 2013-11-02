/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class SBBatteryChargingView, UIImageView;

@interface SBAwayChargingView : UIView {
	SBBatteryChargingView *_chargingView;
	SBBatteryChargingView *_headsetChargingView;
	UIImageView *_backgroundView;
	unsigned _animatingBatteries : 1;
	unsigned _updateAfterAnimation : 1;
	unsigned _showingDeviceBattery : 1;
	unsigned _showingHeadsetBattery : 1;
}
+ (id)backgroundImage;
+ (CGSize)defaultSize;
+ (BOOL)shouldShowDeviceBattery;
+ (BOOL)shouldShowHeadsetBattery;
- (id)initWithFrame:(CGRect)frame awayView:(id)view;
- (void)_batteryAnimationFinished:(id)finished;
- (CGPoint)_dualBatteryPositionForBattery:(id)battery;
- (void)_finishedFadeForSwitch:(id)aSwitch finished:(BOOL)finished context:(id)context;
- (void)_finishedHideForHideToSlide:(id)slide finished:(BOOL)finished context:(id)context;
- (void)_finishedSlideForSlideToReveal:(id)reveal finished:(BOOL)finished context:(id)context;
- (CGPoint)_singleBatteryPositionForBattery:(id)battery;
- (void)_slideBattery:(id)battery toHideBattery:(id)hideBattery animate:(BOOL)animate;
- (void)_slideBattery:(id)battery toShowBattery:(id)showBattery animate:(BOOL)animate;
- (void)_switchFromBattery:(id)battery toView:(id)view animate:(BOOL)animate;
- (void)_test:(id)test;
- (void)addChargingView;
- (void)addHeadsetChargingView;
- (id)chargingView;
- (void)dealloc;
- (id)headsetChargingView;
- (void)hideChargingView;
- (void)hideHeadsetChargingView;
- (void)updateInterface:(BOOL)interface;
@end

