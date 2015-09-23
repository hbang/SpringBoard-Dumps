/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLayoutElementContainerView.h"


__attribute__((visibility("hidden")))
@interface SBAppContainerView : SBLayoutElementContainerView {
	SBAppView *_appView;
}
@property(retain, nonatomic) SBAppView *appView;
- (unsigned)_supportedOrientations;
- (void)dealloc;
- (int)displayMode;
- (void)prepareForReuse;
- (void)setDisplayMode:(int)mode;
- (void)setLayoutElementViewAlpha:(float)alpha;
- (CGSize)sizeThatFits:(CGSize)fits;
- (id)snapshotView;
@end

