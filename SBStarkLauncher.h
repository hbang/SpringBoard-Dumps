/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBStarkAutoHideControlBarDelegate;

@protocol SBStarkLauncher <NSObject>
@property(assign, nonatomic) id<SBStarkAutoHideControlBarDelegate> autoHideDelegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController;
@property(assign, nonatomic) float height;
@property(readonly, assign, nonatomic) BOOL hidesAutomatically;
@property(readonly, assign, nonatomic) SBStarkIconListModel *iconList;
@property(readonly, assign, nonatomic) BOOL obscuresControlBar;
+ (float)desiredHeightForBounds:(CGRect)bounds;
@end

