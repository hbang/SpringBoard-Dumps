/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBPowerDownController : SBAlert {
	int _count;
	id _delegate;
	SBPowerDownView *_powerDownView;
	BOOL _isFront;
}
+ (id)sharedInstance;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (float)autoLockTime;
- (void)cancel;
- (BOOL)deactivate;
- (void)dealloc;
- (BOOL)isOrderedFront;
- (void)orderFront;
- (void)orderOut;
- (void)powerDown;
- (id)powerDownView;
- (void)setDelegate:(id)delegate;
@end

