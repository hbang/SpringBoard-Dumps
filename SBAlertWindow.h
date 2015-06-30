/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWindow.h"


__attribute__((visibility("hidden")))
@interface SBAlertWindow : SBWindow {
	SBAlertWindowViewController *_rootViewController;
	NSMapTable *_alertToDisplayMap;
}
+ (BOOL)_isSecure;
+ (float)windowLevel;
- (id)initWithScreen:(id)screen rootViewController:(id)controller debugName:(id)name scene:(id)scene;
- (id)initWithScreen:(id)screen rootViewController:(id)controller layoutStrategy:(id)strategy debugName:(id)name scene:(id)scene;
- (id)_initWithFrame:(CGRect)frame debugName:(id)name attached:(BOOL)attached;
- (void)addView:(id)view toBeObscuredByAlert:(id)beObscuredByAlert;
- (BOOL)deactivateAlert:(id)alert;
- (void)dealloc;
- (void)displayAlert:(id)alert;
- (BOOL)hasActiveAlertsOrDisplays;
- (BOOL)isOpaque;
- (void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated withActivatingAlert:(id)activatingAlert;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
- (int)stackedDisplayCount;
@end

