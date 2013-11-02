/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIWindow.h>

@class NSMutableDictionary, NSMutableArray, SBAlertDisplay, UIView;

@interface SBAlertWindow : UIWindow {
	UIView *_contentLayer;
	unsigned _isAnimating : 1;
	unsigned _isInvalid : 1;
	unsigned _handlerActive : 1;
	float _finalAlpha;
	SBAlertDisplay *_currentDisplay;
	NSMutableArray *_stackedAlertDisplays;
	NSMutableDictionary *_alertToDisplayMap;
}
+ (CGRect)constrainFrameToScreen:(CGRect)screen;
- (id)initWithContentRect:(CGRect)contentRect;
- (void)alertDisplayWillDismiss;
- (id)currentDisplay;
- (BOOL)deactivateAlert:(id)alert;
- (void)dealloc;
- (void)dismissWindow:(id)window;
- (void)displayAlert:(id)alert;
- (int)displayCount;
- (BOOL)handlerAlreadyActive;
- (BOOL)isOpaque;
- (void)popInCurrentDisplay;
- (void)setHandlerAlreadyActive:(BOOL)active;
- (id)stackedDisplayForAlert:(id)alert;
@end

