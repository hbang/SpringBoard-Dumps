/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBSIMLockEntryAlert : SBAlert {
	int _status;
}
- (BOOL)_forcesPortraitOrientation;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)deactivate;
- (BOOL)hasTranslucentBackground;
- (id)lockEntryView;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (int)status;
- (unsigned)supportedInterfaceOrientations;
@end

