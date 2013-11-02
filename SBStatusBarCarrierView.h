/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"

@class NSString, UIImage, SBStatusBarOperatorNameView;

@interface SBStatusBarCarrierView : SBStatusBarContentView {
	UIImage *_operatorIcon;
	SBStatusBarOperatorNameView *_operatorNameView;
	NSString *_operatorName;
	BOOL _operatorNameIsLooping;
	BOOL _showCarrierView;
}
- (id)init;
- (id)_imageForOperatorName:(id)operatorName statusBarIsFullScreenOpaque:(BOOL)opaque;
- (void)_setOperatorName:(id)name;
- (void)clearLastOperatorNameLooped;
- (void)dealloc;
- (CGSize)defaultSize;
- (void)finishedLoopingOperatorName:(id)name didFinish:(id)finish;
- (BOOL)isVisible;
- (void)loopIfNecessary;
- (void)loopOperatorNameToBeginning:(id)beginning didFinish:(id)finish;
- (void)loopOperatorNameToEnd;
- (void)operatorBundleChanged;
- (id)operatorIconForName:(id)name;
- (void)operatorNameChanged;
- (float)padding;
- (int)priority;
- (void)setOperatorName:(id)name;
- (void)setVisible:(BOOL)visible;
- (void)start;
- (void)startOperatorNameLooping:(id)looping;
- (void)stop;
@end

