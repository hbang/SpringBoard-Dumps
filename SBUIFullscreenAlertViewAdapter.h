/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertDisplay.h"

@class UIView;

@interface SBUIFullscreenAlertViewAdapter : SBAlertDisplay {
	UIView *_alertView;
}
- (id)initWithFrame:(CGRect)frame andContentView:(id)view;
- (id)_alertAdapter;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)dismiss;
- (BOOL)displaysAboveStatusBar;
- (BOOL)isReadyToBeRemovedFromView;
- (void)setShouldAnimateIn:(BOOL)animateIn;
- (BOOL)shouldAnimateIconsIn;
- (void)viewAnimatedOut;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end
