/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarCarrierView : SBStatusBarContentView {
	UIImage *_operatorIcon;
	SBStatusBarOperatorNameView *_operatorNameView;
	NSString *_operatorName;
	BOOL _operatorNameIsLooping;
}
- (id)init;
- (id)_imageForOperatorName:(id)operatorName statusBarIsFullScreenOpaque:(BOOL)opaque;
- (void)clearLastOperatorNameLooped;
- (void)dealloc;
- (CGSize)defaultSize;
- (void)finishedLoopingOperatorName:(id)name didFinish:(id)finish;
- (void)loopIfNecessary;
- (void)loopOperatorNameToBeginning:(id)beginning didFinish:(id)finish;
- (void)loopOperatorNameToEnd;
- (id)operatorIconForName:(id)name;
- (void)operatorNameChanged;
- (void)setOperatorName:(id)name;
- (void)start;
- (void)startOperatorNameLooping:(id)looping;
- (void)stop;
@end
