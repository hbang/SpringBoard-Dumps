/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWindow.h"
#import "SpringBoard-Structs.h"
#import "SBAlertWindowViewControllerDelegate.h"

@protocol SBAlertWindowDelegate;

__attribute__((visibility("hidden")))
@interface SBAlertWindow : SBWindow <SBAlertWindowViewControllerDelegate> {
	SBAlertWindowViewController *_alertWindowController;
	id<SBAlertWindowDelegate> _alertWindowDelegate;
	NSMapTable *_alertToDisplayMap;
}
@property(assign, nonatomic) id<SBAlertWindowDelegate> alertWindowDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (BOOL)_isSecure;
+ (BOOL)sb_autorotates;
+ (float)windowLevel;
- (id)initWithScreen:(id)screen rootViewController:(id)controller debugName:(id)name scene:(id)scene;
- (id)initWithScreen:(id)screen rootViewController:(id)controller layoutStrategy:(id)strategy debugName:(id)name scene:(id)scene;
- (id)_initWithFrame:(CGRect)frame debugName:(id)name attached:(BOOL)attached;
- (void)addView:(id)view toBeObscuredByAlert:(id)beObscuredByAlert;
- (BOOL)deactivateAlert:(id)alert;
- (void)dealloc;
- (int)defaultInterfaceOrientationForPresentationOfAlertWindowViewController:(id)alertWindowViewController;
- (BOOL)defaultShouldAutorotateForAlertWindowViewController:(id)aDefault;
- (unsigned)defaultSupportedInterfaceOrientationsForAlertWindowViewController:(id)alertWindowViewController;
- (void)displayAlert:(id)alert;
- (BOOL)hasActiveAlertsOrDisplays;
- (BOOL)isOpaque;
- (void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated withActivatingAlert:(id)activatingAlert;
- (void)setRootViewController:(id)controller;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
- (int)stackedDisplayCount;
@end

