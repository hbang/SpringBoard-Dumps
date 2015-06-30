/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBStatusBarController : NSObject {
	UIWindow *_slidingStatusBarWindow;
	int _slidingStatusBarAnimation;
	UIWindow *_animatingCallStatusBarWindow;
	UIWindow *_leftTopCorner;
	UIWindow *_rightTopCorner;
	UIWindow *_leftBottomCorner;
	UIWindow *_rightBottomCorner;
	SBStatusBar *_statusBarView;
	SBStatusBarContentsView *_statusBarContentsView;
	SBStatusBar *_transitioningStatusBarView;
	SBStatusBar *_animatingCallStatusBar;
	SBStatusBar *_animatingCallStatusBarToFixUp;
	SBStatusBarContentsView *_transitioningStatusBarContentsView;
	unsigned _isLockVisible : 1;
	unsigned _isTimeVisible : 1;
	unsigned _lockOrTimeVisibleChanging : 1;
	unsigned _dimmed : 1;
	unsigned _showDimmerOverlay : 1;
	unsigned _animating : 1;
	unsigned _airplaneMode : 1;
	unsigned _showsProgress : 1;
	unsigned _showsProgressOnHomeScreen : 1;
	unsigned _cloakStatusBar : 1;
	unsigned _showAirport : 1;
	unsigned _telephonyControllerCheckedIn : 1;
	unsigned _bluetoothControllerCheckedIn : 1;
	unsigned _enteringAirplaneMode : 1;
	unsigned _doubleHeightStatusBarHeightDirty : 1;
	unsigned _doubleHeightStatusBarContentDirty : 1;
	unsigned _animatingStatusBarRotation : 1;
	NSMutableArray *_statusBarIndicatorNames;
	int _mode;
	int _orientation;
	int _animatingCallStatusBarOrientation;
	NSString *_customText;
	UIColor *_dimmerOverlayColor;
	int _airPortSignalStrength;
	NSMutableArray *_doubleHeightInfos;
	NSString *_currentAnimationIDStr;
	unsigned _currentAnimationID;
}
+ (BOOL)isLikeAFullScreenStatusBar:(int)bar;
+ (id)sharedStatusBarController;
+ (id)sharedStatusBarControllerIfAvailable;
+ (id)statusBarImageNamed:(id)named forMode:(int)mode;
- (id)init;
- (void)_SIMOrServiceStatusChanged;
- (id)_SIMStatus;
- (void)_SIMStatusChanged:(id)changed;
- (BOOL)_enteringAirplaneMode;
- (void)_finishStatusBarAnimation;
- (void)_hideOrShowCorners;
- (BOOL)_isServiceAvailable;
- (void)_rotateCorners;
- (void)_serviceStatusChanged:(id)changed;
- (void)_setCurrentAnimationID:(id)anId;
- (void)_setTransitionalStatusBarSize:(BOOL)size;
- (BOOL)_shouldShowNotChargingView;
- (void)_showNotChargingAfterDelay;
- (void)_slideTopCornersForAnimation:(int)animation;
- (id)_uniqueAnimationIDWithPrefix:(id)prefix;
- (void)addStatusBarItem:(id)item;
- (int)airPortStrength;
- (BOOL)airplaneModeIsEnabled;
- (BOOL)bluetoothControllerCheckedIn;
- (void)checkInController:(int)controller;
- (void)clearDoubleHeightStatusBarForBundleID:(id)bundleID;
- (BOOL)cloakStatusBar;
- (id)customText;
- (void)dataConnectionTypeChanged;
- (void)dealloc;
- (BOOL)dimmed;
- (id)dimmerOverlayColor;
- (id)doubleHeightInfoForBundleID:(id)bundleID createIfNeeded:(BOOL)needed;
- (int)doubleHeightMode;
- (id)doubleHeightPrefixText;
- (id)doubleHeightStatusText;
- (void)endDoubleHeightStatusBarAnimationFinished;
- (void)hideStatusBarAnimationDidStop:(id)hideStatusBarAnimation finished:(id)finished context:(void *)context;
- (BOOL)isInCall;
- (BOOL)isLockOrTimeVisibleChanging;
- (BOOL)isLockVisible;
- (BOOL)isTimeVisible;
- (void)lockCurrentStatusBarForAnimation;
- (void)loopCarrierNameIfNecessary;
- (void)notChargingStatusChanged;
- (void)orderStatusBarFront;
- (void)preheatStatusBarForMode:(int)mode orientation:(int)orientation;
- (void)releaseLockedStatusBarForAnimationForDisplay:(id)display;
- (void)removeStatusBarItem:(id)item;
- (void)resizeStatusBar:(float)bar grow:(BOOL)grow fenceID:(int)anId;
- (void)setAirPortStrength:(int)strength;
- (void)setAirplaneModeIsEnabled:(BOOL)enabled;
- (void)setBackgroundAlpha:(float)alpha;
- (void)setCloakStatusBar:(BOOL)bar;
- (void)setCustomText:(id)text;
- (void)setDimmed:(BOOL)dimmed;
- (void)setDimmerOverlayColor:(id)color;
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled bundleID:(id)anId;
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled bundleID:(id)anId priority:(int)priority;
- (void)setDoubleHeightPrefixText:(id)text bundleID:(id)anId;
- (void)setDoubleHeightStatusText:(id)text bundleID:(id)anId;
- (void)setIsInCall:(BOOL)call;
- (void)setIsLockVisible:(BOOL)visible isTimeVisible:(BOOL)visible2;
- (void)setShowDimmerOverlay:(BOOL)overlay;
- (void)setShowsAirPort:(BOOL)port;
- (void)setShowsProgressOnHomeScreen:(BOOL)screen;
- (void)setShowsRotationLock:(BOOL)lock;
- (void)setStatusBarMode:(int)mode duration:(double)duration;
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(double)duration animation:(int)animation;
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(double)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;
- (void)setupWindowForSlidingStatusBar:(id)slidingStatusBar overStatusBar:(id)bar;
- (void)showBatteryPercentageChanged;
- (BOOL)showDimmerOverlay;
- (BOOL)showsAirPort;
- (BOOL)showsProgress;
- (void)signalFormatChanged;
- (void)significantTimeChange;
- (void)statusBarAnimationDidStop:(id)statusBarAnimation finished:(id)finished context:(id)context;
- (id)statusBarIndicatorNames;
- (int)statusBarMode;
- (int)statusBarOrientation;
- (id)statusBarView;
- (id)statusBarWindow;
- (void)switchBackstopFrom:(int)from to:(int)to fromOrientation:(int)orientation toOrientation:(int)orientation4 duration:(double)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;
- (void)tearDownWindowForSlidingStatusBar:(id)slidingStatusBar overStatusBar:(id)bar;
- (BOOL)telephonyControllerCheckedIn;
- (id)transitioningStatusBarView;
- (void)updateClockFormat;
- (void)updateDoubleHeightStatusBarState;
- (void)updateProgressVisibility;
- (BOOL)useDoubleHeightSize;
- (BOOL)useDoubleHeightSizeForMode:(int)mode orientation:(int)orientation;
- (BOOL)useDoubleHeightStyle;
@end

