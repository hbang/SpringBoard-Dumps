/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface SBBatteryChargingView : UIView {
	int _type;
	UIImageView *_topBatteryView;
	UIImageView *_bottomBatteryView;
	UIImageView *_reflectionView;
	UIImage *_lastBatteryImage;
	int _lastBatteryIndex;
	unsigned _showReflection : 1;
}
+ (float)batteryHeightForType:(int)type;
+ (CGSize)defaultSizeForType:(int)type;
+ (int)redChargeIndexForType:(int)type;
- (id)initWithFrame:(CGRect)frame type:(int)type;
- (void)_batteryStatusChanged:(id)changed;
- (int)_currentBatteryIndex;
- (id)_imageFormatString;
- (void)dealloc;
- (void)setShowsReflection:(BOOL)reflection;
@end

