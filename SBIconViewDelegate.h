/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBIconViewDelegate <NSObject>
@optional
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMoved:(id)moved;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconHandleLongPress:(id)press;
- (float)iconLabelWidth;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (BOOL)iconViewDisplaysBadges:(id)badges;
- (BOOL)iconViewDisplaysCloseBox:(id)box;
- (float)scale;
@end

