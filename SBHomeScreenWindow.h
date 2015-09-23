/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWindow.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBHomeScreenWindow : SBWindow {
}
@property(readonly, assign, nonatomic) SBHomeScreenViewController *homeScreenViewController;
+ (CGRect)constrainFrameToScreen:(CGRect)screen;
+ (BOOL)sb_autorotates;
- (id)_initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name rootViewController:(id)controller scene:(id)scene;
@end

