/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarSignalView : SBStatusBarContentView {
	int _raw;
	int _bars;
	int _percentage;
}
- (id)init;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)mouseUp:(GSEventRef)up;
- (void)start;
- (void)stop;
- (void)updateSignalStrength;
@end

