/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"


@interface SBStatusBarSignalView : SBStatusBarContentView {
	int _raw;
	int _bars;
	int _percentage;
	BOOL _showSignalView;
}
- (id)init;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (BOOL)isVisible;
- (float)padding;
- (int)priority;
- (void)setVisible:(BOOL)visible;
- (void)start;
- (void)stop;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)updateSignalStrength;
@end

