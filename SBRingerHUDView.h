/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBHUDView.h"


@interface SBRingerHUDView : SBHUDView {
	BOOL _silent;
}
@property(assign, nonatomic, getter=isSilent) BOOL silent;
- (id)init;
- (void)_updateSilentImage;
@end

